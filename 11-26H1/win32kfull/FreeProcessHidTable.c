/*
 * XREFs of FreeProcessHidTable @ 0x14016F7C4
 * Callers:
 *     DestroyProcessHidRequests @ 0x14016F3E0 (DestroyProcessHidRequests.c)
 * Callees:
 *     FreeHidProcessRequest @ 0x140171304 (FreeHidProcessRequest.c)
 */

void __fastcall FreeProcessHidTable(__int64 a1)
{
  struct tagPROCESS_HID_REQUEST **v1; // rbx
  struct tagPROCESS_HID_REQUEST **v2; // r14
  int v3; // ebp
  struct tagPROCESS_HID_REQUEST **v4; // rdi
  struct tagPROCESS_HID_REQUEST **v5; // rsi
  struct tagPROCESS_HID_REQUEST *v6; // rcx
  struct tagPROCESS_HID_REQUEST ***v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax

  v1 = *(struct tagPROCESS_HID_REQUEST ***)(a1 + 824);
  v1[13] = 0LL;
  v2 = v1 + 2;
  *(_QWORD *)(a1 + 824) = 0LL;
  if ( *v2 == (struct tagPROCESS_HID_REQUEST *)v2
    && (v4 = v1 + 4, *v4 == (struct tagPROCESS_HID_REQUEST *)v4)
    && (v5 = v1 + 6, *v5 == (struct tagPROCESS_HID_REQUEST *)v5)
    && (*(_DWORD *)(a1 + 808) & 0x8000000) == 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    v4 = v1 + 4;
    v5 = v1 + 6;
  }
  HMAssignmentUnlock(v1 + 9);
  HMAssignmentUnlock(v1 + 8);
  while ( *v2 != (struct tagPROCESS_HID_REQUEST *)v2 )
    FreeHidProcessRequest(*v2);
  while ( *v4 != (struct tagPROCESS_HID_REQUEST *)v4 )
    FreeHidProcessRequest(*v4);
  while ( *v5 != (struct tagPROCESS_HID_REQUEST *)v5 )
    FreeHidProcessRequest(*v5);
  v6 = *v1;
  if ( *((struct tagPROCESS_HID_REQUEST ***)*v1 + 1) != v1 || (v7 = (struct tagPROCESS_HID_REQUEST ***)v1[1], *v7 != v1) )
    __fastfail(3u);
  *v7 = (struct tagPROCESS_HID_REQUEST **)v6;
  *((_QWORD *)v6 + 1) = v7;
  Win32FreePool(v1);
  if ( v3 )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(UserSessionState + 16832));
  }
}
