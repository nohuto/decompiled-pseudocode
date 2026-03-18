/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2F14
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C0112D68 (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01E36B0 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C008FCC0 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DD040 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E3298 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  BOOL v7; // r15d
  struct tagWND *v8; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *((char *)a1 + 44) >= 0 )
  {
    v3 = unsafe_cast_fnid_or_class_to_PIMEWND((__int64)a1);
    if ( v3 )
    {
      v4 = *((_QWORD *)a1 + 2);
      if ( v4 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v4 + 376));
      v5 = *(_QWORD *)(v3 + 376);
      v6 = v5;
      if ( v5 >= W32UserProbeAddress )
        v6 = W32UserProbeAddress;
      v7 = (*(_DWORD *)(v6 + 44) & 0x20) != 0 && gfIMEShowStatus;
      v8 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v5 + 16), 1);
      if ( v8 || (v8 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 72LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v5 + 44) ^= (v7 ^ *(_DWORD *)(v5 + 44)) & 1;
      }
      if ( v4 != gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v4, (struct tagIMEUI *)v5, v8, v7);
      if ( *((char *)a1 + 44) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
