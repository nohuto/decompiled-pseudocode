/*
 * XREFs of rimOnConfigCompletion @ 0x1C0087BB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall rimOnConfigCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  KeSetEvent(*(PRKEVENT *)a3, 1, 0);
  if ( _InterlockedExchange64((volatile __int64 *)(a3 + 8), 0LL) )
  {
    Win32FreePool();
    IoFreeIrp(a2);
  }
  return 3221225494LL;
}
