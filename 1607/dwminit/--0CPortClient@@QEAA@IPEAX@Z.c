/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000544C
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, int a2, void *a3)
{
  const struct reg_FeatureDescriptor *v4; // rcx
  int v5; // ecx
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = a2;
  *((_QWORD *)this + 9) = a3;
  GetNativeSystemInfo(&SystemInfo);
  if ( EvaluateCurrentState(v4) )
  {
    if ( SystemInfo.wProcessorArchitecture <= 0xCu )
    {
      v5 = 4641;
      if ( _bittest(&v5, SystemInfo.wProcessorArchitecture) )
      {
LABEL_4:
        *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
        *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
        *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
LABEL_5:
        *((_QWORD *)this + 4) = CPortClient::SendComplexSyncRequestNative;
      }
    }
  }
  else
  {
    if ( !SystemInfo.wProcessorArchitecture || SystemInfo.wProcessorArchitecture == 5 )
      goto LABEL_4;
    if ( SystemInfo.wProcessorArchitecture == 9 || SystemInfo.wProcessorArchitecture == 12 )
    {
      *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
      *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
      *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
      goto LABEL_5;
    }
  }
  return this;
}
