/*
 * XREFs of ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800132FC
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180007770 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::ImmediateCancelLivePreview(CDesktopManager *this)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  WPARAM v4; // r14
  signed int LastError; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_DWORD *)(v3 + 24) = 1;
    *(_DWORD *)(v3 + 32) = 1;
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 378), 0x405u, v4, 0LL) )
    {
      v4 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v2 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x884u);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x877u);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WPARAM))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return v2;
}
