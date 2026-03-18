/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0070A84
 * Callers:
 *     InternalRegisterClassEx @ 0x1C00705B8 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C0112A60 (ReferenceClass.c)
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
