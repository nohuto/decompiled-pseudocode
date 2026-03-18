/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x1800A7FB0
 * Callers:
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x180127CF0 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x180143D30 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@?A0xe8837992@@YA?AW4InputType@@K@Z @ 0x180005C30 (-ConvertToInputType@-A0xe8837992@@YA-AW4InputType@@K@Z.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z @ 0x1800FE584 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0@Z.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@@Z @ 0x1800FE658 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?DecomposeMatrix@?A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z @ 0x180142384 (-DecomposeMatrix@-A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(__int64 a1, int *a2, __int64 a3, _OWORD *a4)
{
  unsigned int started; // edi
  int v8; // eax
  int v9; // r8d
  const void *v10; // r9
  struct CMILMatrix *v13; // [rsp+20h] [rbp-18h]

  started = 0;
  v8 = `anonymous namespace'::ConvertToInputType(*a2);
  *(_DWORD *)(a1 + 360) = v9;
  *(_DWORD *)(a1 + 356) = v8;
  if ( memcmp_0((const void *)(a1 + 368), v10, 0x40uLL) )
  {
    *(_OWORD *)(a1 + 368) = *a4;
    *(_OWORD *)(a1 + 384) = a4[1];
    *(_OWORD *)(a1 + 400) = a4[2];
    *(_OWORD *)(a1 + 416) = a4[3];
    `anonymous namespace'::DecomposeMatrix(
      (_anonymous_namespace_ *)(a1 + 368),
      (const struct CMILMatrix *)(a1 + 432),
      (struct CMILMatrix *)(a1 + 496),
      (struct CMILMatrix *)(a1 + 560),
      v13);
  }
  if ( !*(_DWORD *)(a1 + 352) )
    started = CInteractionProcessor::StartInteraction((CInteractionProcessor *)a1, 0, 0);
  if ( *(_DWORD *)(a1 + 356) == 1 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           a1,
                           a1 + 352,
                           a2);
  if ( *(_DWORD *)(a1 + 356) == 2 )
    return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                           a1 + 136,
                           a1 + 352,
                           a2);
  return started;
}
