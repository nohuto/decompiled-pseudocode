/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A6F18
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8E54 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CDWMInputThread@@QEAAJXZ @ 0x1800A6498 (-Reset@CDWMInputThread@@QEAAJXZ.c)
 *     ?IsRunningOnDesktop@CInputManager@@AEAAHXZ @ 0x1800A6EE4 (-IsRunningOnDesktop@CInputManager@@AEAAHXZ.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8B74 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     IsCreateSystemInputHostPresent @ 0x1800BC3EC (IsCreateSystemInputHostPresent.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801434C8 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  HANDLE **v4; // r14
  int v5; // eax
  HANDLE *v6; // rdi
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
      dwCreationFlags = 301;
      goto LABEL_18;
    }
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    *((_QWORD *)this + 27) = v3;
    v1 = 0;
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
        dwCreationFlags = 310;
LABEL_21:
        v9 = v5;
        goto LABEL_22;
      }
    }
  }
  v6 = (HANDLE *)*((_QWORD *)this + 27);
  if ( v6 )
  {
    if ( *v6 )
      CISMInputThread::Stop(*((CISMInputThread **)this + 27));
    v1 = 0;
    Thread = CreateThread(0LL, 0LL, CISMInputThread::RunInputThreadStatic, v6, 4u, 0LL);
    *v6 = Thread;
    if ( Thread )
    {
      SetThreadPriority(Thread, 16);
      ResumeThread(*v6);
      goto LABEL_13;
    }
    v1 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x46u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Fu);
    dwCreationFlags = 315;
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
      dwCreationFlags = 320;
      goto LABEL_21;
    }
  }
  return v1;
}
