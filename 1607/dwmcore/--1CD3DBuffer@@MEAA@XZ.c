/*
 * XREFs of ??1CD3DBuffer@@MEAA@XZ @ 0x1800ACE70
 * Callers:
 *     ??_ECD3DIndexBuffer@@EEAAPEAXI@Z @ 0x1800ACDD0 (--_ECD3DIndexBuffer@@EEAAPEAXI@Z.c)
 *     ??_ECD3DVertexBuffer@@EEAAPEAXI@Z @ 0x1800ACE20 (--_ECD3DVertexBuffer@@EEAAPEAXI@Z.c)
 *     ??_ECD3DBuffer@@MEAAPEAXI@Z @ 0x18017DE90 (--_ECD3DBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CD3DBuffer::~CD3DBuffer(CD3DBuffer *this)
{
  *(_QWORD *)this = &CD3DBuffer::`vftable';
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
