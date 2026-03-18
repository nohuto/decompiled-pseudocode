/*
 * XREFs of RtlStringCbCopyNW @ 0x1C000B538
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C006A5EC (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0125DBC (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  __int64 v6; // r9
  NTSTATUS v7; // r8d
  signed __int64 v8; // r11
  wchar_t v9; // ax

  v4 = cbToCopy >> 1;
  if ( cbToCopy >> 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  else
  {
    v6 = 260LL;
    v7 = 0;
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v6 + v4 - 260) )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
      if ( !v9 )
        break;
      *pszDest++ = v9;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
    {
      --pszDest;
      v7 = -2147483643;
    }
  }
  *pszDest = 0;
  return v7;
}
