/*
 * XREFs of DxgkDestroyOutputDupl @ 0x1C0159C00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDupl(__int64 a1, int a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned int v10[2]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2062);
  if ( a2 )
  {
    if ( v5 <= MmUserProbeAddress )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v6 + 24) = 3157LL;
      WdLogEvent5_WdAssertion(v6);
    }
    *(_QWORD *)v3 = *(_QWORD *)v5;
    *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(v5 + 8);
  }
  else
  {
    if ( v5 >= MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    *(_QWORD *)v3 = *(_QWORD *)v5;
    *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(v5 + 8);
  }
  v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         *v3,
         HIDWORD(*(_QWORD *)v3),
         (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL,
         sub_1C01563F0);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v8, 2062);
  return v7;
}
