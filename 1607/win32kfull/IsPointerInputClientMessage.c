/*
 * XREFs of IsPointerInputClientMessage @ 0x1C014728C
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C014717C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputClientMessage(unsigned int a1)
{
  return a1 >= 0x245 && a1 <= 0x257 && a1 != 589;
}
