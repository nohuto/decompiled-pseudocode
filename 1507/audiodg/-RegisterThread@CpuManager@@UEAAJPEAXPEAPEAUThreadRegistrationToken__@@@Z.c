/*
 * XREFs of ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140028B70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x140027AB0 (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400290CC (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x140029280 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::RegisterThread(CpuManager *this, void *a2, struct ThreadRegistrationToken__ **a3)
{
  struct ThreadRegistrationToken__ **v3; // r12
  void *v4; // r13
  CpuManager *v5; // r14
  DWORD ThreadId; // esi
  int v7; // edi
  char v8; // r15
  __int64 Node; // rax
  __int64 v10; // rsi
  ATL::CAtlException *v12; // rbx
  DWORD v13; // [rsp+30h] [rbp-88h]
  __int64 v14; // [rsp+38h] [rbp-80h]
  int v15; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-74h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-70h] BYREF
  char v18; // [rsp+50h] [rbp-68h]
  int v19; // [rsp+58h] [rbp-60h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int64 v22; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v23; // [rsp+78h] [rbp-40h] BYREF

  v21 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  ThreadId = GetThreadId(a2);
  v13 = ThreadId;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16));
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_14;
  v8 = 1;
  Node = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 128,
           ThreadId,
           &v15,
           &v16,
           &v22);
  v10 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
LABEL_9:
    *v3 = (struct ThreadRegistrationToken__ *)v10;
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
            (char *)v5 + 128,
            v13,
            &v19);
    v14 = v10;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v12 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _resetstkoflw();
    v7 = *(_DWORD *)v12;
    v5 = this;
    v10 = v14;
    v8 = 1;
    if ( *(int *)v12 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, void *, __int64))(*(_QWORD *)v5 + 96LL))(v5, v4, v10 + 16);
  if ( v7 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v10 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 128,
      v10);
  if ( v8 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
