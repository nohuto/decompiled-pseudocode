/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0039510
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00394AC (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z @ 0x1C0039B94 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJ_KPEA_N1PEAPEAX@Z.c)
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C003BD0C (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CTokenBase@@@Z @ 0x1C003C264 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C00E30FC (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  bool v5; // bp
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  bool v10; // r15
  bool v11; // r12
  int OutOfFrameDirectFlipNotification; // eax
  int v13; // edi
  bool v14; // di
  CFlipToken *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  CFlipToken *v18; // rbx
  void **v20; // [rsp+20h] [rbp-68h]
  bool v21; // [rsp+40h] [rbp-48h] BYREF
  bool v22; // [rsp+A0h] [rbp+18h] BYREF
  bool v23; // [rsp+A8h] [rbp+20h] BYREF

  v22 = 1;
  v5 = 1;
  v23 = 0;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v21 = 0;
  *a4 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( (*(_WORD *)&Value & 0x2000) == 0 )
  {
    OutOfFrameDirectFlipNotification = CompositionSurfaceObject::GetOutOfFrameDirectFlipNotification(
                                         this,
                                         a1,
                                         &v23,
                                         &v21,
                                         v20);
    v10 = v23;
    v11 = v21;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)&Value & 0x40000) == 0 )
  {
    OutOfFrameDirectFlipNotification = CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v22);
    v5 = v22;
LABEL_3:
    v13 = OutOfFrameDirectFlipNotification;
    if ( OutOfFrameDirectFlipNotification < 0 )
      return (unsigned int)v13;
  }
  v14 = (a3->Flags.Value & 0x100000) != 0;
  v15 = (CFlipToken *)Win32AllocPool();
  if ( v15 )
    v18 = CFlipToken::CFlipToken(v15, a1, this);
  else
    v18 = 0LL;
  if ( v18 )
  {
    LOBYTE(v17) = v14;
    LOBYTE(v16) = v5;
    LOBYTE(v20) = v10;
    v13 = CFlipToken::Initialize(v18, a3, v16, v17, (_DWORD)v20, v11);
    if ( v13 < 0 )
      (**(void (__fastcall ***)(CFlipToken *, __int64))v18)(v18, 1LL);
    else
      *a4 = v18;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
