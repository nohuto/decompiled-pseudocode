/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C01559B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_PRESENT *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 **PoolWithTag; // rax
  ULONG v27; // edi
  unsigned int v28; // r12d
  D3DKMT_HANDLE v29; // r15d
  unsigned int v30; // ecx
  __int64 v31; // r8
  int v32; // edx
  __int64 *v33; // r15
  __int64 **v34; // rdx
  __int64 *v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 **P; // [rsp+30h] [rbp-D0h]
  _BYTE v53[32]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+58h] [rbp-A8h]
  _BYTE v55[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v56[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v57[16]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v58[7]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v59[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct DXGCONTEXT *v61; // [rsp+180h] [rbp+80h] BYREF

  v3 = a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3008);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57, a1->hDevice, ProcessDxgProcess, &v61, 0);
    v16 = (__int64 *)v61;
    if ( !v61 )
    {
      LODWORD(v10) = -1073741811;
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v17[3] = -1073741811LL;
      v17[4] = PsGetCurrentProcess(v18);
      v17[5] = a1->hDevice;
      WdLogEvent5_WdError(v17);
LABEL_48:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57);
      goto LABEL_49;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56,
      *((struct DXGDEVICE **)v61 + 2));
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v24 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v24 + 24) = v16;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
LABEL_47:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56);
      goto LABEL_48;
    }
    v25 = BroadcastContextCount + 1;
    P = 0LL;
    v54 = 0;
    if ( v25 <= 4 )
    {
      PoolWithTag = (__int64 **)v53;
    }
    else
    {
      v20 = v25;
      v19 = 0xFFFFFFFFFFFFFFFFuLL % v25;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        goto LABEL_43;
      PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 8LL * v25, 0x4B677844u);
    }
    P = PoolWithTag;
    v54 = v25;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v25);
      *P = v16;
      v27 = 0;
      if ( a1->BroadcastContextCount )
      {
        v28 = 1;
        while ( 1 )
        {
          v29 = a1->BroadcastContext[v27];
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v9 + 184));
          v30 = (v29 >> 6) & 0xFFFFFF;
          if ( v30 < *((_DWORD *)v9 + 56)
            && (v31 = *((_QWORD *)v9 + 26),
                v32 = *(_DWORD *)(v31 + 16LL * v30 + 8),
                ((v29 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0x30))
            && (v32 & 0x1000) == 0
            && (v32 & 0xF) != 0
            && (*(_BYTE *)(v31 + 16LL * v30 + 8) & 0xF) == 7 )
          {
            v33 = *(__int64 **)(v31 + 16LL * v30);
          }
          else
          {
            v33 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)v9 + 184, 0LL);
          KeLeaveCriticalRegion();
          P[v28] = v33;
          v34 = P;
          v35 = P[v28];
          if ( !v35 || v35[2] != v16[2] )
            break;
          ++v27;
          ++v28;
          if ( v27 >= a1->BroadcastContextCount )
          {
            v3 = a2;
            goto LABEL_30;
          }
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v37 = v27;
        LODWORD(v10) = -1073741811;
        v36[3] = v16;
        v36[4] = a1->BroadcastContext[v37];
        v36[5] = v37;
        v36[6] = -1073741811LL;
        WdLogEvent5_WdError(v36);
        goto LABEL_44;
      }
      v34 = P;
LABEL_30:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v58,
        v34,
        v54);
      if ( !v58[0] )
      {
        v42 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
        *(_QWORD *)(v42 + 24) = 2146LL;
        WdLogEvent5_WdWarning(v42);
        LODWORD(v10) = -1073741801;
LABEL_42:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v58);
LABEL_44:
        if ( P != (__int64 **)v53 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_47;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v55,
        *(struct DXGADAPTER **)(*(_QWORD *)(v16[2] + 16) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, v16[2], 2, v43, 0);
      v44 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v59);
      v10 = v44;
      if ( v44 >= 0 )
      {
        v47 = DXGCONTEXT::PresentFromCdd(
                (DXGCONTEXT *)v16,
                a1,
                v3,
                (struct COREDEVICEACCESS *)v59,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v55,
                (struct DXGCONTEXT **)P);
        v10 = v47;
        if ( v47 >= 0 )
          goto LABEL_40;
        if ( v47 != -1071775482 )
        {
          if ( v47 != -1071774910 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v48);
            v49[3] = v10;
            v49[4] = v16;
            v49[5] = v9;
            WdLogEvent5_WdError(v49);
          }
          goto LABEL_40;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v48);
        v46[3] = -1071775482LL;
      }
      else
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v45);
        v46[3] = v10;
      }
      v46[4] = v16;
      v46[5] = v9;
      WdLogEvent5_WdEvent(v46);
LABEL_40:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
      if ( v55[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
      goto LABEL_42;
    }
LABEL_43:
    v50 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v50 + 24) = 2107LL;
    WdLogEvent5_WdWarning(v50);
    LODWORD(v10) = -1073741801;
    goto LABEL_44;
  }
  LODWORD(v10) = -1073741811;
  v11 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v12);
  WdLogEvent5_WdError(v11);
LABEL_49:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 3008);
  return (unsigned int)v10;
}
