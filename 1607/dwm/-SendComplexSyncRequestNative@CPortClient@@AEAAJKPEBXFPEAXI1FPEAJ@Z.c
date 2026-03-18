/*
 * XREFs of ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140004FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001490 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140003EF6 (memcpy_0.c)
 *     memset_0 @ 0x140003F02 (memset_0.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x140004AA8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x140005564 (-AssertW@@YAXPEBG000K@Z.c)
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
  __int16 v9; // ax
  unsigned int v10; // ebx
  unsigned __int16 v11; // di
  unsigned __int16 v15; // ax
  __int64 v17; // r13
  HANDLE ProcessHeap; // rax
  struct _PORT_MESSAGE *v19; // rax
  struct _PORT_MESSAGE *v20; // rdi
  const struct reg_FeatureDescriptor *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // eax
  NTSTATUS v25; // eax
  HANDLE v26; // rax
  unsigned int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v30[4]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v31; // [rsp+58h] [rbp-30h]
  void *v32; // [rsp+60h] [rbp-28h]
  __int64 v33; // [rsp+68h] [rbp-20h]

  v9 = a8;
  v10 = 0;
  v11 = 688;
  if ( a4 > a8 )
    v9 = a4;
  v15 = v9 + 48;
  if ( v15 >= 0x2B0u )
    v11 = v15;
  memset_0(v30, 0, 0x28uLL);
  v17 = v11;
  ProcessHeap = GetProcessHeap();
  v19 = (struct _PORT_MESSAGE *)HeapAlloc(ProcessHeap, 8u, v11);
  v20 = v19;
  if ( v19 )
  {
    v19[1].u1.Length = a2;
    v19->u1.s1.DataLength = a4 + 8;
    v19->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
      AssertW(
        0LL,
        L"pMsg->u1.s1.TotalLength <= 512",
        L"LpcVerifyOutgoingPayloadSize",
        L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
        0x13Au);
    memcpy_0(&v20[1].DoNotUseThisField, a3, a4);
    v30[0] = 0x40000000;
    if ( EvaluateCurrentState(v21) )
    {
      if ( a6 )
      {
        v32 = a5;
        v33 = a6;
        v31 = *((_QWORD *)this + 8);
        v30[1] = 0x40000000;
      }
      v22 = *((_QWORD *)this + 6);
      v29 = v17;
      v23 = NtAlpcSendWaitReceivePort(v22, 0x20000LL, v20, v30, v20, &v29, 0LL, 0LL);
      v24 = CPortClient::CheckStatus(this, v23);
      if ( v24 < 0 )
      {
        v28 = 232;
LABEL_14:
        v10 = v24 | 0x10000000;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v24 | 0x10000000, v28);
LABEL_24:
        v26 = GetProcessHeap();
        HeapFree(v26, 0, v20);
        return v10;
      }
    }
    else
    {
      v25 = NtRequestWaitReplyPort(*((HANDLE *)this + 6), v20, v20);
      v24 = CPortClient::CheckStatus(this, v25);
      if ( v24 < 0 )
      {
        v28 = 236;
        goto LABEL_14;
      }
    }
    if ( (v20[1].u2.ZeroInit & 0x80000000) == 0 && a7 && a8 )
    {
      if ( v20->u1.s1.DataLength == a8 + 8 )
      {
        memcpy_0(a7, &v20[1].DoNotUseThisField, a8);
      }
      else
      {
        v10 = -2147024872;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024872, 0xF5u);
      }
    }
    *a9 = v20[1].u2.ZeroInit;
    goto LABEL_24;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0xCBu);
  return v10;
}
