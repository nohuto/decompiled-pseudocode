/*
 * XREFs of OutputDuplPresent @ 0x1C017F6DC
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C0173050 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C00273C8 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00273E8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0027494 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00A45C8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C017D880 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C017D9B4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct DXGADAPTER **v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGDEVICE **v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v18; // rax
  unsigned int v19; // edi
  struct DXGCONTEXT **PoolWithTag; // rax
  __int64 v21; // rdi
  struct DXGCONTEXT **v22; // r11
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // r10
  int v26; // r8d
  __int64 v27; // rcx
  struct DXGCONTEXT *v28; // rcx
  struct DXGCONTEXT *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  struct DXGADAPTER *v41; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-61h] BYREF
  struct DXGCONTEXT **v43; // [rsp+40h] [rbp-59h] BYREF
  char v44; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-31h]
  _BYTE v46[16]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v47[16]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v48[24]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v49[6]; // [rsp+A8h] [rbp+Fh] BYREF
  char v50; // [rsp+D8h] [rbp+3Fh]
  struct DXGCONTEXT *v51; // [rsp+100h] [rbp+67h] BYREF

  v41 = 0LL;
  if ( (a1->Flags.Value & 8) == 0
    || (v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v41),
        v5 = OutputDuplPreIndirectPresent(a1, a2, v4, &v42),
        v5 >= 0) )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v47, a1->hContext, a2, &v51, 0);
    v10 = (struct DXGDEVICE **)v51;
    if ( !v51 )
    {
      v5 = -1073741811;
      v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
      v11[3] = -1073741811LL;
      v11[4] = PsGetCurrentProcess(v12);
      v11[5] = a1->hContext;
      WdLogEvent5_WdWarning(v11);
LABEL_37:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v47);
      goto LABEL_38;
    }
    if ( !v41 )
      DXGADAPTER_REFERENCE::Assign(&v41, *(struct DXGADAPTER **)(*((_QWORD *)v51 + 2) + 2856LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v10[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v5 = -1073741811;
      *(_QWORD *)(v18 + 24) = v10;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
LABEL_36:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
      goto LABEL_37;
    }
    v43 = 0LL;
    v19 = BroadcastContextCount + 1;
    v45 = 0;
    if ( v19 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v44;
    }
    else
    {
      v14 = v19;
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v19;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
        goto LABEL_34;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v19, 0x4B677844u);
    }
    v43 = PoolWithTag;
    v45 = v19;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v19);
      if ( v43 )
      {
        *v43 = (struct DXGCONTEXT *)v10;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48, (struct _KTHREAD **)a2);
        v21 = 0LL;
        if ( a1->BroadcastContextCount )
        {
          v22 = v43;
          v23 = 1;
          while ( 1 )
          {
            v24 = (a1->BroadcastContext[v21] >> 6) & 0xFFFFFF;
            if ( (unsigned int)v24 < *((_DWORD *)a2 + 56)
              && (v25 = *((_QWORD *)a2 + 26),
                  v26 = *(_DWORD *)(v25 + 16LL * (unsigned int)v24 + 8),
                  ((a1->BroadcastContext[v21] >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * (unsigned int)v24 + 8) & 0x30))
              && (v26 & 0x1000) == 0
              && (v26 & 0xF) != 0
              && (v27 = 2 * v24, (*(_BYTE *)(v25 + 8 * v27 + 8) & 0xF) == 7) )
            {
              v28 = *(struct DXGCONTEXT **)(v25 + 8 * v27);
            }
            else
            {
              v28 = 0LL;
            }
            v22[v23] = v28;
            v22 = v43;
            v29 = v43[v23];
            if ( !v29 || *((struct DXGDEVICE **)v29 + 2) != v10[2] )
              break;
            v21 = (unsigned int)(v21 + 1);
            ++v23;
            if ( (unsigned int)v21 >= a1->BroadcastContextCount )
              goto LABEL_27;
          }
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v36 = (unsigned int)v21;
          v35[3] = v10;
          v37 = a1->BroadcastContext[v21];
          v5 = -1073741811;
          v35[4] = v37;
          v35[5] = v36;
          v35[6] = -1073741811LL;
          WdLogEvent5_WdError(v35);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
        }
        else
        {
LABEL_27:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v49,
            v43,
            v45);
          if ( v50 )
          {
            if ( v49[0] )
            {
              v38 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
              *(_QWORD *)(v38 + 24) = 2636LL;
              WdLogEvent5_WdWarning(v38);
              v5 = -1073741811;
            }
            else
            {
              v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
              *(_QWORD *)(v34 + 24) = 2631LL;
              WdLogEvent5_WdWarning(v34);
              v5 = -1073741801;
            }
          }
          else
          {
            v5 = OutputDuplPresentInternal(v41, (struct DXGCONTEXT *)v10, a1, v43);
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v49);
        }
        goto LABEL_35;
      }
    }
LABEL_34:
    v39 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v39 + 24) = 2582LL;
    WdLogEvent5_WdWarning(v39);
    v5 = -1073741801;
LABEL_35:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v43);
    goto LABEL_36;
  }
LABEL_38:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v41);
  return (unsigned int)v5;
}
