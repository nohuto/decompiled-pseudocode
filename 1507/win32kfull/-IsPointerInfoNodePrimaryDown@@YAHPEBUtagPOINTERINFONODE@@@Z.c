/*
 * XREFs of ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8B60
 * Callers:
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAB54 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8B3C (-IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall IsPointerInfoNodePrimaryDown(const struct tagPOINTERINFONODE *a1)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  v1 = IsPointerInfoNodePrimary(a1);
  v3 = 0;
  if ( v1 )
    return (*(_DWORD *)(v2 + 68) & 0x10000) != 0;
  return v3;
}
