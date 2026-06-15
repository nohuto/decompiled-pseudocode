/*
 * XREFs of AudioServerIsOffloadCapable @ 0x1800736D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x18004F0B8 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  void (*v8)(void); // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  CEndpointCharacteristics *v11; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( !g_PolicyManager )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v10);
  if ( v7 < 0 )
    goto LABEL_7;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 136LL))(v10, a3, 0LL) )
  {
LABEL_5:
    v7 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a2,
           &v11);
    if ( v7 >= 0 )
      *a4 = CEndpointCharacteristics::IsOffloadCapable(v11);
  }
  else
  {
    *a4 = 0;
  }
LABEL_7:
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v10 = 0LL;
  }
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerIsOffloadCapable", 4313, v7);
  if ( v11 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v11);
    else
      v8();
  }
  return (unsigned int)v7;
}
