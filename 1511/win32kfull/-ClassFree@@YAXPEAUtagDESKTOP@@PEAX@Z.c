/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C011E17C
 * Callers:
 *     ReferenceClass @ 0x1C00F3070 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C011C78C (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
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
