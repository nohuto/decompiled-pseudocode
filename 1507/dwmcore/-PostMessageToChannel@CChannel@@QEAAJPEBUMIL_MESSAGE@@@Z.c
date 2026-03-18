/*
 * XREFs of ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18004FDFC
 * Callers:
 *     ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x180063180 (-PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v4; // edi
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CChannel *v6; // rax
  CChannel *v7; // rbx
  CChannel **v8; // rcx

  v4 = 0;
  v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (CChannel *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (CChannel *)v5(WPF::g_pProcessHeap, 48LL);
  v7 = v6;
  if ( v6 )
  {
    *((_OWORD *)v6 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v6 + 10) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v8 = (CChannel **)*((_QWORD *)this + 10);
    *(_QWORD *)v7 = (char *)this + 72;
    *((_QWORD *)v7 + 1) = v8;
    if ( *v8 != (CChannel *)((char *)this + 72) )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)this + 10) = v7;
    SetEvent(*((HANDLE *)this + 11));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x383u);
  }
  return v4;
}
