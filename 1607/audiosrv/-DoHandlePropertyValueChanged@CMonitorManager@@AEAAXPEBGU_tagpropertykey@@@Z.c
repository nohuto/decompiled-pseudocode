/*
 * XREFs of ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x18007C1C0
 * Callers:
 *     ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007C860 (-HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::DoHandlePropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned __int64 i; // rbx
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
