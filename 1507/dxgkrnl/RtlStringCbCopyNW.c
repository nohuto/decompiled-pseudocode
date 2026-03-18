/*
 * XREFs of RtlStringCbCopyNW @ 0x1C001B5CC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0120274 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v6; // r8d
  __int64 v7; // r9
  signed __int64 v8; // r11
  wchar_t v9; // ax

  v4 = cbToCopy >> 1;
  if ( cbToCopy >> 1 <= 0x7FFFFFFE )
  {
    v7 = 260LL;
    v6 = 0;
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v7 + v4 - 260) )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
      if ( !v9 )
        break;
      *pszDest++ = v9;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
    {
      --pszDest;
      v6 = -2147483643;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  *pszDest = 0;
  return v6;
}
