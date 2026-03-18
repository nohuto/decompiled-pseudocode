/*
 * XREFs of ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F4094
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F0F5C (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F3918 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::SetPointerOffset(PointerList *this, _QWORD *a2, const struct tagPOINT *a3)
{
  __int64 result; // rax

  result = (__int64)FindNodeById((unsigned __int16)this, 0, 0);
  if ( result )
  {
    *(_QWORD *)(result + 64) = *a2;
    return 1LL;
  }
  return result;
}
