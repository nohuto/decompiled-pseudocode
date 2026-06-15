/*
 * XREFs of ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14003978C
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400165CC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CreateSecurityDescriptor(const unsigned __int16 *a1, unsigned int a2, void **a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  wchar_t *v8; // rax
  WCHAR *v9; // rdi
  int v10; // ebx
  signed int LastError; // eax

  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v7 = v3 + 35;
  v8 = (wchar_t *)CoTaskMemAlloc(2 * v7);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_11:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
        v10);
    }
    return (unsigned int)v10;
  }
  v10 = StringCchPrintfW(v8, v7, L"D:(A;OICI;0x%08I32X;;;%ws)", a2, a1);
  if ( v10 >= 0 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v9, 1u, a3, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  CoTaskMemFree(v9);
  if ( v10 < 0 )
    goto LABEL_11;
  return (unsigned int)v10;
}
