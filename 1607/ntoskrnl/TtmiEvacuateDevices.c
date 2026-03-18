/*
 * XREFs of TtmiEvacuateDevices @ 0x140676FDC
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140677B2C (TtmiSessionTerminalListWorker.c)
 *     TtmpDispatchEvacuateDevices @ 0x1406799F8 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     TtmiLogDeviceFromTerminalRemoved @ 0x14067A95C (TtmiLogDeviceFromTerminalRemoved.c)
 */

char __fastcall TtmiEvacuateDevices(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  char result; // al
  __int64 v6; // rcx

  v2 = (__int64 *)(a1 + 96);
  v4 = *(__int64 **)(a1 + 96);
  result = 0;
  while ( v4 != v2 )
  {
    v6 = *(unsigned int *)(a2 + 28);
    if ( *((_DWORD *)v4 + 149) == (_DWORD)v6 )
    {
      TtmiLogDeviceFromTerminalRemoved(v6, *((unsigned int *)v4 + 4), v4[3], *((unsigned int *)v4 + 8));
      *((_DWORD *)v4 + 149) = -1;
      result = 1;
      *((_DWORD *)v4 + 150) |= 0x10u;
    }
    v4 = (__int64 *)*v4;
  }
  return result;
}
