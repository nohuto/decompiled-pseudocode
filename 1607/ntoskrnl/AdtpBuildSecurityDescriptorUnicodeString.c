/*
 * XREFs of AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1406D0DD4 (AdtpBuildSecurityDescriptorChangeString.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140235884 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildSecurityDescriptorUnicodeString(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7)
{
  int v10; // eax
  NTSTATUS v11; // esi
  const WCHAR *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r8
  PVOID PoolWithTag; // rdi
  __int16 v19; // bx
  void *Src; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+38h] [rbp-80h] BYREF
  _DWORD *v22; // [rsp+40h] [rbp-78h]
  __int64 v23; // [rsp+48h] [rbp-70h]
  wchar_t pszDest[16]; // [rsp+50h] [rbp-68h] BYREF

  v23 = a5;
  v22 = a6;
  Src = 0LL;
  v21 = 0;
  if ( !a4 && !a3 )
    return 3221225485LL;
  v10 = SeConvertSecurityDescriptorToStringSecurityDescriptor(a2, a2, a1, &Src, &v21);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741801 )
      goto LABEL_24;
    v12 = pszDest;
    v11 = 0;
    if ( StringCchPrintfW(pszDest, 0x10uLL, L"<0x%08X>", (unsigned int)v10) < 0 )
      v12 = L"-";
  }
  else
  {
    v12 = (const WCHAR *)Src;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( v12[v14] );
  v15 = v14 + 1;
  if ( 2 * (unsigned __int64)v15 > 0xFFFF )
  {
    v11 = RtlStringCbPrintfW(pszDest, 0x10uLL, L"%%%%%u", 1829LL);
    if ( v11 < 0 )
      goto LABEL_24;
    v12 = pszDest;
    do
      ++v13;
    while ( pszDest[v13] );
    v15 = v13 + 1;
  }
  v16 = (unsigned int)*v22;
  if ( (unsigned int)v16 + v15 >= 0x400 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v15, 0x6B416553u);
    if ( !PoolWithTag )
    {
      v11 = -1073741801;
      goto LABEL_24;
    }
    *a7 = 1;
  }
  else
  {
    v17 = v23;
    *v22 = v16 + v15;
    *a7 = 0;
    PoolWithTag = (PVOID)(v17 + 2 * v16);
  }
  memmove(PoolWithTag, v12, 2LL * v15);
  if ( a4 )
  {
    *a4 = PoolWithTag;
    a4[1] = 2 * v15;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = PoolWithTag;
    v19 = 2 * (v15 - 1);
    *(_WORD *)a3 = v19;
    *(_WORD *)(a3 + 2) = v19 + 2;
  }
LABEL_24:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v11;
}
