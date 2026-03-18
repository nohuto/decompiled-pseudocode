/*
 * XREFs of DxgkCreateContextVirtual @ 0x1C0093FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004584 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00076D8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0093FC4 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00960C4 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // r11
  __int64 v15; // r9
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  ADAPTER_RENDER *v20; // r10
  __int64 v21; // r11
  PVOID v22; // r12
  char *v23; // r13
  int v24; // eax
  __int64 v25; // r9
  int Context; // r15d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  size_t v32; // r8
  DXGDEVICE *v33; // r13
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v36; // ecx
  int v37; // r8d
  _DWORD *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _BYTE v50[224]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2039;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v43 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    v45 = qword_1C0056840;
    v46 = (qword_1C0056840 & 2) == 0;
    goto LABEL_47;
  }
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)v9;
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v9 + 16);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_QWORD *)(v9 + 32);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
    ProcessDxgProcess,
    v3 + 7);
  v13 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v13;
  if ( v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
    v15 = 0LL;
    v16 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v16;
    v17 = v16;
    while ( 1 )
    {
      v17 >>= 1;
      if ( !v17 )
        break;
      v15 = (unsigned int)(v15 + 1);
    }
    if ( (unsigned int)v15 < *(_DWORD *)(v14 + 248) )
    {
      v18 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 2040) + 48 * v15);
      v19 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
      *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v19;
      if ( (unsigned int)v19 >= (unsigned int)v18 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v10, v19, v15);
        v48[3] = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        goto LABEL_54;
      }
      if ( (unsigned int)GetBitCount(v16) <= 1 )
      {
        v22 = 0LL;
        *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
        v23 = *(char **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        if ( v23 )
        {
          if ( *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
            goto LABEL_13;
        }
        else if ( !*(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
        {
LABEL_13:
          v24 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
          *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v24;
          if ( (v24 & 8) != 0
            || (*(_DWORD *)(v21 + 1524) & 0x20) != 0 && ADAPTER_RENDER::NodeSupportsGpuVa(v20, v15, v12) )
          {
            *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v13;
            *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
            DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 16), v13, 0, v25, 0);
            Context = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 16));
            if ( Context < 0 )
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 16));
              if ( *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
              DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL));
            }
            else
            {
              if ( v23 )
              {
                v27 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
                *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v27;
                v22 = operator new((unsigned int)v27, 0x4B677844u, PagedPool);
                *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v22;
                if ( !v22 )
                {
                  v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
                  v49[3] = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                  v49[4] = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                  Context = -1073741801;
                  v49[5] = -1073741801LL;
                  WdLogEvent5_WdWarning(v49);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 16));
                  if ( *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
                  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL));
                  v40 = qword_1C0056840;
                  v41 = (qword_1C0056840 & 2) == 0;
                  goto LABEL_37;
                }
                v32 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                if ( &v23[v32] < v23 || (unsigned __int64)&v23[v32] > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v22, v23, v32);
                v33 = *(DXGDEVICE **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                v34 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
                v35 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                v36.0 = *(struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              }
              else
              {
                v33 = *(DXGDEVICE **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                v34 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
                v35 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                v36.0 = *(struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              }
              *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
              Context = DXGDEVICE::CreateContext(
                          v33,
                          v3 + 9,
                          v35,
                          v34,
                          v36,
                          v22,
                          *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                          (enum _D3DKMT_CLIENTHINT)*(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
                          1u);
              if ( Context >= 0 )
              {
                v37 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) + 24LL);
                *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v37;
                v38 = (_DWORD *)(a1 + 32);
                if ( a1 + 32 >= MmUserProbeAddress )
                  v38 = (_DWORD *)MmUserProbeAddress;
                *v38 = v37;
              }
              if ( v22 )
                ExFreePoolWithTag(v22, 0);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 16));
              v40 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              if ( v40 && *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v40 + 80));
                KeLeaveCriticalRegion();
              }
              if ( *v3 )
              {
                v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)*v3 + 8, 0xFFFFFFFFFFFFFFFFuLL);
                if ( v40 == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)*v3 + 2), *v3);
              }
            }
            v41 = (qword_1C0056840 & 2) == 0;
LABEL_37:
            if ( !v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v40, &EventProfilerExit, v39, 2039);
            return (unsigned int)Context;
          }
          v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v15);
          v48[3] = -1073741811LL;
          v48[4] = 301LL;
          goto LABEL_56;
        }
        v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v15);
        v48[3] = v23;
        v48[4] = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        v48[5] = -1073741811LL;
LABEL_56:
        WdLogEvent5_WdWarning(v48);
        goto LABEL_46;
      }
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v15);
    v48[3] = v16;
LABEL_54:
    v48[4] = -1073741811LL;
    goto LABEL_56;
  }
  v47 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v47 + 24) = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  *(_QWORD *)(v47 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v47);
LABEL_46:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL));
  v46 = (qword_1C0056840 & 2) == 0;
LABEL_47:
  if ( !v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v45, &EventProfilerExit, v44, 2039);
  return 3221225485LL;
}
