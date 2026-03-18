/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0074DF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C011F9A4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C012CD6C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C012CF0C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014A904 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _D3DKMT_RENDER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  D3DKMT_HANDLE hDevice; // ebx
  DXGPUSHLOCK *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // edx
  struct DXGDEVICE **v20; // rdi
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  unsigned int v24; // r14d
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  struct DXGDEVICE *v27; // rbx
  _QWORD *v28; // r14
  struct _KEVENT *v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // si
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  ULONG BroadcastContextCount; // eax
  __int64 v38; // rsi
  __int64 v39; // rax
  _BYTE *PoolWithTag; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r13
  _QWORD *v45; // r11
  int v46; // r9d
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r15
  unsigned int v51; // r13d
  D3DKMT_HANDLE v52; // esi
  unsigned int v53; // ecx
  __int64 v54; // r8
  int v55; // edx
  __int64 v56; // rsi
  __int64 v57; // rcx
  void *v58; // r12
  _QWORD *v59; // rax
  __int64 v60; // rsi
  _BYTE *v61; // rcx
  __int64 v62; // r9
  unsigned __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rcx
  int v66; // r9d
  volatile signed __int64 *v67; // r12
  signed __int64 v68; // rax
  __int64 v69; // rax
  struct DXGADAPTER *v70; // r13
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  struct DXGDEVICE *v74; // rdi
  volatile signed __int64 *v75; // rcx
  signed __int64 v76; // rax
  __int64 v77; // rax
  volatile signed __int64 *v78; // rcx
  signed __int64 v79; // rsi
  __int64 v80; // rax
  _QWORD *v81; // rax
  struct DXGALLOCATION **v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  bool v92; // r14
  struct _D3DKMT_RENDER *v93; // rcx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdi
  __int64 AllocationCount; // rdx
  struct DXGALLOCATION **v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rcx
  int v103; // edi
  int v104; // eax
  _QWORD *v105; // rax
  __int64 v106; // rcx
  _QWORD *v107; // rax
  struct DXGADAPTER *v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  DXGADAPTER *v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rcx
  unsigned __int64 i; // rsi
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rbx
  struct DXGDEVICE *v128; // rax
  __int64 v129; // r9
  __int64 v130; // r9
  __int64 v131; // rax
  __int64 v132; // rcx
  DXGCONTEXT *v134; // [rsp+38h] [rbp-D0h]
  struct DXGDEVICE **v135; // [rsp+48h] [rbp-C0h]
  __int64 v136; // [rsp+50h] [rbp-B8h]
  void *Base; // [rsp+58h] [rbp-B0h]
  _BYTE v138[24]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v139; // [rsp+80h] [rbp-88h]
  char v140; // [rsp+88h] [rbp-80h]
  char v141[8]; // [rsp+98h] [rbp-70h] BYREF
  char v142[8]; // [rsp+A0h] [rbp-68h] BYREF
  DXGADAPTER *v143; // [rsp+A8h] [rbp-60h]
  char v144; // [rsp+B0h] [rbp-58h]
  char v145[8]; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGADAPTER *v146; // [rsp+C0h] [rbp-48h]
  char v147; // [rsp+C8h] [rbp-40h]
  struct DXGDEVICE *v148; // [rsp+D0h] [rbp-38h]
  char v149; // [rsp+D8h] [rbp-30h]
  void *Src; // [rsp+E8h] [rbp-20h]
  _BYTE v151[32]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v152; // [rsp+110h] [rbp+8h]
  __int64 v153; // [rsp+118h] [rbp+10h] BYREF
  char v154; // [rsp+120h] [rbp+18h]
  DXGPUSHLOCK *v155; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v156; // [rsp+130h] [rbp+28h]
  _QWORD v157[3]; // [rsp+140h] [rbp+38h] BYREF
  PERESOURCE *v158[10]; // [rsp+158h] [rbp+50h] BYREF
  PVOID P; // [rsp+1A8h] [rbp+A0h] BYREF
  char v160; // [rsp+1B0h] [rbp+A8h] BYREF
  int v161; // [rsp+2B0h] [rbp+1A8h]
  char v163; // [rsp+310h] [rbp+208h]
  unsigned int v164; // [rsp+318h] [rbp+210h] BYREF
  __int64 v165; // [rsp+320h] [rbp+218h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3020);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v131 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v131 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v131);
    goto LABEL_191;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  v165 = v10;
  if ( !v10 )
  {
LABEL_191:
    v24 = -1073741811;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v25[3] = -1073741811LL;
    v25[4] = PsGetCurrentProcess(v132);
    goto LABEL_192;
  }
  hDevice = a1->hDevice;
  v12 = (DXGPUSHLOCK *)(v10 + 192);
  v155 = (DXGPUSHLOCK *)(v10 + 192);
  if ( v10 != -192 && *(struct _KTHREAD **)(v10 + 200) == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v10 + 208);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockSharedEx(v10 + 192, 0LL);
  }
  v17 = (hDevice >> 6) & 0xFFFFFF;
  if ( v17 >= *(_DWORD *)(v10 + 232) )
    goto LABEL_24;
  v18 = *(_QWORD *)(v10 + 216);
  v19 = *(_DWORD *)(v18 + 16LL * v17 + 8);
  if ( ((hDevice >> 26) & 0x30) != (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30)
    || (v19 & 0x1000) != 0
    || (v19 & 0xF) == 0
    || (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) != 7 )
  {
    goto LABEL_24;
  }
  v20 = *(struct DXGDEVICE ***)(v18 + 16LL * v17);
  v134 = (DXGCONTEXT *)v20;
  if ( !v20 )
    goto LABEL_25;
  _m_prefetchw(v20 + 4);
  v21 = (signed __int64)v20[4];
  if ( v21 )
  {
    while ( 1 )
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 4, v21 + 1, v21);
      if ( v22 == v21 )
        break;
      if ( !v21 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v20 = 0LL;
    v134 = 0LL;
  }
LABEL_25:
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v24 = -1073741811;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v25[3] = -1073741811LL;
    v25[4] = PsGetCurrentProcess(v26);
    v25[5] = a1->hDevice;
LABEL_192:
    WdLogEvent5_WdError(v25);
    goto LABEL_193;
  }
  v27 = v20[2];
  v28 = v20 + 2;
  v135 = v20 + 2;
  v29 = (struct _KEVENT *)(*((_QWORD *)v27 + 2) + 80LL);
  if ( !KeReadStateEvent(v29) )
    KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v27 + 10), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 80LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v27 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v34, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v27 + 10), 1u);
    if ( v33 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v27 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 80LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v136 = *v28;
  v35 = *(_QWORD *)(*(_QWORD *)(*v28 + 16LL) + 16LL);
  if ( !*(_BYTE *)(v35 + 1915)
    || (*(_DWORD *)&a1->Flags & 0x40) != 0
    || (NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v35),
        NumDifferentPhysicalAdapters <= 1) )
  {
    v163 = 0;
  }
  else
  {
    v163 = 1;
    a1->BroadcastContextCount = NumDifferentPhysicalAdapters - 1;
  }
  BroadcastContextCount = a1->BroadcastContextCount;
  v38 = BroadcastContextCount + 1;
  if ( BroadcastContextCount <= 0x40 )
  {
    Src = 0LL;
    v152 = 0;
    if ( (unsigned int)v38 <= 4 )
    {
      PoolWithTag = v151;
    }
    else
    {
      v35 = (unsigned int)v38;
      v30 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v38;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v38 < 8 )
        goto LABEL_177;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v38, 0x4B677844u);
    }
    Src = PoolWithTag;
    v152 = v38;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v38);
      v24 = -1073741811;
      *(_QWORD *)Src = v20;
      if ( v163 )
      {
        v44 = v136;
        v43 = 0LL;
        v45 = Src;
        v46 = 0;
        v41 = *(_QWORD *)(v136 + 288);
        while ( v41 != v136 + 288 && v41 )
        {
          v42 = *(unsigned int *)(v41 + 328);
          if ( (unsigned int)v42 >= (unsigned int)v38 )
          {
            v48 = WdLogNewEntry5_WdError(v42);
            *(_QWORD *)(v48 + 24) = v20;
            *(_QWORD *)(v48 + 32) = 2696LL;
            WdLogEvent5_WdError(v48);
            goto LABEL_178;
          }
          if ( ((1 << v42) & (unsigned int)v43) != 0 )
          {
            v47 = WdLogNewEntry5_WdError(v42);
            *(_QWORD *)(v47 + 24) = v20;
            *(_QWORD *)(v47 + 32) = 2703LL;
            WdLogEvent5_WdError(v47);
            goto LABEL_178;
          }
          v43 = (1 << v42) | (unsigned int)v43;
          v45[v42] = v41;
          v41 = *(_QWORD *)v41;
          ++v46;
        }
        if ( v46 != (_DWORD)v38 )
        {
          v49 = WdLogNewEntry5_WdError(v42);
          *(_QWORD *)(v49 + 24) = v20;
          *(_QWORD *)(v49 + 32) = 2716LL;
          WdLogEvent5_WdError(v49);
LABEL_178:
          if ( Src != v151 && Src )
            ExFreePoolWithTag(Src, 0);
          goto LABEL_181;
        }
      }
      else
      {
        v50 = 0LL;
        if ( a1->BroadcastContextCount )
        {
          v51 = 1;
          while ( 1 )
          {
            v52 = a1->BroadcastContext[v50];
            DXGPUSHLOCK::AcquireShared(v12);
            v53 = (v52 >> 6) & 0xFFFFFF;
            if ( v53 < *(_DWORD *)(v165 + 232)
              && (v54 = *(_QWORD *)(v165 + 216),
                  v55 = *(_DWORD *)(v54 + 16LL * v53 + 8),
                  ((v52 >> 26) & 0x30) == (*(_BYTE *)(v54 + 16LL * v53 + 8) & 0x30))
              && (v55 & 0x1000) == 0
              && (v55 & 0xF) != 0
              && (*(_BYTE *)(v54 + 16LL * v53 + 8) & 0xF) == 7 )
            {
              v56 = *(_QWORD *)(v54 + 16LL * v53);
            }
            else
            {
              v56 = 0LL;
            }
            ExReleasePushLockSharedEx(v12, 0LL);
            KeLeaveCriticalRegion();
            v57 = 8LL * v51;
            *(_QWORD *)((char *)Src + v57) = v56;
            v58 = Src;
            v41 = *(_QWORD *)((char *)Src + v57);
            if ( !v41 || *(struct DXGDEVICE **)(v41 + 16) != *v135 )
              break;
            v50 = (unsigned int)(v50 + 1);
            ++v51;
            if ( (unsigned int)v50 >= a1->BroadcastContextCount )
            {
              v44 = v136;
              goto LABEL_77;
            }
            v12 = v155;
          }
          v59 = (_QWORD *)WdLogNewEntry5_WdError(v57);
          v59[3] = v20;
          v59[4] = a1->BroadcastContext[v50];
          v59[5] = (unsigned int)v50;
          v59[6] = -1073741811LL;
          WdLogEvent5_WdError(v59);
          goto LABEL_178;
        }
        v44 = v136;
      }
      v58 = Src;
LABEL_77:
      v60 = v152;
      v61 = 0LL;
      v62 = 0LL;
      Base = 0LL;
      v139 = 0;
      if ( v152 <= 4 )
      {
        v61 = v138;
        Base = v138;
      }
      else
      {
        v41 = 0xFFFFFFFFFFFFFFFFuLL % v152;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v152 < 8 )
        {
LABEL_83:
          v140 = 1;
          if ( !v61 )
            goto LABEL_169;
          memmove(v61, v58, 8LL * (unsigned int)v62);
          qsort(Base, v139, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
          v43 = v139;
          v61 = Base;
          v41 = 1LL;
          if ( v139 <= 1uLL )
          {
LABEL_87:
            v63 = 0LL;
            if ( v139 )
            {
              do
              {
                v64 = *(_QWORD *)&v61[8 * v63];
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v64 + 360, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v66 = *(_DWORD *)(v64 + 376);
                    if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                      Template_q(v65, &EventBlockThread, v43, v66);
                  }
                  ExAcquirePushLockExclusiveEx(v64 + 360, 0LL);
                }
                ++v63;
                *(_QWORD *)(v64 + 368) = KeGetCurrentThread();
                v61 = Base;
              }
              while ( v63 < v139 );
              v20 = (struct DXGDEVICE **)v134;
            }
            v140 = 0;
          }
          else
          {
            while ( *((_QWORD *)Base + v41) != *((_QWORD *)Base + v41 - 1) )
            {
              if ( ++v41 >= v139 )
                goto LABEL_87;
            }
          }
          if ( !v61 )
          {
LABEL_169:
            v120 = WdLogNewEntry5_WdWarning(v61, v41, v43, v62);
            *(_QWORD *)(v120 + 24) = 2752LL;
            WdLogEvent5_WdWarning(v120);
            v24 = -1073741801;
            goto LABEL_170;
          }
          v67 = *(volatile signed __int64 **)(*(_QWORD *)(v44 + 16) + 16LL);
          v156 = (struct DXGADAPTER *)v67;
          v68 = _InterlockedExchangeAdd64(v67 + 3, 1uLL);
          if ( (v68 + 1 < 0) ^ __OFADD__(1LL, v68) | (v68 == -1) )
          {
            v69 = WdLogNewEntry5_WdAssertion(v61, v41, v43, v62);
            *(_QWORD *)(v69 + 24) = 1050LL;
            WdLogEvent5_WdAssertion(v69);
          }
          KeEnterCriticalRegion();
          v70 = v156;
          ExAcquirePushLockSharedEx((char *)v156 + 104, 0LL);
          v74 = *v135;
          v75 = *(volatile signed __int64 **)(*((_QWORD *)*v135 + 2) + 16LL);
          v143 = (DXGADAPTER *)v75;
          v144 = 0;
          if ( v75 )
          {
            v76 = _InterlockedExchangeAdd64(v75 + 3, 1uLL);
            if ( (v76 + 1 < 0) ^ __OFADD__(1LL, v76) | (v76 == -1) )
            {
              v77 = WdLogNewEntry5_WdAssertion(v75, v71, v72, v73);
              *(_QWORD *)(v77 + 24) = 1050LL;
              WdLogEvent5_WdAssertion(v77);
            }
          }
          v78 = *(volatile signed __int64 **)(*((_QWORD *)v74 + 2) + 16LL);
          v146 = (struct DXGADAPTER *)v78;
          v147 = 0;
          if ( v78 )
          {
            v79 = _InterlockedExchangeAdd64(v78 + 3, 1uLL);
            if ( (v79 + 1 < 0) ^ __OFADD__(1LL, v79) | (v79 == -1) )
            {
              v80 = WdLogNewEntry5_WdAssertion(v78, v71, v72, v73);
              *(_QWORD *)(v80 + 24) = 1050LL;
              WdLogEvent5_WdAssertion(v80);
            }
          }
          v148 = v74;
          v149 = 0;
          if ( v144 )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v71, v72);
            v82 = 0LL;
            v81[5] = v142;
            v81[3] = 275LL;
            v81[4] = 4LL;
            v81[6] = 0LL;
            v81[7] = 0LL;
            WdLogEvent5_WdCriticalError(v81);
          }
          else
          {
            v82 = 0LL;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v143 + 18) )
          {
            if ( !KeReadStateEvent((PRKEVENT)((char *)v143 + 32)) )
              KeWaitForSingleObject((char *)v143 + 32, Executive, 0, 0, 0LL);
            DXGADAPTER::AcquireCoreResourceShared(v143);
          }
          v144 = 1;
          if ( *((_DWORD *)v148 + 88) != 1 )
            goto LABEL_117;
          if ( v149 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v145);
            if ( *((_DWORD *)v146 + 40) != 1 )
            {
              COREACCESS::Release((COREACCESS *)v145);
LABEL_117:
              COREACCESS::Release((COREACCESS *)v142);
              v87 = (_QWORD *)WdLogNewEntry5_WdEvent(v84, v83, v85, v86);
              v87[4] = v134;
              v87[5] = v165;
              v87[3] = -1073741130LL;
              WdLogEvent5_WdEvent(v87);
              v24 = -1073741130;
LABEL_149:
              v108 = v146;
              if ( v146 )
              {
                if ( v147 )
                {
                  COREACCESS::Release((COREACCESS *)v145);
                  v108 = v146;
                }
                v109 = _InterlockedDecrement64((volatile signed __int64 *)v108 + 3);
                if ( v109 )
                {
                  if ( v109 < 0 )
                  {
                    v110 = WdLogNewEntry5_WdAssertion(v108, v88, v89, v90);
                    *(_QWORD *)(v110 + 24) = 1067LL;
                    WdLogEvent5_WdAssertion(v110);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v108 + 2), v108);
                }
              }
              v111 = v143;
              if ( v143 )
              {
                if ( v144 )
                {
                  v144 = 0;
                  v111 = v143;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v143 + 18) )
                  {
                    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v143);
                    v111 = v143;
                  }
                }
                v112 = _InterlockedDecrement64((volatile signed __int64 *)v111 + 3);
                if ( v112 )
                {
                  if ( v112 < 0 )
                  {
                    v113 = WdLogNewEntry5_WdAssertion(v111, v88, v89, v90);
                    *(_QWORD *)(v113 + 24) = 1067LL;
                    WdLogEvent5_WdAssertion(v113);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v111 + 2), v111);
                }
              }
              ExReleasePushLockSharedEx((char *)v70 + 104, 0LL);
              KeLeaveCriticalRegion();
              v118 = _InterlockedDecrement64(v67 + 3);
              if ( !v118 )
              {
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
LABEL_166:
                v20 = (struct DXGDEVICE **)v134;
                goto LABEL_170;
              }
              if ( v118 >= 0 )
                goto LABEL_166;
              v119 = WdLogNewEntry5_WdAssertion(v115, v114, v116, v117);
              *(_QWORD *)(v119 + 24) = 1067LL;
              WdLogEvent5_WdAssertion(v119);
              v20 = (struct DXGDEVICE **)v134;
LABEL_170:
              v121 = Base;
              if ( Base )
              {
                if ( !v140 )
                {
                  for ( i = 0LL; i < v139; v121 = Base )
                  {
                    v123 = v121[i] + 360LL;
                    *(_QWORD *)(v123 + 8) = 0LL;
                    ExReleasePushLockExclusiveEx(v123, 0LL);
                    KeLeaveCriticalRegion();
                    ++i;
                  }
                }
              }
              if ( v121 != (_QWORD *)v138 && v121 )
                ExFreePoolWithTag(v121, 0);
              goto LABEL_178;
            }
          }
          v91 = *(_QWORD *)(*((_QWORD *)*v135 + 2) + 16LL);
          v92 = *(int *)(v91 + 1648) >= 0x2000 || *(_BYTE *)(v91 + 1932);
          v93 = a1;
          if ( (*(_DWORD *)&a1->Flags & 0x20) != 0 )
            pNewAllocationList = a1->pNewAllocationList;
          else
            pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v134 + 10);
          AllocationCount = a1->AllocationCount;
          v164 = a1->AllocationCount;
          P = 0LL;
          v161 = 0;
          if ( v92 )
          {
            v96 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                             &P,
                                             AllocationCount);
            v82 = v96;
            if ( !v96 )
            {
              v101 = WdLogNewEntry5_WdWarning(v98, v97, v99, v100);
              *(_QWORD *)(v101 + 24) = 2792LL;
              WdLogEvent5_WdWarning(v101);
              v24 = -1073741801;
LABEL_146:
              if ( P != &v160 && P )
                ExFreePoolWithTag(P, 0);
              goto LABEL_149;
            }
            v103 = DxgkReferenceAllocationList(&v164, pNewAllocationList, v96, 0LL);
            if ( v103 < 0 )
            {
LABEL_134:
              if ( v92 )
                DxgkUnreferenceAllocationList(v164, v82);
              if ( v103 >= 0 )
                goto LABEL_145;
              switch ( v103 )
              {
                case -1073741811:
                case -1073741592:
                  v107 = (_QWORD *)WdLogNewEntry5_WdError(v102);
                  v107[3] = v103;
                  v107[5] = v165;
                  v107[4] = v134;
                  WdLogEvent5_WdError(v107);
                  goto LABEL_145;
                case -1071775482:
                  v105 = (_QWORD *)WdLogNewEntry5_WdEvent(v102, v88, v89, v90);
                  v105[3] = -1071775482LL;
                  break;
                case -1071774910:
                  goto LABEL_145;
                default:
                  v105 = (_QWORD *)WdLogNewEntry5_WdEvent(v102, v88, v89, v90);
                  v105[3] = v103;
                  break;
              }
              v106 = v165;
              v105[4] = v134;
              v105[5] = v106;
              WdLogEvent5_WdEvent(v105);
LABEL_145:
              v24 = v103;
              goto LABEL_146;
            }
            v93 = a1;
          }
          if ( v163 )
            v104 = DXGCONTEXT::RenderKmLda(v93, (struct COREDEVICEACCESS *)v141, (struct DXGCONTEXT **)Src, v82);
          else
            v104 = DXGCONTEXT::Render(v134, v93, (struct COREDEVICEACCESS *)v141, (struct DXGCONTEXT **)Src, v82);
          v103 = v104;
          goto LABEL_134;
        }
        v61 = ExAllocatePoolWithTag(PagedPool, 8LL * v152, 0x4B677844u);
        Base = v61;
      }
      v139 = v60;
      v62 = (unsigned int)v60;
      if ( v61 )
      {
        memset(v61, 0, 8 * v60);
        v62 = v139;
        v61 = Base;
      }
      goto LABEL_83;
    }
LABEL_177:
    v124 = WdLogNewEntry5_WdWarning(v35, v30, v31, v32);
    *(_QWORD *)(v124 + 24) = 2671LL;
    WdLogEvent5_WdWarning(v124);
    v24 = -1073741801;
    goto LABEL_178;
  }
  v39 = WdLogNewEntry5_WdWarning(v35, v30, v31, v32);
  v24 = -1073741811;
  *(_QWORD *)(v39 + 24) = v20;
  *(_QWORD *)(v39 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v39);
LABEL_181:
  ExReleaseResourceLite(*((PERESOURCE *)v27 + 10));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v127 = (__int64)*v135;
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v157, *v135);
    v128 = *v135;
    v154 = 0;
    v153 = *(_QWORD *)(*((_QWORD *)v128 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v158, v127, 2, v129, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v158);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 16) + 16LL) + 160LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v127, v134, v158, v130);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v158);
    if ( v154 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
    if ( v157[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v157);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v127 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v127 + 16), (struct DXGDEVICE *)v127);
  }
LABEL_193:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v125, &EventProfilerExit, v126, 3020);
  return v24;
}
