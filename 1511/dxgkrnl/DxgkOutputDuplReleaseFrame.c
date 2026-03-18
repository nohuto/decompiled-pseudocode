/*
 * XREFs of DxgkOutputDuplReleaseFrame @ 0x1C015A320
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplReleaseFrame(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v5; // rax
  ULONG64 v6; // rcx
  int v7; // ebx
  _DWORD *v8; // r8
  unsigned int v10[2]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2072);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_QWORD *)v3 = *(_QWORD *)v5;
  *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_DWORD *)(v5 + 8);
  v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         *v3,
         *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
         (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))OUTPUTDUPL_MGR::ReleaseFrame);
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(a1 + 8);
    v6 = MmUserProbeAddress;
    if ( a1 + 8 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v6, &EventProfilerExit, (__int64)v8, 2072);
  return (unsigned int)v7;
}
