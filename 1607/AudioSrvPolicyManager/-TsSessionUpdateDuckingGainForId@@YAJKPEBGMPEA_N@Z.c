/*
 * XREFs of ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18001DCC0
 * Callers:
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18001A240 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x18001A258 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TsSessionUpdateDuckingGainForId(DWORD SessionId, char *a2, float a3, bool *a4)
{
  bool v7; // di
  int v8; // eax
  unsigned int v9; // ecx
  float *v10; // rbx
  int *v11; // rdx
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 result; // rax
  UINT32 v15; // [rsp+28h] [rbp-69h]
  unsigned int v16; // [rsp+38h] [rbp-59h] BYREF
  int v17; // [rsp+3Ch] [rbp-55h] BYREF
  struct TSSession *v18; // [rsp+40h] [rbp-51h] BYREF
  int *v19[2]; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  const char *v21; // [rsp+78h] [rbp-19h]
  int v22; // [rsp+80h] [rbp-11h]
  int v23; // [rsp+84h] [rbp-Dh]
  int *v24; // [rsp+88h] [rbp-9h]
  int v25; // [rsp+90h] [rbp-1h]
  int v26; // [rsp+94h] [rbp+3h]
  unsigned int *v27; // [rsp+98h] [rbp+7h]
  int v28; // [rsp+A0h] [rbp+Fh]
  int v29; // [rsp+A4h] [rbp+13h]

  v16 = 0;
  v18 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v7 = 1;
  v8 = TsSessionFromSessionId(SessionId, 1, 0LL, &v18);
  if ( v8 )
  {
    v9 = (unsigned __int16)v8 | 0x80070000;
    if ( v8 <= 0 )
      v9 = v8;
    v16 = v9;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v19,
      a2);
    v10 = (float *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
                     (__int64)v18 + 336,
                     (__int64 *)v19);
    v11 = v19[0] - 6;
    if ( _InterlockedExchangeAdd(v19[0] - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
    if ( v10 )
    {
      if ( *v10 == a3 )
        v7 = 0;
      *a4 = v7;
      if ( v7 )
        *v10 = a3;
    }
    else
    {
      v16 = -2147024809;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  result = v16;
  if ( (v16 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v16);
      result = v16;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v21 = "__FUNC__";
      v24 = &v17;
      v27 = &v16;
      v22 = 9;
      v17 = 2298;
      v25 = 4;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v12, v13, v15, &pData);
      return v16;
    }
  }
  return result;
}
