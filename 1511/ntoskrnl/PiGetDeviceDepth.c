/*
 * XREFs of PiGetDeviceDepth @ 0x1404579D4
 * Callers:
 *     PiControlGetDeviceDepth @ 0x140457938 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceDepth @ 0x140613584 (PiCMGetDeviceDepth.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
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
