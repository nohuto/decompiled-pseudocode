/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x18005ACFC
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18005A1C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?SetupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x18005AC54 (-SetupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x18005ACA8 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int CompositionInputSink; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[20]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v11 = 20;
  v2 = 0;
  *(_OWORD *)&v11[4] = 0uLL;
  if ( *((_QWORD *)this + 2) )
  {
    CInputSinkStruct::CleanupEndpoints(this);
    CloseHandle(*((HANDLE *)this + 2));
  }
  v5 = *(_DWORD *)&v11[16];
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)v11;
  *((_DWORD *)this + 10) = v5;
  if ( a2 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(a2, v11);
    if ( CompositionInputSink < 0 )
    {
      v10 = 50;
    }
    else
    {
      v7 = *(_DWORD *)&v11[16];
      v8 = *((_QWORD *)this + 2);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)v11;
      *((_DWORD *)this + 10) = v7;
      CompositionInputSink = NtQueryCompositionInputSinkLuid(v8, (char *)this + 44);
      if ( CompositionInputSink >= 0 )
      {
        CInputSinkStruct::SetupEndpoints(this);
        return v2;
      }
      v10 = 53;
    }
    v2 = CompositionInputSink | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CompositionInputSink | 0x10000000, v10);
  }
  return v2;
}
