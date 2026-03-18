/*
 * XREFs of NVMeHwResetBus @ 0x1C0001F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  else
    return NVMeControllerReset(a1, 0LL);
}
