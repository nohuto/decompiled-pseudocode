/*
 * XREFs of UpdateRawMouseMode @ 0x1C00537A0
 * Callers:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     TransferWakeBit @ 0x1C0064BF0 (TransferWakeBit.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0089760 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     LockCaptureWindow @ 0x1C008E848 (LockCaptureWindow.c)
 *     DestroyThreadHidObjects @ 0x1C00F1690 (DestroyThreadHidObjects.c)
 *     UnlockCaptureWindow @ 0x1C00F3380 (UnlockCaptureWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(a1 + 48);
    if ( !(unsigned int)HasHidTable(v4)
      || (v3 ? (v6 = *(_QWORD *)(v3 + 16)) : (v6 = *(_QWORD *)(a1 + 48)),
          v5 = 1,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 376) + 784LL) + 100LL) & 1) == 0) )
    {
      v5 = 0;
    }
    result = gfRawMouse;
    gfRawMouse = v5;
  }
  return result;
}
