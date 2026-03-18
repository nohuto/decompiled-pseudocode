/*
 * XREFs of VidSchSetPriorityClassProcessX @ 0x1C00C2EE8
 * Callers:
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z @ 0x1C00DB488 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcessX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r15d
  int v7; // ebx
  __int64 i; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rax

  v4 = 0;
  v5 = a2;
  v7 = 0;
  for ( i = 120LL; ; i += 8LL )
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + i) )
    {
      v13 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + i);
      v14 = *(_QWORD *)(a1 + 72);
      if ( v14 )
        v14 = *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)v13 - 1) + 16);
      if ( !v14 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        *(_QWORD *)(v16 + 24) = 274LL;
        WdLogEvent5_WdAssertion(v16);
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v13 + 8) + 96LL))(v14, v5, 0LL);
      v4 = result;
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v7 >= 2 )
      return v4;
  }
  return result;
}
