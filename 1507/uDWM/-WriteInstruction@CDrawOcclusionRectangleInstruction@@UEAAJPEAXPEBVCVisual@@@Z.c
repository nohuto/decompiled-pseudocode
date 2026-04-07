/*
 * XREFs of ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016B60
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z @ 0x180016B50 (-GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::WriteInstruction(
        CDrawOcclusionRectangleInstruction *this,
        float *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v7)(CDrawOcclusionRectangleInstruction *, int *); // rdi
  float v8; // xmm1_4
  float v9; // xmm2_4
  int v10; // eax
  int v11; // eax
  float *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v16 = 0;
  v7 = *(__int64 (__fastcall **)(CDrawOcclusionRectangleInstruction *, int *))(v3 + 8);
  if ( v7 == CDrawOcclusionRectangleInstruction::GetInstructionSize )
    CDrawOcclusionRectangleInstruction::GetInstructionSize(this, &v16);
  else
    v7(this, &v16);
  *(_DWORD *)a2 = v16 + 4;
  *((_DWORD *)a2 + 1) = 204;
  if ( *((_DWORD *)this + 10) <= *((_DWORD *)this + 8) || *((_DWORD *)this + 11) <= *((_DWORD *)this + 9) )
  {
    v8 = (float)*((int *)this + 4);
    a2[2] = v8;
    v9 = (float)*((int *)this + 6);
    a2[3] = v9;
    v10 = *((_DWORD *)a3 + 28) - *((_DWORD *)this + 5) - *((_DWORD *)this + 4);
    if ( v10 < 0 )
      v10 = 0;
    a2[4] = (float)v10 + v8;
    v11 = *((_DWORD *)a3 + 29) - *((_DWORD *)this + 7) - *((_DWORD *)this + 6);
    if ( v11 < 0 )
      v11 = 0;
    a2[5] = (float)v11 + v9;
  }
  else
  {
    v13 = a2 + 2;
    v14 = this - (CDrawOcclusionRectangleInstruction *)(a2 + 1);
    v15 = 4LL;
    do
    {
      *v13 = (float)*(int *)((char *)v13 + v14 + 28);
      ++v13;
      --v15;
    }
    while ( v15 );
  }
  return 0LL;
}
