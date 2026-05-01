/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A550
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18001A984 (-RmpGameModeSetNewRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpGameModeRecheckCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180030B24 (-RmpGameModeRecheckCurrentRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotifyGameModeExtensionRecipientsPresent@@YAXE@Z @ 0x180037CE8 (-RmpSystemNotifyGameModeExtensionRecipientsPresent@@YAXE@Z.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r14
  unsigned __int8 v5; // cl
  char v6; // r15
  bool v7; // di
  __int64 v8; // rax
  int v9; // r12d
  unsigned int v10; // r13d
  char v12; // di
  bool v13; // [rsp+38h] [rbp-D0h] BYREF
  bool v14; // [rsp+39h] [rbp-CFh]
  unsigned int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v18; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v19; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+98h] [rbp-70h] BYREF
  void *v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B8h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  unsigned int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  bool *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]

  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800422BD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v21 = &unk_1800422C8;
    UserData.Reserved = 2;
    v22 = 25;
    v23 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *(_QWORD *)a2;
  RtlAcquireSRWLockExclusive(a2 + 10);
  for ( a2[14] = GetCurrentThreadId(); (*((_BYTE *)a2 + 77) & 1) != 0; a2[14] = GetCurrentThreadId() )
  {
    *((_BYTE *)a2 + 77) &= ~1u;
    v5 = *((_BYTE *)a2 + 77);
    v13 = (v5 & 4) != 0;
    if ( ((v5 ^ (v5 >> 1)) & 8) != 0 )
    {
      v6 = 1;
      v12 = v5 ^ (v5 ^ (v5 >> 1)) & 8;
      *((_BYTE *)a2 + 77) = v12;
      v7 = (v12 & 8) != 0;
    }
    else
    {
      v6 = 0;
      v7 = 0;
    }
    v14 = v7;
    a2[14] = 0;
    RtlReleaseSRWLockExclusive(a2 + 10);
    if ( v6 && v7 )
      RmpSystemNotifyGameModeExtensionRecipientsPresent(1u);
    v8 = *((_QWORD *)a2 + 3);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 56);
    else
      v9 = 0;
    if ( v13 )
    {
      v10 = 0;
    }
    else
    {
      RtlAcquireSRWLockExclusive(v4 + 592);
      *(_DWORD *)(v4 + 620) = GetCurrentThreadId();
      v10 = *(_DWORD *)(v4 + 616);
      *(_DWORD *)(v4 + 620) = 0;
      RtlReleaseSRWLockExclusive(v4 + 592);
    }
    if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      v15 = v10;
      v32 = &v15;
      v34 = &v16;
      v36 = &v13;
      v33 = 4LL;
      v16 = v9;
      v35 = 4LL;
      v37 = 1LL;
      *(_DWORD *)&v18.Level = 4;
      v28.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&v18.Id = ((unsigned int)&unk_1800422E2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v18.Keyword = 1LL;
      v28.Size = *(unsigned __int16 *)off_18004D038;
      v29 = &unk_1800422ED;
      v28.Reserved = 2;
      v30 = 89;
      v31 = 1;
      EventWriteTransfer(RegHandle, &v18, 0LL, 0LL, 5u, &v28);
    }
    if ( v9 == v10 )
    {
      if ( v9 )
        RmpGameModeRecheckCurrentRecipient((struct _RM_GAME_MODE_CONTEXT *)a2);
    }
    else
    {
      RmpGameModeSetNewRecipient((struct _RM_GAME_MODE_CONTEXT *)a2, v10);
    }
    if ( v6 && !v14 )
      RmpSystemNotifyGameModeExtensionRecipientsPresent(0);
    RtlAcquireSRWLockExclusive(a2 + 10);
  }
  *((_BYTE *)a2 + 77) &= ~2u;
  a2[14] = 0;
  RtlReleaseSRWLockExclusive(a2 + 10);
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&v19.Level = 516;
    v24.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&v19.Id = ((unsigned int)&unk_1800423B6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v19.Keyword = 1LL;
    v24.Size = *(unsigned __int16 *)off_18004D038;
    v25 = &unk_1800423C1;
    v24.Reserved = 2;
    v26 = 25;
    v27 = 1;
    EventWriteTransfer(RegHandle, &v19, 0LL, 0LL, 2u, &v24);
  }
}
