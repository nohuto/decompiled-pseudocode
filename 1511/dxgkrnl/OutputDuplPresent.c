/*
 * XREFs of OutputDuplPresent @ 0x1C015A6B4
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1C014D270 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00208C8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0020974 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C01589B8 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0158AF0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  DXGADAPTER ****v5; // rax
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGDEVICE **v11; // rbx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // r12d
  struct DXGCONTEXT **PoolWithTag; // rax
  ULONG v23; // edi
  D3DKMT_HANDLE v24; // r15d
  unsigned int v25; // ecx
  __int64 v26; // r8
  int v27; // edx
  struct DXGCONTEXT *v28; // r15
  struct DXGCONTEXT **v29; // rdx
  struct DXGCONTEXT *v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  struct DXGCONTEXT **P; // [rsp+30h] [rbp-69h]
  _BYTE v42[32]; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-41h]
  _QWORD v44[2]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v45[16]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v46[6]; // [rsp+80h] [rbp-19h] BYREF
  char v47; // [rsp+B0h] [rbp+17h]
  DXGADAPTER *v48; // [rsp+100h] [rbp+67h] BYREF
  struct DXGCONTEXT *v49; // [rsp+110h] [rbp+77h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v48 = 0LL;
  if ( (*(_BYTE *)&Value & 8) == 0
    || (v5 = (DXGADAPTER ****)DXGADAPTER_REFERENCE::operator&(&v48),
        v6 = OutputDuplPreIndirectPresent(a1, a2, v5),
        v6 >= 0) )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, a1->hContext, a2, &v49, 0);
    v11 = (struct DXGDEVICE **)v49;
    if ( !v49 )
    {
      v6 = -1073741811;
      v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
      v12[3] = -1073741811LL;
      v12[4] = PsGetCurrentProcess(v13);
      v12[5] = a1->hContext;
      WdLogEvent5_WdWarning(v12);
LABEL_40:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
      goto LABEL_41;
    }
    if ( !v48 )
      DXGADAPTER_REFERENCE::Assign(&v48, *(struct DXGADAPTER **)(*((_QWORD *)v49 + 2) + 2832LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v11[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v6 = -1073741811;
      *(_QWORD *)(v19 + 24) = v11;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v19);
LABEL_38:
      if ( v44[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
      goto LABEL_40;
    }
    v20 = BroadcastContextCount + 1;
    P = 0LL;
    v43 = 0;
    v21 = 1;
    if ( v20 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)v42;
    }
    else
    {
      v15 = v20;
      v14 = 0xFFFFFFFFFFFFFFFFuLL % v20;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 8 )
        goto LABEL_34;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v20, 0x4B677844u);
    }
    P = PoolWithTag;
    v43 = v20;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v20);
      *P = (struct DXGCONTEXT *)v11;
      v23 = 0;
      if ( a1->BroadcastContextCount )
      {
        while ( 1 )
        {
          v24 = a1->BroadcastContext[v23];
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 192));
          v25 = (v24 >> 6) & 0xFFFFFF;
          if ( v25 < *((_DWORD *)a2 + 58)
            && (v26 = *((_QWORD *)a2 + 27),
                v27 = *(_DWORD *)(v26 + 16LL * v25 + 8),
                ((v24 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x30))
            && (v27 & 0x1000) == 0
            && (v27 & 0xF) != 0
            && (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0xF) == 7 )
          {
            v28 = *(struct DXGCONTEXT **)(v26 + 16LL * v25);
          }
          else
          {
            v28 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)a2 + 192, 0LL);
          KeLeaveCriticalRegion();
          P[v21] = v28;
          v29 = P;
          v30 = P[v21];
          if ( !v30 || *((struct DXGDEVICE **)v30 + 2) != v11[2] )
            break;
          ++v23;
          ++v21;
          if ( v23 >= a1->BroadcastContextCount )
            goto LABEL_28;
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v32 = v23;
        v6 = -1073741811;
        v31[3] = v11;
        v31[4] = a1->BroadcastContext[v32];
        v31[5] = v32;
        v31[6] = -1073741811LL;
        WdLogEvent5_WdError(v31);
      }
      else
      {
        v29 = P;
LABEL_28:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v46,
          v29,
          v43);
        if ( v47 )
        {
          if ( v46[0] )
          {
            v38 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
            *(_QWORD *)(v38 + 24) = 2549LL;
            WdLogEvent5_WdWarning(v38);
            v6 = -1073741811;
          }
          else
          {
            v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
            *(_QWORD *)(v37 + 24) = 2544LL;
            WdLogEvent5_WdWarning(v37);
            v6 = -1073741801;
          }
        }
        else
        {
          v6 = OutputDuplPresentInternal(v48, (struct DXGCONTEXT *)v11, a1, P);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v46);
      }
      goto LABEL_35;
    }
LABEL_34:
    v39 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v39 + 24) = 2503LL;
    WdLogEvent5_WdWarning(v39);
    v6 = -1073741801;
LABEL_35:
    if ( P != (struct DXGCONTEXT **)v42 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_38;
  }
LABEL_41:
  if ( v48 )
    DXGADAPTER::ReleaseReference(v48);
  return (unsigned int)v6;
}
