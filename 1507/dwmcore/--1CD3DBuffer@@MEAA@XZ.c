/*
 * XREFs of ??1CD3DBuffer@@MEAA@XZ @ 0x18008D470
 * Callers:
 *     ??_E?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@EEAAPEAXI@Z @ 0x18008D3B0 (--_E-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@EEAAPEAXI@Z.c)
 *     ??_ECD3DIndexBuffer@@EEAAPEAXI@Z @ 0x18008D410 (--_ECD3DIndexBuffer@@EEAAPEAXI@Z.c)
 *     ??_ECD3DBuffer@@MEAAPEAXI@Z @ 0x180134F20 (--_ECD3DBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
