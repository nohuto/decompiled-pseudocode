/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x1800B59AC
 * Callers:
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180034D80 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 GetCurrentFrameId(void)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( g_pComposition )
    return *((_QWORD *)g_pComposition + 44);
  return result;
}
