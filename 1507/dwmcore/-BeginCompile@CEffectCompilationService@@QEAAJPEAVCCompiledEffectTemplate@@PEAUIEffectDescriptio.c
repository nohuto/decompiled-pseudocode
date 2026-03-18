/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E9808
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1801155E0 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        PVOID *a4)
{
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD); // rdi
  signed int v10; // edi
  PVOID v11; // rsi
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // ebx
  int v18; // eax
  PVOID pv; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+38h] [rbp-8h] BYREF

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
LABEL_6:
    v11 = pv;
    goto LABEL_18;
  }
  (**v9)(v9);
  ThreadpoolWork = CreateThreadpoolWork(lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_::_helper_func_cdecl_, pv, 0LL);
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
    goto LABEL_6;
  }
  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v14 = *((_DWORD *)this + 28);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v10 = -2147024362;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x7Cu);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
    goto LABEL_6;
  }
  v10 = 0;
  if ( v15 > *((_DWORD *)this + 27) )
  {
    v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8u, 1, &pv);
    v16 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
    v10 = v16;
    if ( v16 < 0 )
      goto LABEL_24;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = pv;
    *((_DWORD *)this + 28) = v15;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  SubmitThreadpoolWork(*((PTP_WORK *)pv + 5));
  v11 = 0LL;
  *a4 = pv;
  pv = 0LL;
LABEL_18:
  if ( v11 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
  return (unsigned int)v10;
}
