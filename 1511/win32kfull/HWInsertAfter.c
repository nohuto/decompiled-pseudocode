/*
 * XREFs of HWInsertAfter @ 0x1C0075224
 * Callers:
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0076CCC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HWInsertAfter(unsigned __int64 a1)
{
  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return a1;
  else
    return *(_QWORD *)a1;
}
