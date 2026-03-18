/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800A68E4
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A47D4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A683C (-SetupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A6890 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v2; // edi
  __int64 v5; // xmm1_8
  int CompositionInputSink; // eax
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  unsigned int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[24]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v11 = 24;
  v2 = 0;
  memset(&v11[4], 0, 20);
  if ( *((_QWORD *)this + 2) )
  {
    CInputSinkStruct::CleanupEndpoints(this);
    CloseHandle(*((HANDLE *)this + 2));
  }
  v5 = *(_QWORD *)&v11[16];
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)v11;
  *((_QWORD *)this + 5) = v5;
  if ( a2 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(a2, v11);
    if ( CompositionInputSink < 0 )
    {
      v10 = 50;
    }
    else
    {
      v7 = *((_QWORD *)this + 2);
      v8 = *(_QWORD *)&v11[16];
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)v11;
      *((_QWORD *)this + 5) = v8;
      CompositionInputSink = NtQueryCompositionInputSinkLuid(v7, (char *)this + 48);
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
