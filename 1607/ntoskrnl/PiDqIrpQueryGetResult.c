/*
 * XREFs of PiDqIrpQueryGetResult @ 0x14048ADF8
 * Callers:
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 * Callees:
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PiDqIrpComplete @ 0x14048CCE0 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x14048CFA8 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int SerializeActionQueue; // edi
  __int64 v3; // r14
  int v4; // r12d
  char v5; // r15
  int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-58h]
  _QWORD v10[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v11; // [rsp+90h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+10h]
  unsigned int v13; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+20h]

  v11 = a1;
  SerializeActionQueue = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v14 = v3;
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v4 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  v12 = 0;
  v13 = 0;
  v10[0] = 0LL;
  v10[1] = 0LL;
  if ( !v9 )
  {
    SerializeActionQueue = -1073741637;
    goto LABEL_14;
  }
  PiDqQueryLock(v9);
  v6 = *(_DWORD *)(v9 + 216);
  if ( (v6 & 8) != 0 )
  {
    SerializeActionQueue = -1073741536;
    goto LABEL_7;
  }
  if ( (v6 & 4) == 0 )
    goto LABEL_28;
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x10) == 0 )
    {
      *(_DWORD *)(v9 + 216) = v6 | 0x10;
      v5 = 1;
      v12 = 1;
      goto LABEL_7;
    }
LABEL_28:
    SerializeActionQueue = -1073741637;
    goto LABEL_7;
  }
  SerializeActionQueue = -1073741670;
LABEL_7:
  PiDqQueryUnlock(v9);
  if ( SerializeActionQueue < 0 )
    goto LABEL_13;
  v7 = *(_DWORD *)(v3 + 8);
  if ( v7 < 0x10 )
  {
    SerializeActionQueue = -1073741789;
  }
  else
  {
    if ( v4 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v7, 8u);
      SerializeActionQueue = PiDqQuerySerializeActionQueue(
                               v9,
                               *(_QWORD *)(a1 + 112),
                               *(_DWORD *)(v3 + 8),
                               (unsigned int)&v13,
                               (__int64)&v11);
      if ( SerializeActionQueue < 0 )
        goto LABEL_13;
      PiDqQueryLock(v9);
      PiDqQueryGetNextIoctlInfo(v9, *(unsigned int *)(v3 + 8), (unsigned int)v11, v10);
LABEL_12:
      PiDqQueryUnlock(v9);
LABEL_13:
      if ( SerializeActionQueue == 259 )
        return (unsigned int)SerializeActionQueue;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock(v9);
      if ( !*(_QWORD *)(v9 + 184)
        && *(_QWORD *)(v9 + 192) == v9 + 192
        && (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          SerializeActionQueue = -1073741536;
        }
        else
        {
          *(_QWORD *)(v9 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          SerializeActionQueue = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v9, *(unsigned int *)(v3 + 8), 0LL, v10);
        v13 = 16;
      }
      goto LABEL_12;
    }
    SerializeActionQueue = -1073741811;
  }
LABEL_14:
  if ( v5 )
  {
    PiDqQueryLock(v9);
    *(_DWORD *)(v9 + 216) &= ~0x10u;
    if ( SerializeActionQueue < 0 )
    {
      *(_DWORD *)(v9 + 216) |= 1u;
      PiDqQueryFreeActiveData(v9);
    }
    PiDqQueryUnlock(v9);
  }
  PiDqIrpComplete(a1, (unsigned int)SerializeActionQueue, v13, v10);
  return (unsigned int)SerializeActionQueue;
}
