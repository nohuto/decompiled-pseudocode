/*
 * XREFs of ?Create@CScreenRotation@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F394
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180080990 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800814D8 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CScreenRotation::Create(struct MIL_CHANNEL__ *const a1, struct CScreenRotation **a2)
{
  unsigned int v4; // ebx
  CVisual *v5; // rax
  struct CScreenRotation *v6; // rdi
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x15u);
    return v4;
  }
  v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    368LL);
  v6 = v5;
  if ( v5 )
  {
    CVisual::CVisual(v5);
    *((_QWORD *)v6 + 33) = &CScreenRotation::`vftable'{for `IAnimationListener'};
    *(_QWORD *)v6 = &CScreenRotation::`vftable'{for `CVisual'};
    *((_DWORD *)v6 + 85) = -1;
    *((_DWORD *)v6 + 86) = -1;
    *(_OWORD *)((char *)v6 + 348) = xmmword_1800ACE18;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v7 = (*(__int64 (__fastcall **)(struct CScreenRotation *, struct MIL_CHANNEL__ *const))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x15u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
