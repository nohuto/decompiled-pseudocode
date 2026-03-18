/*
 * XREFs of ??1CDecodedBitmap@@MEAA@XZ @ 0x1801533E0
 * Callers:
 *     ??_GCDecodedBitmap@@MEAAPEAXI@Z @ 0x180153440 (--_GCDecodedBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDecodedBitmap::~CDecodedBitmap(CDecodedBitmap *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 5);
  *(_QWORD *)this = &CDecodedBitmap::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
