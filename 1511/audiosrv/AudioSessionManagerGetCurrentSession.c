/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x180037D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180016310 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        CAudioSessionManager ***a1,
        struct _GUID *a2,
        unsigned int a3,
        void **a4,
        unsigned __int16 **a5)
{
  CAudioSessionManager **v5; // r12
  int (__fastcall *v8)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // rdi
  int Process; // eax
  int v10; // esi
  struct IUnknown *v11; // rbx
  unsigned int v12; // r15d
  int v13; // ebx
  unsigned __int8 v14; // r14
  unsigned int v15; // ebx
  __int64 (__fastcall *v16)(CAudioSessionManager *, struct IAudioProcess *, const struct _GUID *, unsigned int, unsigned int, int, void **, unsigned __int16 **); // rsi
  int v17; // eax
  struct IAudioProcess *v19; // [rsp+40h] [rbp-10h] BYREF
  struct IUnknown *v20; // [rsp+48h] [rbp-8h] BYREF
  int v21; // [rsp+90h] [rbp+40h] BYREF
  struct _GUID *v22; // [rsp+98h] [rbp+48h]
  struct IUnknown *v23; // [rsp+A8h] [rbp+58h] BYREF

  v22 = a2;
  v5 = *a1;
  v20 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  *a5 = 0LL;
  *a4 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 86LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, *v5);
  }
  v8 = *(int (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL);
  if ( v8 == CWindowsPolicyManager::RpcGetProcess )
    Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, 0LL, &v19);
  else
    Process = v8(g_PolicyManager, 0LL, &v19);
  v10 = Process;
  if ( Process < 0
    || (v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                *(_QWORD *)&g_DeviceEnumerator,
                *((_QWORD *)*v5 + 30),
                &v20),
        v10 < 0) )
  {
LABEL_30:
    v11 = v23;
    goto LABEL_31;
  }
  v11 = v23;
  if ( v23 != v20 )
  {
    ATL::AtlComQIPtrAssign(&v23, v20, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v11 = v23;
  }
  if ( v11 )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v11->lpVtbl[1].QueryInterface)(v11, &v21);
    if ( v10 >= 0 )
    {
      v12 = a3 & 0x60000000;
      v13 = ~(unsigned __int8)(a3 >> 18) & 2 | (a3 >> 28) & 1;
      v14 = BYTE2(a3) & 1;
      v15 = v21 == 1 ? v13 & 0xFFFFFFFD : v13 | 8;
      v16 = *(__int64 (__fastcall **)(CAudioSessionManager *, struct IAudioProcess *, const struct _GUID *, unsigned int, unsigned int, int, void **, unsigned __int16 **))(*(_QWORD *)*v5 + 112LL);
      v17 = v16 == CAudioSessionManager::GetCurrentSession
          ? CAudioSessionManager::GetCurrentSession(*v5, v19, v22, v15, v12, v14, a4, a5)
          : v16(*v5, v19, v22, v15, v12, v14, a4, a5);
      v10 = v17;
      if ( v17 >= 0 )
        goto LABEL_18;
    }
    goto LABEL_30;
  }
  v10 = -2147467262;
LABEL_31:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      87LL,
      &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      (unsigned int)v10);
LABEL_18:
    v11 = v23;
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 16LL))(v19);
    v11 = v23;
    v19 = 0LL;
  }
  if ( v11 )
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  return (unsigned int)v10;
}
