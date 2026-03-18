/*
 * XREFs of ??1CD3DBuffer@@MEAA@XZ @ 0x1800A9870
 * Callers:
 *     ??_ECD3DIndexBuffer@@EEAAPEAXI@Z @ 0x1800A97B0 (--_ECD3DIndexBuffer@@EEAAPEAXI@Z.c)
 *     ??_E?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@EEAAPEAXI@Z @ 0x1800A9810 (--_E-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@EEAAPEAXI@Z.c)
 *     ??_ECD3DBuffer@@MEAAPEAXI@Z @ 0x180146260 (--_ECD3DBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DBuffer::~CD3DBuffer(CD3DBuffer *this)
{
  __int64 v2; // rsi

  *(_QWORD *)this = &CD3DBuffer::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
