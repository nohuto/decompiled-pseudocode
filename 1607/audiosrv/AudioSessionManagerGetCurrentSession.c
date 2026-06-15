/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x180028300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        const unsigned __int16 ****a1,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4,
        unsigned __int16 **a5)
{
  const unsigned __int16 ***v5; // rsi
  unsigned __int16 **v7; // r15
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // r9d
  const unsigned __int16 **v14; // rcx
  __int64 (__fastcall *v15)(const unsigned __int16 **, struct IAudioProcess *, const struct _GUID *, int, unsigned int, int, void **, unsigned __int16 **); // rax
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  struct IAudioProcess *v20; // [rsp+A8h] [rbp+48h] BYREF

  v5 = *a1;
  v7 = a5;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *a5 = 0LL;
  *a4 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 71LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, *v5);
  }
  v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
          g_PolicyManager,
          0LL,
          &v20);
  if ( v10 < 0 )
    goto LABEL_27;
  v10 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          (*v5)[30],
          &v18);
  if ( v10 < 0 )
    goto LABEL_27;
  v11 = v19;
  if ( v19 != v18 )
  {
    v12 = v19;
    v11 = 0LL;
    v19 = 0LL;
    if ( v18 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v18)(v18, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v19);
      v11 = v19;
    }
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = v19;
    }
  }
  if ( !v11 )
  {
    v10 = -2147467262;
LABEL_27:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetCurrentSession", 2074, v10);
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 ***))(*(_QWORD *)v11 + 24LL))(v11, &a5);
  if ( v10 < 0 )
    goto LABEL_27;
  v13 = (_DWORD)a5 == 1 ? (a3 >> 28) & 1 : ~(unsigned __int8)(a3 >> 18) & 2 | (a3 >> 28) & 1 | 8;
  v14 = *v5;
  v15 = (__int64 (__fastcall *)(const unsigned __int16 **, struct IAudioProcess *, const struct _GUID *, int, unsigned int, int, void **, unsigned __int16 **))*((_QWORD *)**v5 + 14);
  v16 = v15 == CAudioSessionManager::GetCurrentSession
      ? CAudioSessionManager::GetCurrentSession(v14, v20, a2, v13, a3 & 0x60000000, BYTE2(a3) & 1, a4, v7)
      : ((__int64 (__fastcall *)(const unsigned __int16 **, struct IAudioProcess *, const struct _GUID *))v15)(
          v14,
          v20,
          a2);
  v10 = v16;
  if ( v16 < 0 )
    goto LABEL_27;
LABEL_19:
  if ( v20 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v20 + 16LL))(v20);
    v20 = 0LL;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v10;
}
