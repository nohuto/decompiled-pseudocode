/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C02021A8
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 * Callees:
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 */

void __fastcall DelegateMoveSizeToShell(LARGE_INTEGER *a1, unsigned int a2)
{
  LARGE_INTEGER v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  BOOL v6; // edx
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // eax
  LARGE_INTEGER v10; // rax
  _DWORD v11[2]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v12[5]; // [rsp+68h] [rbp-40h] BYREF

  v3 = a1[2];
  v4 = a2;
  v5 = *(_QWORD *)(a1[3].QuadPart + 312);
  v6 = a2 && a2 != 10;
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v3.QuadPart + 392) != *(_QWORD *)(v7 + 392) )
    *(_DWORD *)(v7 + 448) |= 0x20u;
  if ( v6 )
  {
    HMAssignmentLock(&gspwndMouseOwner, v5);
    v8 = *(unsigned __int16 *)(v3.QuadPart + 688);
    v9 = *(unsigned __int16 *)(v3.QuadPart + 684);
    v11[0] = 0;
    v11[1] = 4;
    PostInputMessage(*(_QWORD *)(v3.QuadPart + 392), a1, 0x202u, 0LL, (v8 << 16) | v9, 0, 0LL, 0LL, 0, v11, 0LL, 0LL);
  }
  memset(v12, 0, sizeof(v12));
  v10 = *a1;
  v12[3] = 0LL;
  v12[0] = v10.QuadPart;
  LODWORD(v12[1]) = 4;
  v12[2] = v4;
  xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12);
}
