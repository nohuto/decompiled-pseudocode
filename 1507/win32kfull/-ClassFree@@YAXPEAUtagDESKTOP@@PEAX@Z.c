/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00D914C
 * Callers:
 *     ReferenceClass @ 0x1C005BCD0 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C005CF60 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C00D8FFC (DestroyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, void *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[15], 0, a2);
  else
    Win32FreePool(a2);
}
