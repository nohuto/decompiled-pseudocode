/*
 * XREFs of ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800A37D8
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A41C0 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CTransportCmdPacker::AllocateNotification(
        WPF *a1,
        int a2,
        unsigned int a3,
        void **a4,
        _QWORD *a5,
        _QWORD *a6)
{
  void *v6; // rsi
  unsigned int v7; // r14d
  int v11; // eax
  unsigned int v12; // ebp
  _DWORD *v13; // rbx
  void *v15; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = a3 + 68;
  v15 = 0LL;
  if ( a3 + 68 < a3 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x3Fu);
  }
  else
  {
    v11 = WPF::HrAlloc(a1, v7, (unsigned __int64)&v15, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x41u);
      v6 = v15;
    }
    else
    {
      v13 = v15;
      memset_0(v15, 0, v7);
      *v13 = 10;
      v13[1] = v7;
      *a5 = v13 + 10;
      v13[10] = a2;
      *a4 = v13;
      if ( a6 && a3 )
        *a6 = v13 + 17;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v6);
  return v12;
}
