/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1402A16B4
 * Callers:
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140250050 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     NtUserBroadcastImeShowStatusChange @ 0x1402AFCE0 (NtUserBroadcastImeShowStatusChange.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x14017AE94 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140198198 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1402A1A14 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // r15
  PRKPROCESS **v7; // rdi
  ULONG64 v8; // rcx
  BOOL v9; // esi
  struct tagWND *v10; // r14
  struct tagIMEUI *v11; // [rsp+78h] [rbp+10h]
  struct tagIMEUI *v12; // [rsp+78h] [rbp+10h]

  v3 = 0;
  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19904) & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v11 = (struct tagIMEUI *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v11 )
    {
      v6 = PtiCurrent(v4);
      v7 = (PRKPROCESS **)*((_QWORD *)a1 + 2);
      if ( v7 != (PRKPROCESS **)v6 )
        KeAttachProcess(*v7[57]);
      v12 = *(struct tagIMEUI **)v11;
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)v12 < MmUserProbeAddress )
        v8 = (ULONG64)v12;
      v9 = (*(_DWORD *)(v8 + 44) & 0x20) != 0 && *(_DWORD *)(W32GetUserSessionState(v8, v5) + 14296);
      v10 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), 1);
      if ( v10 || (v10 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 120LL)) != 0LL )
      {
        v3 = 1;
        *((_DWORD *)v12 + 11) = v9 | *((_DWORD *)v12 + 11) & 0xFFFFFFFE;
      }
      if ( v7 != (PRKPROCESS **)v6 )
        KeDetachProcess();
      if ( v3 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v7, v12, v10, v9);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
