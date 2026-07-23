/*
 * XREFs of IopQueryDeviceState @ 0x1403F01FC
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1403F026C (PiProcessQueryDeviceState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRestartRemovalRelations @ 0x140580AB0 (PiEventRestartRemovalRelations.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDeviceState(int a1, _DWORD *a2)
{
  int v4; // r9d
  __int64 result; // rax
  _WORD v6[36]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+18h] BYREF

  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  v6[0] = 5147;
  result = IopSynchronousCall(a1, (unsigned int)v6, -1073741637, v4, (__int64)&v7);
  if ( (int)result >= 0 )
    *a2 = v7;
  return result;
}
