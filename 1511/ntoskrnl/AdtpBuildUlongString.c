/*
 * XREFs of AdtpBuildUlongString @ 0x14068CB74
 * Callers:
 *     AdtpPackageParameters @ 0x14013B28C (AdtpPackageParameters.c)
 *     AdtpBuildRegistryValueString @ 0x14068C194 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     _ultow @ 0x140143CE8 (_ultow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildUlongString(
        unsigned int Value,
        __int64 a2,
        wchar_t **a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 v10; // rax
  wchar_t *PoolWithTag; // rdi
  __int64 v12; // rax

  if ( !a3 && !a2 )
    return 3221225485LL;
  if ( a4 && a5 && (v10 = (unsigned int)*a5, (unsigned int)(v10 + 11) < 0x400) )
  {
    PoolWithTag = (wchar_t *)(a4 + 2 * v10);
    *a5 = v10 + 11;
    *a6 = 0;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x6B416553u);
    if ( !PoolWithTag )
      return 3221225495LL;
    *a6 = 1;
  }
  ultow(Value, PoolWithTag, 10);
  v12 = -1LL;
  do
    ++v12;
  while ( PoolWithTag[v12] );
  if ( a3 )
  {
    *a3 = PoolWithTag;
    a3[1] = (wchar_t *)(unsigned int)(2 * v12 + 2);
  }
  else
  {
    *(_WORD *)(a2 + 2) = 22;
    *(_WORD *)a2 = 2 * v12;
    *(_QWORD *)(a2 + 8) = PoolWithTag;
  }
  return 0LL;
}
