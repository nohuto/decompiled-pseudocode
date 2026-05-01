/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800165C0
 * Callers:
 *     PsmHostStateNotification2 @ 0x1800184F0 (PsmHostStateNotification2.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x180009C00 (-QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ??$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBU_RM_PSM_APP_INSTANCE_ID@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001ACD0 (--$_EqualRangeImpl@U_RM_PSM_APP_INSTANCE_ID@@@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$C.c)
 *     ?erase@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x18001B1C4 (-erase@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApp.c)
 *     ?RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x18001B284 (-RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_I.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18003AA10 (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 */

__int64 __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int *a5,
        void *a6,
        unsigned int a7,
        void *a8,
        int a9)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int *v10; // rsi
  struct ExecutionModel::IRMExecServicesProviderCallback *v11; // r15
  unsigned int v12; // r12d
  int v15; // ecx
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // r12
  __int64 v18; // r13
  unsigned int v19; // edx
  unsigned __int64 v20; // r8
  int v21; // ecx
  __int64 result; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  ModernResourceEnforcer *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rbx
  unsigned __int16 *v31; // rcx
  unsigned __int16 *v32; // r12
  __int64 v33; // rax
  char *v34; // rax
  unsigned __int64 v35; // rax
  void **v36; // rax
  int v37; // ecx
  char *v38; // rsi
  void *v39; // r13
  size_t v40; // rdi
  char *v41; // rdi
  unsigned __int16 *v42; // rcx
  union _RM_SID *v43; // rax
  ModernResourceEnforcer *v44; // rax
  ExecutionModel::RMExecServicesProvider *v45; // rdi
  __int64 (__fastcall *v46)(ExecutionModel::RMExecServicesProvider *, struct ExecutionModel::IRMExecServicesProviderCallback *, void *); // rsi
  unsigned int v47; // esi
  const unsigned __int16 *v48; // rcx
  _WORD *v49; // rcx
  PVOID Heap; // rdi
  PVOID v51; // rsi
  void *v52; // rdx
  void *v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v56; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h]
  ModernResourceEnforcer *v58; // [rsp+68h] [rbp-98h]
  unsigned int v59; // [rsp+70h] [rbp-90h] BYREF
  void *v60; // [rsp+78h] [rbp-88h]
  union _RM_SID *v61; // [rsp+80h] [rbp-80h]
  unsigned __int64 v62; // [rsp+88h] [rbp-78h] BYREF
  void *Block[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v64[2]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  char v66[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v67[8]; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t Buffer[280]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+300h] [rbp+200h] BYREF
  void *v70; // [rsp+310h] [rbp+210h]
  int v71; // [rsp+318h] [rbp+218h]
  int v72; // [rsp+31Ch] [rbp+21Ch]
  const unsigned __int16 *v73; // [rsp+320h] [rbp+220h]
  int v74; // [rsp+328h] [rbp+228h]
  int v75; // [rsp+32Ch] [rbp+22Ch]
  __int64 v76; // [rsp+330h] [rbp+230h]
  int v77; // [rsp+338h] [rbp+238h]
  int v78; // [rsp+33Ch] [rbp+23Ch]
  unsigned int *v79; // [rsp+340h] [rbp+240h]
  __int64 v80; // [rsp+348h] [rbp+248h]
  unsigned int *v81; // [rsp+350h] [rbp+250h]
  __int64 v82; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v83; // [rsp+360h] [rbp+260h]
  __int64 v84; // [rsp+368h] [rbp+268h]

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v10 = a5;
  v11 = 0LL;
  v12 = a7;
  Src = a6;
  v58 = (ModernResourceEnforcer *)a1;
  v55 = 0;
  v54 = a8;
  v61 = (union _RM_SID *)a2;
  v60 = a5;
  v56 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v15 = a9;
  v16 = -1LL;
  if ( !a9 )
  {
    v47 = *a5;
    if ( *a5 == 6 )
      v24 = -1LL;
    else
      v24 = *(_QWORD *)Src;
    v62 = v24;
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v48 = (const unsigned __int16 *)&unk_1800574EC;
      LODWORD(v23) = 0;
      if ( a4 )
      {
        v48 = a4;
        v23 = -1LL;
        do
          ++v23;
        while ( a4[v23] );
      }
      v73 = v48;
      v74 = 2 * v23 + 2;
      LOBYTE(v23) = *(_BYTE *)(a2 + 1);
      v75 = 0;
      if ( (unsigned __int8)v23 > 0xFu )
        LODWORD(v23) = 15;
      else
        LODWORD(v23) = (unsigned __int8)v23;
      v76 = a2;
      v77 = 4 * v23 + 8;
      v59 = a3;
      v79 = &v59;
      v81 = &v55;
      v83 = &v62;
      v78 = 0;
      v80 = 4LL;
      v55 = v47;
      v82 = 4LL;
      v84 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180061903 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v70 = &unk_18006190E;
      v72 = 1;
      UserData.Reserved = 2;
      v71 = 77;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
      v24 = v62;
    }
    if ( v47 != 6 )
    {
      RmpInitializeEnforcerApplicationStateMapKey(a4, (union _RM_SID *)a2, a3, v47, v24, Buffer);
      v25 = v58;
      v54 = 0LL;
      v56 = 0LL;
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EqualRangeImpl<_RM_PSM_APP_INSTANCE_ID>(
        (char *)v58 + 208,
        v26,
        Buffer,
        &v54,
        &v56,
        v66);
      utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::erase(
        (char *)v25 + 208,
        v67,
        v54,
        v56);
    }
    LeaveCriticalSection(v9);
LABEL_19:
    if ( v12 <= 1 )
    {
      result = (__int64)v60;
      if ( *(_DWORD *)v60 == 6 )
        return result;
    }
    result = (__int64)malloc(0x88uLL);
    v30 = (_DWORD *)result;
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
    v31 = *(unsigned __int16 **)(result + 8);
    v32 = (unsigned __int16 *)(result + 24);
    if ( v31 == (unsigned __int16 *)(result + 24) )
      v33 = result + 38;
    else
      v33 = *(_QWORD *)v32;
    if ( v16 <= (v33 - (__int64)v31) >> 1 )
    {
      if ( v31 != a4 )
        memmove(v31, a4, 2 * v16);
      v49 = (_WORD *)(*((_QWORD *)v30 + 1) + 2 * v16);
      *((_QWORD *)v30 + 2) = v49;
      *v49 = 0;
    }
    else
    {
      if ( v31 == v32 )
        v34 = (char *)v30 + 38;
      else
        v34 = *(char **)v32;
      v35 = 2 * ((v34 - (char *)v31) >> 1) + 1;
      if ( v35 < v16 )
        v35 = v16;
      if ( v35 > 0x3FFFFFFFFFFFFFFELL )
        v35 = 0x3FFFFFFFFFFFFFFELL;
      if ( v16 > v35 )
      {
        v37 = 2;
        v64[0] = 0LL;
        v64[1] = 0LL;
        v36 = (void **)v64;
      }
      else
      {
        Block[1] = (void *)(v35 + 1);
        if ( v35 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          Block[0] = 0LL;
        else
          Block[0] = operator new(2 * (v35 + 1), (const struct std::nothrow_t *)&std::nothrow);
        v36 = Block;
        v37 = 1;
      }
      v38 = (char *)*v36;
      v39 = v36[1];
      *v36 = 0LL;
      if ( (v37 & 2) != 0 )
      {
        v54 = (void *)(v37 & 0xFFFFFFFD);
        utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
          v64,
          v27,
          v28,
          v29);
        LOBYTE(v37) = (_BYTE)v54;
      }
      if ( (v37 & 1) != 0 && Block[0] )
        operator delete(Block[0]);
      if ( !v38 )
        return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v30);
      v40 = 2 * v16;
      memcpy_0(v38, a4, v40);
      v41 = &v38[v40];
      *(_WORD *)v41 = 0;
      v42 = (unsigned __int16 *)*((_QWORD *)v30 + 1);
      if ( v42 != v32 )
        operator delete(v42);
      *((_QWORD *)v30 + 1) = v38;
      *((_QWORD *)v30 + 2) = v41;
      *(_QWORD *)v32 = &v38[2 * ((__int64)v39 - 1)];
    }
    if ( a7 > 1 )
    {
      Heap = RmpAllocateHeap(8LL * a7);
      if ( !Heap )
        return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v30);
      v51 = RmpAllocateHeap(4LL * a7);
      if ( !v51 )
      {
        RmpFreeHeap(Heap);
        return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v30);
      }
      memcpy_0(Heap, Src, 8LL * a7);
      v52 = v60;
      *((_QWORD *)v30 + 15) = Heap;
      memcpy_0(v51, v52, 4LL * a7);
      *((_QWORD *)v30 + 14) = v51;
    }
    else
    {
      v30[28] = *(_DWORD *)v60;
      *((_QWORD *)v30 + 15) = *(_QWORD *)Src;
    }
    v30[33] = a9;
    v43 = v61;
    *v30 = 2;
    *(_OWORD *)(v30 + 10) = *(_OWORD *)v43;
    *(_OWORD *)(v30 + 14) = *((_OWORD *)v43 + 1);
    *(_OWORD *)(v30 + 18) = *((_OWORD *)v43 + 2);
    *(_OWORD *)(v30 + 22) = *((_OWORD *)v43 + 3);
    v30[26] = *((_DWORD *)v43 + 16);
    v30[27] = a3;
    v44 = v58;
    v30[32] = a7;
    if ( v44 )
      v11 = (ModernResourceEnforcer *)((char *)v44 + 8);
    v45 = (ExecutionModel::RMExecServicesProvider *)*((_QWORD *)v44 + 31);
    v46 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *, struct ExecutionModel::IRMExecServicesProviderCallback *, void *))(*(_QWORD *)v45 + 40LL);
    if ( v46 == ExecutionModel::RMExecServicesProvider::QueueWorkItem )
      result = ExecutionModel::RMExecServicesProvider::QueueWorkItem(v45, v11, v30);
    else
      result = v46(v45, v11, v30);
    if ( (int)result >= 0 )
      return result;
    return tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v30);
  }
  if ( a7 )
  {
    v17 = (unsigned __int64 *)Src;
    v18 = a7;
    do
    {
      v19 = *v10;
      v20 = -1LL;
      if ( *v10 != 6 )
        v20 = *v17;
      v21 = v15 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
          ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(v58, a4, v61, a3, v19, v20, v54, 0);
      }
      else
      {
        ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(v58, a4, v61, a3, v19, v20, v54, 1);
      }
      v15 = a9;
      ++v10;
      ++v17;
      --v18;
    }
    while ( v18 );
    v9 = v56;
    v11 = 0LL;
    v12 = a7;
  }
  LeaveCriticalSection(v9);
  result = (unsigned int)(a9 - 1);
  if ( (unsigned int)result > 1 )
    goto LABEL_19;
  return result;
}
