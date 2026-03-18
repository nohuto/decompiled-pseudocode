/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A41C0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800A4FA0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800A62AC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18010AB80 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800A37D8 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CChannelContext *this, const struct MIL_MESSAGE *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  _OWORD *v6; // rcx
  _DWORD *v7; // r14
  int v8; // eax
  int v10; // eax
  _OWORD *v11; // rdx
  void *v12; // rcx
  _DWORD *v13; // [rsp+68h] [rbp+38h] BYREF
  _OWORD *v14; // [rsp+70h] [rbp+40h] BYREF
  void *v15; // [rsp+78h] [rbp+48h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( *(_DWORD *)a2 == 17 )
  {
    v10 = CTransportCmdPacker::AllocateNotification(this, 17, *((_DWORD *)a2 + 4), (void **)&v13, &v14, &v15);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v11 = v14;
      v12 = v15;
      *v14 = *(_OWORD *)a2;
      *((_QWORD *)v11 + 2) = *((_QWORD *)a2 + 2);
      *(_QWORD *)((char *)v11 + 20) = v12;
      if ( *((_DWORD *)a2 + 4) )
        memcpy_0(v12, *(const void **)((char *)a2 + 20), *((unsigned int *)a2 + 4));
      goto LABEL_4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xACu);
LABEL_9:
    v7 = v13;
    goto LABEL_6;
  }
  v4 = CTransportCmdPacker::AllocateNotification(this, *(_DWORD *)a2, 0, (void **)&v13, &v14, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC5u);
    goto LABEL_9;
  }
  v6 = v14;
  *v14 = *(_OWORD *)a2;
  *((_QWORD *)v6 + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v6 + 6) = *((_DWORD *)a2 + 6);
LABEL_4:
  v7 = v13;
  v13[4] = *((_DWORD *)this + 4);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4), v7);
  v5 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCEu);
LABEL_6:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _DWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  return v5;
}
