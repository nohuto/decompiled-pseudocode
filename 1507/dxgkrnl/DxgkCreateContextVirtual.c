/*
 * XREFs of DxgkCreateContextVirtual @ 0x1C00678D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00057AC (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0068E84 (-GetBitCount@@YAII@Z.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1C0068E94 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C007A574 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGCONTEXT **v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  ULONG64 v7; // rax
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // r15
  __int64 v10; // r12
  unsigned int HighestBitPos; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  ADAPTER_RENDER *v15; // r9
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r10d
  __int64 v20; // r11
  void *v21; // r13
  char *v22; // r12
  __int64 v23; // r9
  int Context; // r15d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  size_t v30; // r8
  DXGDEVICE *v31; // r12
  unsigned int v32; // r9d
  unsigned int v33; // r8d
  _DWORD *v34; // rdx
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // zf
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  bool v43; // zf
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _BYTE v47[192]; // [rsp+150h] [rbp+150h] BYREF

  v3 = (struct DXGCONTEXT **)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 2039;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v40 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
    v42 = qword_1C00467F0;
    v43 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_36;
  }
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v7;
  *(_OWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v7 + 16);
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_QWORD *)(v7 + 32);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
    Current,
    v3 + 3);
  v9 = *(struct DXGDEVICE **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v9;
  if ( v9 )
  {
    v10 = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v10;
    HighestBitPos = GetHighestBitPos(v10);
    if ( HighestBitPos < *(_DWORD *)(v16 + 232) )
    {
      v17 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 1896) + 48LL * HighestBitPos);
      v18 = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
      *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v18;
      if ( (unsigned int)v18 >= (unsigned int)v17 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v12, v18, v15);
        v45[3] = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        goto LABEL_42;
      }
      if ( GetBitCount(v10) <= 1 )
      {
        v21 = 0LL;
        *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
        v22 = *(char **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        if ( v22 )
        {
          if ( *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
            goto LABEL_11;
        }
        else if ( !*(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
        {
LABEL_11:
          if ( (*(_DWORD *)(v20 + 1380) & 0x20) != 0 && ADAPTER_RENDER::NodeSupportsGpuVa(v15, v19, v14) )
          {
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 6), v9);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 14), (__int64)v9, 0, v23, 0);
            Context = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 14));
            if ( Context < 0 )
            {
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 14));
              v35 = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == 0LL;
            }
            else
            {
              if ( v22 )
              {
                v25 = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
                *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v25;
                v21 = operator new[]((unsigned int)v25, 0x4B677844u, PagedPool);
                *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v21;
                if ( !v21 )
                {
                  v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
                  v46[3] = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  v46[4] = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                  Context = -1073741801;
                  v46[5] = -1073741801LL;
                  WdLogEvent5_WdWarning(v46);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 14));
                  if ( *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 6));
                  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
                  v36 = qword_1C00467F0;
                  v38 = (qword_1C00467F0 & 2) == 0;
                  goto LABEL_29;
                }
                v30 = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                if ( &v22[v30] < v22 || (unsigned __int64)&v22[v30] > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v21, v22, v30);
                v31 = *(DXGDEVICE **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                v32 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
                v33 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              }
              else
              {
                v31 = *(DXGDEVICE **)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                v32 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
                v33 = *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              }
              *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
              Context = DXGDEVICE::CreateContext(
                          v31,
                          v3 + 2,
                          v33,
                          v32,
                          *(struct _D3DDDI_CREATECONTEXTFLAGS *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C),
                          v21,
                          *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                          (enum _D3DKMT_CLIENTHINT)*(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C),
                          1u);
              if ( Context >= 0 )
              {
                v34 = (_DWORD *)(a1 + 32);
                if ( a1 + 32 >= MmUserProbeAddress )
                  v34 = (_DWORD *)MmUserProbeAddress;
                *v34 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 24LL);
              }
              operator delete(v21);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 14));
              v35 = *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == 0LL;
            }
            if ( !v35 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 6));
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
            v38 = (qword_1C00467F0 & 2) == 0;
LABEL_29:
            if ( !v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
              Template_q(v36, &EventProfilerExit, v37, 2039);
            return (unsigned int)Context;
          }
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
          v45[3] = -1073741811LL;
          v45[4] = 298LL;
          goto LABEL_44;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        v45[3] = v22;
        v45[4] = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        v45[5] = -1073741811LL;
LABEL_44:
        WdLogEvent5_WdWarning(v45);
        goto LABEL_35;
      }
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v45[3] = v10;
LABEL_42:
    v45[4] = -1073741811LL;
    goto LABEL_44;
  }
  v44 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v44 + 24) = *(unsigned int *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(v44 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v44);
LABEL_35:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFC0uLL));
  v43 = (qword_1C00467F0 & 2) == 0;
LABEL_36:
  if ( !v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v42, &EventProfilerExit, v41, 2039);
  return 3221225485LL;
}
