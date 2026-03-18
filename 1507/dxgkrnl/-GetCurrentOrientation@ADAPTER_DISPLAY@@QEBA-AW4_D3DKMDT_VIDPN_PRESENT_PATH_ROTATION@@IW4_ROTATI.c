/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019470 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00D0A18 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = a2;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 133) )
      return 1LL;
LABEL_3:
    if ( a3 )
      goto LABEL_4;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 4294LL;
    WdLogEvent5_WdAssertion(v8);
    goto LABEL_3;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 133) )
    return 1LL;
LABEL_4:
  v6 = *(_QWORD *)(a1 + 112);
  switch ( *(_DWORD *)(v6 + 1008 * v3 + 928) )
  {
    case 1:
      return 1LL;
    case 2:
      return 2LL;
    case 3:
      return 3LL;
  }
  if ( *(_DWORD *)(v6 + 1008 * v3 + 928) != 4 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = *(int *)(*(_QWORD *)(a1 + 112) + 1008 * v3 + 928);
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v9);
    return 1LL;
  }
  return 4LL;
}
