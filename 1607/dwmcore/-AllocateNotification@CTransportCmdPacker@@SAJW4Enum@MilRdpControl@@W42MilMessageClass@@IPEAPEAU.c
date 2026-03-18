/*
 * XREFs of ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800B2A3C
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransportCmdPacker::AllocateNotification(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v7; // esi
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v7 = 0;
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x44uLL);
  else
    v9 = (_DWORD *)v8(WPF::g_pProcessHeap, 68LL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x44uLL);
    *v10 = 10;
    v10[1] = 68;
    v10[10] = a2;
    *a5 = v10 + 10;
    *a4 = v10;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    0LL);
  return v7;
}
