/*
 * XREFs of FreeProcessHidTable @ 0x1C0077440
 * Callers:
 *     DestroyProcessHidRequests @ 0x1C0077410 (DestroyProcessHidRequests.c)
 * Callees:
 *     FreeHidProcessRequest @ 0x1C00783D4 (FreeHidProcessRequest.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C0078C78 (-HidDeviceStartStop@@YAXXZ.c)
 */

void __fastcall FreeProcessHidTable(struct tagPROCESS_HID_REQUEST **a1)
{
  struct tagPROCESS_HID_REQUEST **v1; // rdi
  BOOL v3; // esi
  struct tagPROCESS_HID_REQUEST **i; // rdi
  struct tagPROCESS_HID_REQUEST **j; // rdi
  struct tagPROCESS_HID_REQUEST *v6; // rcx
  struct tagPROCESS_HID_REQUEST ***v7; // rax

  v1 = a1 + 2;
  v3 = *v1 != (struct tagPROCESS_HID_REQUEST *)v1
    || a1[4] != (struct tagPROCESS_HID_REQUEST *)(a1 + 4)
    || a1[6] != (struct tagPROCESS_HID_REQUEST *)(a1 + 6);
  HMAssignmentUnlock(a1 + 9);
  HMAssignmentUnlock(a1 + 8);
  while ( *v1 != (struct tagPROCESS_HID_REQUEST *)v1 )
    FreeHidProcessRequest(*v1);
  for ( i = a1 + 4; *i != (struct tagPROCESS_HID_REQUEST *)i; FreeHidProcessRequest(*i) )
    ;
  for ( j = a1 + 6; *j != (struct tagPROCESS_HID_REQUEST *)j; FreeHidProcessRequest(*j) )
    ;
  v6 = *a1;
  v7 = (struct tagPROCESS_HID_REQUEST ***)a1[1];
  if ( *((struct tagPROCESS_HID_REQUEST ***)*a1 + 1) != a1 || *v7 != a1 )
    __fastfail(3u);
  *v7 = (struct tagPROCESS_HID_REQUEST **)v6;
  *((_QWORD *)v6 + 1) = v7;
  Win32FreePool(a1);
  --gnHidProcess;
  if ( v3 )
    HidDeviceStartStop();
}
