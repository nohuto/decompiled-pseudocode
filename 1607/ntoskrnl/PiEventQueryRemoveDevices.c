/*
 * XREFs of PiEventQueryRemoveDevices @ 0x14064D0B4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404859EC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCollectOpenHandles @ 0x14064299C (PnpCollectOpenHandles.c)
 *     PnpFreeVetoInformation @ 0x140642B2C (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x140642BC4 (PnpLogVetoInformation.c)
 *     PiEventRemovalCheckOpenHandles @ 0x14064D450 (PiEventRemovalCheckOpenHandles.c)
 *     PiEventRemovalOpenHandleVeto @ 0x14064D4CC (PiEventRemovalOpenHandleVeto.c)
 */

__int64 __fastcall PiEventQueryRemoveDevices(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD **a6,
        _DWORD *a7,
        __int64 a8,
        _QWORD *a9)
{
  int v12; // edi
  char v13; // cl
  __int64 v14; // rax
  _QWORD v16[6]; // [rsp+40h] [rbp-30h] BYREF

  v12 = PnpDeleteLockedDeviceNodes(a3, a4, 0, 1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), (ULONG_PTR)a7, a8);
  memset(v16, 0, 0x28uLL);
  v13 = BYTE5(v16[4]);
  if ( (a1 & 0xFFFFFFFB) == 0 )
    v13 = 1;
  BYTE5(v16[4]) = v13;
  if ( a3 )
    v14 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  else
    v14 = 0LL;
  LODWORD(v16[4]) = 0;
  v16[1] = v14 + 40;
  v16[3] = &v16[2];
  v16[2] = &v16[2];
  v16[0] = 0LL;
  BYTE4(v16[4]) = (NtGlobalFlag & 0x4000) != 0;
  if ( v12 < 0 )
  {
    if ( *a7 == 6 )
      PnpCollectOpenHandles(a6, a5, (__int64)v16);
  }
  else
  {
    v12 = PiEventRemovalCheckOpenHandles(a6, a5, a9);
    if ( v12 < 0 )
    {
      PiEventRemovalOpenHandleVeto(a5, a6, *a9, v16, a7, a8);
      PnpDeleteLockedDeviceNodes(a3, a4, 1, 1, 0, 0, 0LL, 0LL);
      v12 = -1073741823;
    }
  }
  if ( BYTE5(v16[4]) )
  {
    PnpLogVetoInformation((unsigned __int16 *)v16[1], &v16[2]);
    PnpFreeVetoInformation((__int64 **)&v16[2]);
  }
  return (unsigned int)v12;
}
