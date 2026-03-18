/*
 * XREFs of ?Initialize@CEffectCompilationService@@AEAAJXZ @ 0x1800B3EB4
 * Callers:
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B3D90 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

__int64 __fastcall CEffectCompilationService::Initialize(CEffectCompilationService *this)
{
  HANDLE EventW; // rax
  int v3; // eax
  unsigned int v4; // ebx
  signed int LastError; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 3) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x22u);
      return v4;
    }
  }
  v3 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 37;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v7);
    return v4;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(), CEffectCompilationService *))(**((_QWORD **)this + 2) + 264LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_,
         this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 45;
    goto LABEL_12;
  }
  return 0;
}
