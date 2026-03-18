/*
 * XREFs of MiForcedTrim @ 0x1401D7A98
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiDoReplacement @ 0x1401D27D4 (MiDoReplacement.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiComputeTrimAmount @ 0x1401D786C (MiComputeTrimAmount.c)
 */

__int64 __fastcall MiForcedTrim(ULONG_PTR a1)
{
  __int64 v2; // rsi
  int *VmPartition; // r15
  __int64 v4; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int *v10; // rax
  int *v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  _BYTE v15[56]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+78h] [rbp-9h]
  unsigned __int64 v17; // [rsp+80h] [rbp-1h]
  unsigned __int64 v18; // [rsp+88h] [rbp+7h]
  unsigned __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]

  v2 = 0LL;
  v19 = 0LL;
  VmPartition = MiGetVmPartition(a1);
  v4 = *((_QWORD *)VmPartition + 702);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(VmPartition, 6u);
  v6 = *(_QWORD *)(v4 + 2416);
  v7 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority < v6 )
  {
    v8 = *((_QWORD *)VmPartition + 736);
    v9 = v6 - AvailablePagesBelowPriority;
    v19 = 0LL;
    v20 = 0LL;
    if ( v9 < 0x10 )
      v9 = 16LL;
    v17 = v9;
    v16 = v9 + v8;
    memset(v15, 0, sizeof(v15));
    v10 = MiGetVmPartition(a1);
    v11 = v10;
    v18 = v9 - v19;
    if ( v9 != v19 )
    {
      v12 = *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 88);
      if ( v12 )
      {
        if ( v19 < v17 )
        {
          v13 = v12 & -(__int64)(v7 < *((_QWORD *)v10 + 541) >> 1);
          if ( (v12 & -(__int64)(v7 < *((_QWORD *)v11 + 541) >> 1)) != 0 )
          {
            if ( v13 > v17 - v19 )
              v13 = v17 - v19;
            v2 = MiTrimWorkingSet(v13, a1, 0x11u, 6u, 9);
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 196) & 0x3FFF) == 0 )
    *(_BYTE *)(a1 + 219) |= 0x10u;
  return v2;
}
