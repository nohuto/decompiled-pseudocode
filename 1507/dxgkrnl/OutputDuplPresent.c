/*
 * XREFs of OutputDuplPresent @ 0x1C01563D4
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C01495F0 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C00209B4 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00209D4 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0020A80 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00698B8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C01548B4 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(
        struct _D3DKMT_OUTPUTDUPLPRESENT *a1,
        struct DXGPROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  DXGADAPTER ****v6; // rax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGDEVICE **v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v20; // rax
  unsigned int v21; // edi
  struct DXGCONTEXT **PoolWithTag; // rax
  __int64 v23; // rdi
  struct DXGCONTEXT **v24; // r11
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r10
  int v28; // r8d
  __int64 v29; // rcx
  struct DXGCONTEXT *v30; // rcx
  struct DXGCONTEXT *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  struct DXGCONTEXT **v43; // [rsp+30h] [rbp-59h] BYREF
  char v44; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-31h]
  _BYTE v46[24]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v47[16]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v48[16]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v49[6]; // [rsp+98h] [rbp+Fh] BYREF
  char v50; // [rsp+C8h] [rbp+3Fh]
  struct DXGADAPTER *v51; // [rsp+F0h] [rbp+67h] BYREF
  struct DXGCONTEXT *v52; // [rsp+100h] [rbp+77h] BYREF

  v51 = 0LL;
  if ( (a1->Flags.Value & 8) == 0
    || (v6 = (DXGADAPTER ****)DXGADAPTER_REFERENCE::operator&(&v51, (__int64)a2, a3, a4),
        v7 = OutputDuplPreIndirectPresent(a1, a2, v6),
        v7 >= 0) )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v47, a1->hContext, a2, &v52, 0);
    v12 = (struct DXGDEVICE **)v52;
    if ( !v52 )
    {
      v7 = -1073741811;
      v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      v13[3] = -1073741811LL;
      v13[4] = PsGetCurrentProcess(v14);
      v13[5] = a1->hContext;
      WdLogEvent5_WdWarning(v13);
LABEL_36:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v47);
      goto LABEL_37;
    }
    if ( !v51 )
      DXGADAPTER_REFERENCE::Assign(&v51, *(struct DXGADAPTER **)(*((_QWORD *)v52 + 2) + 18704LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v12[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      v7 = -1073741811;
      *(_QWORD *)(v20 + 24) = v12;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
LABEL_35:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
      goto LABEL_36;
    }
    v43 = 0LL;
    v21 = BroadcastContextCount + 1;
    v45 = 0;
    if ( v21 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v44;
    }
    else
    {
      v16 = v21;
      v15 = 0xFFFFFFFFFFFFFFFFuLL % v21;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 8 )
        goto LABEL_33;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v21, 0x4B677844u);
    }
    v43 = PoolWithTag;
    v45 = v21;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v21);
      *v43 = (struct DXGCONTEXT *)v12;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, a2);
      v23 = 0LL;
      if ( a1->BroadcastContextCount )
      {
        v24 = v43;
        v25 = 1;
        while ( 1 )
        {
          v26 = (a1->BroadcastContext[v23] >> 6) & 0xFFFFFF;
          if ( (unsigned int)v26 < *((_DWORD *)a2 + 58)
            && (v27 = *((_QWORD *)a2 + 27),
                v28 = *(_DWORD *)(v27 + 16LL * (unsigned int)v26 + 8),
                ((a1->BroadcastContext[v23] >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * (unsigned int)v26 + 8) & 0x30))
            && (v28 & 0x1000) == 0
            && (v28 & 0xF) != 0
            && (v29 = 2 * v26, (*(_BYTE *)(v27 + 8 * v29 + 8) & 0xF) == 7) )
          {
            v30 = *(struct DXGCONTEXT **)(v27 + 8 * v29);
          }
          else
          {
            v30 = 0LL;
          }
          v24[v25] = v30;
          v24 = v43;
          v31 = v43[v25];
          if ( !v31 || *((struct DXGDEVICE **)v31 + 2) != v12[2] )
            break;
          v23 = (unsigned int)(v23 + 1);
          ++v25;
          if ( (unsigned int)v23 >= a1->BroadcastContextCount )
            goto LABEL_26;
        }
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v38 = (unsigned int)v23;
        v37[3] = v12;
        v39 = a1->BroadcastContext[v23];
        v7 = -1073741811;
        v37[4] = v39;
        v37[5] = v38;
        v37[6] = -1073741811LL;
        WdLogEvent5_WdError(v37);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46);
      }
      else
      {
LABEL_26:
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v49,
          v43,
          v45);
        if ( v50 )
        {
          if ( v49[0] )
          {
            v40 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
            *(_QWORD *)(v40 + 24) = 2565LL;
            WdLogEvent5_WdWarning(v40);
            v7 = -1073741811;
          }
          else
          {
            v36 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
            *(_QWORD *)(v36 + 24) = 2560LL;
            WdLogEvent5_WdWarning(v36);
            v7 = -1073741801;
          }
        }
        else
        {
          v7 = OutputDuplPresentInternal(v51, (struct DXGCONTEXT *)v12, a1, v43);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v49);
      }
      goto LABEL_34;
    }
LABEL_33:
    v41 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v41 + 24) = 2511LL;
    WdLogEvent5_WdWarning(v41);
    v7 = -1073741801;
LABEL_34:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v43);
    goto LABEL_35;
  }
LABEL_37:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v51);
  return (unsigned int)v7;
}
