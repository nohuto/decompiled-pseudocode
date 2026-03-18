/*
 * XREFs of PiGetDeviceDepth @ 0x1403F3B10
 * Callers:
 *     PiControlGetDeviceDepth @ 0x1403F3A7C (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceDepth @ 0x140647B14 (PiCMGetDeviceDepth.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetDeviceDepth(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // rdx

  *a2 = 0;
  v4 = -1073741810;
  PpDevNodeLockTree(0LL);
  v5 = (_QWORD *)PnpDeviceObjectFromDeviceInstance(a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5[39] + 40LL);
    if ( v6 )
    {
      v4 = 0;
      *a2 = *(_DWORD *)(v6 + 136);
    }
    ObfDereferenceObject(v5);
  }
  PpDevNodeUnlockTree(0LL);
  return v4;
}
