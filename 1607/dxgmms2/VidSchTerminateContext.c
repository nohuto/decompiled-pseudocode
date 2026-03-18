/*
 * XREFs of VidSchTerminateContext @ 0x1C00410C0
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C000E6D8 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001D18 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C001D1EC (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     Template_pqqqqqqqqppp @ 0x1C0026054 (Template_pqqqqqqqqppp.c)
 *     VidSchFlushContext @ 0x1C00424F0 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // r8d
  __int64 v6; // rax
  void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // r11d
  int v11; // ebx
  char v12; // al
  __int64 v13; // rax
  bool v14; // r8
  __int128 v15; // [rsp+80h] [rbp+27h]
  __int128 v16; // [rsp+90h] [rbp+37h]

  if ( a1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2672), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 224, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2672));
    VidSchFlushContext(a1);
    v4 = *((_DWORD *)a1 + 28);
    if ( (v4 & 1) != 0 && (v7 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v3 + 8), v7);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( !bTracingEnabled )
        goto LABEL_4;
      v8 = *((_QWORD *)a1 + 13);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = *((_DWORD *)a1 + 229);
      v11 = *((_DWORD *)a1 + 228);
      v15 = *(_OWORD *)((char *)a1 + 940);
      v16 = *(_OWORD *)((char *)a1 + 956);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v12 = 2 * ((*(_DWORD *)(v8 + 48) & 0x10) != 0);
    }
    else
    {
      if ( (v4 & 4) == 0 || !bTracingEnabled )
        goto LABEL_4;
      v13 = *((_QWORD *)a1 + 13);
      v14 = (v4 & 0x40) != 0;
      if ( v13 )
      {
        v9 = *(_QWORD *)(v13 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = *((_DWORD *)a1 + 229);
      v11 = *((_DWORD *)a1 + 228);
      v15 = *(_OWORD *)((char *)a1 + 940);
      v16 = *(_OWORD *)((char *)a1 + 956);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v12 = 2 * (((*(_DWORD *)(v13 + 48) & 0x10) != 0) | (2 * v14));
    }
    Template_pqqqqqqqqppp(
      DWORD1(v15),
      &EventDestroyContext,
      v15,
      v9,
      v11,
      v10,
      v15,
      SBYTE4(v15),
      SBYTE8(v15),
      SBYTE12(v15),
      v16,
      v12 | 1,
      a1);
LABEL_4:
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v6 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v6);
  return 3221225485LL;
}
