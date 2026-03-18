/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0002D38 (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0002DD8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00048F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0073374 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C0078C10 (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C007FD00 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0082060 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008B510 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C014CBF8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C014F5B0 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00D3F20 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r15d
  int v6; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r14d
  int v22; // r14d
  int v23; // eax

  v5 = a4;
  v6 = a3;
  if ( (int)a3 > 15 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 144LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v6 <= 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 145LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1, a2, a3, a4) )
    return 0LL;
  v12 = a1[2];
  if ( (unsigned int)v12 >= a1[4] )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 163LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(unsigned int *)(*(_QWORD *)a1 + 16 * v12 + 8);
  if ( (v14 & 0xF) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 164LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *(_QWORD *)a1;
  v17 = *(unsigned int *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v18 = 2LL * a1[3];
  a1[2] = v17;
  a1[3] = *(_DWORD *)(v16 + 8 * v18);
  if ( (unsigned int)v17 >= a1[4] )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v17, a3, a4);
    *(_QWORD *)(v19 + 24) = 171LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a1[3] >= a1[4] )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, v17, a3, a4);
    *(_QWORD *)(v20 + 24) = 172LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v12) = a2;
  v22 = (v21 >> 4) & 3;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)a1
                                                                                                 + 16 * v12
                                                                                                 + 8)) & 0xF;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^ (v5 << 6)) & 0xFC0;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) ^ ((a5 != 0) << 12)) & 0x1000;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) &= ~0x2000u;
  LOBYTE(v23) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
  if ( v23 )
  {
    if ( (unsigned int)(v6 - 4) <= 1 )
      *(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) |= 0x2000u;
  }
  --a1[5];
  return (((v22 << 24) | v12 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) >> 6) & 0x3F;
}
