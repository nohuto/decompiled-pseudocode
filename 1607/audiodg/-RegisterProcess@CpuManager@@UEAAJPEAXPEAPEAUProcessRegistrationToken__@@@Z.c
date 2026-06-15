/*
 * XREFs of ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140028010
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140027040 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400287B4 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x1400289E4 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::RegisterProcess(CpuManager *this, void *a2, struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r15
  void *v4; // r12
  CpuManager *v5; // rdi
  DWORD ProcessId; // r13d
  int v7; // r14d
  char v8; // si
  __int64 Node; // rax
  __int64 v10; // rbx
  unsigned int *v12; // rbx
  int v13; // [rsp+30h] [rbp-88h] BYREF
  int v14; // [rsp+34h] [rbp-84h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  ATL::CAtlException *v18; // [rsp+50h] [rbp-68h] BYREF
  int v19; // [rsp+58h] [rbp-60h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-50h] BYREF
  char v22; // [rsp+70h] [rbp-48h]

  v16 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v15 = 0LL;
  ProcessId = GetProcessId(a2);
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16));
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_14;
  v8 = 1;
  Node = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 56,
           ProcessId,
           &v14,
           (unsigned int *)&v13,
           &v17);
  v10 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
LABEL_9:
    *v3 = (struct ProcessRegistrationToken__ *)v10;
    v10 = 0LL;
    v8 = 0;
    v7 = 0;
    goto LABEL_10;
  }
  v20 = 0LL;
  v19 = 1;
  try
  {
    v10 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::SetAt(
            (char *)v5 + 56,
            ProcessId,
            &v19);
    v15 = v10;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v12 = (unsigned int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _resetstkoflw();
    v13 = *v12;
    v7 = v13;
    v5 = this;
    v10 = v15;
    v8 = 1;
    if ( v13 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, void *, __int64))(*(_QWORD *)v5 + 80LL))(v5, v4, v10 + 16);
  if ( v7 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v10 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 56,
      v10);
  if ( v8 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
