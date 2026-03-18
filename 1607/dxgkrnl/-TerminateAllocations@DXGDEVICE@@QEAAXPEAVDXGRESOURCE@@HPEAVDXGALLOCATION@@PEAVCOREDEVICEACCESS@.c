/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009C300
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0007DD4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C006EFEC (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0092900 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00966D4 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB04 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB8C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A7730 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015E928 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGALLOCATION **a2,
        int a3,
        struct DXGALLOCATION *a4,
        DXGADAPTER **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGALLOCATION **v7; // rbx
  BOOL v8; // r15d
  __int64 v9; // rbp
  int v11; // r13d
  BOOL v12; // r14d
  struct DXGALLOCATION *v13; // rdi
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct DXGPROCESS *Current; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ebp
  ADAPTER_RENDER *v21; // rbx
  __int64 v22; // rbp
  PSLIST_ENTRY v23; // rdi
  char v24; // r15
  unsigned __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 CurrentProcess; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXGGLOBAL *v30; // rax
  __int64 v31; // rcx
  struct _SLIST_ENTRY *v32; // rcx
  DXGADAPTER *v33; // rcx
  char v34; // r13
  __int64 v35; // rbx
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 ProcessDxgProcess; // r15
  __int64 v40; // rbp
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // r15
  DXGADAPTER *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct _KTHREAD **v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r12
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r13
  unsigned int v56; // r15d
  struct DXGPROCESS *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 (__fastcall *v62)(__int64, __int64, __int64, __int64); // rax
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // ebp
  struct DXGALLOCATION *v71; // r9
  int v72; // r9d
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  int v76; // r9d
  int v77; // r9d
  __int64 v78; // [rsp+30h] [rbp-58h]
  __int64 v79; // [rsp+38h] [rbp-50h]
  __int64 v80; // [rsp+90h] [rbp+8h]
  __int64 v81; // [rsp+90h] [rbp+8h]
  int v83; // [rsp+A0h] [rbp+18h]
  char v84; // [rsp+A0h] [rbp+18h]
  __int64 v85; // [rsp+A8h] [rbp+20h]
  __int64 v86; // [rsp+A8h] [rbp+20h]

  v83 = a3;
  v7 = a2;
  v80 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v9 = 0LL;
  v11 = 0;
  v12 = *((_DWORD *)this + 76) == 2;
  if ( !*((_DWORD *)this + 18) )
  {
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
    a3 = v83;
  }
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( (v14 & 0x2B) != 0 || (*((_DWORD *)v13 + 18) & 0x800) != 0 || (v14 & 0x800) != 0 || !*((_QWORD *)v13 + 3) )
        break;
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 624LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 408LL));
      if ( !v16 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v66 + 24) = 850LL;
        WdLogEvent5_WdAssertion(v66);
      }
      v80 = v16 + v9;
      v79 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 408LL);
      v85 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
      v78 = *((_QWORD *)v13 + 3);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v67 = *((_DWORD *)Current + 32);
              if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v18, &EventBlockThread, v19, v67);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 112, 0LL);
          }
          *((_QWORD *)Current + 15) = KeGetCurrentThread();
        }
      }
      v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v85 + 8) + 640LL))(v79, v78);
      if ( Current )
      {
        *((_QWORD *)Current + 15) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      v11 += v20;
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      v9 = v80;
      if ( !v13 )
        goto LABEL_20;
    }
    v8 = 0;
LABEL_20:
    v7 = a2;
    a3 = v83;
  }
  if ( a3 )
  {
    DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, (struct DXGRESOURCE *)v7);
    a3 = v83;
  }
  if ( !v8 || v12 || (!a3 || !v7[3]) && v7 )
    goto LABEL_88;
  v21 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v22 = *((_QWORD *)v21 + 117);
  ++*(_DWORD *)(v22 + 20);
  v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
  if ( !v23 )
  {
    v61 = *(unsigned int *)(v22 + 44);
    v62 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v22 + 48);
    v63 = *(unsigned int *)(v22 + 40);
    v64 = *(unsigned int *)(v22 + 36);
    ++*(_DWORD *)(v22 + 24);
    v23 = (PSLIST_ENTRY)v62(v64, v61, v63, v22);
    if ( !v23 )
    {
      v68 = WdLogNewEntry5_WdLowResource(v65);
      *(_QWORD *)(v68 + 24) = 3747LL;
      WdLogEvent5_WdLowResource(v68);
      goto LABEL_87;
    }
  }
  v24 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v21 + 920, 0LL);
  *((_QWORD *)v21 + 116) = KeGetCurrentThread();
  v25 = *((_QWORD *)v21 + 113) + v80;
  CurrentProcess = PsGetCurrentProcess(v26);
  if ( *(_BYTE *)(PsGetProcessDxgProcess(CurrentProcess, v28) + 290) )
    goto LABEL_32;
  v30 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v69 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v69 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v69);
    v30 = DXGGLOBAL::m_pGlobal;
  }
  if ( v25 <= *((_QWORD *)v30 + 63) )
  {
LABEL_32:
    if ( v25 >= *((_QWORD *)v21 + 113) )
    {
      v24 = 1;
      *((_QWORD *)v21 + 113) = v25;
    }
  }
  *((_QWORD *)v21 + 116) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v21 + 920, 0LL);
  KeLeaveCriticalRegion();
  if ( !v24 )
  {
    v60 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v60 + 24) = 3738LL;
    WdLogEvent5_WdLowResource(v60);
    ADAPTER_RENDER::DeleteTerminationTracker(v21, v23);
LABEL_87:
    a3 = v83;
LABEL_88:
    if ( a3 )
      DXGDEVICE::DestroyResource(this, a2, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, (unsigned __int64)a2, 0, a4, (PERESOURCE **)a5, a6);
    return;
  }
  v23->Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&v23->Next + 1) = a4;
  v32 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 48LL);
  *((_QWORD *)&v23[2].Next + 1) = v80;
  v23[1].Next = v32;
  *((_QWORD *)&v23[1].Next + 1) = this;
  LODWORD(v23[3].Next) = a6;
  LODWORD(v23[2].Next) = v11;
  ObfReferenceObject(v32);
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v34 = 0;
  v84 = 0;
  if ( v23->Next )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      v33,
      (struct DXGRESOURCE *)v23->Next,
      (struct COREDEVICEACCESS *)a5);
  v35 = *((_QWORD *)&v23->Next + 1);
  if ( v35 )
  {
    do
    {
      v36 = *(_DWORD *)(*(_QWORD *)(v35 + 48) + 4LL);
      if ( (v36 & 0x2000) != 0 && *(_QWORD *)(v35 + 24) )
      {
        v70 = (v36 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v70, (struct DXGALLOCATION *)v35);
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, v70, (const struct DXGALLOCATION *)v35, v71);
      }
      v37 = PsGetCurrentProcess(v33);
      ProcessDxgProcess = PsGetProcessDxgProcess(v37, v38);
      v40 = ProcessDxgProcess + 184;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v72 = *(_DWORD *)(ProcessDxgProcess + 200);
          if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v41, &EventBlockThread, v42, v72);
        }
        ExAcquirePushLockExclusiveEx(v40, 0LL);
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(ProcessDxgProcess + 208), *(_DWORD *)(v35 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v35);
      *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
      v43 = 0;
      if ( a5 )
      {
        v44 = a5[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v44 + 20)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v44 + 18)) )
        {
          v43 = 1;
          if ( *((_BYTE *)a5 + 80) )
            COREACCESS::Release((COREACCESS *)(a5 + 5));
          if ( !*((_BYTE *)a5 + 32) )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45, v47);
            v73[3] = 275LL;
            v73[4] = 4LL;
            v73[5] = a5 + 1;
            v73[6] = 0LL;
            v73[7] = 0LL;
            WdLogEvent5_WdCriticalError(v73);
          }
          v48 = (struct _KTHREAD **)a5[3];
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v48[20] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v48);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v35 + 88));
      if ( v43 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v49, v50);
          v74[3] = 275LL;
          v74[4] = 4LL;
          v74[5] = a5 + 1;
          v74[6] = 0LL;
          v74[7] = 0LL;
          WdLogEvent5_WdCriticalError(v74);
        }
        v33 = a5[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v33 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v33 + 2) )
            KeWaitForSingleObject((char *)a5[3] + 48, Executive, 0, 0, 0LL);
          DXGADAPTER::AcquireCoreResourceShared(a5[3]);
        }
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::AcquireShared((COREACCESS *)(a5 + 5));
      }
      v51 = *(_QWORD *)(v35 + 64);
      if ( *(_QWORD *)(v35 + 24) )
      {
        if ( !v34 )
        {
          v84 = 1;
          if ( this != (DXGDEVICE *)-112LL && *((struct _KTHREAD **)this + 15) == KeGetCurrentThread() )
          {
            v75 = WdLogNewEntry5_WdAssertion(v33);
            *(_QWORD *)(v75 + 24) = 1142LL;
            WdLogEvent5_WdAssertion(v75);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v76 = *((_DWORD *)this + 32);
              if ( v76 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v52, &EventBlockThread, v53, v76);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
          }
          *((_QWORD *)this + 15) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 719) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 360));
          *((_QWORD *)this + 15) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
          KeLeaveCriticalRegion();
        }
        v54 = *((_QWORD *)this + 2);
        v55 = *(_QWORD *)(v54 + 408);
        v81 = *(_QWORD *)(v54 + 400);
        v56 = (*(_DWORD *)(*(_QWORD *)(v35 + 48) + 4LL) >> 6) & 0xF;
        v86 = *(_QWORD *)(v35 + 24);
        v57 = DXGPROCESS::GetCurrent();
        if ( v57 )
        {
          if ( *((struct _KTHREAD **)v57 + 15) == KeGetCurrentThread() )
          {
            v57 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v57 + 112, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v77 = *((_DWORD *)v57 + 32);
                if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_q(v58, &EventBlockThread, v59, v77);
              }
              ExAcquirePushLockExclusiveEx((char *)v57 + 112, 0LL);
            }
            *((_QWORD *)v57 + 15) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, PSLIST_ENTRY))(*(_QWORD *)(v81 + 8) + 144LL))(
          v55,
          v86,
          v56,
          a6.Value,
          v23);
        if ( v57 )
        {
          *((_QWORD *)v57 + 15) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v57 + 112, 0LL);
          KeLeaveCriticalRegion();
        }
        v34 = v84;
      }
      v35 = v51;
    }
    while ( v51 );
  }
}
