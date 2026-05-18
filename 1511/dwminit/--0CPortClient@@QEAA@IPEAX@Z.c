/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x180004F80
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004C60 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, int a2, void *a3)
{
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = a2;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 10) = GetProcessHeap();
  GetNativeSystemInfo(&SystemInfo);
  if ( !SystemInfo.wProcessorArchitecture || SystemInfo.wProcessorArchitecture == 5 )
  {
    *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
    *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
    *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
    goto LABEL_7;
  }
  if ( SystemInfo.wProcessorArchitecture == 9 || SystemInfo.wProcessorArchitecture == 12 )
  {
    *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
    *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
    *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
LABEL_7:
    *((_QWORD *)this + 4) = CPortClient::SendComplexSyncRequestNative;
  }
  return this;
}
