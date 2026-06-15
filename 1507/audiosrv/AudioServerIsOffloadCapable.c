/*
 * XREFs of AudioServerIsOffloadCapable @ 0x180037810
 * Callers:
 *     <none>
 * Callees:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180011C60 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x1800663C8 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(void *a1, unsigned __int16 *a2, unsigned int a3, _DWORD *a4)
{
  CEndpointCharacteristics *v4; // rbx
  __int64 (__fastcall *v8)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // rsi
  int Process; // eax
  volatile int *v10; // rdx
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(CProcess *, unsigned int, enum ResourceType); // rbp
  int v13; // eax
  unsigned int (__fastcall *v14)(__int64, volatile int *); // rdi
  int AliasedEndpointCharacteristics; // eax
  CProcess *v17; // [rsp+20h] [rbp-28h] BYREF
  CEndpointCharacteristics *v18; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( g_PolicyManager )
  {
    v8 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                            + 32LL);
    if ( v8 == CWindowsPolicyManager::RpcGetProcess )
      Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, a1, &v17);
    else
      Process = v8(g_PolicyManager, a1, &v17);
    v11 = Process;
    if ( Process < 0 )
      goto LABEL_9;
    v12 = *(__int64 (__fastcall **)(CProcess *, unsigned int, enum ResourceType))(*(_QWORD *)v17 + 128LL);
    if ( v12 == CProcess::UseOfResourceAllowed )
      v13 = CProcess::UseOfResourceAllowed(v17, a3, ResourceTypeStatic);
    else
      v13 = v12(v17, a3, ResourceTypeStatic);
    if ( !v13 )
    {
      *a4 = 0;
      goto LABEL_9;
    }
  }
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (CEndpointCharacteristicsCache *)a1,
                                     a2,
                                     &v18);
  v4 = v18;
  v11 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
    *a4 = CEndpointCharacteristics::IsOffloadCapable(v18);
LABEL_9:
  if ( v17 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v17 + 16LL))(v17);
    v17 = 0LL;
  }
  if ( v4 )
  {
    v14 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v4 + 16LL);
    if ( v14 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v4,
        v10);
    else
      ((void (__fastcall *)(CEndpointCharacteristics *))v14)(v4);
  }
  return v11;
}
