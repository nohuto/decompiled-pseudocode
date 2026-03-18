/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C0206C40
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-40h] BYREF

  if ( gpqForeground )
  {
    v3 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 320LL);
      if ( (dword_1C02DE0DC[4 * (unsigned int)(a1 - 14)] & 1) != 0 || !v4 )
      {
        if ( a1 < 0x16 )
          PostEventMessageEx(
            *(_QWORD *)(v3 + 16),
            *(_QWORD *)(*(_QWORD *)(v3 + 16) + 384LL),
            0x11u,
            v3,
            0,
            0LL,
            a1,
            0LL);
      }
      else
      {
        v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v7;
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
