/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@H@Z @ 0x1C0072670
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE ***a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11)
{
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r14d
  UINT v18; // ebx
  struct _D3DDDI_ALLOCATIONINFO2 *v19; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v21; // r8
  void *v22; // rcx
  struct DXGRESOURCE *v23; // rcx
  bool v24; // zf
  struct DXGRESOURCE **v25; // rax
  UINT v26; // eax
  PVOID v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  unsigned int v33; // r14d
  __int64 v34; // r15
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  __int64 v46; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v48; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v50; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  _QWORD *v58; // rax
  unsigned __int8 v59; // cl
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  struct _DXGK_ALLOCATIONINFO *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 Flags; // r8
  struct _D3DKMT_CREATEALLOCATION *v67; // r10
  UINT v68; // r15d
  struct DXGALLOCATION *v69; // rdi
  const struct _D3DKM_CREATESTANDARDALLOCATION *v70; // r11
  struct _DXGK_ALLOCATIONINFO *v71; // rdx
  __int64 v72; // r8
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  __int64 v74; // rcx
  UINT v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r9
  __int64 v80; // r9
  int v81; // r8d
  __int64 (__fastcall **v82)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v83; // rcx
  int v84; // r9d
  int v85; // ecx
  int v86; // eax
  int v87; // eax
  int v88; // ecx
  __int64 v89; // rax
  int v90; // ecx
  struct DXGRESOURCE *v91; // rcx
  struct DXGRESOURCE *v92; // rdx
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  struct DXGRESOURCE *v97; // rcx
  struct DXGRESOURCE *v98; // rax
  _QWORD *v99; // rax
  PVOID P; // [rsp+28h] [rbp-51h] BYREF
  UINT Size; // [rsp+30h] [rbp-49h]
  UINT Size_4; // [rsp+34h] [rbp-45h]
  struct _DXGK_ALLOCATIONINFO *v104; // [rsp+38h] [rbp-41h]
  struct DXGRESOURCE *v105; // [rsp+40h] [rbp-39h]
  int v106; // [rsp+48h] [rbp-31h]
  struct _D3DDDI_ALLOCATIONINFO2 *v109; // [rsp+B8h] [rbp+3Fh]

  v109 = a3;
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 144) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 128)) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v16 + 24) = 2588LL;
      WdLogEvent5_WdAssertion(v16);
    }
    a3 = v109;
  }
  v17 = 0;
  v18 = 0;
  P = 0LL;
  if ( a2->NumAllocations )
  {
    do
    {
      v19 = &a3[v18];
      if ( v19->pPrivateDriverData )
      {
        PrivateDriverDataSize = v19->PrivateDriverDataSize;
        v21 = v18;
        a4[v21].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( a11 )
        {
          v22 = a7[v18];
          a4[v21].pPrivateDriverData = v22;
          memmove(v22, a8[v18], PrivateDriverDataSize);
        }
        else
        {
          a4[v21].pPrivateDriverData = v19->pPrivateDriverData;
        }
        a3 = v109;
      }
      ++v18;
    }
    while ( v18 < a2->NumAllocations );
    v17 = 0;
  }
  v23 = (struct DXGRESOURCE *)a6;
  v106 = 0;
  if ( a6 )
  {
    v24 = (*((_DWORD *)a6 + 1) & 1) == 0;
    v25 = a6[7];
    v106 = 1;
    if ( v24 )
    {
      v105 = (struct DXGRESOURCE *)v25;
    }
    else
    {
      v23 = v25[2];
      v105 = v23;
    }
  }
  else
  {
    v105 = 0LL;
  }
  Size_4 = a2->NumAllocations;
  v26 = a2->PrivateDriverDataSize;
  v104 = a4;
  if ( v26 && a2->pStandardAllocation )
  {
    Size = v26;
    v27 = operator new[](v26, 0x4B677844u, PagedPool);
    P = v27;
    if ( !v27 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      v33 = -1073741801;
      v32[3] = this;
      v32[4] = Size;
      v32[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v32);
      goto LABEL_155;
    }
    if ( a11 )
      memmove(v27, Src, Size);
    else
      memmove(v27, a2->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
    P = 0LL;
  }
  v34 = *((_QWORD *)this + 2);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v23, &EventProfilerEnter, (__int64)a3, 5002);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v40 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v40 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v40);
    v38 = 0LL;
    goto LABEL_33;
  }
  v38 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v38 )
  {
LABEL_33:
    v39 = 0LL;
    goto LABEL_34;
  }
  v39 = v38 + 96;
LABEL_34:
  v41 = 0;
  if ( v39 && *(struct _KTHREAD **)(v39 + 8) == KeGetCurrentThread() )
  {
    v42 = WdLogNewEntry5_WdAssertion(v37);
    *(_QWORD *)(v42 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( v38 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *(_DWORD *)(v39 + 16);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v43, &EventBlockThread, v44, v45);
      }
      ExAcquirePushLockExclusiveEx(v39, 0LL);
    }
    v41 = 2;
    *(_QWORD *)(v39 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v34 + 16), 1);
  CurrentIrql = KeGetCurrentIrql();
  v48 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v50 = WdLogNewEntry5_WdAssertion(v46);
      *(_QWORD *)(v50 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v50);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v48 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v48 )
        v17 = *(_DWORD *)(v48 + 136);
    }
    else
    {
      v48 = 0LL;
    }
  }
  v54 = (*(int (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v34 + 16) + 312LL))(
          *(_QWORD *)(*(_QWORD *)(v34 + 16) + 224LL),
          &P);
  v57 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v57 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v53, v55);
    v58[3] = 275LL;
    v58[4] = 16LL;
    v58[5] = v34;
    v58[6] = CurrentIrql;
    v59 = KeGetCurrentIrql();
    v58[7] = v59;
    WdLogEvent5_WdCriticalError(v58);
  }
  if ( v48 && *(_DWORD *)(v48 + 136) != v17 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v53, v55);
    v60[3] = 275LL;
    v60[4] = 25LL;
    v60[5] = *(int *)(v48 + 136);
    v60[6] = v17;
    v60[7] = 0LL;
    WdLogEvent5_WdCriticalError(v60);
  }
  v61 = (_QWORD *)WdLogNewEntry5_WdTrace(v57, v53, v55, v56);
  v61[3] = v54;
  v61[4] = v105;
  v61[5] = v104->hAllocation;
  v61[6] = v104->Flags.Value;
  v62 = v104;
  v61[7] = v104->PreferredSegment.Value;
  if ( (_DWORD)v54 != -1073741811 && (_DWORD)v54 != -1073741801 && (_DWORD)v54 )
  {
    v63 = WdLogNewEntry5_WdError(v62);
    *(_QWORD *)(v63 + 24) = v54;
    WdLogEvent5_WdError(v63);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v34 + 16));
  if ( v41 == 2 )
  {
    *(_QWORD *)(v39 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v65, &EventProfilerExit, Flags, 5002);
  v33 = v54;
  if ( (int)v54 >= 0 )
  {
    v67 = a2;
    v68 = 0;
    v69 = a5;
    if ( a2->NumAllocations )
    {
      v70 = a10;
      do
      {
        v71 = &a4[v68];
        *(_QWORD *)(*((_QWORD *)v69 + 6) + 16LL) = v71->hAllocation;
        *(_QWORD *)(*((_QWORD *)v69 + 6) + 24LL) = v71->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) ^ (((*(_BYTE *)&v71->Flags.0 & 0x30) != 0) << 11)) & 0x800;
        v71->Flags.Value &= 0x807FFFFu;
        v72 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( (*(_DWORD *)(v72 + 1388) & 0x40) != 0 && *(_BYTE *)(v72 + 1942) )
          v71->Flags.Value |= 0x8000u;
        Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v71->Flags.Value;
        if ( (*(_WORD *)&Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1943LL) )
          v71->Flags.Value = *(_DWORD *)&Value | 0x10000;
        v74 = v71->Flags.Value;
        if ( (v74 & 0x10000) != 0 && (v74 & 0x8000) == 0 )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdError(v74);
          v94[3] = this;
          v94[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v94[5] = -1073741811LL;
          v94[6] = 2738LL;
          WdLogEvent5_WdError(v94);
          v33 = -1073741811;
          goto LABEL_155;
        }
        if ( v70 )
        {
          if ( (*(_DWORD *)v70 & 0x1000) != 0 )
            v71->Flags.Value = v74 | 0x20000;
          v75 = *((_DWORD *)v70 + 94);
          if ( v75 )
          {
            v71->SupportedWriteSegmentSet = v75;
            v71->PreferredSegment.Value = *((_DWORD *)v70 + 95);
          }
          if ( (*(_DWORD *)v70 & 0x2000) != 0 )
          {
            v76 = *((_QWORD *)a5 + 12 * v68 + 6);
            *(_DWORD *)(v76 + 4) |= 0x8000u;
          }
        }
        if ( *((_DWORD *)this + 70) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) > 1
          && !*(_BYTE *)(v78 + 1923)
          && (v109[v79].Flags.Value & 1) == 0 )
        {
          *(_DWORD *)(v77 + 52) = *(_DWORD *)(v78 + 2012);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          *((_DWORD *)v69 + 18) ^= (*((_DWORD *)v69 + 18) ^ (*(_DWORD *)(v64 + 52) << 12)) & 0x3F000;
        else
          *((_DWORD *)v69 + 18) &= 0xFFFC0FFF;
        v81 = *(_DWORD *)(v64 + 64);
        if ( (v81 & 0x200) != 0
          && (v82 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 16LL),
              v82[67] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v81 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
           || v82[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v82[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v82[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v82[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v95 = (_QWORD *)WdLogNewEntry5_WdError(v82);
          v95[3] = this;
          v95[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v95[5] = -1073741637LL;
          WdLogEvent5_WdError(v95);
          v33 = -1073741637;
          goto LABEL_155;
        }
        v83 = *((_QWORD *)v69 + 6);
        if ( !*(_QWORD *)(v83 + 16) )
        {
          v96 = (_QWORD *)WdLogNewEntry5_WdError(v83);
          v96[3] = this;
          v96[4] = v69;
          v96[5] = -1073741811LL;
          WdLogEvent5_WdError(v96);
          v33 = -1073741811;
          goto LABEL_155;
        }
        Flags = 96 * v80;
        if ( (v109[v80].Flags.Value & 2) != 0 )
          *(_DWORD *)(v83 + 4) |= 0x1000u;
        if ( (*(UINT *)((_BYTE *)&v109->Flags.Value + Flags) & 1) == 0 )
        {
          if ( (*(_DWORD *)&v67->Flags & 2) != 0 )
            *(_DWORD *)(v64 + 64) |= 0x20000000u;
          goto LABEL_132;
        }
        v84 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v109->VidPnSourceId + Flags);
        Flags = (unsigned int)v67->Flags;
        if ( (Flags & 2) != 0 )
        {
          v87 = *((_DWORD *)this + 70);
          if ( v87 == 2 )
          {
            *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) |= 2u;
            *(_DWORD *)(v64 + 64) |= 0x40000000u;
            goto LABEL_126;
          }
          if ( (Flags & 0x800) != 0 )
          {
            if ( (Flags & 0x400) != 0 )
            {
              v88 = v87 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1859LL);
              *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) ^ (v88 << 13)) & 0x2000;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) |= 1u;
              *(_DWORD *)(v64 + 64) |= 0x80000u;
            }
          }
          else if ( v87 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1859LL) )
          {
            v89 = *((_QWORD *)v69 + 6);
            if ( (Flags & 0x400) != 0 )
              *(_DWORD *)(v89 + 4) |= 0x2000u;
            else
              *(_DWORD *)(v89 + 4) |= 1u;
          }
          v90 = *(_DWORD *)(v64 + 64) & 0x7FFFFFFF | ((*((_DWORD *)this + 70) == 1) << 31);
          *(_DWORD *)(v64 + 64) = v90;
          v86 = v90 ^ (v90 ^ ((*((_DWORD *)this + 70) == 0) << 30)) & 0x40000000 | 0x20000000;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) |= 1u;
          v85 = ((*((_DWORD *)this + 70) == 1) << 31) | *(_DWORD *)(v64 + 64) & 0x7FFFFFFF;
          *(_DWORD *)(v64 + 64) = v85;
          v86 = v85 ^ (v85 ^ ((*((_DWORD *)this + 70) == 0) << 30)) & 0x40000000;
        }
        *(_DWORD *)(v64 + 64) = v86;
LABEL_126:
        if ( *((_QWORD *)this + 354) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
        {
          *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) |= 4u;
          Flags = *(_DWORD *)(v64 + 64) & 0x3DFFFFFF;
          LODWORD(Flags) = Flags | 0x2000000;
          *(_DWORD *)(v64 + 64) = Flags;
          if ( (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 2) != 0 )
          {
            Flags = (unsigned int)Flags | 0x20400000;
            *(_DWORD *)(v64 + 64) = Flags;
          }
        }
        *(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) ^ (v84 << 6)) & 0x3C0;
LABEL_132:
        if ( a6 && (*((_DWORD *)a6 + 1) & 8) != 0 )
          *(_DWORD *)(v64 + 64) |= 0x88000u;
        if ( ((*(_DWORD *)&v67->Flags | (*(_DWORD *)&v67->Flags >> 1)) & 0x800) != 0 )
          *(_DWORD *)(v64 + 64) |= 0x20100000u;
        if ( (*(_DWORD *)&v67->Flags & 0x400) != 0 )
          *(_DWORD *)(v64 + 64) |= 0x200000u;
        v69 = (struct DXGALLOCATION *)*((_QWORD *)v69 + 8);
        ++v68;
      }
      while ( v68 < v67->NumAllocations );
    }
    if ( a6 )
    {
      if ( (*(_DWORD *)&v67->Flags & 2) != 0 )
      {
        v91 = v105;
        v92 = a6[7][2];
        if ( v92 && v105 && v105 != v92 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v105, v92, Flags);
          v93[3] = 275LL;
          v93[4] = 7LL;
          v93[5] = 0LL;
          v93[6] = 0LL;
          v93[7] = 0LL;
          WdLogEvent5_WdCriticalError(v93);
          v91 = v105;
        }
        a6[7][2] = v91;
      }
      else
      {
        v97 = (struct DXGRESOURCE *)a6[7];
        v98 = v105;
        if ( v97 && v105 && v97 != v105 )
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v97, v64, Flags);
          v99[3] = 275LL;
          v99[4] = 7LL;
          v99[5] = 0LL;
          v99[6] = 0LL;
          v99[7] = 0LL;
          WdLogEvent5_WdCriticalError(v99);
          v98 = v105;
        }
        a6[7] = (struct DXGRESOURCE **)v98;
      }
    }
  }
LABEL_155:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v33;
}
