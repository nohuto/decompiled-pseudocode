/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00B3800
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00B15B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C015166C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0174A10 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _D3DKMT_RENDER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  D3DKMT_HANDLE hDevice; // ebx
  DXGPUSHLOCK *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  struct DXGDEVICE **v16; // rdi
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // r14
  struct _KEVENT *v21; // rbx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGDEVICE *v25; // r12
  unsigned __int64 v26; // rcx
  char v27; // r14
  ULONG BroadcastContextCount; // eax
  __int64 v29; // rbx
  _BYTE *PoolWithTag; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rbx
  void *v35; // r14
  __int64 v36; // rbx
  _BYTE *v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGDEVICE **v44; // r14
  unsigned __int64 v45; // rdx
  volatile signed __int64 *v46; // rcx
  volatile signed __int64 *v47; // rcx
  struct DXGALLOCATION **v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  bool v51; // r12
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r14
  unsigned __int64 AllocationCount; // rsi
  _BYTE *v54; // rbx
  int v55; // eax
  struct DXGALLOCATION *v56; // rcx
  int v57; // r14d
  int v58; // eax
  unsigned int v59; // esi
  struct DXGADAPTER *v60; // rcx
  DXGADAPTER *v61; // rcx
  struct DXGADAPTER *v62; // rbx
  _QWORD *v63; // rcx
  unsigned __int64 i; // rbx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned __int8 v69; // bl
  __int64 v70; // r8
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r9d
  _QWORD *v75; // rbx
  __int64 v76; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v78; // rax
  _QWORD *v79; // r11
  int v80; // r8d
  __int64 v81; // rax
  unsigned int v82; // r12d
  D3DKMT_HANDLE v83; // r14d
  unsigned int v84; // ecx
  __int64 v85; // r8
  int v86; // edx
  __int64 v87; // r14
  __int64 v88; // rcx
  _QWORD *v89; // rax
  int v90; // r9d
  _QWORD *v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // r9
  DXGCONTEXT *v101; // [rsp+38h] [rbp-D0h]
  __int64 v102; // [rsp+48h] [rbp-C0h]
  void *Base; // [rsp+50h] [rbp-B8h]
  _BYTE v104[24]; // [rsp+58h] [rbp-B0h] BYREF
  size_t NumOfElements; // [rsp+78h] [rbp-90h]
  char v106; // [rsp+80h] [rbp-88h]
  char v107[8]; // [rsp+88h] [rbp-80h] BYREF
  char v108[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v109; // [rsp+98h] [rbp-70h]
  DXGADAPTER *v110; // [rsp+A0h] [rbp-68h]
  char v111; // [rsp+A8h] [rbp-60h]
  char v112[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-50h]
  struct DXGADAPTER *v114; // [rsp+C0h] [rbp-48h]
  char v115; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v116; // [rsp+D0h] [rbp-38h]
  char v117; // [rsp+D8h] [rbp-30h]
  __int64 v118; // [rsp+E8h] [rbp-20h] BYREF
  struct DXGADAPTER *v119; // [rsp+F0h] [rbp-18h]
  char v120; // [rsp+F8h] [rbp-10h]
  void *Src; // [rsp+100h] [rbp-8h]
  _BYTE v122[32]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v123; // [rsp+128h] [rbp+20h]
  struct DXGDEVICE *v124; // [rsp+130h] [rbp+28h]
  PERESOURCE *v125; // [rsp+138h] [rbp+30h]
  _QWORD v126[2]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v127[24]; // [rsp+150h] [rbp+48h] BYREF
  struct DXGDEVICE *v128; // [rsp+168h] [rbp+60h]
  _BYTE v129[96]; // [rsp+178h] [rbp+70h] BYREF
  PVOID P; // [rsp+1D8h] [rbp+D0h]
  _BYTE v131[256]; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 v132; // [rsp+2E0h] [rbp+1D8h]
  char v133; // [rsp+330h] [rbp+228h]
  unsigned int v134; // [rsp+338h] [rbp+230h] BYREF
  struct DXGDEVICE **v135; // [rsp+340h] [rbp+238h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3020);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v102 = ProcessDxgProcess;
  v8 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v59 = -1073741811;
    v71 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v71 + 24) = -1073741811LL;
    *(_QWORD *)(v71 + 32) = PsGetCurrentProcess(v72);
    WdLogEvent5_WdError(v71);
    goto LABEL_98;
  }
  hDevice = a1->hDevice;
  v10 = (DXGPUSHLOCK *)(ProcessDxgProcess + 184);
  if ( ProcessDxgProcess != -184 && *(struct _KTHREAD **)(ProcessDxgProcess + 192) == KeGetCurrentThread() )
  {
    v73 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v73 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v73);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v74 = *((_DWORD *)v10 + 4);
      if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v11, &EventBlockThread, v12, v74);
    }
    ExAcquirePushLockSharedEx(v10, 0LL);
  }
  v13 = (hDevice >> 6) & 0xFFFFFF;
  if ( v13 >= *(_DWORD *)(v8 + 224) )
    goto LABEL_113;
  v14 = *(_QWORD *)(v8 + 208);
  v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
  if ( ((hDevice >> 26) & 0x30) != (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30)
    || (v15 & 0x1000) != 0
    || (v15 & 0xF) == 0
    || (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) != 7 )
  {
    goto LABEL_113;
  }
  v16 = *(struct DXGDEVICE ***)(v14 + 16LL * v13);
  v101 = (DXGCONTEXT *)v16;
  if ( !v16 )
    goto LABEL_15;
  _m_prefetchw(v16 + 4);
  v17 = (signed __int64)v16[4];
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 4, v17 + 1, v17);
      if ( v18 == v17 )
        break;
      if ( !v17 )
        goto LABEL_113;
    }
  }
  else
  {
LABEL_113:
    v16 = 0LL;
    v101 = 0LL;
  }
LABEL_15:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v59 = -1073741811;
    v75 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v75[3] = -1073741811LL;
    v75[4] = PsGetCurrentProcess(v76);
    v75[5] = a1->hDevice;
    WdLogEvent5_WdError(v75);
    goto LABEL_98;
  }
  v20 = v16[2];
  v135 = v16 + 2;
  v125 = (PERESOURCE *)v20;
  v128 = v20;
  v21 = (struct _KEVENT *)(*((_QWORD *)v20 + 2) + 80LL);
  if ( !KeReadStateEvent(v21) )
    KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 10), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v69 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v70, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 10), 1u);
    if ( v69 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v25 = v16[2];
  v124 = v25;
  v26 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
  if ( !*(_BYTE *)(v26 + 2058)
    || (*(_DWORD *)&a1->Flags & 0x40) != 0
    || (NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v26),
        NumDifferentPhysicalAdapters <= 1) )
  {
    v27 = 0;
  }
  else
  {
    v27 = 1;
    a1->BroadcastContextCount = NumDifferentPhysicalAdapters - 1;
  }
  BroadcastContextCount = a1->BroadcastContextCount;
  v133 = v27;
  v29 = BroadcastContextCount + 1;
  if ( BroadcastContextCount <= 0x40 )
  {
    Src = 0LL;
    v123 = 0;
    if ( (unsigned int)v29 > 4 )
    {
      v26 = (unsigned int)v29;
      v22 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v29;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v29 < 8 )
        goto LABEL_181;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v29, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v122;
    }
    Src = PoolWithTag;
    v123 = v29;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v29);
      *(_QWORD *)Src = v16;
      if ( v27 )
      {
        v79 = Src;
        v31 = *((_QWORD *)v25 + 39);
        v33 = 0LL;
        v80 = 0;
        while ( (struct DXGDEVICE *)v31 != (struct DXGDEVICE *)((char *)v25 + 312) && v31 )
        {
          v32 = *(unsigned int *)(v31 + 328);
          if ( (unsigned int)v32 >= (unsigned int)v29 )
          {
            v81 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v81 + 32) = 2728LL;
            goto LABEL_133;
          }
          if ( ((1 << v32) & (unsigned int)v33) != 0 )
          {
            v81 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v81 + 32) = 2735LL;
            goto LABEL_133;
          }
          v33 = (1 << v32) | (unsigned int)v33;
          v79[v32] = v31;
          v31 = *(_QWORD *)v31;
          ++v80;
        }
        if ( v80 == (_DWORD)v29 )
          goto LABEL_27;
        v81 = WdLogNewEntry5_WdError(v32);
        *(_QWORD *)(v81 + 32) = 2748LL;
LABEL_133:
        *(_QWORD *)(v81 + 24) = v16;
        WdLogEvent5_WdError(v81);
        v59 = -1073741811;
      }
      else
      {
        v34 = 0LL;
        if ( !a1->BroadcastContextCount )
        {
LABEL_27:
          v35 = Src;
LABEL_28:
          v36 = v123;
          v37 = 0LL;
          v38 = 0LL;
          Base = 0LL;
          LODWORD(NumOfElements) = 0;
          if ( v123 > 4 )
          {
            v31 = 0xFFFFFFFFFFFFFFFFuLL % v123;
            if ( 0xFFFFFFFFFFFFFFFFuLL / v123 < 8 )
            {
LABEL_32:
              v106 = 1;
              if ( !v37 )
                goto LABEL_178;
              memmove(v37, v35, 8 * v38);
              qsort(
                Base,
                (unsigned int)NumOfElements,
                8uLL,
                (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
              v31 = (unsigned int)NumOfElements;
              v38 = 1LL;
              v37 = Base;
              if ( (unsigned int)NumOfElements > 1uLL )
              {
                while ( *((_QWORD *)Base + v38) != *((_QWORD *)Base + v38 - 1) )
                {
                  if ( ++v38 >= (unsigned __int64)(unsigned int)NumOfElements )
                    goto LABEL_34;
                }
              }
              else
              {
LABEL_34:
                v39 = 0LL;
                if ( (_DWORD)NumOfElements )
                {
                  do
                  {
                    v40 = *(_QWORD *)&v37[8 * v39];
                    KeEnterCriticalRegion();
                    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v40 + 360, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v90 = *(_DWORD *)(v40 + 376);
                        if ( v90 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          Template_q(v41, &EventBlockThread, v38, v90);
                      }
                      ExAcquirePushLockExclusiveEx(v40 + 360, 0LL);
                    }
                    ++v39;
                    *(_QWORD *)(v40 + 368) = KeGetCurrentThread();
                    v37 = Base;
                  }
                  while ( v39 < (unsigned int)NumOfElements );
                  v16 = (struct DXGDEVICE **)v101;
                }
                v106 = 0;
              }
              if ( !v37 )
              {
LABEL_178:
                v97 = WdLogNewEntry5_WdWarning(v37, v31, v38, v33);
                *(_QWORD *)(v97 + 24) = 2784LL;
                WdLogEvent5_WdWarning(v97);
                v44 = v135;
                v59 = -1073741801;
LABEL_91:
                v63 = Base;
                if ( Base )
                {
                  if ( !v106 )
                  {
                    for ( i = 0LL; i < (unsigned int)NumOfElements; v63 = Base )
                    {
                      v65 = v63[i] + 360LL;
                      *(_QWORD *)(v65 + 8) = 0LL;
                      ExReleasePushLockExclusiveEx(v65, 0LL);
                      KeLeaveCriticalRegion();
                      ++i;
                    }
                  }
                }
                if ( v63 != (_QWORD *)v104 && v63 )
                  ExFreePoolWithTag(v63, 0);
                goto LABEL_96;
              }
              v119 = *(struct DXGADAPTER **)(*((_QWORD *)v25 + 2) + 16LL);
              _InterlockedIncrement64((volatile signed __int64 *)v119 + 3);
              v118 = -1LL;
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx((char *)v119 + 120, 0LL);
              v44 = v135;
              v120 = 1;
              v45 = (unsigned __int64)*v135;
              v46 = *(volatile signed __int64 **)(*((_QWORD *)*v135 + 2) + 16LL);
              v110 = (DXGADAPTER *)v46;
              v111 = 0;
              if ( v46 )
              {
                _InterlockedIncrement64(v46 + 3);
                v109 = -1LL;
              }
              v47 = *(volatile signed __int64 **)(*(_QWORD *)(v45 + 16) + 16LL);
              v114 = (struct DXGADAPTER *)v47;
              v115 = 0;
              if ( v47 )
              {
                _InterlockedIncrement64(v47 + 3);
                v113 = -1LL;
              }
              v116 = v45;
              v117 = 0;
              if ( v111 )
              {
                v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v45, v42);
                v48 = 0LL;
                v91[5] = v108;
                v91[3] = 275LL;
                v91[4] = 4LL;
                v91[6] = 0LL;
                v91[7] = 0LL;
                WdLogEvent5_WdCriticalError(v91);
              }
              else
              {
                v48 = 0LL;
              }
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v110 + 20) )
              {
                if ( !KeReadStateEvent((PRKEVENT)v110 + 2) )
                  KeWaitForSingleObject((char *)v110 + 48, Executive, 0, 0, 0LL);
                DXGADAPTER::AcquireCoreResourceShared(v110);
              }
              v111 = 1;
              if ( *(_DWORD *)(v116 + 376) != 1 )
                goto LABEL_160;
              if ( v117 )
              {
                COREACCESS::AcquireShared((COREACCESS *)v112);
                if ( *((_DWORD *)v114 + 44) != 1 )
                {
                  COREACCESS::Release((COREACCESS *)v112);
LABEL_160:
                  COREACCESS::Release((COREACCESS *)v108);
                  v93 = (_QWORD *)WdLogNewEntry5_WdEvent(v92);
                  v16 = (struct DXGDEVICE **)v101;
                  v93[5] = v102;
                  v93[3] = -1073741130LL;
                  v93[4] = v101;
                  WdLogEvent5_WdEvent(v93);
                  v59 = -1073741130;
LABEL_74:
                  v60 = v114;
                  if ( v114 )
                  {
                    if ( v115 )
                    {
                      COREACCESS::Release((COREACCESS *)v112);
                      v60 = v114;
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v60 + 2), v60);
                    v16 = (struct DXGDEVICE **)v101;
                  }
                  v61 = v110;
                  if ( v110 )
                  {
                    if ( v111 )
                    {
                      v111 = 0;
                      v61 = v110;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v110 + 20) )
                      {
                        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v110);
                        v61 = v110;
                      }
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v61 + 2), v61);
                    v16 = (struct DXGDEVICE **)v101;
                  }
                  if ( v120 )
                  {
                    v62 = v119;
                    ExReleasePushLockSharedEx((char *)v119 + 120, 0LL);
                    KeLeaveCriticalRegion();
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v119 + 2), v119);
                    v16 = (struct DXGDEVICE **)v101;
                  }
                  goto LABEL_91;
                }
              }
              v49 = *((_QWORD *)*v44 + 2);
              v50 = *(_QWORD *)(v49 + 16);
              v51 = *(int *)(v50 + 1792) >= 0x2000 || *(_BYTE *)(v50 + 2076);
              v16 = (struct DXGDEVICE **)v101;
              if ( (*(_DWORD *)&a1->Flags & 0x20) != 0 )
                pNewAllocationList = a1->pNewAllocationList;
              else
                pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v101 + 10);
              AllocationCount = a1->AllocationCount;
              v134 = a1->AllocationCount;
              P = 0LL;
              LODWORD(v132) = 0;
              if ( !v51 )
              {
LABEL_62:
                if ( v133 )
                  v58 = DXGCONTEXT::RenderKmLda(a1, (struct COREDEVICEACCESS *)v107, (struct DXGCONTEXT **)Src, v48);
                else
                  v58 = DXGCONTEXT::Render(
                          v101,
                          a1,
                          (struct COREDEVICEACCESS *)v107,
                          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v118,
                          (struct DXGCONTEXT **)Src,
                          v48);
                v57 = v58;
LABEL_65:
                if ( v51 && (_DWORD)AllocationCount )
                {
                  do
                  {
                    v56 = *v48;
                    if ( *v48 )
                      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v56 + 11);
                    ++v48;
                    --AllocationCount;
                  }
                  while ( AllocationCount );
                }
                if ( v57 >= 0 )
                  goto LABEL_71;
                switch ( v57 )
                {
                  case -1073741811:
                  case -1073741592:
                    v96 = (_QWORD *)WdLogNewEntry5_WdError(v56);
                    v96[3] = v57;
                    v96[5] = v102;
                    v96[4] = v101;
                    WdLogEvent5_WdError(v96);
                    goto LABEL_71;
                  case -1071775482:
                    v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v56);
                    v95[3] = -1071775482LL;
                    break;
                  case -1071774910:
                    goto LABEL_71;
                  default:
                    v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v56);
                    v95[3] = v57;
                    break;
                }
                v95[4] = v101;
                v95[5] = v102;
                WdLogEvent5_WdEvent(v95);
LABEL_71:
                v59 = v57;
                goto LABEL_72;
              }
              if ( (unsigned int)AllocationCount > 0x20 )
              {
                v45 = 0xFFFFFFFFFFFFFFFFuLL % AllocationCount;
                if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
                  goto LABEL_166;
                v54 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
                P = v54;
              }
              else
              {
                v54 = v131;
                P = v131;
              }
              LODWORD(v132) = AllocationCount;
              if ( v54 )
              {
                memset(v54, 0, 8 * AllocationCount);
                v48 = (struct DXGALLOCATION **)P;
                if ( P )
                {
                  v55 = DxgkReferenceAllocationList(&v134, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                  AllocationCount = v134;
                  v57 = v55;
                  if ( v55 < 0 )
                    goto LABEL_65;
                  goto LABEL_62;
                }
              }
LABEL_166:
              v94 = WdLogNewEntry5_WdWarning(v49, v45, v42, v43);
              *(_QWORD *)(v94 + 24) = 2824LL;
              WdLogEvent5_WdWarning(v94);
              v59 = -1073741801;
LABEL_72:
              if ( P != v131 && P )
                ExFreePoolWithTag(P, 0);
              v44 = v135;
              goto LABEL_74;
            }
            v37 = ExAllocatePoolWithTag(PagedPool, 8LL * v123, 0x4B677844u);
            Base = v37;
          }
          else
          {
            v37 = v104;
            Base = v104;
          }
          LODWORD(NumOfElements) = v36;
          v38 = v36;
          if ( v37 )
          {
            memset(v37, 0, 8 * v36);
            v38 = (unsigned int)NumOfElements;
            v37 = Base;
          }
          goto LABEL_32;
        }
        v82 = 1;
        while ( 1 )
        {
          v83 = a1->BroadcastContext[v34];
          DXGPUSHLOCK::AcquireShared(v10);
          v84 = (v83 >> 6) & 0xFFFFFF;
          if ( v84 < *(_DWORD *)(v102 + 224)
            && (v85 = *(_QWORD *)(v102 + 208),
                v86 = *(_DWORD *)(v85 + 16LL * v84 + 8),
                ((v83 >> 26) & 0x30) == (*(_BYTE *)(v85 + 16LL * v84 + 8) & 0x30))
            && (v86 & 0x1000) == 0
            && (v86 & 0xF) != 0
            && (*(_BYTE *)(v85 + 16LL * v84 + 8) & 0xF) == 7 )
          {
            v87 = *(_QWORD *)(v85 + 16LL * v84);
          }
          else
          {
            v87 = 0LL;
          }
          ExReleasePushLockSharedEx(v10, 0LL);
          KeLeaveCriticalRegion();
          v88 = 8LL * v82;
          *(_QWORD *)((char *)Src + v88) = v87;
          v35 = Src;
          v31 = *(_QWORD *)((char *)Src + v88);
          if ( !v31 || *(struct DXGDEVICE **)(v31 + 16) != *v135 )
            break;
          v34 = (unsigned int)(v34 + 1);
          ++v82;
          if ( (unsigned int)v34 >= a1->BroadcastContextCount )
          {
            v25 = v124;
            goto LABEL_28;
          }
        }
        v89 = (_QWORD *)WdLogNewEntry5_WdError(v88);
        v59 = -1073741811;
        v89[3] = v16;
        v89[4] = a1->BroadcastContext[v34];
        v89[5] = (unsigned int)v34;
        v89[6] = -1073741811LL;
        WdLogEvent5_WdError(v89);
      }
LABEL_182:
      v44 = v135;
LABEL_96:
      if ( Src != v122 && Src )
        ExFreePoolWithTag(Src, 0);
      goto LABEL_97;
    }
LABEL_181:
    v98 = WdLogNewEntry5_WdWarning(v26, v22, v23, v24);
    *(_QWORD *)(v98 + 24) = 2703LL;
    WdLogEvent5_WdWarning(v98);
    v59 = -1073741801;
    goto LABEL_182;
  }
  v78 = WdLogNewEntry5_WdWarning(v26, v22, v23, v24);
  v59 = -1073741811;
  *(_QWORD *)(v78 + 24) = v16;
  *(_QWORD *)(v78 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v78);
  v44 = v135;
LABEL_97:
  ExReleaseResourceLite(v125[10]);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v99 = (__int64)*v44;
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v126, *v44);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v127,
      *(struct DXGADAPTER **)(*((_QWORD *)*v44 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v129, v99, 2, v100, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v129);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v99 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v99, v101, (struct COREDEVICEACCESS *)v129);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v129);
    if ( v127[16] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v127);
    if ( v126[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v126);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v99 + 16), (struct DXGDEVICE *)v99);
  }
LABEL_98:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v66, &EventProfilerExit, v67, 3020);
  return v59;
}
