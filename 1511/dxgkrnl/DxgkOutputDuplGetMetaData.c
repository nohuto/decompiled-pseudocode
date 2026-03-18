/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C0159EF0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  _OWORD *v4; // rax
  char *v5; // rsi
  int v6; // ebx
  __int64 v7; // r8
  const void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v12[48]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (_OWORD *)a1;
  *(_DWORD *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) = 2064;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2064);
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v4;
  *(_OWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v4[1];
  v5 = *(char **)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
         *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
         ((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 8,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))OUTPUTDUPL_MGR::GetMetaData);
  v8 = *(const void **)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v5;
  v9 = v6 + 0x80000000;
  if ( (int)v9 < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v3[1] = *(_OWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  }
  if ( v6 >= 0 )
  {
    v10 = *(unsigned int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( (_DWORD)v10 )
    {
      if ( *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) < (unsigned int)v10 )
        v10 = *(unsigned int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      if ( (unsigned __int64)&v5[v10] > MmUserProbeAddress || &v5[v10] <= v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v8, (unsigned int)v10);
    }
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v7, 2064);
  return (unsigned int)v6;
}
