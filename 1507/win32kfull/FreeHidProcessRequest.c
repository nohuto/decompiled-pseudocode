/*
 * XREFs of FreeHidProcessRequest @ 0x1C00783D4
 * Callers:
 *     FreeProcessHidTable @ 0x1C0077440 (FreeProcessHidTable.c)
 *     DestroyThreadHidObjects @ 0x1C0078200 (DestroyThreadHidObjects.c)
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0078364 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0079288 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00792A8 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D2520 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 */

__int64 __fastcall FreeHidProcessRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, struct tagPROCESS_HID_TABLE *a3)
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
  v8 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)a1 + 1);
  if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1 || *v8 != a1 )
    __fastfail(3u);
  *v8 = (struct tagPROCESS_HID_REQUEST *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  return Win32FreePool(a1);
}
