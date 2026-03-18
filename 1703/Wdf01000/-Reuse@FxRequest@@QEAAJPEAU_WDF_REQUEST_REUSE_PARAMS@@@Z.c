/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0035330
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C000332C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfRequestReuse @ 0x1C0034B40 (imp_WdfRequestReuse.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007C3D8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007E038 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v4; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  _IRP *NewIrp; // rbx
  FxRequestContext *v8; // rcx
  unsigned __int8 v9; // al
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // ax
  const void *_a2; // rdx
  unsigned __int64 v16; // rcx
  const void *_a1; // rax
  _IRP *v18; // rcx
  __int16 v19; // r8
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  int v26; // edx
  unsigned __int64 v27; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = (unsigned __int64)this;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    FxNonPagedObject::Lock((FxNonPagedObject *)v4, &irql, v11);
    if ( (*(_WORD *)(v4 + 218) & 0x100) != 0 )
    {
      v13 = *(_QWORD *)(v4 + 160);
      v14 = *(_WORD *)(v13 + 10);
      _a2 = (const void *)(v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14 )
        _a2 = 0LL;
      v16 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      _a1 = (const void *)v4;
      if ( !*(_WORD *)(v4 + 10) )
        v16 = 0LL;
      if ( v16 )
        _a1 = (const void *)v16;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v4, irql, v12);
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  Major = WdfBindInfo->Version.Major;
  if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 9 )
  {
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
  }
  NewIrp = *(_IRP **)(v4 + 152);
  if ( NewIrp )
  {
    v8 = *(FxRequestContext **)(v4 + 168);
    if ( v8 )
      v8->ReleaseAndRestore(v8, (FxRequestBase *)v4);
    v9 = *(_BYTE *)(v4 + 213);
    if ( !v9 )
    {
      if ( (ReuseParams->Flags & 1) == 0 )
      {
        NewIrp->IoStatus.Status = ReuseParams->Status;
        NewIrp->Cancel = 0;
        *(_WORD *)(v4 + 214) = 0;
        return 0LL;
      }
      return 3223323144LL;
    }
    if ( v9 == 2 && *(_BYTE *)(v4 + 238) && !*(_BYTE *)(v4 + 214) )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
      (*(void (__fastcall **)(unsigned __int64, void *, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
        v4,
        (void *)1129464644,
        2242LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    NewIrp = ReuseParams->NewIrp;
    if ( *(_BYTE *)(v4 + 213) == 1 )
    {
      v18 = *(_IRP **)(v4 + 152);
      *(_QWORD *)(v4 + 152) = NewIrp;
      if ( v18 )
        IoFreeIrp(v18);
    }
    else
    {
      *(_QWORD *)(v4 + 152) = NewIrp;
    }
    *(_BYTE *)(v4 + 213) = 2;
  }
  if ( *(_BYTE *)(v4 + 213) == 1 && NewIrp )
  {
    IoReuseIrp(NewIrp, ReuseParams->Status);
    NewIrp->Cancel = 0;
  }
  if ( (ReuseParams->Flags & 2) == 0 )
  {
    *(_BYTE *)(v4 + 238) = 0;
    *(_WORD *)(v4 + 214) = 0;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
    return 0LL;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 0xBu) )
  {
    v20 = v19 + 32;
    v21 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v21 = 0LL;
    if ( v21 )
      v4 = v21;
    goto LABEL_53;
  }
  if ( NewIrp )
  {
    if ( *(_BYTE *)(v4 + 213) != 1 )
    {
      v26 = *(_DWORD *)(v4 + 12);
      if ( v26 == 1 )
      {
        if ( NewIrp->CurrentLocation <= NewIrp->StackCount )
        {
          FxObject::AddRef(
            (FxObject *)v4,
            (void *)0x43524344,
            2395,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          *(_QWORD *)(v4 + 264) = 0LL;
          *(_QWORD *)(v4 + 280) = 0LL;
          FxRequestBase::ClearFieldsForReuse((FxRequestBase *)v4);
          *(_BYTE *)(v4 + 238) = 1;
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags((FxRequestBase *)v4, 1);
          return 0LL;
        }
        v23 = *(_WORD *)(v4 + 10);
        v24 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v23 )
          v24 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, NewIrp, v24, -1073741808);
      }
      else
      {
        v27 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(v4 + 10) )
          v27 = 0LL;
        if ( v27 )
          v4 = v27;
        WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, v26, -1073741808);
      }
      goto LABEL_57;
    }
    v22 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v20 = 45;
    if ( !*(_WORD *)(v4 + 10) )
      v22 = 0LL;
    if ( v22 )
      v4 = v22;
LABEL_53:
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v20, WPP_FxRequest_cpp_Traceguids, (const void *)v4, -1073741808);
LABEL_57:
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  v25 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_WORD *)(v4 + 10) )
    v25 = 0LL;
  if ( v25 )
    v4 = v25;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x2Cu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, -1073741811);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225485LL;
}
