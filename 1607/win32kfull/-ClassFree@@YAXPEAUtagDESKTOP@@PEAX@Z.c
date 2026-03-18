/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C008FCBC
 * Callers:
 *     InternalRegisterClassEx @ 0x1C00705B8 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 *     ReferenceClass @ 0x1C0112A60 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(struct tagDESKTOP *a1, void *a2, __int64 a3)
{
  if ( a1 )
    DesktopFree(a1);
  else
    Win32FreePool(a2, a2, a3);
}
