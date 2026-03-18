/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18011BC14
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18010ACE8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        PVOID *a4)
{
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD); // rcx
  signed int v10; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  PVOID pv; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18[2]; // [rsp+38h] [rbp-10h] BYREF

  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  v9 = (void (__fastcall ***)(_QWORD))v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 48) = 0;
    *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v8 = &CEffectCompilationTask::`vftable';
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = this;
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = a3;
  }
  else
  {
    v9 = 0LL;
  }
  pv = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x75u);
    goto LABEL_21;
  }
  (**v9)(v9);
  ThreadpoolWork = CreateThreadpoolWork(lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_, pv, 0LL);
  *((_QWORD *)pv + 5) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    v10 = 0;
  }
  else
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x78u);
  }
  else
  {
    v18[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v13 = *((_DWORD *)this + 28);
    v14 = v13 + 1;
    if ( v13 + 1 >= v13 )
    {
      v10 = 0;
      if ( v14 <= *((_DWORD *)this + 27) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = pv;
        *((_DWORD *)this + 28) = v14;
LABEL_18:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(v18);
        SubmitThreadpoolWork(*((PTP_WORK *)pv + 5));
        *a4 = pv;
        return (unsigned int)v10;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8u, 1, &pv);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v10 >= 0 )
      goto LABEL_18;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Cu);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(v18);
  }
LABEL_21:
  if ( pv )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)pv + 8LL))(pv);
  return (unsigned int)v10;
}
