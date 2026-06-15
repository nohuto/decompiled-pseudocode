/*
 * XREFs of ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14003970C
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140015D40 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400037A8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
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
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
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
