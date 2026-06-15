/*
 * XREFs of ?GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400051B0
 * Callers:
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140005FA0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetSaDeviceLatency(CSystemAudioDeviceSharedBase *this)
{
  CAudioDeviceGraph *v1; // r9
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(CAudioDeviceGraph *__hidden, unsigned __int64, __int64 *); // rax
  int Latency; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
  v2 = *((_QWORD *)this + 1);
  v3 = 0LL;
  v7 = 0LL;
  v4 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, unsigned __int64, __int64 *))(*(_QWORD *)v1 + 64LL);
  if ( v4 == CAudioDeviceGraph::GetLatency )
    Latency = CAudioDeviceGraph::GetLatency(v1, v2, &v7);
  else
    Latency = v4(v1, v2, &v7);
  if ( Latency >= 0 )
    return v7;
  return v3;
}
