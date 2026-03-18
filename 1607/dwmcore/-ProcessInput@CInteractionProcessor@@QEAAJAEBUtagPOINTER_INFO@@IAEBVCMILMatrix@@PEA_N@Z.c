/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1800A5248
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801453D0 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801714B0 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x18000DE7C (_anonymous_namespace_--ConvertToInputType.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180110B1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0K@Z @ 0x18011276C (-StartInteraction@CInteractionProcessor@@QEAAJ_N0K@Z.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x180112850 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18016E08C (_anonymous_namespace_--DecomposeMatrix.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  unsigned int started; // edi
  int v8; // r8d
  __int64 v9; // rdx
  float *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rcx
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1

  started = 0;
  *a5 = 0;
  *((_DWORD *)this + 97) = anonymous_namespace_::ConvertToInputType(*(_DWORD *)a2);
  *((_DWORD *)this + 98) = v8;
  *((_QWORD *)this + 50) = *(_QWORD *)(v9 + 16);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 108, v10) )
  {
    *(_OWORD *)v11 = *(_OWORD *)v12;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + 16);
    *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + 32);
    *(_OWORD *)(v11 + 48) = *(_OWORD *)(v12 + 48);
    *(_DWORD *)(v11 + 64) = *(_DWORD *)(v12 + 64);
    anonymous_namespace_::DecomposeMatrix(
      v11,
      v13,
      (char *)this + 500,
      (char *)this + 568,
      (char *)this + 636,
      (char *)this + 704);
    v14 = *((_DWORD *)this + 141);
    v15 = *(_OWORD *)((char *)this + 516);
    *(_OWORD *)((char *)this + 772) = *(_OWORD *)((char *)this + 500);
    v16 = *(_OWORD *)((char *)this + 532);
    *(_OWORD *)((char *)this + 788) = v15;
    v17 = *(_OWORD *)((char *)this + 548);
    *(_OWORD *)((char *)this + 804) = v16;
    *(_OWORD *)((char *)this + 820) = v17;
    *((_DWORD *)this + 209) = v14;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 772)) )
    {
      v19 = *((_DWORD *)this + 141);
      v20 = *(_OWORD *)((char *)this + 516);
      *(_OWORD *)v18 = *(_OWORD *)((char *)this + 500);
      v21 = *(_OWORD *)((char *)this + 532);
      *(_OWORD *)(v18 + 16) = v20;
      v22 = *(_OWORD *)((char *)this + 548);
      *(_OWORD *)(v18 + 32) = v21;
      *(_OWORD *)(v18 + 48) = v22;
      *(_DWORD *)(v18 + 64) = v19;
    }
    *a5 = 1;
  }
  if ( !*((_DWORD *)this + 96) )
    started = CInteractionProcessor::StartInteraction(this, 0, 0, *(_DWORD *)a2);
  *((_BYTE *)this + 408) &= ~0x10u;
  if ( *((_DWORD *)this + 97) == 1 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           this,
                           (char *)this + 384,
                           a2,
                           (char *)this + 860);
  if ( *((_DWORD *)this + 97) == 2 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           (char *)this + 152,
                           (char *)this + 384,
                           a2,
                           (char *)this + 860);
  return started;
}
