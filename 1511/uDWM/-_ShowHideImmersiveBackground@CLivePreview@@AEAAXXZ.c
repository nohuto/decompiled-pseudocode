/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180072CA4
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180072DC8 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180072324 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x180073A00 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18007E1F4 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // esi
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 102); ++i )
  {
    v3 = *((_QWORD *)this + 65);
    v4 = *(_QWORD *)(*((_QWORD *)this + 48) + 16LL * i);
    v5 = *(_QWORD *)(v4 + 744);
    if ( !v3 || *(_DWORD *)(v3 + 112) == 1 )
    {
      if ( v5 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow((__int64)this, *(_QWORD *)(v4 + 744)) )
      {
LABEL_12:
        if ( *(_BYTE *)(*((_QWORD *)this + 48) + 16LL * i + 8) )
        {
          CTopLevelWindow::StartLivePreviewAnimation(v4, 3LL);
          *(_BYTE *)(*((_QWORD *)this + 48) + 16LL * i + 8) = 0;
        }
        continue;
      }
    }
    else
    {
      v6[0] = 0LL;
      v6[1] = 0LL;
      if ( v5 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(v5 + 48, v3 + 48, v6) == 1 )
        goto LABEL_12;
    }
    if ( !*(_BYTE *)(*((_QWORD *)this + 48) + 16LL * i + 8) )
    {
      CTopLevelWindow::StartLivePreviewAnimation(v4, 4LL);
      *(_BYTE *)(*((_QWORD *)this + 48) + 16LL * i + 8) = 1;
    }
  }
}
