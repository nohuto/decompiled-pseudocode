/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180028330
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x1800283B0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18002D520 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CBaseObject *v2; // rdi
  __int64 v4; // rsi

  v2 = (CBaseObject *)*((_QWORD *)this + 94);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 94) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v2 )
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v2 + 96LL))(v2);
    v4 = *((_QWORD *)this + 94);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 88LL))(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
