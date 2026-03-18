/*
 * XREFs of ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0006BC4
 * Callers:
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C005C670 (-Initialize@DXGKEYEDMUTEX@@QEAAJXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00949B8 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::AllocHandle(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rax

  if ( *(struct _KTHREAD **)(a1 + 136) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 661LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return HMGRTABLE::AllocHandle(a1 + 200, a2, a3);
}
