/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0001A4C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0001AB8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006BC4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C006B51C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00730E0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C007A1E4 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I_N@Z @ 0x1C00899D4 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C009423C (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a3 > 15 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 144LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a3 <= 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 145LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v8 = a1[2];
  if ( (unsigned int)v8 >= a1[4] )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 163LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = *(unsigned int *)(*(_QWORD *)a1 + 16 * v8 + 8);
  if ( (v9 & 0xF) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v18 + 24) = 164LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = *(_QWORD *)a1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v12 = 2LL * a1[3];
  a1[2] = v11;
  a1[3] = *(_DWORD *)(v10 + 8 * v12);
  if ( v11 >= a1[4] )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v19 + 24) = 171LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a1[3] >= a1[4] )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v20 + 24) = 172LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v8) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)a1
                                                                                                + 16 * v8
                                                                                                + 8)) & 0xF;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 8) ^ (a4 << 6)) & 0xFC0;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 8) &= ~0x1000u;
  --a1[5];
  return (((((v13 >> 4) & 3) << 24) | v8 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 8) >> 6) & 0x3F;
}
