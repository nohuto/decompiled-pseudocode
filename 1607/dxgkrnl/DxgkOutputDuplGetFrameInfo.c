/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x1C017ED40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v4; // rdi
  ULONG64 v5; // rax
  ULONG64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  unsigned int v10[4]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2063);
  v5 = v4;
  if ( v4 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)v3 = *(_OWORD *)v5;
  *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v5 + 48);
  v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         *v3,
         *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
         (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_);
  if ( v7 >= 0 )
  {
    v6 = MmUserProbeAddress;
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)v4 = *(_OWORD *)v3;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v8, 2063);
  return (unsigned int)v7;
}
