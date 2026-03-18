/*
 * XREFs of PiDqIrpQueryGetResult @ 0x140444BEC
 * Callers:
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 * Callees:
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryUnlock @ 0x14044239C (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x140442428 (PiDqQueryLock.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 *     PiDqIrpComplete @ 0x140546884 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1405468EC (PiDqQueryGetNextIoctlInfo.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // r14
  int v7; // r12d
  char v8; // r15
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-58h]
  _QWORD v16[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  char v18; // [rsp+98h] [rbp+10h]
  unsigned int v19; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h]

  v17 = a1;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v20 = v6;
  v15 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
  v7 = *(_DWORD *)(v6 + 24);
  v8 = 0;
  v18 = 0;
  v19 = 0;
  v16[0] = 0LL;
  v16[1] = 0LL;
  if ( !v15 )
  {
    v5 = -1073741637;
    goto LABEL_14;
  }
  PiDqQueryLock(v15, a2, a3, a4);
  v10 = *(_DWORD *)(v15 + 216);
  if ( (v10 & 8) != 0 )
  {
    v5 = -1073741536;
    goto LABEL_7;
  }
  if ( (v10 & 4) == 0 )
    goto LABEL_28;
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 0x10) == 0 )
    {
      *(_DWORD *)(v15 + 216) = v10 | 0x10;
      v8 = 1;
      v18 = 1;
      goto LABEL_7;
    }
LABEL_28:
    v5 = -1073741637;
    goto LABEL_7;
  }
  v5 = -1073741670;
LABEL_7:
  PiDqQueryUnlock(v15, v9);
  if ( v5 < 0 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v6 + 8);
  if ( v11 < 0x10 )
  {
    v5 = -1073741789;
  }
  else
  {
    if ( v7 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v11, 8u);
      v5 = PiDqQuerySerializeActionQueue(v15, *(_QWORD *)(a1 + 112), *(_DWORD *)(v6 + 8), (int *)&v19, &v17);
      if ( v5 < 0 )
        goto LABEL_13;
      PiDqQueryLock(v15, a2, a3, a4);
      PiDqQueryGetNextIoctlInfo(v15, *(unsigned int *)(v6 + 8), (unsigned int)v17, v16);
LABEL_12:
      PiDqQueryUnlock(v15, v12);
LABEL_13:
      if ( v5 == 259 )
        return (unsigned int)v5;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock(v15, a2, a3, a4);
      if ( !*(_QWORD *)(v15 + 184)
        && *(_QWORD *)(v15 + 192) == v15 + 192
        && (*(_DWORD *)(*(_QWORD *)(v15 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v5 = -1073741536;
        }
        else
        {
          *(_QWORD *)(v15 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          v5 = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v15, *(unsigned int *)(v6 + 8), 0LL, v16);
        v19 = 16;
      }
      goto LABEL_12;
    }
    v5 = -1073741811;
  }
LABEL_14:
  if ( v8 )
  {
    PiDqQueryLock(v15, a2, a3, a4);
    *(_DWORD *)(v15 + 216) &= ~0x10u;
    if ( v5 < 0 )
    {
      *(_DWORD *)(v15 + 216) |= 1u;
      PiDqQueryFreeActiveData(v15);
    }
    PiDqQueryUnlock(v15, v13);
  }
  PiDqIrpComplete(a1, (unsigned int)v5, v19, v16);
  return (unsigned int)v5;
}
