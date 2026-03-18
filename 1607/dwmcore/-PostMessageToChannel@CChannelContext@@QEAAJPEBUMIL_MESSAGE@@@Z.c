/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4
 * Callers:
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800097E0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18003B3A0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800AA9FC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180121160 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A84F8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800B2A3C (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CConnection **this, const struct MIL_MESSAGE *a2, __int64 a3)
{
  int v5; // eax
  struct UCE_RDP_HEADER *v6; // rsi
  unsigned int v7; // ebx
  _OWORD *v8; // rcx
  struct UCE_RDP_HEADER *v9; // rdx
  int v10; // eax
  struct UCE_RDP_HEADER *v12; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, a3, &v12, &v13);
  v6 = v12;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x95u);
  }
  else
  {
    v8 = v13;
    v9 = v12;
    *v13 = *(_OWORD *)a2;
    *((_QWORD *)v8 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v8 + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)v6 + 4) = *((_DWORD *)this + 4);
    v10 = CConnection::PostMessageToClient(this[4], v9);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9Du);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct UCE_RDP_HEADER *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v6);
  return v7;
}
