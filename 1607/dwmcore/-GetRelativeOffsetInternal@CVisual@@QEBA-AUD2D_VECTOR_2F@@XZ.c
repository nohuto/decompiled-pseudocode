/*
 * XREFs of ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18004FB1C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C310 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000C3C8 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180050B44 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_2F __fastcall CVisual::GetRelativeOffsetInternal(CVisual *this, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( (*(_DWORD *)(v2 + 4) & 0x400000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xA000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return (struct D2D_VECTOR_2F)a2;
}
