/*
 * XREFs of StorWaitForSingleObject @ 0x1C0030810
 * Callers:
 *     RaUnitWaitForRemoveLock @ 0x1C0009B34 (RaUnitWaitForRemoveLock.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 */

__int64 __fastcall StorWaitForSingleObject(void *a1)
{
  unsigned int v1; // ebx

  v1 = KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  if ( v1 == 258
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_c22f65e2e13baced0403c20d154554bf_Traceguids);
  }
  return v1;
}
