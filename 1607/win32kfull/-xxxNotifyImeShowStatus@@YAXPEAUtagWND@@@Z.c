/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01D97D8
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C01341F8 (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01D9F70 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C009D62C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FBA30 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01D9B5C (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  BOOL v10; // r15d
  struct tagWND *v11; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *((char *)a1 + 44) >= 0 )
  {
    v4 = unsafe_cast_fnid_or_class_to_PIMEWND((__int64)a1);
    if ( v4 )
    {
      v7 = *((_QWORD *)a1 + 2);
      if ( v7 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v7 + 376));
      v8 = *(_QWORD *)(v4 + 360);
      v9 = v8;
      if ( v8 >= W32UserProbeAddress )
        v9 = W32UserProbeAddress;
      v10 = (*(_DWORD *)(v9 + 44) & 0x20) != 0 && gfIMEShowStatus;
      LOBYTE(v3) = 1;
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v8 + 16), v3, v5, v6);
      if ( v11 || (v11 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 80LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v8 + 44) ^= (v10 ^ *(_DWORD *)(v8 + 44)) & 1;
      }
      if ( v7 != gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v7, (struct tagIMEUI *)v8, v11, v10);
      if ( *((char *)a1 + 44) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
