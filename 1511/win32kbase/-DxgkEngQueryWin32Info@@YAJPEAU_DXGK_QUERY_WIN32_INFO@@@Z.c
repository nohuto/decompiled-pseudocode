/*
 * XREFs of ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C007B130
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     IsDxgkEngQueryWin32InfoPlatformSupported_0 @ 0x1C0001400 (IsDxgkEngQueryWin32InfoPlatformSupported_0.c)
 *     DxgkEngQueryWin32InfoPlatform_0 @ 0x1C0001408 (DxgkEngQueryWin32InfoPlatform_0.c)
 */

__int64 __fastcall DxgkEngQueryWin32Info(struct _DXGK_QUERY_WIN32_INFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 result; // rax
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // rax

  v4 = 0;
  if ( !*(_DWORD *)a1 )
  {
    v6 = (_DWORD *)*((_QWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) != 4 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    if ( gDrvDpiWin8Style )
      v4 = gdmLogPixels;
    *v6 = v4;
    return 0LL;
  }
  if ( *(_DWORD *)a1 == 2 )
  {
    if ( *((_DWORD *)a1 + 1) != 4 )
      return 3221225485LL;
    if ( gProtocolType )
    {
      v7 = (_DWORD *)*((_QWORD *)a1 + 1);
      if ( gProtocolType == -1 )
        *v7 = 0xFFFF;
      else
        *v7 = 2;
    }
    else
    {
      **((_DWORD **)a1 + 1) = 0;
    }
    return 0LL;
  }
  result = IsDxgkEngQueryWin32InfoPlatformSupported_0();
  if ( (int)result >= 0 )
    return DxgkEngQueryWin32InfoPlatform_0();
  return result;
}
