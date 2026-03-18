/*
 * XREFs of DxgkDestroyOutputDupl @ 0x1C0155920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01552E8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDupl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbp
  int v5; // edi
  ULONG64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r8
  unsigned int v11[2]; // [rsp+60h] [rbp+0h] BYREF

  v4 = (_QWORD *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a2;
  v6 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2062);
  if ( v5 )
  {
    if ( v6 <= MmUserProbeAddress )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v7 + 24) = 3182LL;
      WdLogEvent5_WdAssertion(v7);
    }
    *v4 = *(_QWORD *)v6;
    *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(v6 + 8);
  }
  else
  {
    if ( v6 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *v4 = *(_QWORD *)v6;
    *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(v6 + 8);
  }
  v8 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         *(unsigned int *)v4,
         HIDWORD(*v4),
         (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL,
         lambda_78f17609e85a038b4e728ba8797581f2_::_helper_func_cdecl_);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v9, 2062);
  return v8;
}
