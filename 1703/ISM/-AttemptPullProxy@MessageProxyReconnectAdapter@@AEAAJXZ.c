/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095DC4
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800959E4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180095D80 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     Template_sqq @ 0x1800957D4 (Template_sqq.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800960B4 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  __int64 *v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rcx
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    MEMORY[0] = 191;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  ++*((_DWORD *)this + 10);
  v16 = 0;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v16);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_18;
    v7 = 274;
    goto LABEL_17;
  }
  v8 = *((_QWORD *)this + 7);
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 *))(*(_QWORD *)v8 + 40LL))(
         v8,
         StringRawBuffer,
         v16,
         &v17);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v17);
    v11 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
           v17,
           &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
           v2);
    v6 = v3;
    if ( v3 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_18;
      v7 = 288;
      goto LABEL_17;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 56LL))(v17, (char *)this + 8);
    v6 = v3;
    if ( v3 < 0 && (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    {
      v7 = 289;
LABEL_17:
      Template_sqq(v5, v4, "MessageProxyReconnectAdapter::CreateRemoteProxy", v7, v3);
    }
  }
LABEL_18:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v6 )
  {
    if ( ((v6 + 2018375675) & 0xFFFFFFFB) != 0 )
    {
      if ( v6 >= 0 )
        goto LABEL_35;
      v14 = 243;
    }
    else
    {
      if ( *((_DWORD *)this + 10) < MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_35;
      if ( !MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_35;
      MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
      if ( v6 >= 0 )
        goto LABEL_35;
      v14 = 234;
    }
    if ( v6 == -2147024882 )
      MEMORY[0] = v14;
    MEMORY[0] = v14;
  }
  else
  {
    v13 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v13 < 0 )
    {
      if ( v13 == -2147024882 )
        MEMORY[0] = 217;
      MEMORY[0] = 217;
    }
  }
LABEL_35:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
