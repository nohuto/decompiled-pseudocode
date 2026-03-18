/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00189A0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     IsDxgkEngQueryWin32InfoPlatformSupported_0 @ 0x1C0001460 (IsDxgkEngQueryWin32InfoPlatformSupported_0.c)
 *     DxgkEngQueryWin32InfoPlatform_0 @ 0x1C0001468 (DxgkEngQueryWin32InfoPlatform_0.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1)
{
  int v1; // ebx
  __int64 result; // rax
  _DWORD *v3; // rsi
  __int64 v4; // rax

  v1 = 0;
  if ( *(_DWORD *)a1 )
  {
    result = IsDxgkEngQueryWin32InfoPlatformSupported_0();
    if ( (int)result >= 0 )
      return DxgkEngQueryWin32InfoPlatform_0();
  }
  else
  {
    v3 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v4 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v4);
    }
    if ( gDrvDpiWin8Style )
      v1 = gdmLogPixels;
    *v3 = v1;
    return 0LL;
  }
  return result;
}
