/*
 * XREFs of ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x1800931EC
 * Callers:
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180093940 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::DoHandlePropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned __int64 i; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  LPCRITICAL_SECTION v9; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]

  v11 = -2LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) == 1 )
  {
    for ( i = 0LL; i < 0x50; i += 16LL )
    {
      v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
      v8 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
      {
        v8 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
        if ( !v8 )
          v8 = a3->pid - (unsigned __int64)*(unsigned int *)(v7 + 16);
      }
      if ( !v8 )
        (*(void (__fastcall **)(CMonitorManager *, const unsigned __int16 *, struct _tagpropertykey *))((char *)&CMonitorManager::_PropertyLookupTable + i + 8))(
          this,
          a2,
          a3);
    }
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
}
