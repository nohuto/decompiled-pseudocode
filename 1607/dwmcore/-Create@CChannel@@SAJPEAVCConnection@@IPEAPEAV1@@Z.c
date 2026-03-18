/*
 * XREFs of ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800A89CC
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A871C (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x18004AB98 (--0CChannel@@AEAA@PEAVCConnection@@I@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x18004AC00 (-Release@CChannel@@UEAAKXZ.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
                     232LL);
  if ( v6 )
    v7 = CChannel::CChannel(v6, a1, a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x183u);
    return (unsigned int)v9;
  }
  v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)v7 + 88));
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 65;
    goto LABEL_20;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v7 + 10) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v14 = 66;
    if ( v9 >= 0 )
      v9 = -2003304445;
    v13 = v9;
    goto LABEL_21;
  }
  v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)v7 + 176));
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 67;
LABEL_20:
    v13 = v8;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x188u);
  }
  else
  {
    *a3 = v7;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  }
  CChannel::Release(v7);
  return (unsigned int)v9;
}
