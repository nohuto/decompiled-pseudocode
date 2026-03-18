/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0002258 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005BD40 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0068868 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C006E094 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074234 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00BC0E0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013B158 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
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
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  int v25; // esi
  int v26; // eax
  ADAPTER_RENDER *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(__int64, __int64, __int64, __int64); // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  char v38; // bp
  __int64 v39; // rcx
  struct DXGGLOBAL *v40; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  struct _SLIST_ENTRY *v48; // rcx
  ADAPTER_RENDER *v49; // rcx
  char v50; // r12
  __int64 v51; // rdi
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  struct DXGALLOCATION *v54; // r9
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // r9d
  char v62; // bp
  DXGADAPTER *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // rax
  struct _KTHREAD **v68; // rcx
  __int64 v69; // rdx
  DXGADAPTER *v70; // rcx
  __int64 v71; // r8
  _QWORD *v72; // rax
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // r9d
  __int64 v78; // rax
  __int64 v79; // r12
  __int64 v80; // r13
  unsigned int v81; // ebp
  struct DXGPROCESS *v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  __int64 v86; // [rsp+38h] [rbp-50h]
  int v87; // [rsp+90h] [rbp+8h]
  struct _SLIST_ENTRY *v88; // [rsp+90h] [rbp+8h]
  char v91; // [rsp+A0h] [rbp+18h]
  struct DXGALLOCATION *v93; // [rsp+A8h] [rbp+20h]

  v87 = 0;
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
        || (*((_DWORD *)v13 + 18) & 0x800) != 0
        || (v14 & 0x800) != 0
        || !*((_QWORD *)v13 + 3) )
      {
        break;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 8LL) + 608LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 432LL));
      if ( !v16 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v17 + 24) = 833LL;
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = *((_QWORD *)v13 + 3);
      v86 = v16 + v10;
      v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 432LL);
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
      Current = DXGPROCESS::GetCurrent();
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
              v24 = *((_DWORD *)Current + 34);
              if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v22, &EventBlockThread, v23, v24);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
          }
          *((_QWORD *)Current + 16) = KeGetCurrentThread();
        }
      }
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 8) + 624LL))(v19, v18);
      if ( Current )
      {
        *((_QWORD *)Current + 16) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v11 = v25 + v87;
      v87 += v25;
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL)
                                                                         + 8LL)
                                                             + 584LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      v10 = v86;
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
  v26 = a3;
  if ( a3 )
  {
    DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)this, v7);
    v26 = a3;
  }
  if ( !v9 || v12 || (!v26 || !*((_QWORD *)v7 + 3)) && v7 )
    goto LABEL_44;
  v27 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v28 = *((_QWORD *)v27 + 126);
  ++*(_DWORD *)(v28 + 20);
  v88 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v28);
  if ( !v88 )
  {
    v29 = *(unsigned int *)(v28 + 44);
    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v28 + 48);
    v31 = *(unsigned int *)(v28 + 40);
    v32 = *(unsigned int *)(v28 + 36);
    ++*(_DWORD *)(v28 + 24);
    v88 = (struct _SLIST_ENTRY *)v30(v32, v29, v31, v28);
    if ( !v88 )
    {
      v37 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = 31133LL;
      WdLogEvent5_WdLowResource(v37);
      goto LABEL_44;
    }
  }
  v38 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v27 + 992, 0LL);
  *((_QWORD *)v27 + 125) = KeGetCurrentThread();
  v40 = DXGGLOBAL::m_pGlobal;
  v41 = v10 + *((_QWORD *)v27 + 122);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v42 = WdLogNewEntry5_WdAssertion(v39);
    *(_QWORD *)(v42 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v42);
    v40 = DXGGLOBAL::m_pGlobal;
  }
  if ( v41 <= *((_QWORD *)v40 + 81) && v41 >= *((_QWORD *)v27 + 122) )
  {
    v38 = 1;
    *((_QWORD *)v27 + 122) = v41;
  }
  *((_QWORD *)v27 + 125) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v27 + 992, 0LL);
  KeLeaveCriticalRegion();
  if ( !v38 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v44, v43, v45, v46);
    *(_QWORD *)(v47 + 24) = 31124LL;
    WdLogEvent5_WdLowResource(v47);
    ADAPTER_RENDER::DeleteTerminationTracker(v27, v88);
LABEL_44:
    if ( a3 )
      DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)v7, (struct COREDEVICEACCESS *)a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, v7, 0, a4, (struct COREDEVICEACCESS *)a5, a6);
    return;
  }
  v88->Next = (struct _SLIST_ENTRY *)v7;
  *((_QWORD *)&v88->Next + 1) = a4;
  v48 = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 5) + 56LL);
  v88[1].Next = v48;
  *((_QWORD *)&v88[1].Next + 1) = this;
  *((_QWORD *)&v88[2].Next + 1) = v10;
  LODWORD(v88[3].Next) = a6;
  LODWORD(v88[2].Next) = v11;
  ObfReferenceObject(v48);
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v50 = 0;
  v91 = 0;
  if ( v88->Next )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      v49,
      (struct DXGRESOURCE *)v88->Next,
      (struct COREDEVICEACCESS *)a5);
  v51 = *((_QWORD *)&v88->Next + 1);
  if ( v51 )
  {
    do
    {
      v52 = *(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL);
      if ( (v52 & 0x2000) != 0 && *(_QWORD *)(v51 + 24) )
      {
        v53 = (v52 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v53, (struct DXGALLOCATION *)v51);
        DXGDEVICE::TestAndSetDisplayedPrimary(this, v53, (const struct DXGALLOCATION *)v51, v54);
      }
      CurrentProcess = PsGetCurrentProcess();
      ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
      if ( ProcessWin32Process )
      {
        v57 = *(_QWORD *)(ProcessWin32Process + 248);
      }
      else
      {
        v58 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v58 + 24) = CurrentProcess;
        WdLogEvent5_WdEvent(v58);
        v57 = 0LL;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v57 + 192, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v61 = *(_DWORD *)(v57 + 208);
          if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v59, &EventBlockThread, v60, v61);
        }
        ExAcquirePushLockExclusiveEx(v57 + 192, 0LL);
      }
      *(_QWORD *)(v57 + 200) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v57 + 216), *(_DWORD *)(v51 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v51);
      *(_QWORD *)(v57 + 200) = 0LL;
      ExReleasePushLockExclusiveEx(v57 + 192, 0LL);
      KeLeaveCriticalRegion();
      v62 = 0;
      if ( a5 )
      {
        v63 = a5[2];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v63 + 18)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v63 + 16)) )
        {
          v62 = 1;
          if ( *((_BYTE *)a5 + 64) )
            COREACCESS::Release((COREACCESS *)(a5 + 4));
          if ( !*((_BYTE *)a5 + 24) )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64, v66);
            v67[3] = 275LL;
            v67[4] = 4LL;
            v67[5] = a5 + 1;
            v67[6] = 0LL;
            v67[7] = 0LL;
            WdLogEvent5_WdCriticalError(v67);
          }
          v68 = (struct _KTHREAD **)a5[2];
          *((_BYTE *)a5 + 24) = 0;
          if ( KeGetCurrentThread() != v68[18] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v68);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v51 + 88));
      if ( v62 )
      {
        if ( *((_BYTE *)a5 + 24) )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v70, v69, v71);
          v72[3] = 275LL;
          v72[4] = 4LL;
          v72[5] = a5 + 1;
          v72[6] = 0LL;
          v72[7] = 0LL;
          WdLogEvent5_WdCriticalError(v72);
        }
        v70 = a5[2];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v70 + 18) )
        {
          if ( !KeReadStateEvent((PRKEVENT)((char *)v70 + 32)) )
            KeWaitForSingleObject((char *)a5[2] + 32, Executive, 0, 0, 0LL);
          DXGADAPTER::AcquireCoreResourceShared(a5[2]);
        }
        *((_BYTE *)a5 + 24) = 1;
        if ( *((_BYTE *)a5 + 64) )
          COREACCESS::AcquireShared((COREACCESS *)(a5 + 4));
      }
      v73 = *(_QWORD *)(v51 + 64);
      if ( *(_QWORD *)(v51 + 24) )
      {
        if ( !v50 )
        {
          v91 = 1;
          if ( this != (DXGDEVICE *)-112LL && *((struct _KTHREAD **)this + 15) == KeGetCurrentThread() )
          {
            v74 = WdLogNewEntry5_WdAssertion(v70);
            *(_QWORD *)(v74 + 24) = 1155LL;
            WdLogEvent5_WdAssertion(v74);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v77 = *((_DWORD *)this + 32);
              if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v75, &EventBlockThread, v76, v77);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
          }
          *((_QWORD *)this + 15) = KeGetCurrentThread();
          if ( ++*((_DWORD *)this + 713) == 1 )
            KeClearEvent(*((PRKEVENT *)this + 357));
          *((_QWORD *)this + 15) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
          KeLeaveCriticalRegion();
        }
        v78 = *((_QWORD *)this + 2);
        v79 = *(_QWORD *)(v78 + 432);
        v80 = *(_QWORD *)(v78 + 424);
        v81 = (*(_DWORD *)(*(_QWORD *)(v51 + 48) + 4LL) >> 6) & 0xF;
        v93 = *(struct DXGALLOCATION **)(v51 + 24);
        v82 = DXGPROCESS::GetCurrent();
        if ( v82 )
        {
          if ( *((struct _KTHREAD **)v82 + 16) == KeGetCurrentThread() )
          {
            v82 = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v82 + 120, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v85 = *((_DWORD *)v82 + 34);
                if ( v85 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v83, &EventBlockThread, v84, v85);
              }
              ExAcquirePushLockExclusiveEx((char *)v82 + 120, 0LL);
            }
            *((_QWORD *)v82 + 16) = KeGetCurrentThread();
          }
        }
        (*(void (__fastcall **)(__int64, struct DXGALLOCATION *, _QWORD, _QWORD, struct _SLIST_ENTRY *))(*(_QWORD *)(v80 + 8) + 144LL))(
          v79,
          v93,
          v81,
          a6.Value,
          v88);
        if ( v82 )
        {
          *((_QWORD *)v82 + 16) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v82 + 120, 0LL);
          KeLeaveCriticalRegion();
        }
        v50 = v91;
      }
      v51 = v73;
    }
    while ( v73 );
  }
}
