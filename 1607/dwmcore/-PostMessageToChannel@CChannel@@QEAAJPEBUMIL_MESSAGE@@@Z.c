/*
 * XREFs of ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18004AE0C
 * Callers:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A84F8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v4; // edi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CChannel *v6; // rax
  CChannel *v7; // rbx
  CChannel **v8; // rcx

  v4 = 0;
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (CChannel *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (CChannel *)v5(WPF::g_pProcessHeap, 48uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_OWORD *)v6 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v6 + 10) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v8 = (CChannel **)*((_QWORD *)this + 9);
    if ( *v8 != (CChannel *)((char *)this + 64) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 64;
    *((_QWORD *)v7 + 1) = v8;
    *v8 = v7;
    *((_QWORD *)this + 9) = v7;
    SetEvent(*((HANDLE *)this + 10));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1A4u);
  }
  return v4;
}
