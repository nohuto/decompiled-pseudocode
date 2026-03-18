/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B72D0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800437C8 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x1800B73B4 (--0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationService::Create(struct IMessageSession *a1, struct CEffectCompilationService **a2)
{
  CEffectCompilationService *v4; // rax
  unsigned int v5; // edi
  CEffectCompilationService *v6; // rsi
  HANDLE EventW; // rax
  int v8; // eax
  signed int v9; // ebx
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v4 = (CEffectCompilationService *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      120LL);
  v5 = 0;
  if ( v4 )
    v6 = CEffectCompilationService::CEffectCompilationService(v4, a1);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Du);
    return v5;
  }
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v6 + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x22u);
LABEL_19:
      v5 = v9;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x40u);
      goto LABEL_8;
    }
  }
  v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)v6 + 32));
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 37;
    goto LABEL_18;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), CEffectCompilationService *))(**((_QWORD **)v6 + 2) + 264LL))(
         *((_QWORD *)v6 + 2),
         *((_QWORD *)v6 + 3),
         lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_,
         v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 45;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v12);
    goto LABEL_19;
  }
  *a2 = v6;
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
LABEL_8:
  CMILRefCountBase::Release(v6);
  return v5;
}
