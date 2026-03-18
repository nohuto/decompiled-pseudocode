/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180140704
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801412EC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?AxisContainsMotion@?A0xe8837992@@YA_NAEBUInteractionAxis@@@Z @ 0x180141164 (-AxisContainsMotion@-A0xe8837992@@YA_NAEBUInteractionAxis@@@Z.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1801419E0 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x180141D70 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x180141FA4 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        _BYTE *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _anonymous_namespace_ *a7,
        __int64 a8,
        _OWORD *a9,
        _OWORD *a10)
{
  unsigned int v12; // esi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  char v18; // al
  char v19; // cl
  const struct InteractionAxis *v20; // rdx
  _QWORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v25[4]; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h] BYREF
  int v28; // [rsp+D0h] [rbp-30h]
  _BYTE v29[64]; // [rsp+F0h] [rbp-10h] BYREF

  v12 = 0;
  v23[0] = a4;
  *(_OWORD *)a8 = IdentityMatrix;
  *(_OWORD *)(a8 + 16) = *(&IdentityMatrix + 1);
  *(__m256 *)(a8 + 32) = ymmword_18019E9D0;
  *a9 = IdentityMatrix;
  a9[1] = *(&IdentityMatrix + 1);
  a9[2] = *(_OWORD *)ymmword_18019E9D0.m256_f32;
  v13 = v25[0];
  a9[3] = *(_OWORD *)&ymmword_18019E9D0.m256_f32[4];
  v14 = v25[1];
  *a10 = v13;
  v15 = v25[2];
  a10[1] = v14;
  v16 = v25[3];
  a10[2] = v15;
  a10[3] = v16;
  if ( !*(_QWORD *)a2 )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v26);
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v24);
  v27 = *(_QWORD *)v17;
  v28 = *(_DWORD *)(v17 + 8);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a5 + 40LL))(a5, v25);
  v24 = *a3;
  if ( *(_QWORD *)a2 == a5 )
  {
    v18 = 0;
    v19 = 0;
  }
  else
  {
    v19 = BYTE1(v24);
    v18 = v24;
  }
  if ( LODWORD(v25[0]) == 2 )
  {
    if ( !v18 )
    {
      if ( (a2[16] & 0x40) != 0 )
      {
        *(_BYTE *)a7 = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 624) = 1;
      }
      return v12;
    }
    goto LABEL_14;
  }
  if ( LODWORD(v25[0]) != 4 || v19 )
  {
LABEL_14:
    if ( v26 == 1 && !*(_BYTE *)(v23[0] + 1LL) && !*(_BYTE *)v23[0] )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, v29, v23[0] + 8LL);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v23, &v27, v29, a8, a9);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v24, v23, a10);
      if ( `anonymous namespace'::AxisContainsMotion(a7, v20) )
        *a6 = 2;
    }
    return v12;
  }
  if ( (char)a2[16] < 0 )
  {
    *((_BYTE *)a7 + 1) = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 625) = 1;
  }
  return v12;
}
