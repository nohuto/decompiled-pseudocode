/*
 * XREFs of ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60
 * Callers:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0009EF0 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0009F88 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     _RegisterRawInputDevices @ 0x1C00E1818 (_RegisterRawInputDevices.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00E27E0 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     CleanupHidRequestList @ 0x1C01356A0 (CleanupHidRequestList.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01CBF00 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0223FF4 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHidPageOnlyRequest(struct tagHID_PAGEONLY_REQUEST *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  struct tagHID_PAGEONLY_REQUEST **v4; // rax

  v3 = *(_QWORD *)a1;
  v4 = (struct tagHID_PAGEONLY_REQUEST **)*((_QWORD *)a1 + 1);
  if ( *(struct tagHID_PAGEONLY_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1 || *v4 != a1 )
    __fastfail(3u);
  *v4 = (struct tagHID_PAGEONLY_REQUEST *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  Win32FreePool(a1, v3, a3);
}
