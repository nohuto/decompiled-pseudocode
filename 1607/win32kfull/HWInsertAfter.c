/*
 * XREFs of HWInsertAfter @ 0x1C00A67E4
 * Callers:
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00A6954 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
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
