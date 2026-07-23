/*
 * XREFs of MiForcedTrim @ 0x1401E95FC
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiDoReplacement @ 0x1401E2658 (MiDoReplacement.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400BE0E0 (MiGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiComputeTrimAmount @ 0x1401E9348 (MiComputeTrimAmount.c)
 */

__int64 __fastcall MiForcedTrim(ULONG_PTR a1)
{
  __int64 v2; // rsi
  int *v3; // rax
  int *v4; // r13
  __int64 v5; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE v16[56]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v17; // [rsp+78h] [rbp-9h]
  unsigned __int64 v18; // [rsp+80h] [rbp-1h]
  unsigned __int64 v19; // [rsp+88h] [rbp+7h]
  unsigned __int64 v20; // [rsp+90h] [rbp+Fh]
  __int64 v21; // [rsp+98h] [rbp+17h]

  v2 = 0LL;
  v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
  v20 = 0LL;
  v4 = v3;
  v5 = *((_QWORD *)v3 + 781);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 6u);
  v7 = *(_QWORD *)(v5 + 2416);
  v8 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority < v7 )
  {
    v9 = v7 - AvailablePagesBelowPriority;
    v20 = 0LL;
    v21 = 0LL;
    if ( v9 < 0x10 )
      v9 = 16LL;
    v10 = *((_QWORD *)v4 + 808);
    v18 = v9;
    v17 = v9 + v10;
    memset(v16, 0, sizeof(v16));
    v11 = v20;
    v19 = v9 - v20;
    if ( v9 != v20 )
    {
      v12 = *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 88);
      if ( v12 )
      {
        if ( v20 < v18 )
        {
          v13 = v12 & -(__int64)(v8 < *((_QWORD *)v4 + 557) >> 1);
          if ( v13 )
          {
            v14 = v18 - v20;
            if ( v13 > v18 - v20 )
              v13 = v18 - v20;
            LOBYTE(v14) = 17;
            v2 = MiTrimWorkingSet(a1, v13, v14, 6LL, 9);
            v20 = v2 + v11;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
    *(_BYTE *)(a1 + 187) |= 0x10u;
  return v2;
}
