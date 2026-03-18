/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@W4WalkReason@@@Z @ 0x18000937C
 * Callers:
 *     ?EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180007F10 (-EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4 (-GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800064E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEA_N@Z @ 0x180009400 (-GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18013FB00 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::EnsureWorldTransform(__int64 a1, const struct CVisualTree *a2, _QWORD *a3)
{
  const void *v6; // rbx
  const struct CTreeData *ParentTreeData; // rax
  bool v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // [rsp+30h] [rbp-69h] BYREF
  struct CManipulationManager *v14; // [rsp+38h] [rbp-61h] BYREF
  _BYTE Buf2[64]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v16[64]; // [rsp+80h] [rbp-19h] BYREF

  v6 = 0LL;
  ParentTreeData = CVisual::GetParentTreeData((CVisual *)a1, a2, (bool *)&v13);
  v8 = 1;
  if ( ParentTreeData )
    v9 = *((_QWORD *)ParentTreeData + 14);
  else
    v9 = 1LL;
  if ( a3[14] < v9 )
  {
    if ( ParentTreeData )
      v6 = (char *)ParentTreeData + 40;
    CVisual::CalcEffectiveTransform(
      a1,
      5LL,
      v6,
      (char *)&v13 + 1,
      Buf2,
      (unsigned __int64)v16 & -(__int64)(*(_QWORD *)(a1 + 352) != 0LL),
      v13);
    if ( !(_BYTE)v13 && a1 != *((_QWORD *)a2 + 3) )
    {
      if ( BYTE1(v13) )
        v8 = memcmp_0(v6, Buf2, 0x40uLL) != 0;
      else
        v8 = 0;
    }
    LOBYTE(v11) = v8;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64, unsigned __int64))(*a3 + 48LL))(
            a3,
            Buf2,
            v11,
            (unsigned __int64)v16 & -(__int64)(*(_QWORD *)(a1 + 352) != 0LL));
    LODWORD(v6) = v12;
    if ( v12 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 400) && (*(_BYTE *)(a1 + 74) & 2) != 0 )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v14);
        if ( (int)CComposition::GetManipulationManager(*(CComposition **)(a1 + 16), &v14) >= 0 )
          CManipulationManager::NotifyVisualPropertyChange(v14, (struct CVisual *)a1, (const struct CMILMatrix *)Buf2);
        Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&v14);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x567u);
    }
  }
  return (unsigned int)v6;
}
