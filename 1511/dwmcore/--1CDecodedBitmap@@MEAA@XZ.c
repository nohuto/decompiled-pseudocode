/*
 * XREFs of ??1CDecodedBitmap@@MEAA@XZ @ 0x180160248
 * Callers:
 *     ??_GCDecodedBitmap@@MEAAPEAXI@Z @ 0x1801602E0 (--_GCDecodedBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDecodedBitmap::~CDecodedBitmap(CDecodedBitmap *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &CDecodedBitmap::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 9));
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 10));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
