/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400014C0
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001F60 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002030 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x140004AA8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, __int64 a2, void *a3)
{
  const struct reg_FeatureDescriptor *v4; // rcx
  int v5; // ecx
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  GetNativeSystemInfo(&SystemInfo);
  if ( (unsigned int)EvaluateCurrentState(v4) )
  {
    if ( SystemInfo.wProcessorArchitecture > 0xCu )
      return this;
    v5 = 4641;
    if ( !_bittest(&v5, SystemInfo.wProcessorArchitecture) )
      return this;
    goto LABEL_4;
  }
  if ( !SystemInfo.wProcessorArchitecture || SystemInfo.wProcessorArchitecture == 5 )
  {
LABEL_4:
    *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
    *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
    *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
    *((_QWORD *)this + 4) = CPortClient::SendComplexSyncRequestNative;
    return this;
  }
  if ( SystemInfo.wProcessorArchitecture != 9 && SystemInfo.wProcessorArchitecture != 12 )
    return this;
  *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
  *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
  *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
  *((_QWORD *)this + 4) = CPortClient::SendComplexSyncRequestNative;
  return this;
}
