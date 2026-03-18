/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0131C70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_PRESENT *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r15d
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 *v14; // rbx
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v22; // rax
  unsigned int v23; // edi
  _BYTE *PoolWithTag; // rax
  ULONG v25; // edi
  unsigned int v26; // r12d
  D3DKMT_HANDLE v27; // r15d
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // r15
  PVOID v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v57; // [rsp+30h] [rbp-D0h] BYREF
  char v58; // [rsp+38h] [rbp-C8h]
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v60[32]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-98h]
  _BYTE v62[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v63[80]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v64[14]; // [rsp+D0h] [rbp-30h] BYREF
  struct DXGCONTEXT *v66; // [rsp+160h] [rbp+60h] BYREF

  v3 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3008);
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v7 = Current;
  if ( Current )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62, a1->hDevice, Current, &v66, 0);
    v14 = (__int64 *)v66;
    if ( !v66 )
    {
      LODWORD(v8) = -1073741811;
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v15[3] = -1073741811LL;
      v15[4] = PsGetCurrentProcess(v16);
      v15[5] = a1->hDevice;
      WdLogEvent5_WdError(v15);
LABEL_48:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
      goto LABEL_49;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v66,
      *((struct DXGDEVICE **)v66 + 2));
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v22 + 24) = v14;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
LABEL_47:
      ExReleaseResourceLite(*((PERESOURCE *)v66 + 10));
      KeLeaveCriticalRegion();
      goto LABEL_48;
    }
    v23 = BroadcastContextCount + 1;
    P = 0LL;
    v61 = 0;
    if ( v23 <= 4 )
    {
      PoolWithTag = v60;
    }
    else
    {
      v18 = v23;
      v17 = 0xFFFFFFFFFFFFFFFFuLL % v23;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 8 )
        goto LABEL_43;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v23, 0x4B677844u);
    }
    P = PoolWithTag;
    v61 = v23;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v23);
      *(_QWORD *)P = v14;
      v25 = 0;
      if ( a1->BroadcastContextCount )
      {
        v26 = 1;
        while ( 1 )
        {
          v27 = a1->BroadcastContext[v25];
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v7 + 192));
          v28 = (v27 >> 6) & 0xFFFFFF;
          if ( v28 < *((_DWORD *)v7 + 58)
            && (v29 = *((_QWORD *)v7 + 27),
                v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
                ((v27 >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
            && (v30 & 0x1000) == 0
            && (v30 & 0xF) != 0
            && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 7 )
          {
            v31 = *(_QWORD *)(v29 + 16LL * v28);
          }
          else
          {
            v31 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)v7 + 192, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)P + v26) = v31;
          v32 = P;
          v33 = *((_QWORD *)P + v26);
          if ( !v33 || *(_QWORD *)(v33 + 16) != v14[2] )
            break;
          ++v25;
          ++v26;
          if ( v25 >= a1->BroadcastContextCount )
          {
            v3 = a2;
            goto LABEL_30;
          }
        }
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v35 = v25;
        LODWORD(v8) = -1073741811;
        v34[3] = v14;
        v34[4] = a1->BroadcastContext[v35];
        v34[5] = v35;
        v34[6] = -1073741811LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_44;
      }
      v32 = P;
LABEL_30:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v64,
        v32,
        v61);
      if ( !v64[0] )
      {
        v40 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
        *(_QWORD *)(v40 + 24) = 2139LL;
        WdLogEvent5_WdWarning(v40);
        LODWORD(v8) = -1073741801;
LABEL_42:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v64);
LABEL_44:
        if ( P != v60 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_47;
      }
      v41 = v14[2];
      v58 = 0;
      v57 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v57);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, v14[2], 2, v42, 0);
      v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v63);
      v8 = v43;
      if ( v43 >= 0 )
      {
        v49 = DXGCONTEXT::PresentFromCdd(
                (DXGCONTEXT *)v14,
                a1,
                v3,
                (struct COREDEVICEACCESS *)v63,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v57,
                (struct DXGCONTEXT **)P);
        v8 = v49;
        if ( v49 >= 0 )
          goto LABEL_40;
        if ( v49 != -1071775482 )
        {
          if ( v49 != -1071774910 )
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdError(v51);
            v54[3] = v8;
            v54[4] = v14;
            v54[5] = v7;
            WdLogEvent5_WdError(v54);
          }
          goto LABEL_40;
        }
        v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v51, v50, v52, v53);
        v48[3] = -1071775482LL;
      }
      else
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v44, v46, v47);
        v48[3] = v8;
      }
      v48[4] = v14;
      v48[5] = v7;
      WdLogEvent5_WdEvent(v48);
LABEL_40:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
      if ( v58 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v57);
      goto LABEL_42;
    }
LABEL_43:
    v55 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    *(_QWORD *)(v55 + 24) = 2100LL;
    WdLogEvent5_WdWarning(v55);
    LODWORD(v8) = -1073741801;
    goto LABEL_44;
  }
  LODWORD(v8) = -1073741811;
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
  WdLogEvent5_WdError(v9);
LABEL_49:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 3008);
  return (unsigned int)v8;
}
