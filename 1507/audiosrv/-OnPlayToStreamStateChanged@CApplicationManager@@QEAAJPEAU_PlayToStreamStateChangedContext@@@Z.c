/*
 * XREFs of ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x1800A19A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001BD74 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnPlayToStreamStateChanged(
        CApplicationManager *this,
        struct _PlayToStreamStateChangedContext *a2)
{
  __int64 v4; // rdi
  struct CApplication *v5; // rsi
  LPCRITICAL_SECTION v7; // [rsp+28h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v4 = *(_QWORD *)a2;
  v5 = *(struct CApplication **)(*(_QWORD *)a2 + 224LL);
  LODWORD(a2) = *((_DWORD *)a2 + 2);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)(v4 + 32));
  if ( (_DWORD)a2 )
    --*(_DWORD *)(v4 + 452);
  else
    ++*(_DWORD *)(v4 + 452);
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
  if ( v5 )
    CApplicationManager::UpdateActiveMediaAppForSession(this, v5, 0);
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return 0LL;
}
