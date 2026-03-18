/*
 * XREFs of ExQueryProcessHandleInformation @ 0x140407034
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x140521F54 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(__int64 a1, _QWORD *a2, int a3, int *a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rsi
  unsigned int v7; // r12d
  int v8; // edi
  unsigned int v9; // r14d
  signed __int64 *v10; // rdx
  signed __int64 *NextHandleTableEntry; // rax
  unsigned int v12; // r11d
  signed __int64 *v13; // rbx
  signed __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  signed __int32 v20[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  int v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+44h] [rbp-44h]
  int v26; // [rsp+48h] [rbp-40h]

  v5 = a1;
  v6 = a2 + 2;
  v21[1] = (unsigned int)(a3 - 16) / 0x28uLL;
  v7 = 0;
  v8 = 16;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, v10, v21);
    v13 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v7 >= v12 )
    {
      if ( (v21[0] & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v8 += 40;
        v9 = -1073741820;
      }
    }
    else
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v13);
          v14 = *v13;
          if ( (*v13 & 1) != 0 )
            break;
          if ( !v14 )
            goto LABEL_11;
          ExpBlockOnLockedHandleEntry(v5, v13);
        }
      }
      while ( v14 != _InterlockedCompareExchange64(v13, v14 - 1, v14) );
      v15 = (*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = (*v13 >> 17) & 7;
      v17 = *((_DWORD *)v13 + 2);
      if ( (v17 & 0x2000000) != 0 )
        LOBYTE(v16) = v16 | 8;
      v26 = v16 & 7;
      v25 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 + 24) ^ (unsigned __int64)BYTE1(v15)]
                               + 40);
      v23 = *(_QWORD *)v15;
      v22 = *(_QWORD *)(v15 + 8);
      v24 = v17 & 0x1FFFFFF;
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v20, 0);
      if ( *(_QWORD *)(v5 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v5 + 48), 0LL);
      v8 += 40;
      ++v7;
      *v6 = v21[0];
      v6[1] = v22;
      v6[2] = v23;
      *((_DWORD *)v6 + 6) = v24;
      *((_DWORD *)v6 + 7) = v25;
      *((_DWORD *)v6 + 8) = v26;
      *((_DWORD *)v6 + 9) = 0;
      *a2 = v7;
      v6 += 5;
    }
LABEL_11:
    v10 = v13;
    a1 = v5;
  }
  if ( a4 )
    *a4 = v8;
  return v9;
}
