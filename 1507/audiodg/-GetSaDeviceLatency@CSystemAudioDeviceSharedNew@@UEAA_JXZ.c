/*
 * XREFs of ?GetSaDeviceLatency@CSystemAudioDeviceSharedNew@@UEAA_JXZ @ 0x14000DF00
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000FC70 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetSaDeviceLatency(CSystemAudioDeviceSharedNew *this)
{
  CAudioDeviceGraph *v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 (__fastcall *v4)(CAudioDeviceGraph *__hidden, unsigned __int64, __int64 *); // rsi
  int Latency; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CAudioDeviceGraph *)*((_QWORD *)this + 10);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 8);
  v7 = 0LL;
  v4 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, unsigned __int64, __int64 *))(*(_QWORD *)v1 + 40LL);
  if ( v4 == CAudioDeviceGraph::GetLatency )
    Latency = CAudioDeviceGraph::GetLatency(v1, v3, &v7);
  else
    Latency = v4(v1, v3, &v7);
  if ( Latency >= 0 )
    return v7;
  return v2;
}
