/*
 * XREFs of ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224
 * Callers:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0078364 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0078CE4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00792A8 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0079488 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     CleanupHidRequestList @ 0x1C0132640 (CleanupHidRequestList.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D2520 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0227BB0 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FB64 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
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
