/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@H@Z @ 0x1C009B180
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0008750 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  UINT v16; // ebx
  struct _D3DDDI_ALLOCATIONINFO2 *v17; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v19; // r8
  void *v20; // rcx
  struct DXGRESOURCE *v21; // rcx
  SIZE_T v22; // rax
  __int64 v23; // r13
  __int64 CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rbx
  int v30; // r15d
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rcx
  _QWORD *v43; // rax
  struct _DXGK_ALLOCATIONINFO *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 Flags; // r8
  unsigned int v48; // ebx
  __int64 v49; // r9
  struct DXGALLOCATION *v50; // rbx
  struct _DXGK_ALLOCATIONINFO *v51; // r11
  struct _DXGK_ALLOCATIONINFO *v52; // rdx
  __int64 v53; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  __int64 v55; // rcx
  _QWORD *v56; // rax
  bool v58; // zf
  struct DXGRESOURCE **v59; // rax
  __int64 (__fastcall **v60)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v61; // r9
  int v62; // r8d
  __int64 v63; // rcx
  struct DXGRESOURCE *v64; // rcx
  struct DXGRESOURCE *v65; // rdx
  UINT v66; // eax
  UINT v67; // eax
  SIZE_T v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r9
  struct DXGRESOURCE *v72; // rcx
  struct DXGRESOURCE *v73; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // r10d
  int v75; // ecx
  int v76; // eax
  int v77; // eax
  __int64 v78; // rax
  PVOID v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  _QWORD *v84; // rax
  __int64 v85; // rax
  int v86; // r9d
  __int64 v87; // rax
  _QWORD *v88; // rax
  unsigned __int8 v89; // cl
  _QWORD *v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  int v93; // ecx
  __int64 v94; // rax
  int v95; // ecx
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  PVOID P; // [rsp+28h] [rbp-51h] BYREF
  unsigned int Size; // [rsp+30h] [rbp-49h]
  UINT Size_4; // [rsp+34h] [rbp-45h]
  struct _DXGK_ALLOCATIONINFO *v102; // [rsp+38h] [rbp-41h]
  struct DXGRESOURCE *v103; // [rsp+40h] [rbp-39h]
  int v104; // [rsp+48h] [rbp-31h]
  int v105; // [rsp+A8h] [rbp+2Fh]
  unsigned __int8 CurrentIrql; // [rsp+B0h] [rbp+37h]
  struct _D3DDDI_ALLOCATIONINFO2 *v107; // [rsp+B8h] [rbp+3Fh]

  v107 = a3;
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 144)) )
    {
      v78 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v78 + 24) = 2748LL;
      WdLogEvent5_WdAssertion(v78);
    }
    a3 = v107;
  }
  v16 = 0;
  for ( P = 0LL; v16 < a2->NumAllocations; ++v16 )
  {
    v17 = &a3[v16];
    if ( v17->pPrivateDriverData )
    {
      PrivateDriverDataSize = v17->PrivateDriverDataSize;
      v19 = v16;
      a4[v19].PrivateDriverDataSize = PrivateDriverDataSize;
      if ( a11 )
      {
        v20 = a7[v16];
        a4[v19].pPrivateDriverData = v20;
        memmove(v20, a8[v16], PrivateDriverDataSize);
      }
      else
      {
        a4[v19].pPrivateDriverData = v17->pPrivateDriverData;
      }
      a3 = v107;
    }
  }
  v21 = (struct DXGRESOURCE *)a6;
  v104 = 0;
  if ( a6 )
  {
    v58 = (*((_DWORD *)a6 + 1) & 1) == 0;
    v59 = a6[7];
    v104 = 1;
    if ( v58 )
    {
      v103 = (struct DXGRESOURCE *)v59;
    }
    else
    {
      v21 = v59[2];
      v103 = v21;
    }
  }
  else
  {
    v103 = 0LL;
  }
  Size_4 = a2->NumAllocations;
  v22 = a2->PrivateDriverDataSize;
  v102 = a4;
  if ( (_DWORD)v22 && a2->pStandardAllocation )
  {
    Size = v22;
    v79 = operator new(v22, 0x4B677844u, PagedPool);
    P = v79;
    if ( !v79 )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v80, v82, v83);
      v48 = -1073741801;
      v84[3] = this;
      v84[4] = Size;
      v84[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v84);
      goto LABEL_51;
    }
    if ( a11 )
      memmove(v79, Src, Size);
    else
      memmove(v79, a2->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
    P = 0LL;
  }
  v23 = *((_QWORD *)this + 2);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v21, &EventProfilerEnter, (__int64)a3, 5002);
  CurrentProcess = PsGetCurrentProcess(v21);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v25);
  v28 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
    v29 = ProcessDxgProcess + 88;
  else
    v29 = 0LL;
  v30 = 0;
  if ( v29 && *(struct _KTHREAD **)(v29 + 8) == KeGetCurrentThread() )
  {
    v85 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v85 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v85);
  }
  if ( v28 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v86 = *(_DWORD *)(v29 + 16);
        if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v31, &EventBlockThread, v32, v86);
      }
      ExAcquirePushLockExclusiveEx(v29, 0LL);
    }
    v30 = 2;
    *(_QWORD *)(v29 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v23 + 16), 1);
  CurrentIrql = KeGetCurrentIrql();
  v34 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v87 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v87 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v87);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v34 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v34 )
      {
        v105 = *(_DWORD *)(v34 + 136);
        goto LABEL_33;
      }
    }
    else
    {
      v34 = 0LL;
    }
  }
  v105 = 0;
LABEL_33:
  v41 = (*(int (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v23 + 16) + 328LL))(
          *(_QWORD *)(*(_QWORD *)(v23 + 16) + 240LL),
          &P);
  v42 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v42 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v38, v39);
    v88[3] = 275LL;
    v88[4] = 16LL;
    v88[5] = v23;
    v88[6] = CurrentIrql;
    v89 = KeGetCurrentIrql();
    v88[7] = v89;
    WdLogEvent5_WdCriticalError(v88);
  }
  if ( v34 && *(_DWORD *)(v34 + 136) != v105 )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v38, v39);
    v90[3] = 275LL;
    v90[4] = 25LL;
    v90[5] = *(int *)(v34 + 136);
    v90[6] = v105;
    v90[7] = 0LL;
    WdLogEvent5_WdCriticalError(v90);
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v38, v39, v40);
  v43[3] = v41;
  v43[4] = v103;
  v43[5] = v102->hAllocation;
  v43[6] = v102->Flags.Value;
  v44 = v102;
  v43[7] = v102->PreferredSegment.Value;
  if ( (_DWORD)v41 && (_DWORD)v41 != -1073741811 && (_DWORD)v41 != -1073741801 )
  {
    v91 = WdLogNewEntry5_WdError(v44);
    *(_QWORD *)(v91 + 24) = v41;
    WdLogEvent5_WdError(v91);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v23 + 16));
  if ( v30 == 2 )
  {
    *(_QWORD *)(v29 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v29, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v46, &EventProfilerExit, Flags, 5002);
  v48 = v41;
  if ( (int)v41 >= 0 )
  {
    v49 = 0LL;
    v50 = a5;
    if ( a2->NumAllocations )
    {
      v51 = a4;
      while ( 1 )
      {
        v52 = &v51[(unsigned int)v49];
        *(_QWORD *)(*((_QWORD *)v50 + 6) + 16LL) = v52->hAllocation;
        *(_QWORD *)(*((_QWORD *)v50 + 6) + 24LL) = v52->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) ^ (((v52->Flags.Value & 0x30) != 0) << 11)) & 0x800;
        v52->Flags.Value &= 0x807FFFFu;
        v53 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( (*(_DWORD *)(v53 + 1524) & 0x40) != 0 && *(_BYTE *)(v53 + 2078) )
          v52->Flags.Value |= 0x8000u;
        Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v52->Flags.Value;
        if ( (*(_WORD *)&Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2079LL) )
          v52->Flags.Value = *(_DWORD *)&Value | 0x10000;
        v55 = v52->Flags.Value;
        if ( (v52->Flags.Value & 0x18000) == 0x10000 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v55);
          v56[3] = this;
          v56[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v56[5] = -1073741811LL;
          v56[6] = 2898LL;
          WdLogEvent5_WdError(v56);
          v48 = -1073741811;
          goto LABEL_51;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
            v52->Flags.Value = v55 | 0x20000;
          v66 = *((_DWORD *)a10 + 94);
          if ( v66 )
          {
            v52->SupportedWriteSegmentSet = v66;
            v52->PreferredSegment.Value = *((_DWORD *)a10 + 95);
          }
          v67 = *((_DWORD *)a10 + 96);
          if ( v67 )
            v52->Alignment = v67;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
            *(_DWORD *)(*((_QWORD *)a5 + 12 * v49 + 6) + 4LL) |= 0x8000u;
          v68 = *((_QWORD *)a10 + 49);
          if ( v68 )
            v52->Size = v68;
        }
        if ( *((_DWORD *)this + 76) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) > 1
          && !*(_BYTE *)(v70 + 2058)
          && (v107[v71].Flags.Value & 1) == 0 )
        {
          *(_DWORD *)(v69 + 52) = *(_DWORD *)(v70 + 2156);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          *((_DWORD *)v50 + 18) ^= (*((_DWORD *)v50 + 18) ^ (*(_DWORD *)(v45 + 52) << 12)) & 0x3F000;
        else
          *((_DWORD *)v50 + 18) &= 0xFFFC0FFF;
        v62 = *(_DWORD *)(v45 + 64);
        if ( (v62 & 0x200) != 0
          && (v60 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 16LL),
              v60[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v62 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
           || v60[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v60[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v60[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v60[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v92 = (_QWORD *)WdLogNewEntry5_WdError(v60);
          v92[3] = this;
          v92[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v92[5] = -1073741637LL;
          WdLogEvent5_WdError(v92);
          v48 = -1073741637;
          goto LABEL_51;
        }
        Flags = *((_QWORD *)v50 + 6);
        if ( !*(_QWORD *)(Flags + 16) )
        {
          v96 = (_QWORD *)WdLogNewEntry5_WdError(v60);
          v96[3] = this;
          v96[4] = v50;
          v96[5] = -1073741811LL;
          WdLogEvent5_WdError(v96);
          v48 = -1073741811;
          goto LABEL_51;
        }
        v63 = v61;
        if ( (v107[v61].Flags.Value & 2) != 0 )
          *(_DWORD *)(Flags + 4) |= 0x1000u;
        if ( (v107[v63].Flags.Value & 1) == 0 || (*(_DWORD *)(v45 + 64) & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            *(_DWORD *)(v45 + 64) |= 0x20000000u;
          goto LABEL_74;
        }
        Flags = (unsigned int)a2->Flags;
        VidPnSourceId = v107[v63].VidPnSourceId;
        if ( (Flags & 2) == 0 )
          break;
        v77 = *((_DWORD *)this + 76);
        if ( v77 != 2 )
        {
          if ( (Flags & 0x800) != 0 )
          {
            if ( (Flags & 0x400) != 0 )
            {
              v93 = v77 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1995LL);
              *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) ^ (v93 << 13)) & 0x2000;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) |= 1u;
              *(_DWORD *)(v45 + 64) |= 0x80000u;
            }
          }
          else if ( v77 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1995LL) )
          {
            v94 = *((_QWORD *)v50 + 6);
            if ( (Flags & 0x400) != 0 )
              *(_DWORD *)(v94 + 4) |= 0x2000u;
            else
              *(_DWORD *)(v94 + 4) |= 1u;
          }
          v95 = *(_DWORD *)(v45 + 64) & 0x7FFFFFFF | ((*((_DWORD *)this + 76) == 1) << 31);
          *(_DWORD *)(v45 + 64) = v95;
          v76 = v95 ^ (v95 ^ ((*((_DWORD *)this + 76) == 0) << 30)) & 0x40000000 | 0x20000000;
          goto LABEL_106;
        }
        *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) |= 2u;
        *(_DWORD *)(v45 + 64) |= 0x40000000u;
LABEL_107:
        if ( *((_QWORD *)this + 357) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
        {
          *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) |= 4u;
          Flags = *(_DWORD *)(v45 + 64) & 0x3DFFFFFF;
          LODWORD(Flags) = Flags | 0x2000000;
          *(_DWORD *)(v45 + 64) = Flags;
          if ( (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) & 2) != 0 )
          {
            Flags = (unsigned int)Flags | 0x20400000;
            *(_DWORD *)(v45 + 64) = Flags;
          }
        }
        *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) ^ (VidPnSourceId << 6)) & 0x3C0;
LABEL_74:
        if ( a6 && (*((_DWORD *)a6 + 1) & 8) != 0 )
          *(_DWORD *)(v45 + 64) |= 0x88000u;
        if ( ((*(_DWORD *)&a2->Flags | (*(_DWORD *)&a2->Flags >> 1)) & 0x800) != 0 )
          *(_DWORD *)(v45 + 64) |= 0x20100000u;
        if ( (*(_DWORD *)&a2->Flags & 0x400) != 0 )
          *(_DWORD *)(v45 + 64) |= 0x200000u;
        v50 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 8);
        v49 = (unsigned int)(v61 + 1);
        if ( (unsigned int)v49 >= a2->NumAllocations )
          goto LABEL_80;
      }
      *(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) |= 1u;
      v75 = *(_DWORD *)(v45 + 64) & 0x7FFFFFFF | ((*((_DWORD *)this + 76) == 1) << 31);
      *(_DWORD *)(v45 + 64) = v75;
      v76 = v75 ^ (v75 ^ ((*((_DWORD *)this + 76) == 0) << 30)) & 0x40000000;
LABEL_106:
      *(_DWORD *)(v45 + 64) = v76;
      goto LABEL_107;
    }
LABEL_80:
    if ( !a6 )
    {
LABEL_81:
      v48 = v41;
      goto LABEL_51;
    }
    if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
    {
      v72 = (struct DXGRESOURCE *)a6[7];
      v73 = v103;
      if ( v72 && v103 && v72 != v103 )
      {
        v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v45, Flags);
        v98[3] = 275LL;
        v98[4] = 7LL;
        v98[5] = 0LL;
        v98[6] = 0LL;
        v98[7] = 0LL;
        WdLogEvent5_WdCriticalError(v98);
        v73 = v103;
      }
      a6[7] = (struct DXGRESOURCE **)v73;
      goto LABEL_81;
    }
    v64 = v103;
    v65 = a6[7][2];
    if ( v65 && v103 && v103 != v65 )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v103, v65, Flags);
      v97[3] = 275LL;
      v97[4] = 7LL;
      v97[5] = 0LL;
      v97[6] = 0LL;
      v97[7] = 0LL;
      WdLogEvent5_WdCriticalError(v97);
      v64 = v103;
    }
    v48 = v41;
    a6[7][2] = v64;
  }
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v48;
}
