/*
 * XREFs of ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F959C
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8BDC (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall RevalidateFrameProcessing(struct tagTHREADINFO *a1, int a2, const struct tagPOINTERINFONODE *a3)
{
  const struct tagPOINTERINFONODE *v4; // r8
  struct tagTHREADINFO *v5; // r11
  int v6; // eax
  unsigned int v7; // r10d
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int v10; // r9d

  if ( a2 && (*((_DWORD *)a1 + 270) & 0x2000) == 0 || !(unsigned int)IsPointerInfoNodeValid(a3) )
    return 0LL;
  v6 = IsTargetSetForRetrieval(v5, v4);
  v8 = v7;
  v9 = v7;
  LOBYTE(v8) = v6 != 0;
  LOBYTE(v9) = v10 != 0;
  LOBYTE(v7) = v8 == v9;
  return v7;
}
