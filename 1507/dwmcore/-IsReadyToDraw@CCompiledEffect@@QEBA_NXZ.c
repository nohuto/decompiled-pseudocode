/*
 * XREFs of ?IsReadyToDraw@CCompiledEffect@@QEBA_NXZ @ 0x1801133B0
 * Callers:
 *     ?GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180112884 (-GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HasValidTemplate@CCompiledEffect@@QEBA_NXZ @ 0x180113374 (-HasValidTemplate@CCompiledEffect@@QEBA_NXZ.c)
 *     ?GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180115464 (-GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Wi.c)
 */

bool __fastcall CCompiledEffect::IsReadyToDraw(CCompiledEffect *this)
{
  __int64 v2; // rcx
  char v3; // si

  v3 = 0;
  if ( CCompiledEffect::HasValidTemplate(this)
    && CCompiledEffectTemplate::GetCompiledEffectIfAvailable(*(CCompiledEffectTemplate **)(v2 + 56)) )
  {
    return *((_DWORD *)this + 48) == (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 48LL)
                                                                            + 16LL))(*(_QWORD *)(*((_QWORD *)this + 7)
                                                                                               + 48LL));
  }
  return v3;
}
