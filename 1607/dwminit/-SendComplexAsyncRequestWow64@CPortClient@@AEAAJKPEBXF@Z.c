/*
 * XREFs of ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1800057C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18000449C (-AssertW@@YAXPEBG000K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x1800055B0 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memcpy_0 @ 0x180008182 (memcpy_0.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequestWow64(CPortClient *this, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // edi
  DWORD v9; // r9d
  HANDLE ProcessHeap; // rax
  struct _PORT_MESSAGE *v11; // rax
  struct _PORT_MESSAGE *v12; // rbx
  const struct reg_FeatureDescriptor *v13; // rcx
  BOOL v14; // eax
  void *v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  NTSTATUS v18; // eax
  HANDLE v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+20h] [rbp-38h]

  v4 = 0;
  if ( a3 )
  {
    ProcessHeap = GetProcessHeap();
    v11 = (struct _PORT_MESSAGE *)HeapAlloc(ProcessHeap, 8u, (unsigned __int16)(a4 + 48));
    v12 = v11;
    if ( !v11 )
    {
      v9 = -2147024882;
      v21 = 109;
      goto LABEL_3;
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
        v22 = 128;
LABEL_13:
        v4 = v17 | 0x10000000;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v17 | 0x10000000, v22);
      }
    }
    else
    {
      v18 = NtRequestPort(v15, v12);
      v17 = CPortClient::CheckStatus(this, v18);
      if ( v17 < 0 )
      {
        v22 = 132;
        goto LABEL_13;
      }
    }
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v12);
    return v4;
  }
  v9 = -2147024890;
  v21 = 106;
LABEL_3:
  v4 = v9;
  MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v9, v21);
  return v4;
}
