/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C015A0B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  ULONG64 v4; // r14
  ULONG64 v5; // rax
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v16; // r15
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+60h] [rbp+0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 2065;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2065);
  v5 = v4;
  if ( v4 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v5;
  *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(v5 + 48);
  v6 = operator new[](
         *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
         0x674D444Fu,
         PagedPool);
  v11 = v6;
  *v3 = v6;
  if ( v6 )
  {
    v16 = *(char **)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v6;
    v17 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            *(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            *(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
            (__int64)(v3 + 2),
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))OUTPUTDUPL_MGR::GetPointerShapeData);
    *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v16;
    if ( (int)(v17 + 0x80000000) < 0 || v17 == -1073741789 )
    {
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      *(_QWORD *)(v4 + 48) = *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    }
    if ( v17 >= 0 )
    {
      v18 = *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      if ( (_DWORD)v18 )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) < (unsigned int)v18 )
          v18 = *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( (unsigned __int64)&v16[v18] > MmUserProbeAddress || &v16[v18] <= v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v11, (unsigned int)v18);
      }
    }
    operator delete(v11);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2065);
    return (unsigned int)v17;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    WdLogEvent5_WdLowResource(v12);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v13, &EventProfilerExit, v14, 2065);
    return 3221225495LL;
  }
}
