/*
 * XREFs of FreeHidProcessRequest @ 0x1C00E26B0
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00E1818 (_RegisterRawInputDevices.c)
 *     DestroyThreadHidObjects @ 0x1C00E2960 (DestroyThreadHidObjects.c)
 *     FreeProcessHidTable @ 0x1C0129430 (FreeProcessHidTable.c)
 * Callees:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0009EF0 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00E2690 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00E27E0 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01CBF00 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 */

__int64 __fastcall FreeHidProcessRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, struct tagPROCESS_HID_TABLE *a3)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  struct tagPROCESS_HID_REQUEST **v10; // rax

  v6 = IsLegacyDevice(*((_WORD *)a1 + 8), *((_WORD *)a1 + 9));
  HMAssignmentUnlock((char *)a1 + 32);
  *((_QWORD *)a1 + 5) = 0LL;
  v8 = 1LL;
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
  v9 = *(_QWORD *)a1;
  v10 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)a1 + 1);
  if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)a1 + 8LL) != a1 || *v10 != a1 )
    __fastfail(3u);
  *v10 = (struct tagPROCESS_HID_REQUEST *)v9;
  *(_QWORD *)(v9 + 8) = v10;
  return Win32FreePool(a1, v7, v8);
}
