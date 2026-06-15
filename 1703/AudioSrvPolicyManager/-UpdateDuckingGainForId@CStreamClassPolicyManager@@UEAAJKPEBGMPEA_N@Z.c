/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180018090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000FB80 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x1800181E4 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        DWORD a2,
        char *a3,
        float a4,
        bool *a5)
{
  signed int v5; // edi
  bool v8; // si
  int v9; // eax
  float *v10; // rbx
  _QWORD *v11; // rdx
  struct TSSession *v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v8 = 1;
  v9 = TsSessionFromSessionId(a2, 1, 0LL, &v13);
  if ( v9 )
  {
    v5 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v5 = v9;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v14,
      a3);
    v10 = (float *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
                     (char *)v13 + 336,
                     &v14);
    v11 = (_QWORD *)(v14 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 8LL))(*v11);
    if ( v10 )
    {
      if ( *v10 == a4 )
        v8 = 0;
      *a5 = v8;
      if ( v8 )
        *v10 = a4;
    }
    else
    {
      v5 = -2147024809;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, v5);
    }
    AudPolicyLogError("TsSessionUpdateDuckingGainForId", 2366, v5);
  }
  return (unsigned int)v5;
}
