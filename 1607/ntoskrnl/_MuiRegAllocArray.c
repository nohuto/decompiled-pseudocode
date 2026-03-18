/*
 * XREFs of _MuiRegAllocArray @ 0x14013FF84
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140324 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14055FD24 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140560D70 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405613F4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E688C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E70F8 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  v2 = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF && (_DWORD)v3 )
  {
    v4 = 2 * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x72746C6Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v4);
    return v6;
  }
  return (PVOID)v2;
}
