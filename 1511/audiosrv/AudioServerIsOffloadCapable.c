/*
 * XREFs of AudioServerIsOffloadCapable @ 0x18008A280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180064324 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, const unsigned __int16 *a2, unsigned int a3, _DWORD *a4)
{
  CEndpointCharacteristics *v4; // rbx
  int v8; // ebp
  int AliasedEndpointCharacteristics; // eax
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rdi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  CEndpointCharacteristics *v13; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !g_PolicyManager )
    goto LABEL_5;
  v8 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v12);
  if ( v8 < 0 )
    goto LABEL_7;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 128LL))(v12, a3, 0LL) )
  {
LABEL_5:
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       a2,
                                       &v13);
    v4 = v13;
    v8 = AliasedEndpointCharacteristics;
    if ( AliasedEndpointCharacteristics >= 0 )
      *a4 = CEndpointCharacteristics::IsOffloadCapable(v13);
  }
  else
  {
    *a4 = 0;
  }
LABEL_7:
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = 0LL;
  }
  if ( v4 )
  {
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4);
    else
      v10((volatile signed __int32 *)v4);
  }
  return (unsigned int)v8;
}
