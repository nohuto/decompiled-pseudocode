/*
 * XREFs of IsMotherDesktopWindow @ 0x1C0069800
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 == *((_QWORD *)&gTermIO + 1) || a1 == qword_1C0322408 )
    return 1;
  return v1;
}
