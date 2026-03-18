/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C011D40C
 * Callers:
 *     ReferenceClass @ 0x1C00F3070 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C011C78C (InternalRegisterClassEx.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ClassAlloc(PVOID *a1, unsigned int a2)
{
  if ( a1 )
    return RtlAllocateHeap(a1[15], 0, a2);
  else
    return (PVOID)Win32AllocPoolWithQuotaZInit(a2, 1818456917LL);
}
