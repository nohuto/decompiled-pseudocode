/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00881A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0088FD0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014EBF4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _D3DKMT_RENDER *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_RENDER *v3; // r15
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  D3DKMT_HANDLE hDevice; // ebx
  DXGPUSHLOCK *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // edx
  struct DXGDEVICE **v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  unsigned int v24; // esi
  _QWORD *v25; // rbx
  struct DXGDEVICE *v26; // rsi
  struct _KEVENT *v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // di
  __int64 v32; // r8
  struct DXGDEVICE *v33; // r12
  unsigned __int64 v34; // rcx
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int BroadcastContextCount; // eax
  __int64 v37; // rdi
  __int64 v38; // rax
  _BYTE *PoolWithTag; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  _QWORD *v43; // r11
  int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  unsigned int v49; // r12d
  D3DKMT_HANDLE v50; // edi
  unsigned int v51; // ecx
  __int64 v52; // r8
  int v53; // edx
  __int64 v54; // rdi
  __int64 v55; // rcx
  void *v56; // r15
  _QWORD *v57; // rax
  __int64 v58; // rdi
  _BYTE *v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rcx
  int v64; // r9d
  volatile signed __int64 *v65; // r12
  __int64 v66; // rax
  struct DXGADAPTER *v67; // r13
  unsigned __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  struct DXGDEVICE *v71; // rbx
  volatile signed __int64 *v72; // rcx
  __int64 v73; // rax
  volatile signed __int64 *v74; // rcx
  __int64 v75; // rax
  _QWORD *v76; // rax
  struct DXGALLOCATION **v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  _QWORD *v82; // rax
  __int64 v83; // rax
  bool v84; // r15
  struct _D3DKMT_RENDER *v85; // rcx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdi
  unsigned __int64 AllocationCount; // rsi
  _BYTE *v88; // rbx
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rdx
  struct DXGALLOCATION *v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // edi
  int v96; // eax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  struct DXGADAPTER *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  DXGADAPTER *v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rcx
  unsigned __int64 i; // rdi
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rbx
  __int64 v117; // r9
  __int64 v118; // rax
  DXGCONTEXT *v120; // [rsp+38h] [rbp-D0h]
  struct DXGDEVICE **v121; // [rsp+48h] [rbp-C0h]
  void *Base; // [rsp+50h] [rbp-B8h]
  _BYTE v123[24]; // [rsp+58h] [rbp-B0h] BYREF
  size_t NumOfElements; // [rsp+78h] [rbp-90h]
  char v125; // [rsp+80h] [rbp-88h]
  char v126[8]; // [rsp+88h] [rbp-80h] BYREF
  char v127[8]; // [rsp+90h] [rbp-78h] BYREF
  DXGADAPTER *v128; // [rsp+98h] [rbp-70h]
  char v129; // [rsp+A0h] [rbp-68h]
  char v130[8]; // [rsp+A8h] [rbp-60h] BYREF
  struct DXGADAPTER *v131; // [rsp+B0h] [rbp-58h]
  char v132; // [rsp+B8h] [rbp-50h]
  struct DXGDEVICE *v133; // [rsp+C0h] [rbp-48h]
  char v134; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+D8h] [rbp-30h]
  _BYTE v136[32]; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v137; // [rsp+100h] [rbp-8h]
  PERESOURCE *v138; // [rsp+108h] [rbp+0h]
  struct DXGDEVICE *v139; // [rsp+110h] [rbp+8h]
  _QWORD v140[2]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v141[16]; // [rsp+128h] [rbp+20h] BYREF
  struct DXGADAPTER *v142; // [rsp+138h] [rbp+30h]
  struct DXGDEVICE *v143; // [rsp+148h] [rbp+40h]
  _BYTE v144[80]; // [rsp+158h] [rbp+50h] BYREF
  PVOID P; // [rsp+1A8h] [rbp+A0h]
  _BYTE v146[256]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v147; // [rsp+2B0h] [rbp+1A8h]
  char v149; // [rsp+310h] [rbp+208h]
  unsigned int v150; // [rsp+318h] [rbp+210h] BYREF
  __int64 v151; // [rsp+320h] [rbp+218h]

  v3 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v118 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v118 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v118);
    goto LABEL_198;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  v151 = v10;
  if ( !v10 )
  {
LABEL_198:
    v24 = -1073741811;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v25[3] = -1073741811LL;
    v25[4] = PsGetCurrentProcess();
    goto LABEL_199;
  }
  hDevice = v3->hDevice;
  v12 = (DXGPUSHLOCK *)(v10 + 192);
  if ( v10 != -192 && *(struct _KTHREAD **)(v10 + 200) == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v13 + 24) = 1155LL;
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
  v120 = (DXGCONTEXT *)v20;
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
    v120 = 0LL;
  }
LABEL_25:
  ExReleasePushLockSharedEx(v10 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v24 = -1073741811;
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v25[3] = -1073741811LL;
    v25[4] = PsGetCurrentProcess();
    v25[5] = v3->hDevice;
LABEL_199:
    WdLogEvent5_WdError(v25);
    goto LABEL_200;
  }
  v26 = v20[2];
  v121 = v20 + 2;
  v138 = (PERESOURCE *)v26;
  v27 = (struct _KEVENT *)(*((_QWORD *)v26 + 2) + 80LL);
  v143 = v26;
  if ( !KeReadStateEvent(v27) )
    KeWaitForSingleObject(v27, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v26 + 10), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 80LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v26 + 10), 1u);
    if ( v31 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 80LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v33 = v20[2];
  v139 = v33;
  v34 = *(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL);
  if ( !*(_BYTE *)(v34 + 1923)
    || (*(_DWORD *)&v3->Flags & 0x40) != 0
    || (NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v34),
        NumDifferentPhysicalAdapters <= 1) )
  {
    v149 = 0;
  }
  else
  {
    v149 = 1;
    v3->BroadcastContextCount = NumDifferentPhysicalAdapters - 1;
  }
  BroadcastContextCount = v3->BroadcastContextCount;
  v37 = BroadcastContextCount + 1;
  if ( BroadcastContextCount <= 0x40 )
  {
    Src = 0LL;
    v137 = 0;
    if ( (unsigned int)v37 <= 4 )
    {
      PoolWithTag = v136;
    }
    else
    {
      v34 = (unsigned int)v37;
      v28 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v37;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37 < 8 )
        goto LABEL_184;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v37, 0x4B677844u);
    }
    Src = PoolWithTag;
    v137 = v37;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v37);
      v24 = -1073741811;
      *(_QWORD *)Src = v20;
      if ( v149 )
      {
        v43 = Src;
        v40 = *((_QWORD *)v33 + 36);
        v44 = 0;
        v42 = 0LL;
        while ( (struct DXGDEVICE *)v40 != (struct DXGDEVICE *)((char *)v33 + 288) && v40 )
        {
          v41 = *(unsigned int *)(v40 + 328);
          if ( (unsigned int)v41 >= (unsigned int)v37 )
          {
            v46 = WdLogNewEntry5_WdError(v41);
            *(_QWORD *)(v46 + 24) = v20;
            *(_QWORD *)(v46 + 32) = 2712LL;
            WdLogEvent5_WdError(v46);
            goto LABEL_185;
          }
          if ( ((1 << v41) & v44) != 0 )
          {
            v45 = WdLogNewEntry5_WdError(v41);
            *(_QWORD *)(v45 + 24) = v20;
            *(_QWORD *)(v45 + 32) = 2719LL;
            WdLogEvent5_WdError(v45);
            goto LABEL_185;
          }
          v44 |= 1 << v41;
          v43[v41] = v40;
          v40 = *(_QWORD *)v40;
          v42 = (unsigned int)(v42 + 1);
        }
        if ( (_DWORD)v42 != (_DWORD)v37 )
        {
          v47 = WdLogNewEntry5_WdError(v41);
          *(_QWORD *)(v47 + 24) = v20;
          *(_QWORD *)(v47 + 32) = 2732LL;
          WdLogEvent5_WdError(v47);
LABEL_185:
          if ( Src != v136 && Src )
            ExFreePoolWithTag(Src, 0);
          goto LABEL_188;
        }
      }
      else
      {
        v48 = 0LL;
        if ( v3->BroadcastContextCount )
        {
          v49 = 1;
          while ( 1 )
          {
            v50 = v3->BroadcastContext[v48];
            DXGPUSHLOCK::AcquireShared(v12);
            v51 = (v50 >> 6) & 0xFFFFFF;
            if ( v51 < *(_DWORD *)(v151 + 232)
              && (v52 = *(_QWORD *)(v151 + 216),
                  v53 = *(_DWORD *)(v52 + 16LL * v51 + 8),
                  ((v50 >> 26) & 0x30) == (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0x30))
              && (v53 & 0x1000) == 0
              && (v53 & 0xF) != 0
              && (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0xF) == 7 )
            {
              v54 = *(_QWORD *)(v52 + 16LL * v51);
            }
            else
            {
              v54 = 0LL;
            }
            ExReleasePushLockSharedEx(v12, 0LL);
            KeLeaveCriticalRegion();
            v55 = 8LL * v49;
            *(_QWORD *)((char *)Src + v55) = v54;
            v56 = Src;
            v40 = *(_QWORD *)((char *)Src + v55);
            if ( !v40 || *(struct DXGDEVICE **)(v40 + 16) != *v121 )
              break;
            v48 = (unsigned int)(v48 + 1);
            ++v49;
            if ( (unsigned int)v48 >= a1->BroadcastContextCount )
            {
              v33 = v139;
              goto LABEL_76;
            }
            v3 = a1;
          }
          v57 = (_QWORD *)WdLogNewEntry5_WdError(v55);
          v57[3] = v20;
          v57[4] = a1->BroadcastContext[v48];
          v57[5] = (unsigned int)v48;
          v57[6] = -1073741811LL;
          WdLogEvent5_WdError(v57);
          goto LABEL_185;
        }
      }
      v56 = Src;
LABEL_76:
      v58 = v137;
      v59 = 0LL;
      v60 = 0LL;
      Base = 0LL;
      LODWORD(NumOfElements) = 0;
      if ( v137 <= 4 )
      {
        v59 = v123;
        Base = v123;
      }
      else
      {
        v40 = 0xFFFFFFFFFFFFFFFFuLL % v137;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v137 < 8 )
        {
LABEL_82:
          v125 = 1;
          if ( !v59 )
            goto LABEL_176;
          memmove(v59, v56, 8 * v60);
          qsort(
            Base,
            (unsigned int)NumOfElements,
            8uLL,
            (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
          v60 = (unsigned int)NumOfElements;
          v40 = 1LL;
          v59 = Base;
          if ( (unsigned int)NumOfElements <= 1uLL )
          {
LABEL_86:
            v61 = 0LL;
            if ( (_DWORD)NumOfElements )
            {
              do
              {
                v62 = *(_QWORD *)&v59[8 * v61];
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v62 + 360, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v64 = *(_DWORD *)(v62 + 376);
                    if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                      Template_q(v63, &EventBlockThread, v60, v64);
                  }
                  ExAcquirePushLockExclusiveEx(v62 + 360, 0LL);
                }
                ++v61;
                *(_QWORD *)(v62 + 368) = KeGetCurrentThread();
                v59 = Base;
              }
              while ( v61 < (unsigned int)NumOfElements );
              v20 = (struct DXGDEVICE **)v120;
            }
            v125 = 0;
          }
          else
          {
            while ( *((_QWORD *)Base + v40) != *((_QWORD *)Base + v40 - 1) )
            {
              if ( ++v40 >= (unsigned int)NumOfElements )
                goto LABEL_86;
            }
          }
          if ( !v59 )
          {
LABEL_176:
            v109 = WdLogNewEntry5_WdWarning(v59, v40, v60, v42);
            *(_QWORD *)(v109 + 24) = 2768LL;
            WdLogEvent5_WdWarning(v109);
            v24 = -1073741801;
            goto LABEL_177;
          }
          v65 = *(volatile signed __int64 **)(*((_QWORD *)v33 + 2) + 16LL);
          v142 = (struct DXGADAPTER *)v65;
          if ( _InterlockedAdd64(v65 + 3, 1uLL) <= 0 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v59);
            *(_QWORD *)(v66 + 24) = 1141LL;
            WdLogEvent5_WdAssertion(v66);
          }
          KeEnterCriticalRegion();
          v67 = v142;
          ExAcquirePushLockSharedEx((char *)v142 + 104, 0LL);
          v71 = *v121;
          v72 = *(volatile signed __int64 **)(*((_QWORD *)*v121 + 2) + 16LL);
          v128 = (DXGADAPTER *)v72;
          v129 = 0;
          if ( v72 && _InterlockedAdd64(v72 + 3, 1uLL) <= 0 )
          {
            v73 = WdLogNewEntry5_WdAssertion(v72);
            *(_QWORD *)(v73 + 24) = 1141LL;
            WdLogEvent5_WdAssertion(v73);
          }
          v74 = *(volatile signed __int64 **)(*((_QWORD *)v71 + 2) + 16LL);
          v131 = (struct DXGADAPTER *)v74;
          v132 = 0;
          if ( v74 && _InterlockedAdd64(v74 + 3, 1uLL) <= 0 )
          {
            v75 = WdLogNewEntry5_WdAssertion(v74);
            *(_QWORD *)(v75 + 24) = 1141LL;
            WdLogEvent5_WdAssertion(v75);
          }
          v133 = v71;
          v134 = 0;
          if ( v129 )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v74, v68, v69);
            v77 = 0LL;
            v76[5] = v127;
            v76[3] = 275LL;
            v76[4] = 4LL;
            v76[6] = 0LL;
            v76[7] = 0LL;
            WdLogEvent5_WdCriticalError(v76);
          }
          else
          {
            v77 = 0LL;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v128 + 18) )
          {
            if ( !KeReadStateEvent((PRKEVENT)((char *)v128 + 32)) )
              KeWaitForSingleObject((char *)v128 + 32, Executive, 0, 0, 0LL);
            DXGADAPTER::AcquireCoreResourceShared(v128);
          }
          v129 = 1;
          if ( *((_DWORD *)v133 + 88) != 1 )
            goto LABEL_116;
          if ( v134 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v130);
            if ( *((_DWORD *)v131 + 40) != 1 )
            {
              COREACCESS::Release((COREACCESS *)v130);
LABEL_116:
              COREACCESS::Release((COREACCESS *)v127);
              v82 = (_QWORD *)WdLogNewEntry5_WdEvent(v79, v78, v80, v81);
              v82[4] = v120;
              v82[5] = v151;
              v82[3] = -1073741130LL;
              WdLogEvent5_WdEvent(v82);
              v24 = -1073741130;
LABEL_156:
              v100 = v131;
              if ( v131 )
              {
                if ( v132 )
                {
                  COREACCESS::Release((COREACCESS *)v130);
                  v100 = v131;
                }
                v101 = _InterlockedDecrement64((volatile signed __int64 *)v100 + 3);
                if ( v101 )
                {
                  if ( v101 < 0 )
                  {
                    v102 = WdLogNewEntry5_WdAssertion(v100);
                    *(_QWORD *)(v102 + 24) = 1158LL;
                    WdLogEvent5_WdAssertion(v102);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v100 + 2), v100);
                }
              }
              v103 = v128;
              if ( v128 )
              {
                if ( v129 )
                {
                  v129 = 0;
                  v103 = v128;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v128 + 18) )
                  {
                    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v128);
                    v103 = v128;
                  }
                }
                v104 = _InterlockedDecrement64((volatile signed __int64 *)v103 + 3);
                if ( v104 )
                {
                  if ( v104 < 0 )
                  {
                    v105 = WdLogNewEntry5_WdAssertion(v103);
                    *(_QWORD *)(v105 + 24) = 1158LL;
                    WdLogEvent5_WdAssertion(v105);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v103 + 2), v103);
                }
              }
              ExReleasePushLockSharedEx((char *)v67 + 104, 0LL);
              KeLeaveCriticalRegion();
              v107 = _InterlockedDecrement64(v65 + 3);
              if ( !v107 )
              {
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v142 + 2), v142);
LABEL_173:
                v20 = (struct DXGDEVICE **)v120;
                goto LABEL_177;
              }
              if ( v107 >= 0 )
                goto LABEL_173;
              v108 = WdLogNewEntry5_WdAssertion(v106);
              *(_QWORD *)(v108 + 24) = 1158LL;
              WdLogEvent5_WdAssertion(v108);
              v20 = (struct DXGDEVICE **)v120;
LABEL_177:
              v110 = Base;
              if ( Base )
              {
                if ( !v125 )
                {
                  for ( i = 0LL; i < (unsigned int)NumOfElements; v110 = Base )
                  {
                    v112 = v110[i] + 360LL;
                    *(_QWORD *)(v112 + 8) = 0LL;
                    ExReleasePushLockExclusiveEx(v112, 0LL);
                    KeLeaveCriticalRegion();
                    ++i;
                  }
                }
              }
              if ( v110 != (_QWORD *)v123 && v110 )
                ExFreePoolWithTag(v110, 0);
              goto LABEL_185;
            }
          }
          v83 = *(_QWORD *)(*((_QWORD *)*v121 + 2) + 16LL);
          v84 = *(int *)(v83 + 1656) >= 0x2000 || *(_BYTE *)(v83 + 1940);
          v85 = a1;
          if ( (*(_DWORD *)&a1->Flags & 0x20) != 0 )
            pNewAllocationList = a1->pNewAllocationList;
          else
            pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v120 + 10);
          AllocationCount = a1->AllocationCount;
          v150 = a1->AllocationCount;
          P = 0LL;
          v147 = 0;
          if ( v84 )
          {
            if ( (unsigned int)AllocationCount <= 0x20 )
            {
              v88 = v146;
              P = v146;
            }
            else
            {
              v68 = 0xFFFFFFFFFFFFFFFFuLL % AllocationCount;
              if ( 0xFFFFFFFFFFFFFFFFuLL / AllocationCount < 8 )
              {
LABEL_131:
                v89 = WdLogNewEntry5_WdWarning(v85, v68, v69, v70);
                *(_QWORD *)(v89 + 24) = 2808LL;
                WdLogEvent5_WdWarning(v89);
                v24 = -1073741801;
LABEL_153:
                if ( P != v146 && P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_156;
              }
              v88 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
              P = v88;
            }
            v147 = AllocationCount;
            if ( !v88 )
              goto LABEL_131;
            memset(v88, 0, 8 * AllocationCount);
            v77 = (struct DXGALLOCATION **)P;
            if ( !P )
              goto LABEL_131;
            v90 = DxgkReferenceAllocationList(&v150, pNewAllocationList, (struct DXGALLOCATION **)P);
            AllocationCount = v150;
            v95 = v90;
            if ( v90 < 0 )
            {
LABEL_138:
              if ( v84 && (_DWORD)AllocationCount )
              {
                do
                {
                  v92 = *v77;
                  if ( *v77 )
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v92 + 11);
                  ++v77;
                  --AllocationCount;
                }
                while ( AllocationCount );
              }
              if ( v95 >= 0 )
                goto LABEL_152;
              switch ( v95 )
              {
                case -1073741811:
                case -1073741592:
                  v99 = (_QWORD *)WdLogNewEntry5_WdError(v92);
                  v99[3] = v95;
                  v99[5] = v151;
                  v99[4] = v120;
                  WdLogEvent5_WdError(v99);
                  goto LABEL_152;
                case -1071775482:
                  v97 = (_QWORD *)WdLogNewEntry5_WdEvent(v92, v91, v93, v94);
                  v97[3] = -1071775482LL;
                  break;
                case -1071774910:
                  goto LABEL_152;
                default:
                  v97 = (_QWORD *)WdLogNewEntry5_WdEvent(v92, v91, v93, v94);
                  v97[3] = v95;
                  break;
              }
              v98 = v151;
              v97[4] = v120;
              v97[5] = v98;
              WdLogEvent5_WdEvent(v97);
LABEL_152:
              v24 = v95;
              goto LABEL_153;
            }
            v85 = a1;
          }
          if ( v149 )
            v96 = DXGCONTEXT::RenderKmLda(v85, (struct COREDEVICEACCESS *)v126, (struct DXGCONTEXT **)Src, v77);
          else
            v96 = DXGCONTEXT::Render(v120, v85, (struct COREDEVICEACCESS *)v126, (struct DXGCONTEXT **)Src, v77);
          v95 = v96;
          goto LABEL_138;
        }
        v59 = ExAllocatePoolWithTag(PagedPool, 8LL * v137, 0x4B677844u);
        Base = v59;
      }
      LODWORD(NumOfElements) = v58;
      v60 = v58;
      if ( v59 )
      {
        memset(v59, 0, 8 * v58);
        v60 = (unsigned int)NumOfElements;
        v59 = Base;
      }
      goto LABEL_82;
    }
LABEL_184:
    v113 = WdLogNewEntry5_WdWarning(v34, v28, v29, v30);
    *(_QWORD *)(v113 + 24) = 2687LL;
    WdLogEvent5_WdWarning(v113);
    v24 = -1073741801;
    goto LABEL_185;
  }
  v38 = WdLogNewEntry5_WdWarning(v34, v28, v29, v30);
  v24 = -1073741811;
  *(_QWORD *)(v38 + 24) = v20;
  *(_QWORD *)(v38 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v38);
LABEL_188:
  ExReleaseResourceLite(v138[10]);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v116 = (__int64)*v121;
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v140, *v121);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v141,
      *(struct DXGADAPTER **)(*((_QWORD *)*v121 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v144, v116, 2, v117, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v144);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v116 + 16) + 16LL) + 160LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v116, v120, (struct COREDEVICEACCESS *)v144);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
    if ( v141[8] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v141);
    if ( v140[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v140);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v116 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v116 + 16), (struct DXGDEVICE *)v116);
  }
LABEL_200:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v114, &EventProfilerExit, v115, 3020);
  return v24;
}
