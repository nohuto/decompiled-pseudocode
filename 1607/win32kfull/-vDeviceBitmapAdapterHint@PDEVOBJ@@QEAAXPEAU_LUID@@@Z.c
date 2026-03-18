/*
 * XREFs of ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C027D360
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKKKKPEAPEAX@Z @ 0x1C0294E20 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKKKKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PDEVOBJ::vDeviceBitmapAdapterHint(PDEVOBJ *this, struct _LUID *a2)
{
  struct _LUID *v2; // rcx

  v2 = *(struct _LUID **)(*(_QWORD *)this + 1824LL);
  if ( v2 )
    v2[13] = *a2;
}
