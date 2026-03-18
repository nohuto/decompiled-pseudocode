/*
 * XREFs of FreeHidProcessRequest @ 0x140171304
 * Callers:
 *     FreeProcessHidTable @ 0x14016F7C4 (FreeProcessHidTable.c)
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 *     DestroyThreadHidObjects @ 0x140171050 (DestroyThreadHidObjects.c)
 * Callees:
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1401715A8 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x140171D60 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1401729BC (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x14029A908 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 */

void __fastcall FreeHidProcessRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, struct tagPROCESS_HID_TABLE *a3)
{
  int v6; // ebp
  __int64 v7; // rcx
  struct tagPROCESS_HID_REQUEST **v8; // rax

  v6 = IsLegacyDevice(*((_WORD *)a1 + 8), *((_WORD *)a1 + 9));
  HMAssignmentUnlock((char *)a1 + 32);
  *((_QWORD *)a1 + 5) = 0LL;
  switch ( a2 )
  {
    case 1:
      DerefIncludeRequest(a1, a3, v6, 1);
      break;
    case 2:
      DerefPageOnlyRequest(a1, a3, 1);
      break;
    case 3:
      DerefExcludeRequest(a1, v6, 1);
      break;
  }
  v7 = *(_QWORD *)a1;
  if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1
    || (v8 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)a1 + 1), *v8 != a1) )
  {
    __fastfail(3u);
  }
  *v8 = (struct tagPROCESS_HID_REQUEST *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  Win32FreePool(a1);
}
