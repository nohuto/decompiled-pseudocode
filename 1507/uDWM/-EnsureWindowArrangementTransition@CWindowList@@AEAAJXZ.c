/*
 * XREFs of ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180078344
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078E24 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078EB4 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078F38 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::EnsureWindowArrangementTransition(CWindowList *this)
{
  unsigned int v1; // esi
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 65) )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v3 )
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_BYTE *)(v3 + 24) = 0;
    }
    else
    {
      v3 = 0LL;
    }
    *((_QWORD *)this + 65) = v3;
    if ( !v3 )
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1984u);
    }
  }
  return v1;
}
