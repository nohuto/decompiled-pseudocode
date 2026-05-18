/*
 * XREFs of ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005970
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18000449C (-AssertW@@YAXPEBG000K@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x1800055B0 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memcpy_0 @ 0x180008182 (memcpy_0.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequestNative(
        CPortClient *this,
        ULONG a2,
        const void *a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        void *a7,
        __int16 a8,
        int *a9)
{
  __int16 v9; // bx
  unsigned int v10; // edi
  unsigned __int16 v14; // bx
  __int64 v16; // r13
  HANDLE ProcessHeap; // rax
  struct _PORT_MESSAGE *v18; // rax
  struct _PORT_MESSAGE *v19; // rbx
  const struct reg_FeatureDescriptor *v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // eax
  NTSTATUS v24; // eax
  HANDLE v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v29[4]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v30; // [rsp+58h] [rbp-30h]
  void *v31; // [rsp+60h] [rbp-28h]
  __int64 v32; // [rsp+68h] [rbp-20h]

  v9 = a8;
  v10 = 0;
  if ( a4 > a8 )
    v9 = a4;
  v14 = v9 + 48;
  if ( v14 < 0x2B0u )
    v14 = 688;
  memset_0(v29, 0, 0x28uLL);
  v16 = v14;
  ProcessHeap = GetProcessHeap();
  v18 = (struct _PORT_MESSAGE *)HeapAlloc(ProcessHeap, 8u, v14);
  v19 = v18;
  if ( v18 )
  {
    v18[1].u1.Length = a2;
    v18->u1.s1.DataLength = a4 + 8;
    v18->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
      AssertW(
        0LL,
        L"pMsg->u1.s1.TotalLength <= 512",
        L"LpcVerifyOutgoingPayloadSize",
        L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
        0x13Au);
    memcpy_0(&v19[1].DoNotUseThisField, a3, a4);
    v29[0] = 0x40000000;
    if ( EvaluateCurrentState(v20) )
    {
      if ( a6 )
      {
        v31 = a5;
        v32 = a6;
        v30 = *((_QWORD *)this + 8);
        v29[1] = 0x40000000;
      }
      v21 = *((_QWORD *)this + 6);
      v28 = v16;
      v22 = NtAlpcSendWaitReceivePort(v21, 0x20000LL, v19, v29, v19, &v28, 0LL, 0LL);
      v23 = CPortClient::CheckStatus(this, v22);
      if ( v23 < 0 )
      {
        v27 = 232;
LABEL_14:
        v10 = v23 | 0x10000000;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v23 | 0x10000000, v27);
LABEL_24:
        v25 = GetProcessHeap();
        HeapFree(v25, 0, v19);
        return v10;
      }
    }
    else
    {
      v24 = NtRequestWaitReplyPort(*((HANDLE *)this + 6), v19, v19);
      v23 = CPortClient::CheckStatus(this, v24);
      if ( v23 < 0 )
      {
        v27 = 236;
        goto LABEL_14;
      }
    }
    if ( (v19[1].u2.ZeroInit & 0x80000000) == 0 && a7 && a8 )
    {
      if ( v19->u1.s1.DataLength == a8 + 8 )
      {
        memcpy_0(a7, &v19[1].DoNotUseThisField, a8);
      }
      else
      {
        v10 = -2147024872;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, 0x80070018, 0xF5u);
      }
    }
    *a9 = v19[1].u2.ZeroInit;
    goto LABEL_24;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, 0x8007000E, 0xCBu);
  return v10;
}
