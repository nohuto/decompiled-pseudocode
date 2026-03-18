/*
 * XREFs of ?ReleasePrimitiveCaches@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0E2C
 * Callers:
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800B0E54 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommandListBitmapRepresentation::ReleasePrimitiveCaches(CCommandListBitmapRepresentation *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 38);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 38) = 0LL;
  }
}
