/*
 * XREFs of ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800B4224
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A3D2C (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x1800A0268 (--0CChannel@@AEAA@PEAVCConnection@@I@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::Create(struct CConnection *a1, int a2, struct CChannel **a3)
{
  CChannel *v6; // rax
  CChannel *v7; // rdi
  int v8; // eax
  signed int v9; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v6 = (CChannel *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     240LL);
  if ( v6 )
    v7 = CChannel::CChannel(v6, a1, a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x318u);
    return (unsigned int)v9;
  }
  v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)v7 + 96));
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 85;
LABEL_20:
    v13 = v8;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
    goto LABEL_7;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v7 + 11) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v14 = 86;
    if ( v9 >= 0 )
      v9 = -2003304445;
    v13 = v9;
    goto LABEL_21;
  }
  v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)v7 + 184));
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 87;
    goto LABEL_20;
  }
LABEL_7:
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x321u);
  }
  else
  {
    *a3 = v7;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  }
  CMILRefCountBase::Release(v7);
  return (unsigned int)v9;
}
