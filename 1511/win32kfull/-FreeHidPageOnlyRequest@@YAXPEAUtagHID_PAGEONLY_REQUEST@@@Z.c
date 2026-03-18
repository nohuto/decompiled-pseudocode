/*
 * XREFs of ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4
 * Callers:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0007144 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00071DC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0089FF4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C008A47C (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     CleanupHidRequestList @ 0x1C0113B10 (CleanupHidRequestList.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D3F70 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0227F04 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FF94 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHidPageOnlyRequest(struct tagHID_PAGEONLY_REQUEST *a1)
{
  __int64 v1; // rdx
  struct tagHID_PAGEONLY_REQUEST **v2; // rax

  v1 = *(_QWORD *)a1;
  v2 = (struct tagHID_PAGEONLY_REQUEST **)*((_QWORD *)a1 + 1);
  if ( *(struct tagHID_PAGEONLY_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1 || *v2 != a1 )
    __fastfail(3u);
  *v2 = (struct tagHID_PAGEONLY_REQUEST *)v1;
  *(_QWORD *)(v1 + 8) = v2;
  Win32FreePool(a1);
}
