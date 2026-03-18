/*
 * XREFs of UpdateRawMouseMode @ 0x1C0090674
 * Callers:
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     LockCaptureWindow @ 0x1C004F78C (LockCaptureWindow.c)
 *     DestroyThreadHidObjects @ 0x1C0078200 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0078960 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     TransferWakeBit @ 0x1C00EAAA4 (TransferWakeBit.c)
 *     UnlockCaptureWindow @ 0x1C00ED560 (UnlockCaptureWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
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
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 384) + 784LL) + 100LL) & 1) == 0) )
    {
      v5 = 0;
    }
    result = gfRawMouse;
    gfRawMouse = v5;
  }
  return result;
}
