/*
 * XREFs of ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00E95B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4ScrollAxis@@@Z @ 0x1C00E8C9C (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C00E977C (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C00E9830 (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // ebp
  __int64 v14; // rcx

  v5 = 0;
  v9 = a3 - 14;
  if ( !v9 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
            a4,
            104LL) )
    {
      return (unsigned int)-1073741811;
    }
    return (unsigned int)DirectComposition::CInteractionTrackerMarshaler::SetRequestedPositionAnimation(
                           this,
                           a2,
                           a4,
                           a5);
  }
  v10 = v9 - 15;
  if ( !v10 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
            a4,
            104LL) )
    {
      return (unsigned int)-1073741811;
    }
    return (unsigned int)DirectComposition::CInteractionTrackerMarshaler::SetRequestedScaleAnimation(this, a2, a4, a5);
  }
  v11 = v10 - 4;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return (unsigned int)-1073741811;
      v13 = 2;
    }
    else
    {
      v13 = 1;
    }
  }
  else
  {
    v13 = 0;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          107LL) )
  {
    return (unsigned int)-1073741811;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    a2,
    *((struct DirectComposition::CResourceMarshaler **)this + v13 + 25));
  *((_QWORD *)this + v13 + 25) = a4;
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                            v14,
                                            v13);
  *a5 = 1;
  return v5;
}
