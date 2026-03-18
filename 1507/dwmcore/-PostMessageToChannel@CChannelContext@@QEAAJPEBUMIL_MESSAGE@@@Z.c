/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180062E60
 * Callers:
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x180061890 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180061A30 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800681C4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1800F0E30 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x180063410 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CChannelContext *this, const struct MIL_MESSAGE *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  _OWORD *v6; // rcx
  __int64 v7; // r14
  int v8; // eax
  int v10; // eax
  _OWORD *v11; // rdx
  void *v12; // rcx
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  _OWORD *v14; // [rsp+70h] [rbp+40h] BYREF
  void *v15; // [rsp+78h] [rbp+48h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( *(_DWORD *)a2 == 17 )
  {
    v10 = CTransportCmdPacker::AllocateNotification(this, 17LL, *((unsigned int *)a2 + 4), &v13, &v14, &v15);
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
  v4 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, 0LL, &v13, &v14, 0LL);
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
  *(_DWORD *)(v13 + 16) = *((_DWORD *)this + 4);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4), v7);
  v5 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCEu);
LABEL_6:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  return v5;
}
