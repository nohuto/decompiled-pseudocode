/*
 * XREFs of ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C007BB44
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z @ 0x1C0062F94 (-ReferenceAllocationForSubmission@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PrepareDmaBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_DMA_BUFFER *a3,
        unsigned int a4,
        unsigned int *a5,
        union _LARGE_INTEGER *a6)
{
  __int64 **v6; // rax
  __int64 *v8; // rax
  __int64 v9; // r10
  int v10; // ecx
  LONGLONG v11; // rcx
  unsigned int v12; // r11d
  __int64 v13; // r9
  struct VIDMM_ALLOC **v14; // r10
  __int64 i; // r9
  struct VIDMM_ALLOC *v16; // rbx
  __int64 v17; // rcx
  VIDMM_GLOBAL *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax

  v6 = (__int64 **)*((_QWORD *)a3 + 8);
  if ( v6 )
  {
    v8 = *v6;
    v9 = *v8;
    a2 = *(struct VIDMM_DEVICE **)(*v8 + 128);
    if ( (*((_DWORD *)a2 + 14) & 0x1000) != 0 )
      v10 = 0;
    else
      v10 = *((_DWORD *)a2 + 4) + 1;
    *a5 = v10;
    v11 = *(_QWORD *)(v9 + 136) + *((_QWORD *)a2 + 3);
  }
  else
  {
    v11 = *((_QWORD *)a3 + 11);
    *a5 = 0;
  }
  v12 = 0;
  v13 = *((_QWORD *)a3 + 14);
  v14 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 13);
  a6->QuadPart = v11;
  if ( !a4 )
    return 0LL;
  for ( i = v13 + 8; ; i += 24LL )
  {
    v16 = *v14;
    if ( !*v14 )
      goto LABEL_17;
    v17 = **(_QWORD **)v16;
    if ( (*(_DWORD *)(v17 + 76) & 0x100000) != 0 )
      break;
    v18 = (VIDMM_GLOBAL *)(unsigned int)(*(_DWORD *)(*(_QWORD *)(v17 + 472) + 4LL) - 2);
    if ( (unsigned int)v18 <= 1 || (*((_BYTE *)v16 + 28) & 3) != 2 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v18, a2, a3, i);
      *(_QWORD *)(v22 + 24) = v16;
      WdLogEvent5_WdAssertion(v22);
      return 3221225473LL;
    }
    VIDMM_GLOBAL::ReferenceAllocationForSubmission(v18, *v14, (*(_BYTE *)i & 1) == 0);
    v19 = *(_QWORD *)(**(_QWORD **)*v14 + 128LL);
    if ( (*(_DWORD *)(v19 + 56) & 0x1000) != 0 )
      v20 = 0;
    else
      v20 = *(_DWORD *)(v19 + 16) + 1;
    *(_DWORD *)i ^= (*(_DWORD *)i ^ (2 * v20)) & 0x3E;
    a2 = **(struct VIDMM_DEVICE ***)*v14;
    *(_QWORD *)(i + 8) = *((_QWORD *)a2 + 17) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
LABEL_17:
    ++v12;
    ++v14;
    if ( v12 >= a4 )
      return 0LL;
  }
  v23 = WdLogNewEntry5_WdError(v17, a2, a3);
  *(_QWORD *)(v23 + 24) = v16;
  WdLogEvent5_WdError(v23);
  return 3221225473LL;
}
