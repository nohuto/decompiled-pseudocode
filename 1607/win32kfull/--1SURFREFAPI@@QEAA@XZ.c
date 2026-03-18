/*
 * XREFs of ??1SURFREFAPI@@QEAA@XZ @ 0x1C0113A50
 * Callers:
 *     GreMakeBitmapStock @ 0x1C011390C (GreMakeBitmapStock.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREFAPI::~SURFREFAPI(SURFREFAPI *this)
{
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
