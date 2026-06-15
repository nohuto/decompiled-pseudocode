/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x1800A18B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x1800A2A40 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(
        CApplicationManager *this,
        struct _CastingAppStateChangedContext *a2)
{
  __int64 v4; // rbx
  CApplication *v5; // rcx
  struct CApplication *v6; // rdi
  BOOL v7; // ebp
  int v8; // edx
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v4 = *(_QWORD *)a2;
  v5 = *(CApplication **)(*(_QWORD *)a2 + 224LL);
  v6 = v5;
  if ( v5
    || (CApplicationManager::Register(this, *(struct CProcess **)a2), v5 = *(CApplication **)(v4 + 224),
                                                                      (v6 = v5) != 0LL) )
  {
    v7 = *((_DWORD *)v6 + 28) != 0;
    if ( !*(_DWORD *)(v4 + 416) )
    {
      if ( *((_DWORD *)a2 + 2) )
        v8 = -1;
      else
        v8 = 1;
      *(_DWORD *)(v4 + 468) += v8;
      CApplication::CastingStateChanged(v5, v8);
    }
    if ( v7 != (*((_DWORD *)v6 + 28) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return 0LL;
}
