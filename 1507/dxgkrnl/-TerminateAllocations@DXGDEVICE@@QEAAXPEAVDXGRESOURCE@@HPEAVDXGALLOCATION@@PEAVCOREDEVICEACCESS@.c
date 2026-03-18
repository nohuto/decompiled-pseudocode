/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C000B49C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005AC34 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00773D0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C007B14C (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0080050 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00800E0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0091FB0 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0136A8C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        DXGADAPTER **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGRESOURCE *v7; // r12
  int v9; // ebx
  __int64 v10; // r13
  int v11; // r15d
  int v12; // ebp
  struct DXGALLOCATION *v13; // rdi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  int v29; // esi
  int v30; // eax
  ADAPTER_RENDER *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 (__fastcall *v34)(__int64, __int64, __int64, __int64); // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // bp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGGLOBAL *v44; // rax
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rcx
  __int64 v52; // rcx
  char v53; // r12
  __int64 v54; // rdi
  unsigned int v55; // ebx
  unsigned int v56; // ebx
  struct DXGALLOCATION *v57; // r9
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbp
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  char v69; // bp
  DXGADAPTER *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  _QWORD *v74; // rax
  DXGADAPTER *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  _QWORD *v79; // rax
  __int64 v80; // r15
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // r9d
  __int64 v85; // rax
  __int64 v86; // r12
  __int64 v87; // r13
  unsigned int v88; // ebp
  struct DXGPROCESS *v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // r8
  int v92; // r9d
  __int64 v93; // [rsp+38h] [rbp-50h]
  int v94; // [rsp+90h] [rbp+8h]
  struct DXGTERMINATIONTRACKER *v95; // [rsp+90h] [rbp+8h]
  char v98; // [rsp+A0h] [rbp+18h]
  struct DXGALLOCATION *v100; // [rsp+A8h] [rbp+20h]

  v94 = 0;
  v7 = a2;
  v9 = ((unsigned __int8)~*(_BYTE *)&a6.0 >> 1) & 1;
  v10 = 0LL;
  v11 = 0;
  if ( *((_DWORD *)this + 70) == 2 || (v12 = 0, (*(_BYTE *)&a6.0 & 1) != 0) )
    v12 = 1;
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( (v14 & 3) != 0
        || (v14 & 0x28) != 0
        || (*((_DWORD *)v13 + 18) & 0x100) != 0
        || (v14 & 0x800) != 0
        || !*((_QWORD *)v13 + 3) )
      {
        break;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 608LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 408LL));
      if ( !v17 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
        *(_QWORD *)(v20 + 24) = 834LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = *((_QWORD *)v13 + 3);
      v93 = v17 + v10;
      v22 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
      v23 = *(_QWORD *)(v22 + 408);
      v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
      Current = DXGPROCESS::GetCurrent(v22);
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 120, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v28 = *((_DWORD *)Current + 34);
              if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v26, &EventBlockThread, v27, v28);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
          }
          *((_QWORD *)Current + 16) = KeGetCurrentThread();
        }
      }
      v29 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 8) + 624LL))(v23, v21);
      if ( Current )
      {
        *((_QWORD *)Current + 16) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v11 = v29 + v94;
      v94 += v29;
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                         + 8LL)
                                                             + 584LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      v10 = v93;
      if ( !v13 )
      {
        v9 = ((unsigned __int8)~*(_BYTE *)&a6.0 >> 1) & 1;
        goto LABEL_33;
      }
    }
    v9 = 0;
LABEL_33:
    v7 = a2;
  }
  v30 = a3;
  if ( a3 )
  {
    DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v7, 0LL, (__int64)a4);
    v30 = a3;
  }
  if ( !v9 || v12 || (!v30 || !*((_QWORD *)v7 + 3)) && v7 )
    goto LABEL_44;
  v31 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v32 = *((_QWORD *)v31 + 117);
  ++*(_DWORD *)(v32 + 20);
  v95 = (struct DXGTERMINATIONTRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v32);
  if ( !v95 )
  {
    v33 = *(unsigned int *)(v32 + 44);
    v34 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v32 + 48);
    v35 = *(unsigned int *)(v32 + 40);
    v36 = *(unsigned int *)(v32 + 36);
    ++*(_DWORD *)(v32 + 24);
    v95 = (struct DXGTERMINATIONTRACKER *)v34(v36, v33, v35, v32);
    if ( !v95 )
    {
      v38 = WdLogNewEntry5_WdLowResource(v37);
      *(_QWORD *)(v38 + 24) = 30520LL;
      WdLogEvent5_WdLowResource(v38);
      goto LABEL_44;
    }
  }
  v39 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v31 + 920, 0LL);
  *((_QWORD *)v31 + 116) = KeGetCurrentThread();
  v44 = DXGGLOBAL::m_pGlobal;
  v45 = v10 + *((_QWORD *)v31 + 113);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v46 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
    *(_QWORD *)(v46 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v46);
    v44 = DXGGLOBAL::m_pGlobal;
  }
  if ( v45 <= *((_QWORD *)v44 + 63) && v45 >= *((_QWORD *)v31 + 113) )
  {
    v39 = 1;
    *((_QWORD *)v31 + 113) = v45;
  }
  *((_QWORD *)v31 + 116) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v31 + 920, 0LL);
  KeLeaveCriticalRegion();
  if ( !v39 )
  {
    v48 = WdLogNewEntry5_WdLowResource(v47);
    *(_QWORD *)(v48 + 24) = 30511LL;
    WdLogEvent5_WdLowResource(v48);
    ADAPTER_RENDER::DeleteTerminationTracker(v31, (struct _SLIST_ENTRY *)v95, v49, v50);
LABEL_44:
    if ( a3 )
      DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)v7, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, v7, 0, a4, (PERESOURCE **)a5, a6);
    return;
  }
  *(_QWORD *)v95 = v7;
  *((_QWORD *)v95 + 1) = a4;
  v51 = *(void **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)v95 + 2) = v51;
  *((_QWORD *)v95 + 3) = this;
  *((_QWORD *)v95 + 5) = v10;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v95 + 12) = a6;
  *((_DWORD *)v95 + 8) = v11;
  ObfReferenceObject(v51);
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v53 = 0;
  v98 = 0;
  if ( *(_QWORD *)v95 )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      (ADAPTER_RENDER *)v52,
      *(struct DXGRESOURCE **)v95,
      (struct COREDEVICEACCESS *)a5);
  v54 = *((_QWORD *)v95 + 1);
  if ( v54 )
  {
    do
    {
      v55 = *(_DWORD *)(*(_QWORD *)(v54 + 48) + 4LL);
      if ( (v55 & 0x2000) != 0 && *(_QWORD *)(v54 + 24) )
      {
        v56 = (v55 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v56, (struct DXGALLOCATION *)v54);
        DXGDEVICE::TestAndSetDisplayedPrimary(this, v56, (const struct DXGALLOCATION *)v54, v57);
      }
      CurrentProcess = PsGetCurrentProcess(v52);
      ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
      if ( ProcessWin32Process )
      {
        v64 = *(_QWORD *)(ProcessWin32Process + 248);
      }
      else
      {
        v65 = WdLogNewEntry5_WdEvent(v61, v60, v62, v63);
        *(_QWORD *)(v65 + 24) = CurrentProcess;
        WdLogEvent5_WdEvent(v65);
        v64 = 0LL;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v64 + 192, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v68 = *(_DWORD *)(v64 + 208);
          if ( v68 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v66, &EventBlockThread, v67, v68);
        }
        ExAcquirePushLockExclusiveEx(v64 + 192, 0LL);
      }
      *(_QWORD *)(v64 + 200) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v64 + 216), *(_DWORD *)(v54 + 16));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v54);
      *(_QWORD *)(v64 + 200) = 0LL;
      ExReleasePushLockExclusiveEx(v64 + 192, 0LL);
      KeLeaveCriticalRegion();
      v69 = 0;
      if ( a5 )
      {
        v70 = a5[2];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v70 + 18)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v70 + 16)) )
        {
          v69 = 1;
          if ( *((_BYTE *)a5 + 64) )
            COREACCESS::Release((COREACCESS *)(a5 + 4));
          if ( !*((_BYTE *)a5 + 24) )
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v71, v73);
            v74[3] = 275LL;
            v74[4] = 4LL;
            v74[5] = a5 + 1;
            v74[6] = 0LL;
            v74[7] = 0LL;
            WdLogEvent5_WdCriticalError(v74);
          }
          v75 = a5[2];
          *((_BYTE *)a5 + 24) = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v75 + 18) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v75);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v54 + 88));
      if ( v69 )
      {
        if ( *((_BYTE *)a5 + 24) )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v76, v77);
          v79[3] = 275LL;
          v79[4] = 4LL;
          v79[5] = a5 + 1;
          v79[6] = 0LL;
          v79[7] = 0LL;
          WdLogEvent5_WdCriticalError(v79);
        }
        v52 = (__int64)a5[2];
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v52 + 144) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v52 + 32)) )
            KeWaitForSingleObject((char *)a5[2] + 32, Executive, 0, 0, 0LL);
          DXGADAPTER::AcquireCoreResourceShared(a5[2]);
        }
        *((_BYTE *)a5 + 24) = 1;
        if ( *((_BYTE *)a5 + 64) )
          COREACCESS::AcquireShared((COREACCESS *)(a5 + 4));
      }
      v80 = *(_QWORD *)(v54 + 64);
      if ( *(_QWORD *)(v54 + 24) )
      {
        if ( !v53 )
        {
          v98 = 1;
          if ( this != (DXGDEVICE *)-112LL && *((struct _KTHREAD **)this + 15) == KeGetCurrentThread() )
          {
            v81 = WdLogNewEntry5_WdAssertion(v52, v76, v77, v78);
            *(_QWORD *)(v81 + 24) = 1135LL;
            WdLogEvent5_WdAssertion(v81);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v84 = *((_DWORD *)this + 32);
              if ( v84 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v82, &EventBlockThread, v83, v84);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
          }
          *((_QWORD *)this + 15) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 4681) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 2341));
          *((_QWORD *)this + 15) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
          KeLeaveCriticalRegion();
        }
        v85 = *((_QWORD *)this + 2);
        v86 = *(_QWORD *)(v85 + 408);
        v87 = *(_QWORD *)(v85 + 400);
        v88 = (*(_DWORD *)(*(_QWORD *)(v54 + 48) + 4LL) >> 6) & 0xF;
        v100 = *(struct DXGALLOCATION **)(v54 + 24);
        v89 = DXGPROCESS::GetCurrent(v52);
        if ( v89 )
        {
          if ( *((struct _KTHREAD **)v89 + 16) == KeGetCurrentThread() )
          {
            v89 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v89 + 120, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v92 = *((_DWORD *)v89 + 34);
                if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v90, &EventBlockThread, v91, v92);
              }
              ExAcquirePushLockExclusiveEx((char *)v89 + 120, 0LL);
            }
            *((_QWORD *)v89 + 16) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, struct DXGALLOCATION *, _QWORD, _QWORD, struct DXGTERMINATIONTRACKER *))(*(_QWORD *)(v87 + 8) + 144LL))(
          v86,
          v100,
          v88,
          a6.Value,
          v95);
        if ( v89 )
        {
          *((_QWORD *)v89 + 16) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v89 + 120, 0LL);
          KeLeaveCriticalRegion();
        }
        v53 = v98;
      }
      v54 = v80;
    }
    while ( v80 );
  }
}
