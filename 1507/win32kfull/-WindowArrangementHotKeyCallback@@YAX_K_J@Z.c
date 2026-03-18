/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C0206820
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 */

void __fastcall WindowArrangementHotKeyCallback(LARGE_INTEGER a1, __int64 a2)
{
  LARGE_INTEGER *v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-40h] BYREF

  if ( gpqForeground )
  {
    v3 = *(LARGE_INTEGER **)(gpqForeground + 80LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3[3].QuadPart + 312);
      if ( (dword_1C02E05CC[4 * (a1.LowPart - 14)] & 1) != 0 || !v4 )
      {
        if ( a1.QuadPart < 0x16uLL )
          PostEventMessageEx(v3[2].QuadPart, *(_QWORD *)(v3[2].QuadPart + 392), 0x11u, v3, 0, 0LL, a1, 0LL);
      }
      else
      {
        v7[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v7;
        ++*(_DWORD *)(v4 + 8);
        v7[1] = v4;
        memset(v8, 0, sizeof(v8));
        v8[0] = 0LL;
        v8[2] = 0LL;
        LODWORD(v8[1]) = 3;
        v8[3] = a2;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v8) )
          SetLastInputWoken(*(_QWORD *)(v4 + 16), 0LL);
        ThreadUnlock1(v6, v5);
      }
    }
  }
}
