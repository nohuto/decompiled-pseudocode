/*
 * XREFs of ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18003E024
 * Callers:
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x18003DEC8 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x18003E160 (-Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z.c)
 *     ?GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAUIAudioDuckingManager@@@Z @ 0x18003E210 (-GetDuckingManager@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionManagerProviderInfo@@PEAPEAUIAud.c)
 *     ?QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003E290 (-QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::FinalConstruct(CAudioSessionManagerProvider *this)
{
  CWindowsPolicyManager *v1; // rdi
  int v3; // esi
  __int64 (__fastcall *v4)(CWindowsPolicyManager *__hidden, const struct _GUID *, void **); // rbx
  int v5; // eax
  int (*v6)(CWindowsPolicyManager *__hidden, struct IAudioSessionManagerProviderInfo *, struct IAudioDuckingManager **); // rbx
  int DuckingManager; // eax
  struct IAudioDuckingManager *v8; // r15
  void *v9; // r14
  void *v11; // [rsp+50h] [rbp+30h] BYREF
  struct IAudioDuckingManager *v12; // [rsp+58h] [rbp+38h] BYREF
  CWindowsPolicyManager *v13; // [rsp+60h] [rbp+40h] BYREF

  v12 = 0LL;
  v1 = 0LL;
  v11 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v13 = 0LL;
  v3 = CWindowsPolicyManager::Create(&v13);
  if ( v3 < 0 )
  {
    v3 = -2147467262;
  }
  else
  {
    v1 = v13;
    g_PolicyManager = v13;
  }
  if ( v3 < 0
    || ((v4 = **(__int64 (__fastcall ***)(CWindowsPolicyManager *__hidden, const struct _GUID *, void **))v1,
         v4 != CWindowsPolicyManager::QueryInterface)
      ? (v5 = v4(v1, &GUID_a68ab569_b923_4330_a258_1735412d392e, &v11))
      : (v5 = CWindowsPolicyManager::QueryInterface(v1, &GUID_a68ab569_b923_4330_a258_1735412d392e, &v11)),
        (v3 = v5, v5 < 0)
     || ((v6 = *(int (**)(CWindowsPolicyManager *__hidden, struct IAudioSessionManagerProviderInfo *, struct IAudioDuckingManager **))(*(_QWORD *)v1 + 24LL),
          v6 != CWindowsPolicyManager::GetDuckingManager)
       ? (DuckingManager = ((__int64 (__fastcall *)(CWindowsPolicyManager *, CAudioSessionManagerProvider *, struct IAudioDuckingManager **))v6)(
                             v1,
                             this,
                             &v12))
       : (DuckingManager = CWindowsPolicyManager::GetDuckingManager(v1, this, &v12)),
         v3 = DuckingManager,
         DuckingManager < 0)) )
  {
    v8 = v12;
    v9 = v11;
  }
  else
  {
    v8 = 0LL;
    g_PolicyManager = v1;
    v1 = 0LL;
    g_DuckingManager = v12;
    v9 = 0LL;
    g_PolicyEventsHandler = (struct ISessionInternalEvents *)v11;
    v11 = 0LL;
    v12 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)v8 + 16LL))(v8);
    v12 = 0LL;
    v9 = v11;
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)v1 + 16LL))(v1);
    v9 = v11;
  }
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v3;
}
