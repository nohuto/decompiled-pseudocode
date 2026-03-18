/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXH@Z @ 0x1C007F690
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
        int a10)
{
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  UINT v18; // ebx
  struct _D3DDDI_ALLOCATIONINFO2 *v19; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v21; // r8
  void *v22; // rcx
  struct DXGRESOURCE *v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r13
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rbx
  int v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 v49; // rcx
  _QWORD *v50; // rax
  struct _DXGK_ALLOCATIONINFO *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // ebx
  UINT v57; // r9d
  struct _DXGK_ALLOCATIONINFO *v58; // r11
  struct _DXGK_ALLOCATIONINFO *v59; // rdx
  __int64 v60; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  _QWORD *v62; // rax
  bool v64; // zf
  struct DXGRESOURCE **v65; // rax
  __int64 (__fastcall **v66)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v67; // r9
  int v68; // r8d
  __int64 v69; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  struct DXGRESOURCE *v71; // rcx
  struct DXGRESOURCE *v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r9
  struct DXGRESOURCE *v76; // rcx
  struct DXGRESOURCE *v77; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // r8d
  int v79; // ecx
  int v80; // eax
  __int64 v81; // rax
  int v82; // ecx
  __int64 v83; // rax
  void *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // r9d
  __int64 v93; // rax
  _QWORD *v94; // rax
  unsigned __int8 v95; // cl
  _QWORD *v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  int v99; // ecx
  int v100; // ecx
  int v101; // r10d
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  PVOID P; // [rsp+28h] [rbp-49h] BYREF
  unsigned int Size; // [rsp+30h] [rbp-41h]
  UINT Size_4; // [rsp+34h] [rbp-3Dh]
  struct _DXGK_ALLOCATIONINFO *v108; // [rsp+38h] [rbp-39h]
  struct DXGRESOURCE *v109; // [rsp+40h] [rbp-31h]
  int v110; // [rsp+48h] [rbp-29h]
  int v111; // [rsp+A8h] [rbp+37h]
  unsigned __int8 CurrentIrql; // [rsp+B0h] [rbp+3Fh]
  struct _D3DDDI_ALLOCATIONINFO2 *v113; // [rsp+B8h] [rbp+47h]

  v113 = a3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 144) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 128)) )
    {
      v83 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      *(_QWORD *)(v83 + 24) = 2677LL;
      WdLogEvent5_WdAssertion(v83);
    }
    a3 = v113;
  }
  v18 = 0;
  for ( P = 0LL; v18 < a2->NumAllocations; ++v18 )
  {
    v19 = &a3[v18];
    if ( v19->pPrivateDriverData )
    {
      PrivateDriverDataSize = v19->PrivateDriverDataSize;
      v21 = v18;
      a4[v21].PrivateDriverDataSize = PrivateDriverDataSize;
      if ( a10 )
      {
        v22 = a7[v18];
        a4[v21].pPrivateDriverData = v22;
        memmove(v22, a8[v18], PrivateDriverDataSize);
      }
      else
      {
        a4[v21].pPrivateDriverData = v19->pPrivateDriverData;
      }
      a3 = v113;
    }
  }
  v23 = (struct DXGRESOURCE *)a6;
  v110 = 0;
  if ( a6 )
  {
    v64 = (*((_DWORD *)a6 + 1) & 1) == 0;
    v65 = a6[7];
    v110 = 1;
    if ( v64 )
    {
      v109 = (struct DXGRESOURCE *)v65;
    }
    else
    {
      v23 = v65[2];
      v109 = v23;
    }
  }
  else
  {
    v109 = 0LL;
  }
  Size_4 = a2->NumAllocations;
  v24 = a2->PrivateDriverDataSize;
  v108 = a4;
  if ( (_DWORD)v24 && a2->pStandardAllocation )
  {
    Size = v24;
    v84 = operator new[](v24, 0x4B677844u, PagedPool);
    P = v84;
    if ( !v84 )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v87, v88);
      v55 = -1073741801;
      v89[3] = this;
      v89[4] = Size;
      v89[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v89);
      goto LABEL_50;
    }
    if ( a10 )
      memmove(v84, Src, Size);
    else
      memmove(v84, a2->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
    P = 0LL;
  }
  v25 = *((_QWORD *)this + 2);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v23, &EventProfilerEnter, (__int64)a3, 5002);
  CurrentProcess = PsGetCurrentProcess(v23);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v90 = WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
    *(_QWORD *)(v90 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v90);
    v32 = 0LL;
    goto LABEL_106;
  }
  v32 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v32 )
  {
LABEL_106:
    v33 = 0LL;
    goto LABEL_19;
  }
  v33 = v32 + 96;
LABEL_19:
  v34 = 0;
  if ( v33 && *(struct _KTHREAD **)(v33 + 8) == KeGetCurrentThread() )
  {
    v91 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    *(_QWORD *)(v91 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v91);
  }
  if ( v32 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v92 = *(_DWORD *)(v33 + 16);
        if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v35, &EventBlockThread, v36, v92);
      }
      ExAcquirePushLockExclusiveEx(v33, 0LL);
    }
    v34 = 2;
    *(_QWORD *)(v33 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v25 + 16), 1);
  CurrentIrql = KeGetCurrentIrql();
  v41 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v93 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v93 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v93);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38, v37, v39, v40);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v41 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v41 )
      {
        v111 = *(_DWORD *)(v41 + 136);
        goto LABEL_34;
      }
    }
    else
    {
      v41 = 0LL;
    }
  }
  v111 = 0;
LABEL_34:
  v48 = (*(int (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v25 + 16) + 312LL))(
          *(_QWORD *)(*(_QWORD *)(v25 + 16) + 224LL),
          &P);
  v49 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v49 )
  {
    v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v45, v46);
    v94[3] = 275LL;
    v94[4] = 16LL;
    v94[5] = v25;
    v94[6] = CurrentIrql;
    v95 = KeGetCurrentIrql();
    v94[7] = v95;
    WdLogEvent5_WdCriticalError(v94);
  }
  if ( v41 && *(_DWORD *)(v41 + 136) != v111 )
  {
    v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v45, v46);
    v96[3] = 275LL;
    v96[4] = 25LL;
    v96[5] = *(int *)(v41 + 136);
    v96[6] = v111;
    v96[7] = 0LL;
    WdLogEvent5_WdCriticalError(v96);
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v45, v46, v47);
  v50[3] = v48;
  v50[4] = v109;
  v50[5] = v108->hAllocation;
  v50[6] = v108->Flags.Value;
  v51 = v108;
  v50[7] = v108->PreferredSegment.Value;
  if ( (_DWORD)v48 && (_DWORD)v48 != -1073741811 && (_DWORD)v48 != -1073741801 )
  {
    v97 = WdLogNewEntry5_WdError(v51);
    *(_QWORD *)(v97 + 24) = v48;
    WdLogEvent5_WdError(v97);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v25 + 16));
  if ( v34 == 2 )
  {
    *(_QWORD *)(v33 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v33, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v53, &EventProfilerExit, v54, 5002);
  v55 = v48;
  if ( (int)v48 >= 0 )
  {
    v57 = 0;
    if ( a2->NumAllocations )
    {
      v58 = a4;
      while ( 1 )
      {
        v59 = &v58[v57];
        *(_QWORD *)(*((_QWORD *)a5 + 6) + 16LL) = v59->hAllocation;
        *(_QWORD *)(*((_QWORD *)a5 + 6) + 24LL) = v59->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) ^ (((v59->Flags.Value & 0x30) != 0) << 11)) & 0x800;
        v59->Flags.Value &= 0x803FFFFu;
        v60 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( (*(_DWORD *)(v60 + 1380) & 0x40) != 0 && *(_BYTE *)(v60 + 1934) )
          v59->Flags.Value |= 0x8000u;
        Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v59->Flags.Value;
        if ( (*(_WORD *)&Value & 0x8000) != 0 )
        {
          v60 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          if ( *(_BYTE *)(v60 + 1935) )
            v59->Flags.Value = *(_DWORD *)&Value | 0x10000;
        }
        if ( (v59->Flags.Value & 0x18000) == 0x10000 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdError(v60);
          v62[3] = this;
          v62[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v62[5] = -1073741811LL;
          v62[6] = 2828LL;
          WdLogEvent5_WdError(v62);
          v55 = -1073741811;
          goto LABEL_50;
        }
        if ( *((_DWORD *)this + 70) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) > 1
          && !*(_BYTE *)(v74 + 1915)
          && (v113[v75].Flags.Value & 1) == 0 )
        {
          *(_DWORD *)(v73 + 52) = *(_DWORD *)(v74 + 1996);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          *((_DWORD *)a5 + 18) ^= (*((_DWORD *)a5 + 18) ^ (*(_DWORD *)(v52 + 52) << 9)) & 0x7E00;
        else
          *((_DWORD *)a5 + 18) &= 0xFFFF81FF;
        v68 = *(_DWORD *)(v52 + 64);
        if ( (v68 & 0x200) != 0
          && (v66 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 16LL),
              v66[67] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v68 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
           || v66[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v66[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v66[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v66[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v98 = (_QWORD *)WdLogNewEntry5_WdError(v66);
          v98[3] = this;
          v98[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v98[5] = -1073741637LL;
          WdLogEvent5_WdError(v98);
          v55 = -1073741637;
          goto LABEL_50;
        }
        v54 = *((_QWORD *)a5 + 6);
        if ( !*(_QWORD *)(v54 + 16) )
        {
          v102 = (_QWORD *)WdLogNewEntry5_WdError(v66);
          v102[3] = this;
          v102[4] = a5;
          v102[5] = -1073741811LL;
          WdLogEvent5_WdError(v102);
          v55 = -1073741811;
          goto LABEL_50;
        }
        v69 = v67;
        if ( (v113[v67].Flags.Value & 2) != 0 )
          *(_DWORD *)(v54 + 4) |= 0x1000u;
        Flags = a2->Flags;
        if ( (v113[v69].Flags.Value & 1) != 0 )
          break;
        if ( (*(_BYTE *)&Flags & 2) != 0 )
          *(_DWORD *)(v52 + 64) |= 0x20000000u;
LABEL_72:
        if ( a6 && (*((_DWORD *)a6 + 1) & 8) != 0 )
          *(_DWORD *)(v52 + 64) |= 0x88000u;
        if ( ((*(_DWORD *)&a2->Flags | (*(_DWORD *)&a2->Flags >> 1)) & 0x800) != 0 )
          *(_DWORD *)(v52 + 64) |= 0x20100000u;
        if ( (*(_DWORD *)&a2->Flags & 0x400) != 0 )
          *(_DWORD *)(v52 + 64) |= 0x200000u;
        a5 = (struct DXGALLOCATION *)*((_QWORD *)a5 + 8);
        v57 = v67 + 1;
        if ( v57 >= a2->NumAllocations )
          goto LABEL_78;
      }
      VidPnSourceId = v113[v69].VidPnSourceId;
      if ( (*(_BYTE *)&Flags & 2) != 0 )
      {
        v82 = *((_DWORD *)this + 70);
        if ( v82 == 2 )
        {
          *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) |= 2u;
          *(_DWORD *)(v52 + 64) |= 0x40000000u;
LABEL_93:
          if ( *((_QWORD *)this + 2338) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
          {
            *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) |= 4u;
            v101 = *(_DWORD *)(v52 + 64) & 0x3DFFFFFF | 0x2000000;
            *(_DWORD *)(v52 + 64) = v101;
            if ( (*(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) & 2) != 0 )
              *(_DWORD *)(v52 + 64) = v101 | 0x20400000;
          }
          v81 = *((_QWORD *)a5 + 6);
          v54 = (*(_DWORD *)(v81 + 4) ^ (VidPnSourceId << 6)) & 0x3C0;
          *(_DWORD *)(v81 + 4) ^= v54;
          goto LABEL_72;
        }
        if ( (*(_WORD *)&Flags & 0x800) != 0 )
        {
          if ( (*(_WORD *)&Flags & 0x400) != 0 )
          {
            v99 = v82 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1851LL);
            *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) ^ (v99 << 13)) & 0x2000;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) |= 1u;
            *(_DWORD *)(v52 + 64) |= 0x80000u;
          }
        }
        else if ( v82 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1851LL) )
        {
          *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) |= 0x2000u;
        }
        v100 = *(_DWORD *)(v52 + 64) & 0x7FFFFFFF | ((*((_DWORD *)this + 70) == 1) << 31);
        *(_DWORD *)(v52 + 64) = v100;
        v80 = v100 ^ (v100 ^ ((*((_DWORD *)this + 70) == 0) << 30)) & 0x40000000 | 0x20000000;
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a5 + 6) + 4LL) |= 1u;
        v79 = ((*((_DWORD *)this + 70) == 1) << 31) | *(_DWORD *)(v52 + 64) & 0x7FFFFFFF;
        *(_DWORD *)(v52 + 64) = v79;
        v80 = v79 ^ (v79 ^ ((*((_DWORD *)this + 70) == 0) << 30)) & 0x40000000;
      }
      *(_DWORD *)(v52 + 64) = v80;
      goto LABEL_93;
    }
LABEL_78:
    if ( !a6 )
    {
LABEL_79:
      v55 = v48;
      goto LABEL_50;
    }
    if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
    {
      v76 = (struct DXGRESOURCE *)a6[7];
      v77 = v109;
      if ( v76 && v109 && v76 != v109 )
      {
        v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v52, v54);
        v104[3] = 275LL;
        v104[4] = 7LL;
        v104[5] = 0LL;
        v104[6] = 0LL;
        v104[7] = 0LL;
        WdLogEvent5_WdCriticalError(v104);
        v77 = v109;
      }
      a6[7] = (struct DXGRESOURCE **)v77;
      goto LABEL_79;
    }
    v71 = v109;
    v72 = a6[7][2];
    if ( v72 && v109 && v109 != v72 )
    {
      v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v109, v72, v54);
      v103[3] = 275LL;
      v103[4] = 7LL;
      v103[5] = 0LL;
      v103[6] = 0LL;
      v103[7] = 0LL;
      WdLogEvent5_WdCriticalError(v103);
      v71 = v109;
    }
    v55 = v48;
    a6[7][2] = v71;
  }
LABEL_50:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v55;
}
