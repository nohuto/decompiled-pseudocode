/*
 * XREFs of ??_E?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@EEAAPEAXI@Z @ 0x18008D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DBuffer@@MEAA@XZ @ 0x18008D470 (--1CD3DBuffer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD3DBuffer *__fastcall CD3DVertexBuffer<CVertexXYWColorDUV2>::`vector deleting destructor'(CD3DBuffer *a1, char a2)
{
  *(_QWORD *)a1 = &CD3DVertexBuffer<CVertexXYWColorDUV2>::`vftable';
  CD3DBuffer::~CD3DBuffer(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DBuffer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
