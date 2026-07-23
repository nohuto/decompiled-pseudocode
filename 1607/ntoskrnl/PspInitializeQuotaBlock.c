/*
 * XREFs of PspInitializeQuotaBlock @ 0x14057CC48
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspInsertExpansionEntry @ 0x14014AD68 (PspInsertExpansionEntry.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspExpandLimit @ 0x14020EDCC (PspExpandLimit.c)
 *     IoEnableIrpCredits @ 0x140620DC0 (IoEnableIrpCredits.c)
 */

__int64 __fastcall PspInitializeQuotaBlock(__int64 a1, int *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed int v7; // esi
  __int64 *v8; // rdi
  int *v9; // r15
  __int64 i; // r14
  __int64 v11; // r8
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  memset(a3, 0, 0x240uLL);
  *((_DWORD *)a3 + 129) = 1;
  *((_DWORD *)a3 + 128) = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    a2 = PspDefaultResourceLimits;
  }
  v7 = 0;
  v8 = a3 + 8;
  v9 = a2;
  for ( i = 0LL; ; ++i )
  {
    LOBYTE(v6) = PspResourceFlags[i * 8];
    if ( (v6 & 2) != 0 )
      goto LABEL_9;
    *v8 = a2 ? *v9 : *(_QWORD *)(a1 + PspQuotaLimitOffsets[i]);
    if ( (v6 & 1) == 0 )
      goto LABEL_9;
    v11 = *v8;
    if ( *v8 != -1 )
      break;
    *v8 = 0LL;
    PspInsertExpansionEntry((__int64)&PspQuotaExpansionDescriptors + 56 * v7, (__int64)(v8 - 8));
LABEL_9:
    ++v7;
    v8 += 16;
    ++v9;
    if ( v7 >= 4 )
      return 0LL;
  }
  if ( !v11 )
    goto LABEL_9;
  v13 = 0LL;
  if ( PspExpandLimit(v7, v6, v11, (__int64)&v13) )
  {
    if ( !v7 )
      IoEnableIrpCredits();
    goto LABEL_9;
  }
  return 3221225626LL;
}
