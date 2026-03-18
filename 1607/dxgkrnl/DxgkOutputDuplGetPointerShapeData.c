/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C017F090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbp
  ULONG64 v4; // r14
  ULONG64 v5; // rax
  PVOID v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v13; // r15
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[4]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (_BYTE *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 2065;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2065);
  v5 = v4;
  if ( v4 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v5;
  *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(v5 + 48);
  v6 = operator new(*(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18), 0x674D444Fu, PagedPool);
  v8 = v6;
  *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v6;
  if ( v6 )
  {
    v13 = *(char **)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v6;
    *v3 = 0;
    v14 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            *(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
            (__int64)(v3 + 16),
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v13;
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -1073741789 )
    {
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      *(_QWORD *)(v4 + 48) = *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    }
    if ( v14 >= 0 )
    {
      v15 = *(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      if ( (_DWORD)v15 )
      {
        if ( *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) < (unsigned int)v15 )
          v15 = *(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( (unsigned __int64)&v13[v15] > MmUserProbeAddress || &v13[v15] <= v13 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, v8, (unsigned int)v15);
      }
    }
    operator delete(v8);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v17, 2065);
    return (unsigned int)v14;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v9 + 24) = *(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    WdLogEvent5_WdLowResource(v9);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2065);
    return 3221225495LL;
  }
}
