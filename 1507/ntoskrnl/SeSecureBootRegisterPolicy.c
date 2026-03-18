/*
 * XREFs of SeSecureBootRegisterPolicy @ 0x1407DD14C
 * Callers:
 *     BapdpProcessSecureBootPolicy @ 0x1407DCEE8 (BapdpProcessSecureBootPolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepSecureBootSetRegistryKey @ 0x1407DD218 (SepSecureBootSetRegistryKey.c)
 *     SepSecureBootBuildRules @ 0x1407FBA74 (SepSecureBootBuildRules.c)
 *     SepSecureBootCheckForUpdates @ 0x1407FBAE4 (SepSecureBootCheckForUpdates.c)
 */

__int64 __fastcall SeSecureBootRegisterPolicy(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _WORD *v6; // rbx
  int v7; // ebx
  unsigned int *v9; // rdi
  unsigned int *PoolWithTag; // rax

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10
    || (v4 = *(_DWORD *)(BugCheckParameter2 + 8), v5 = *(_DWORD *)(BugCheckParameter2 + 12), (v5 == 0) ^ (v4 == 0))
    || v4 >= (unsigned int)v2
    || v5 >= (unsigned int)v2
    || v5 - 1 <= 0x3E
    || v5 + v4 > (unsigned int)v2 )
  {
    v9 = (unsigned int *)qword_14036CCD8;
    v7 = -1069350909;
    goto LABEL_20;
  }
  v6 = 0LL;
  g_SecureBootPolicyBlobHeader = *(_OWORD *)BugCheckParameter2;
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  SepSecureBootSetRegistryKey(v6);
  if ( (dword_140356BA4 & 8) != 0 )
    SepSecureBootCheckForUpdates();
  if ( !v6 )
    return 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  NonPagedPoolNx,
                                  *(unsigned int *)(BugCheckParameter2 + 12),
                                  0x62536553u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = (unsigned int *)qword_14036CCD8;
    v7 = -1073741670;
    goto LABEL_21;
  }
  memmove(PoolWithTag, v6, *(unsigned int *)(BugCheckParameter2 + 12));
  qword_14036CCD8 = v9;
  if ( v6[18] || v6[19] )
  {
    qword_1403861E0 = (__int64)v9 + v9[13] + 60;
    v7 = SepSecureBootBuildRules();
LABEL_20:
    if ( v7 >= 0 )
      return (unsigned int)v7;
LABEL_21:
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      qword_14036CCD8 = 0LL;
    }
    KeBugCheckEx(0x145u, v7, BugCheckParameter2, v2, 0LL);
  }
  return 0;
}
