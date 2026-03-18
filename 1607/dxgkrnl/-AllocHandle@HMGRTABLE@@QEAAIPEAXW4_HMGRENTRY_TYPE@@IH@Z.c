/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00096C4 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00097B4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0009C0C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C009B870 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009CDF8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C009FCAC (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00CD300 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C01763A8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0177C70 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 * Callees:
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00E3228 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // edx

  if ( a3 > 15 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 144LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = 0;
  if ( a3 <= 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 145LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v13 = a1[2];
  if ( (unsigned int)v13 >= a1[4] )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 163LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(unsigned int *)(*(_QWORD *)a1 + 16 * v13 + 8);
  if ( (v15 & 0xF) != 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 164LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *(_QWORD *)a1;
  v18 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v19 = 2LL * a1[3];
  a1[2] = v18;
  a1[3] = *(_DWORD *)(v17 + 8 * v19);
  if ( v18 >= a1[4] )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v20 + 24) = 171LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a1[3] >= a1[4] )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v21 + 24) = 172LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v13) = a2;
  v23 = (v22 >> 4) & 3;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)a1
                                                                                                 + 16 * v13
                                                                                                 + 8)) & 0xF;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) ^ (a4 << 6)) & 0xFC0;
  LOBYTE(v10) = a5 != 0;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) ^ (v10 << 12)) & 0x1000;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) &= ~0x2000u;
  if ( (unsigned int)(a3 - 4) <= 1 )
    *(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) |= 0x2000u;
  --a1[5];
  return (((v23 << 24) | v13 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v13 + 8) >> 6) & 0x3F;
}
