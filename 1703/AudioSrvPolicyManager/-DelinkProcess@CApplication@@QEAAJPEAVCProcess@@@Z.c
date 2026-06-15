/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AC88
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18000FE8C (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  unsigned int v4; // edi
  __int64 **i; // rdx
  int *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_QWORD *)a2 + 28) = 0LL;
  for ( i = (__int64 **)*((_QWORD *)this + 9); i && i[2] != (__int64 *)a2; i = (__int64 **)*i )
    ;
  if ( i )
  {
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((char *)this + 72);
    }
    catch ( ATL::CAtlException *v8 )
    {
      v7 = (int *)v8;
      if ( *(_DWORD *)v8 == -1073741571 )
        _o__resetstkoflw();
      v11 = *v7;
      v4 = *v7;
      if ( v11 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v11);
        }
        AudPolicyLogError("CApplication::DelinkProcess", 362, v11);
      }
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
