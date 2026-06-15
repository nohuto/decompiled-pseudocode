/*
 * XREFs of ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18009EE48
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Find@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCApplication@@PEAU3@@Z @ 0x180038E54 (-Find@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POS.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18009C778 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveApplication(CApplicationManager *this, struct CApplication **a2)
{
  struct CApplication **v2; // rsi
  unsigned int v4; // edi
  _QWORD *v5; // rax
  int *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v5 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::Find((_QWORD *)this + 8, v2);
  if ( v5 )
  {
    try
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt((_QWORD *)this + 8, v5);
    }
    catch ( ATL::CAtlException *v8 )
    {
      v7 = (int *)v8;
      if ( *(_DWORD *)v8 == -1073741571 )
        _resetstkoflw();
      v11 = *v7;
      v4 = *v7;
      if ( v11 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x24u,
          (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
          v11);
      }
      v2 = a2;
    }
  }
  if ( *v2 )
  {
    CRefCountedObject::Release(*v2);
    *v2 = 0LL;
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return v4;
}
