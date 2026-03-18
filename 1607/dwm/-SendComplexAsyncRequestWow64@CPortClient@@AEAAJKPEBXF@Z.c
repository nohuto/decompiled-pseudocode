/*
 * XREFs of ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001640
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001490 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140003EF6 (memcpy_0.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x140004AA8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x140005564 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequestWow64(CPortClient *this, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // edi
  HANDLE ProcessHeap; // rax
  struct _PORT_MESSAGE *v11; // rax
  struct _PORT_MESSAGE *v12; // rbx
  const struct reg_FeatureDescriptor *v13; // rcx
  int v14; // eax
  void *v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  NTSTATUS v18; // eax
  HANDLE v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-38h]

  v4 = 0;
  if ( !a3 )
  {
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024890, 0x6Au);
    return 2147942406LL;
  }
  ProcessHeap = GetProcessHeap();
  v11 = (struct _PORT_MESSAGE *)HeapAlloc(ProcessHeap, 8u, (unsigned __int16)(a4 + 48));
  v12 = v11;
  if ( !v11 )
  {
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x6Du);
    return 2147942414LL;
  }
  v11[1].u1.Length = a2;
  v11->u1.s1.DataLength = a4 + 8;
  v11->u1.s1.TotalLength = a4 + 48;
  if ( (__int16)(a4 + 48) > 512 )
    AssertW(
      0LL,
      L"pMsg->u1.s1.TotalLength <= 512",
      L"LpcVerifyOutgoingPayloadSize",
      L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
      0x13Au);
  memcpy_0(&v12[1].DoNotUseThisField, a3, a4);
  v14 = EvaluateCurrentState(v13);
  v15 = (void *)*((_QWORD *)this + 6);
  if ( v14 )
  {
    v16 = NtAlpcSendWaitReceivePort(v15, 0x10000LL, v12, 0LL, 0LL, 0LL, 0LL, 0LL);
    v17 = CPortClient::CheckStatus(this, v16);
    if ( v17 < 0 )
    {
      v20 = 128;
LABEL_12:
      v4 = v17 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v17 | 0x10000000, v20);
    }
  }
  else
  {
    v18 = NtRequestPort(v15, v12);
    v17 = CPortClient::CheckStatus(this, v18);
    if ( v17 < 0 )
    {
      v20 = 132;
      goto LABEL_12;
    }
  }
  v19 = GetProcessHeap();
  HeapFree(v19, 0, v12);
  return v4;
}
