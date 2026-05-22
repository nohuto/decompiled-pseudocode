/*
 * XREFs of ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800793B8
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180071350 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180078B00 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180078E90 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x18007AFB0 (--0-$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall SpatialInputControllerCollection::GetCacheEntry(
        struct _RTL_CRITICAL_SECTION *a1,
        DWORD a2,
        __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *CriticalSection; // r9
  PRTL_CRITICAL_SECTION_DEBUG v9; // rdx
  unsigned int v10; // ebx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  char v16[8]; // [rsp+38h] [rbp-30h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a1 + 69;
  EnterCriticalSection(a1 + 69);
  DebugInfo = a1[70].DebugInfo;
  CriticalSection = DebugInfo->CriticalSection;
  v9 = DebugInfo;
  while ( !BYTE1(CriticalSection->LockSemaphore) )
  {
    if ( LODWORD(CriticalSection->SpinCount) >= a2 )
    {
      v9 = (PRTL_CRITICAL_SECTION_DEBUG)CriticalSection;
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->DebugInfo;
    }
    else
    {
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->OwningThread;
    }
  }
  if ( v9 == DebugInfo || a2 < v9->EntryCount )
    v9 = a1[70].DebugInfo;
  if ( v9 == DebugInfo )
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    v11 = (__int64 *)std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>(
                       v16,
                       &v9->Flags);
    v12 = v11[1];
    v11[1] = a3[1];
    a3[1] = v12;
    v13 = *v11;
    *v11 = *a3;
    *a3 = v13;
    v14 = v17;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v10 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v10;
}
