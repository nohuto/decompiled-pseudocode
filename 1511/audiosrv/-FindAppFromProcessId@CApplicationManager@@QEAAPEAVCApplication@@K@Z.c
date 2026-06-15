/*
 * XREFs of ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18009E760
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x18009D738 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CApplication *__fastcall CApplicationManager::FindAppFromProcessId(CApplicationManager *this, int a2)
{
  CRefCountedObject *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  BOOL v7; // ebx
  LPCRITICAL_SECTION v9; // [rsp+28h] [rbp-28h] BYREF
  char v10; // [rsp+30h] [rbp-20h]
  LPCRITICAL_SECTION v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  _QWORD *i; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp+30h] BYREF

  i = this;
  v3 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v11,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  v5 = 0LL;
  v14 = (_QWORD *)*((_QWORD *)v3 + 8);
  if ( v14 )
  {
    while ( 1 )
    {
      v6 = *ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v14);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)(v6 + 24));
      v7 = 0;
      for ( i = *(_QWORD **)(v6 + 64); i; v7 = a2 == *(_DWORD *)(v4 + 168) )
      {
        if ( v7 )
          break;
        v4 = *ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &i);
      }
      if ( v10 )
        ATL::CCritSecLock::Unlock(&v9);
      if ( v7 )
        break;
      if ( !v14 )
        goto LABEL_11;
    }
    v5 = v6;
  }
LABEL_11:
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return (struct CApplication *)v5;
}
