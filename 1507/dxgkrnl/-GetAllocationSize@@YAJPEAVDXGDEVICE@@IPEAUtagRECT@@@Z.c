/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C015301C
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0158B18 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  __int64 v4; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rbx
  __int64 v9; // rax
  char *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rdx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v29; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v8 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 2379LL;
    WdLogEvent5_WdError(v9);
    return -1073741811LL;
  }
  v11 = (char *)Current + 192;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v12 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *((_DWORD *)v8 + 58)
    && (v13 = *((_QWORD *)v8 + 27),
        v14 = *(_DWORD *)(v13 + 16LL * (unsigned int)v12 + 8),
        (((unsigned int)v4 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x30))
    && (v14 & 0x1000) == 0
    && (v14 & 0xF) != 0
    && (v15 = 2 * v12, (*(_BYTE *)(v13 + 8 * v15 + 8) & 0xF) == 5) )
  {
    v16 = *(struct _EX_RUNDOWN_REF **)(v13 + 8 * v15);
  }
  else
  {
    v16 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v30, v16);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v30 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v4;
LABEL_16:
    WdLogEvent5_WdError(v19);
    v23 = -1073741823;
    goto LABEL_18;
  }
  v20 = *((_QWORD *)a1 + 2);
  v21 = *(_QWORD *)(v30[1].Count + 16);
  if ( *(_QWORD *)(v21 + 16) == *(_QWORD *)(v20 + 16) )
  {
    memset(&v29, 0, sizeof(v29));
    v29.hAllocation = *(HANDLE *)(v30[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v20 + 16) + 1984LL), &v29, v18) >= 0 )
    {
      Width = v29.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      v23 = 0;
      a3->bottom = v29.Height;
      goto LABEL_18;
    }
    v19 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v19 + 24) = v29.hAllocation;
    *(_QWORD *)(v19 + 32) = a1;
    goto LABEL_16;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v23 = -1073741811;
  v22[3] = a1;
  v22[4] = v30;
  v22[5] = -1073741811LL;
  WdLogEvent5_WdError(v22);
LABEL_18:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30, v24, v25, v26);
  return v23;
}
