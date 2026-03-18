/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C017EED0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbp
  _OWORD *v4; // rdi
  _OWORD *v5; // rax
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // r8
  const void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v13[48]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (_BYTE *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_OWORD *)a1;
  *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 2064;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2064);
  v5 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v5;
  *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v5[1];
  v6 = *(char **)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  *(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  *v3 = 0;
  v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         *(unsigned int *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
         *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
         (__int64)(v3 + 8),
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_);
  v9 = *(const void **)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v6;
  v10 = v7 + 0x80000000;
  if ( (int)v10 < 0 || v7 == -1073741789 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    *v4 = *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v4[1] = *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  }
  if ( v7 >= 0 )
  {
    v11 = *(unsigned int *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( (_DWORD)v11 )
    {
      if ( *(_DWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) < (unsigned int)v11 )
        v11 = *(unsigned int *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      if ( (unsigned __int64)&v6[v11] > MmUserProbeAddress || &v6[v11] <= v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v6, v9, (unsigned int)v11);
    }
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v8, 2064);
  return (unsigned int)v7;
}
