/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0136560
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
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
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rbx
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 **PoolWithTag; // rax
  ULONG v23; // edi
  unsigned int v24; // r12d
  D3DKMT_HANDLE v25; // r15d
  unsigned int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  __int64 *v29; // r15
  __int64 **v30; // rdx
  __int64 *v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 **P; // [rsp+30h] [rbp-D0h]
  _BYTE v55[32]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-A8h]
  _BYTE v57[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v58[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v59[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v60[80]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v61[14]; // [rsp+E0h] [rbp-20h] BYREF
  struct DXGCONTEXT *v63; // [rsp+170h] [rbp+70h] BYREF

  v3 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3008);
  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v58, a1->hDevice, Current, &v63, 0);
    v13 = (__int64 *)v63;
    if ( !v63 )
    {
      LODWORD(v8) = -1073741811;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[3] = -1073741811LL;
      v14[4] = PsGetCurrentProcess();
      v14[5] = a1->hDevice;
      WdLogEvent5_WdError(v14);
LABEL_48:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v58);
      goto LABEL_49;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59,
      *((struct DXGDEVICE **)v63 + 2));
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v20 + 24) = v13;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
LABEL_47:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v59);
      goto LABEL_48;
    }
    v21 = BroadcastContextCount + 1;
    P = 0LL;
    v56 = 0;
    if ( v21 <= 4 )
    {
      PoolWithTag = (__int64 **)v55;
    }
    else
    {
      v16 = v21;
      v15 = 0xFFFFFFFFFFFFFFFFuLL % v21;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 8 )
        goto LABEL_43;
      PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 8LL * v21, 0x4B677844u);
    }
    P = PoolWithTag;
    v56 = v21;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v21);
      *P = v13;
      v23 = 0;
      if ( a1->BroadcastContextCount )
      {
        v24 = 1;
        while ( 1 )
        {
          v25 = a1->BroadcastContext[v23];
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v7 + 192));
          v26 = (v25 >> 6) & 0xFFFFFF;
          if ( v26 < *((_DWORD *)v7 + 58)
            && (v27 = *((_QWORD *)v7 + 27),
                v28 = *(_DWORD *)(v27 + 16LL * v26 + 8),
                ((v25 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x30))
            && (v28 & 0x1000) == 0
            && (v28 & 0xF) != 0
            && (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0xF) == 7 )
          {
            v29 = *(__int64 **)(v27 + 16LL * v26);
          }
          else
          {
            v29 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)v7 + 192, 0LL);
          KeLeaveCriticalRegion();
          P[v24] = v29;
          v30 = P;
          v31 = P[v24];
          if ( !v31 || v31[2] != v13[2] )
            break;
          ++v23;
          ++v24;
          if ( v23 >= a1->BroadcastContextCount )
          {
            v3 = a2;
            goto LABEL_30;
          }
        }
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v33 = v23;
        LODWORD(v8) = -1073741811;
        v32[3] = v13;
        v32[4] = a1->BroadcastContext[v33];
        v32[5] = v33;
        v32[6] = -1073741811LL;
        WdLogEvent5_WdError(v32);
        goto LABEL_44;
      }
      v30 = P;
LABEL_30:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v61,
        v30,
        v56);
      if ( !v61[0] )
      {
        v38 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
        *(_QWORD *)(v38 + 24) = 2155LL;
        WdLogEvent5_WdWarning(v38);
        LODWORD(v8) = -1073741801;
LABEL_42:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v61);
LABEL_44:
        if ( P != (__int64 **)v55 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_47;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v57,
        *(struct DXGADAPTER **)(*(_QWORD *)(v13[2] + 16) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, v13[2], 2, v39, 0);
      v40 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v60);
      v8 = v40;
      if ( v40 >= 0 )
      {
        v46 = DXGCONTEXT::PresentFromCdd(
                (DXGCONTEXT *)v13,
                a1,
                v3,
                (struct COREDEVICEACCESS *)v60,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v57,
                (struct DXGCONTEXT **)P);
        v8 = v46;
        if ( v46 >= 0 )
          goto LABEL_40;
        if ( v46 != -1071775482 )
        {
          if ( v46 != -1071774910 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v48);
            v51[3] = v8;
            v51[4] = v13;
            v51[5] = v7;
            WdLogEvent5_WdError(v51);
          }
          goto LABEL_40;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
        v45[3] = -1071775482LL;
      }
      else
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
        v45[3] = v8;
      }
      v45[4] = v13;
      v45[5] = v7;
      WdLogEvent5_WdEvent(v45);
LABEL_40:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
      if ( v57[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
      goto LABEL_42;
    }
LABEL_43:
    v52 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v52 + 24) = 2116LL;
    WdLogEvent5_WdWarning(v52);
    LODWORD(v8) = -1073741801;
    goto LABEL_44;
  }
  LODWORD(v8) = -1073741811;
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  *(_QWORD *)(v9 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v9);
LABEL_49:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 3008);
  return (unsigned int)v8;
}
