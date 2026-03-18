/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A8230
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AA2E8 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CDWMInputThread@@QEAAJXZ @ 0x1800A7DB8 (-Reset@CDWMInputThread@@QEAAJXZ.c)
 *     ?IsRunningOnDesktop@CInputManager@@AEAAHXZ @ 0x1800A81FC (-IsRunningOnDesktop@CInputManager@@AEAAHXZ.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A9DE0 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     IsCreateSystemInputHostPresent @ 0x1800BF14C (IsCreateSystemInputHostPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x180170B48 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  HANDLE **v4; // rsi
  int v5; // eax
  CISMInputThread *v6; // rdi
  HANDLE Thread; // rax
  int v9; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( !*((_QWORD *)this + 27) && (unsigned __int8)IsCreateSystemInputHostPresent(this) )
  {
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     32LL);
    if ( !v3 )
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29u);
      dwCreationFlags = 309;
      goto LABEL_18;
    }
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    *((_QWORD *)this + 27) = v3;
  }
  v4 = (HANDLE **)((char *)this + 208);
  if ( !*((_QWORD *)this + 26) )
  {
    if ( (unsigned int)CInputManager::IsRunningOnDesktop(this) )
    {
      v5 = CDWMInputThread::Create(*((struct CComposition **)this + 2), (struct CDWMInputThread **)this + 26);
      v1 = v5;
      if ( v5 < 0 )
      {
        dwCreationFlags = 318;
LABEL_21:
        v9 = v5;
        goto LABEL_22;
      }
    }
  }
  v6 = (CISMInputThread *)*((_QWORD *)this + 27);
  if ( v6 )
  {
    if ( *(_QWORD *)v6 )
      CISMInputThread::Stop(v6);
    v1 = 0;
    Thread = CreateThread(0LL, 0LL, CISMInputThread::RunInputThreadStatic, v6, 4u, 0LL);
    *(_QWORD *)v6 = Thread;
    if ( Thread )
    {
      SetThreadPriority(Thread, 16);
      ResumeThread(*(HANDLE *)v6);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x46u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Fu);
    v1 = -2147024882;
    dwCreationFlags = 323;
LABEL_18:
    v9 = -2147024882;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, dwCreationFlags);
    return v1;
  }
LABEL_13:
  if ( *v4 )
  {
    v5 = CDWMInputThread::Reset(*v4);
    v1 = v5;
    if ( v5 < 0 )
    {
      dwCreationFlags = 328;
      goto LABEL_21;
    }
  }
  return v1;
}
