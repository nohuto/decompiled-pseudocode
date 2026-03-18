/*
 * XREFs of ?OnConfigCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C01D43A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OnConfigCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  KeSetEvent(*(PRKEVENT *)a3, 1, 0);
  if ( _InterlockedExchange64((volatile __int64 *)a3 + 1, 0LL) )
  {
    Win32FreePool(a2->AssociatedIrp.MasterIrp);
    IoFreeIrp(a2);
  }
  return 3221225494LL;
}
