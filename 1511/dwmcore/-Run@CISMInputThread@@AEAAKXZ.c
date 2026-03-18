/*
 * XREFs of ?Run@CISMInputThread@@AEAAKXZ @ 0x1800A8D9C
 * Callers:
 *     ?RunInputThreadStatic@CISMInputThread@@SAKPEAX@Z @ 0x1800A8D90 (-RunInputThreadStatic@CISMInputThread@@SAKPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CISMInputThread::Run(CISMInputThread *this)
{
  unsigned int v1; // esi
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  int SystemInputHost; // eax
  __int64 v6; // rdi
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    goto LABEL_7;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   8LL);
  if ( v4 )
    *v4 = &CInputProxy::`vftable';
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
  {
    SystemInputHost = CoreUICreate(v2);
    v1 = SystemInputHost;
    if ( SystemInputHost < 0 )
    {
      v8 = 128;
    }
    else
    {
      SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 1), (char *)this + 16);
      v1 = SystemInputHost;
      if ( SystemInputHost >= 0 )
      {
LABEL_7:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 224LL))(*v2);
        goto LABEL_13;
      }
      v8 = 129;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SystemInputHost, v8);
  }
  else
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Eu);
  }
LABEL_13:
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *((_QWORD *)this + 1) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (v1 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v1;
  return v1;
}
