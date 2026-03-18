/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012CA18
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012D520 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     AxisContainsMotion @ 0x18012D398 (AxisContainsMotion.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@@Z @ 0x18012DADC (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18012DDD4 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@@Z @ 0x18012E008 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7)
{
  unsigned int v7; // edi
  __int64 v11; // rax
  char v12; // al
  char v13; // cl
  _QWORD v15[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[64]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v18[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v19; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v20[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v21[64]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = 0;
  v11 = *(_QWORD *)a2;
  *(_QWORD *)&v17 = a3;
  v15[0] = v11;
  if ( !v11 )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v11 + 40LL))(v15[0], &v19);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v18);
  v17 = *(_OWORD *)v17;
  if ( *(_QWORD *)a2 == a5 )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v13 = BYTE1(v17);
    v12 = v17;
  }
  if ( v18[0] == 2 )
  {
    if ( !v12 )
    {
      if ( (a2[16] & 0x40) != 0 )
      {
        *a7 = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 364) = 1;
      }
      return v7;
    }
    goto LABEL_14;
  }
  if ( v18[0] != 4 || v13 )
  {
LABEL_14:
    if ( v19 == 1 && !a4[1] && !*a4 )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, v21, a4 + 8);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, &v17, v20, v21, v16);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, v15, &v17);
      if ( (unsigned __int8)AxisContainsMotion(a7) )
        *a6 = 2;
    }
    return v7;
  }
  if ( a2[16] < 0 )
  {
    a7[1] = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 365) = 1;
  }
  return v7;
}
