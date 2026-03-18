/*
 * XREFs of DwmSyncHitTestQuery @ 0x1C00C82C8
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C5F8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00CA094 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall DwmSyncHitTestQuery(
        PVOID Object,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  _BYTE v17[688]; // [rsp+20h] [rbp-E0h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v14 = 0;
    if ( gbInVideoPnpCallout )
      v14 = -1073741823;
    v13 = v14;
    if ( v14 >= 0 )
    {
      memset(&v17[2], 0, 0x2AEuLL);
      *(_DWORD *)v17 = 6029364;
      *(_WORD *)&v17[4] = 0x8000;
      *(_QWORD *)&v17[64] = a5;
      *(_QWORD *)&v17[72] = a6;
      *(_DWORD *)&v17[80] = a7;
      *(_DWORD *)&v17[40] = 1073741849;
      *(_QWORD *)&v17[44] = a2;
      *(_DWORD *)&v17[52] = a3;
      *(_QWORD *)&v17[56] = a4;
      v15 = LpcRequestWaitReplyPortEx(Object, v17, v17);
      v13 = SyncLpcCheckNtStatus(v15, (struct _PORT_MESSAGE *)v17);
      if ( v13 >= 0 )
      {
        *a8 = *(_DWORD *)&v17[84];
        *a9 = *(_DWORD *)&v17[88];
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
