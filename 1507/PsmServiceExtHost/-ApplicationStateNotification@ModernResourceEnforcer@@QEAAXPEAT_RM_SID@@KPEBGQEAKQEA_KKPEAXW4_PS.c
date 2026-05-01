/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0
 * Callers:
 *     PsmHostStateNotification2 @ 0x1800047D0 (PsmHostStateNotification2.c)
 * Callees:
 *     ?erase@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x180003418 (-erase@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApp.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x18000A4E0 (-RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_I.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18000A640 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID_ea_18000A640.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000B770 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180016810 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x1800179F0 (-QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x1800337EC (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 */

__int64 __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        __int64 a1,
        union _RM_SID *a2,
        unsigned int a3,
        const WCHAR *a4,
        int *a5,
        void *a6,
        unsigned int a7,
        void *a8,
        int a9)
{
  unsigned int *v9; // rsi
  unsigned int v10; // r15d
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  int v14; // ecx
  struct ExecutionModel::IRMExecServicesProviderCallback *v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // r15
  __int64 v18; // r12
  unsigned int v19; // edx
  unsigned __int64 v20; // r8
  int v21; // ecx
  __int64 result; // rax
  int v23; // esi
  unsigned __int64 v24; // rdx
  ModernResourceEnforcer *v25; // rsi
  __int64 v26; // rdx
  _DWORD *v27; // rbx
  WCHAR *v28; // rcx
  __int64 *v29; // r12
  __int64 v30; // rax
  char *v31; // r15
  size_t v32; // rdi
  char *v33; // rdi
  __int64 *v34; // rcx
  char *v35; // rcx
  char *v36; // rcx
  union _RM_SID *v37; // rax
  ModernResourceEnforcer *v38; // rax
  ExecutionModel::RMExecServicesProvider *v39; // rdi
  __int64 (__fastcall *v40)(ExecutionModel::RMExecServicesProvider *__hidden, struct ExecutionModel::IRMExecServicesProviderCallback *, void *); // rsi
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  _WORD *v43; // rcx
  PVOID Heap; // rdi
  PVOID v45; // rsi
  void *v46; // rdx
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+48h] [rbp-B8h] BYREF
  void *v49; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *v50; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h]
  void *v52; // [rsp+68h] [rbp-98h]
  ModernResourceEnforcer *v53; // [rsp+70h] [rbp-90h]
  union _RM_SID *v54; // [rsp+78h] [rbp-88h]
  void *v55[2]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Buffer[280]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+2F0h] [rbp+1F0h] BYREF
  wchar_t **v60; // [rsp+300h] [rbp+200h]
  __int64 v61; // [rsp+308h] [rbp+208h]
  struct _RTL_CRITICAL_SECTION **v62; // [rsp+310h] [rbp+210h]
  __int64 v63; // [rsp+318h] [rbp+218h]
  void **v64; // [rsp+320h] [rbp+220h]
  __int64 v65; // [rsp+328h] [rbp+228h]

  v9 = (unsigned int *)a5;
  v10 = a7;
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v53 = (ModernResourceEnforcer *)a1;
  Src = a6;
  v49 = a8;
  v54 = a2;
  v52 = a5;
  v48 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v14 = a9;
  v15 = 0LL;
  v16 = -1LL;
  if ( !a9 )
  {
    v23 = *a5;
    if ( *a5 == 6 )
      v24 = -1LL;
    else
      v24 = *(_QWORD *)Src;
    v49 = (void *)v24;
    if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      TlgCreateWsz(&pDesc, a4);
      TlgCreateSid(&v59, (const SID *)a2);
      v60 = &v50;
      v62 = &v48;
      v64 = &v49;
      LODWORD(v50) = a3;
      v61 = 4LL;
      LODWORD(v48) = v23;
      v63 = 4LL;
      v65 = 8LL;
      TlgWrite((TraceLoggingHProvider)a3, &unk_18005A194, v41, v42, 7u, &pData);
      v24 = (unsigned __int64)v49;
    }
    if ( v23 != 6 )
    {
      RmpInitializeEnforcerApplicationStateMapKey(a4, a2, a3, v23, v24, Buffer);
      v25 = v53;
      v50 = 0LL;
      v48 = 0LL;
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
        (__int64)v53 + 208,
        v26,
        Buffer,
        (const wchar_t **)&v50,
        &v48,
        v55);
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::erase(
        (__int64)v25 + 208,
        v55,
        v50,
        v48);
    }
    LeaveCriticalSection(v11);
LABEL_20:
    if ( v10 <= 1 )
    {
      result = (__int64)v52;
      if ( *(_DWORD *)v52 == 6 )
        return result;
    }
    result = (__int64)malloc(0x88uLL);
    v27 = (_DWORD *)result;
    if ( !result )
      return result;
    *(_QWORD *)(result + 8) = result + 24;
    *(_QWORD *)(result + 16) = result + 24;
    *(_WORD *)(result + 24) = 0;
    *(_QWORD *)(result + 112) = 0LL;
    *(_QWORD *)(result + 120) = 0LL;
    *(_DWORD *)(result + 128) = 0;
    if ( a4 )
    {
      do
        ++v16;
      while ( a4[v16] );
    }
    else
    {
      v16 = 0LL;
    }
    v28 = *(WCHAR **)(result + 8);
    v29 = (__int64 *)(result + 24);
    if ( v28 == (WCHAR *)(result + 24) )
      v30 = result + 38;
    else
      v30 = *v29;
    if ( v16 <= (v30 - (__int64)v28) >> 1 )
    {
      if ( v28 != a4 )
        memmove(v28, a4, 2 * v16);
      v43 = (_WORD *)(*((_QWORD *)v27 + 1) + 2 * v16);
      *((_QWORD *)v27 + 2) = v43;
      *v43 = 0;
    }
    else
    {
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        v27 + 2,
        v55,
        v16);
      v31 = (char *)v55[0];
      if ( !v55[0] )
        return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v27);
      v32 = 2 * v16;
      memcpy_0(v55[0], a4, v32);
      v33 = &v31[v32];
      *(_WORD *)v33 = 0;
      v34 = (__int64 *)*((_QWORD *)v27 + 1);
      if ( v34 != v29 )
        operator delete(v34);
      v35 = (char *)v55[1] - 1;
      *((_QWORD *)v27 + 1) = v31;
      *((_QWORD *)v27 + 2) = v33;
      v36 = &v31[2 * (_QWORD)v35];
      v10 = a7;
      *v29 = (__int64)v36;
    }
    if ( v10 > 1 )
    {
      Heap = RmpAllocateHeap(8LL * v10);
      if ( !Heap )
        return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v27);
      v45 = RmpAllocateHeap(4LL * v10);
      if ( !v45 )
      {
        RmpFreeHeap(Heap);
        return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v27);
      }
      memcpy_0(Heap, Src, 8LL * v10);
      v46 = v52;
      *((_QWORD *)v27 + 15) = Heap;
      memcpy_0(v45, v46, 4LL * v10);
      *((_QWORD *)v27 + 14) = v45;
    }
    else
    {
      v27[28] = *(_DWORD *)v52;
      *((_QWORD *)v27 + 15) = *(_QWORD *)Src;
    }
    v27[33] = a9;
    v37 = v54;
    *v27 = 2;
    *(_OWORD *)(v27 + 10) = *(_OWORD *)v37;
    *(_OWORD *)(v27 + 14) = *((_OWORD *)v37 + 1);
    *(_OWORD *)(v27 + 18) = *((_OWORD *)v37 + 2);
    *(_OWORD *)(v27 + 22) = *((_OWORD *)v37 + 3);
    v27[26] = *((_DWORD *)v37 + 16);
    v27[27] = a3;
    v38 = v53;
    v27[32] = v10;
    if ( v38 )
      v15 = (ModernResourceEnforcer *)((char *)v38 + 8);
    v39 = (ExecutionModel::RMExecServicesProvider *)*((_QWORD *)v38 + 31);
    v40 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *__hidden, struct ExecutionModel::IRMExecServicesProviderCallback *, void *))(*(_QWORD *)v39 + 40LL);
    if ( v40 == ExecutionModel::RMExecServicesProvider::QueueWorkItem )
      result = ExecutionModel::RMExecServicesProvider::QueueWorkItem(v39, v15, v27);
    else
      result = v40(v39, v15, v27);
    if ( (int)result >= 0 )
      return result;
    return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v27);
  }
  if ( a7 )
  {
    v17 = (unsigned __int64 *)Src;
    v18 = a7;
    do
    {
      v19 = *v9;
      if ( *v9 == 6 )
        v20 = -1LL;
      else
        v20 = *v17;
      v21 = v14 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
          ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(v53, a4, v54, a3, v19, v20, v49, 0);
      }
      else
      {
        ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(v53, a4, v54, a3, v19, v20, v49, 1);
      }
      v14 = a9;
      ++v9;
      ++v17;
      --v18;
    }
    while ( v18 );
    v11 = v48;
    v15 = 0LL;
    v10 = a7;
  }
  LeaveCriticalSection(v11);
  result = (unsigned int)(a9 - 1);
  if ( (unsigned int)result > 1 )
    goto LABEL_20;
  return result;
}
