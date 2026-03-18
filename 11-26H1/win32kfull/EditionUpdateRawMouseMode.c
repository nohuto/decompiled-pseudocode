/*
 * XREFs of EditionUpdateRawMouseMode @ 0x1400548C0
 * Callers:
 *     LockCaptureWindow @ 0x1400547AC (LockCaptureWindow.c)
 *     UnlockCaptureWindow @ 0x140054860 (UnlockCaptureWindow.c)
 *     TransferWakeBit @ 0x1400554A0 (TransferWakeBit.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401709C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x140171050 (DestroyThreadHidObjects.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x14029D3F8 (-SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateRawMouseMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax

  result = W32GetUserSessionState(a1, a2);
  if ( a1 == *(_QWORD *)(result + 18928) )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 16);
    else
      v6 = *(_QWORD *)(a1 + 96);
    if ( !v6
      || (v4 = *(_QWORD *)(v6 + 456)) == 0
      || !*(_QWORD *)(v4 + 824)
      || (v5 ? (v8 = *(_QWORD *)(v5 + 16)) : (v8 = *(_QWORD *)(a1 + 96)),
          v7 = 1,
          v6 = *(_QWORD *)(*(_QWORD *)(v8 + 456) + 824LL),
          (*(_DWORD *)(v6 + 100) & 1) == 0) )
    {
      v7 = 0;
    }
    result = W32GetUserSessionState(v6, v4);
    *(_DWORD *)(result + 16308) = v7;
  }
  return result;
}
