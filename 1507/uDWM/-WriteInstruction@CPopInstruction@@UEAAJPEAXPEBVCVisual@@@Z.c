/*
 * XREFs of ?WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180014CC0
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z @ 0x180014CB0 (-GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CPopInstruction::WriteInstruction(CPopInstruction *this, _DWORD *a2, const struct CVisual *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(CPopInstruction *, int *); // rsi
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)this;
  v7 = 0;
  v5 = *(__int64 (__fastcall **)(CPopInstruction *, int *))(v3 + 8);
  if ( v5 == CPopInstruction::GetInstructionSize )
    CPopInstruction::GetInstructionSize(this, &v7);
  else
    ((void (__fastcall *)(CPopInstruction *, int *, const struct CVisual *))v5)(this, &v7, a3);
  *a2 = v7 + 4;
  result = 0LL;
  a2[1] = 212;
  return result;
}
