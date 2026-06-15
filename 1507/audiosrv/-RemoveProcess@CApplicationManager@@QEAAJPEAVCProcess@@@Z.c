/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001CC58
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CCFC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x1800070F0 (-Find@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@A.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180007114 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800120D0 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  struct _TP_WAIT **v2; // rsi
  int v4; // edi
  _QWORD *v5; // rax
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  CApplicationManager *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  struct CProcess *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (struct _TP_WAIT **)a2;
  v4 = 0;
  v10 = (CApplicationManager *)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v10);
  v5 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find((_QWORD *)this + 14, &v12);
  if ( v5 )
  {
    try
    {
      ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt((_QWORD *)this + 14, v5);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _resetstkoflw();
      v2 = (struct _TP_WAIT **)v12;
      v4 = *(_DWORD *)v7;
    }
    if ( v2 )
    {
      CProcess::Cleanup(v2, 0);
      CUnknown::Release((CUnknown *)v2);
    }
    if ( v4 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)v4);
    }
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v10);
  return (unsigned int)v4;
}
