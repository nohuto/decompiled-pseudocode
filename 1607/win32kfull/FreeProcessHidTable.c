/*
 * XREFs of FreeProcessHidTable @ 0x1C0129430
 * Callers:
 *     DestroyProcessHidRequests @ 0x1C0129400 (DestroyProcessHidRequests.c)
 * Callees:
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C00E1F58 (-HidDeviceStartStop@@YAXXZ.c)
 *     FreeHidProcessRequest @ 0x1C00E26B0 (FreeHidProcessRequest.c)
 */

void __fastcall FreeProcessHidTable(__int64 *a1)
{
  struct tagPROCESS_HID_REQUEST **v1; // rdi
  BOOL v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct tagPROCESS_HID_REQUEST **i; // rdi
  struct tagPROCESS_HID_REQUEST **j; // rdi
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 v10; // rcx

  v1 = (struct tagPROCESS_HID_REQUEST **)(a1 + 2);
  v3 = *v1 != (struct tagPROCESS_HID_REQUEST *)v1 || (__int64 *)a1[4] != a1 + 4 || (__int64 *)a1[6] != a1 + 6;
  HMAssignmentUnlock(a1 + 9);
  HMAssignmentUnlock(a1 + 8);
  while ( *v1 != (struct tagPROCESS_HID_REQUEST *)v1 )
    FreeHidProcessRequest(*v1, 1, (struct tagPROCESS_HID_TABLE *)a1);
  for ( i = (struct tagPROCESS_HID_REQUEST **)(a1 + 4);
        *i != (struct tagPROCESS_HID_REQUEST *)i;
        FreeHidProcessRequest(*i, 2, (struct tagPROCESS_HID_TABLE *)a1) )
  {
    ;
  }
  for ( j = (struct tagPROCESS_HID_REQUEST **)(a1 + 6);
        *j != (struct tagPROCESS_HID_REQUEST *)j;
        FreeHidProcessRequest(*j, 3, (struct tagPROCESS_HID_TABLE *)a1) )
  {
    ;
  }
  v8 = (__int64 *)*a1;
  v9 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v9 != a1 )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = (__int64)v9;
  Win32FreePool(a1, v4, v5);
  --gnHidProcess;
  if ( v3 )
    HidDeviceStartStop(v10);
}
