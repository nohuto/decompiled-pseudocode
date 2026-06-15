/*
 * XREFs of ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180019EAC
 * Callers:
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001CFCC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x18001A258 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180023830 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
        CStreamClassPolicyGainsWrapper *this,
        unsigned int a2,
        UINT32 a3,
        int *a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // r12
  char **v8; // r14
  const struct DuckingDescriptor *v10; // rsi
  int *v11; // rdx
  __int64 result; // rax
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned int v15; // edi
  char **v16; // rsi
  const struct DuckingDescriptor *v17; // r14
  int *v18; // rdx
  UINT32 cData; // [rsp+20h] [rbp-89h]
  unsigned int v20; // [rsp+30h] [rbp-79h] BYREF
  int v21; // [rsp+34h] [rbp-75h] BYREF
  UINT32 v22; // [rsp+38h] [rbp-71h]
  int v23; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v24; // [rsp+40h] [rbp-69h] BYREF
  int *v25; // [rsp+48h] [rbp-61h] BYREF
  int *v26[2]; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  const char *v28; // [rsp+80h] [rbp-29h]
  int v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  int *v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A8h] [rbp-1h]
  int v36; // [rsp+ACh] [rbp+3h]

  v20 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 21LL * a2;
  v22 = a3;
  v8 = (char **)&off_180029100[v6];
  do
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v25,
      *v8);
    v10 = (const struct DuckingDescriptor *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
                                              *((_QWORD *)this + 257),
                                              &v25);
    v11 = v25 - 6;
    if ( _InterlockedExchangeAdd(v25 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
    if ( v10 )
    {
      v21 = 0;
      result = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v5, 1, v10, v22, &v21);
      v20 = result;
      if ( (int)result < 0 )
        goto LABEL_23;
      if ( v4 || v21 )
        v4 = 1;
    }
    ++v5;
    ++v8;
  }
  while ( v5 < 0x15 );
  v15 = 0;
  v16 = (char **)&off_180028330[v6];
  do
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v26,
      *v16);
    v17 = (const struct DuckingDescriptor *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
                                              *((_QWORD *)this + 257),
                                              v26);
    v18 = v26[0] - 6;
    if ( _InterlockedExchangeAdd(v26[0] - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18);
    if ( v17 )
    {
      v23 = 0;
      result = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v15, 0, v17, v22, &v23);
      v20 = result;
      if ( (int)result < 0 )
        goto LABEL_23;
      if ( v4 || v23 )
        v4 = 1;
    }
    else
    {
      result = v20;
    }
    ++v15;
    ++v16;
  }
  while ( v15 < 0x15 );
  if ( a4 )
    *a4 = v4;
  if ( (int)result < 0 )
  {
LABEL_23:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_ebe8a60df1f9346dc18a4000ebfedf98_Traceguids, result);
      result = v20;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v28 = "__FUNC__";
      v31 = &v24;
      v34 = &v20;
      v29 = 9;
      v24 = 196;
      v32 = 4;
      v35 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v13, v14, cData, &pData);
      return v20;
    }
  }
  return result;
}
