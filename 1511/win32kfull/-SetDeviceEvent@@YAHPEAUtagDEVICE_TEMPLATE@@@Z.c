/*
 * XREFs of ?SetDeviceEvent@@YAHPEAUtagDEVICE_TEMPLATE@@@Z @ 0x1C01DE874
 * Callers:
 *     RequestDeviceChange @ 0x1C01E0784 (RequestDeviceChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetDeviceEvent(struct tagDEVICE_TEMPLATE *a1)
{
  unsigned int v2; // ecx

  v2 = *((_DWORD *)a1 + 23);
  if ( v2 != -1 )
    return WakeRIT(v2);
  KeSetEvent(*((PRKEVENT *)a1 + 10), 1, 0);
  return 1LL;
}
