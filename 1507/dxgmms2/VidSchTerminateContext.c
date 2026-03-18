/*
 * XREFs of VidSchTerminateContext @ 0x1C002E1C0
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C00062E4 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateDevice @ 0x1C002E0F0 (VidSchTerminateDevice.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001880 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00034FC (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C000E074 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     Template_pqqqqqqqqppp @ 0x1C001BEDC (Template_pqqqqqqqqppp.c)
 *     VidSchFlushContext @ 0x1C002F270 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // r8d
  __int64 v8; // rax
  _OWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r11d
  int v13; // edi
  char v14; // al
  __int64 v15; // rax
  bool v16; // r8
  __int128 v17; // [rsp+88h] [rbp+37h]
  __int128 v18; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 216, 1, 0);
    VidSchFlushContext(a1);
    v6 = *((_DWORD *)a1 + 28);
    if ( (v6 & 1) != 0 && (v9 = (_OWORD *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v5 + 8), v9);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( !bTracingEnabled )
        goto LABEL_5;
      v10 = *((_QWORD *)a1 + 13);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( !v11 )
          v11 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v11 = 0LL;
      }
      v12 = *((_DWORD *)a1 + 221);
      v13 = *((_DWORD *)a1 + 220);
      v17 = *(_OWORD *)((char *)a1 + 908);
      v18 = *(_OWORD *)((char *)a1 + 924);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
        goto LABEL_5;
      v14 = 2 * ((*(_DWORD *)(v10 + 48) & 0x10) != 0);
    }
    else
    {
      if ( (v6 & 4) == 0 || !bTracingEnabled )
        goto LABEL_5;
      v15 = *((_QWORD *)a1 + 13);
      v16 = (v6 & 0x40) != 0;
      if ( v15 )
      {
        v11 = *(_QWORD *)(v15 + 8);
        if ( !v11 )
          v11 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v11 = 0LL;
      }
      v12 = *((_DWORD *)a1 + 221);
      v13 = *((_DWORD *)a1 + 220);
      v17 = *(_OWORD *)((char *)a1 + 908);
      v18 = *(_OWORD *)((char *)a1 + 924);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
        goto LABEL_5;
      v14 = 2 * (((*(_DWORD *)(v15 + 48) & 0x10) != 0) | (2 * v16));
    }
    Template_pqqqqqqqqppp(
      DWORD1(v17),
      &EventDestroyContext,
      v17,
      v11,
      v13,
      v12,
      v17,
      SBYTE4(v17),
      SBYTE8(v17),
      SBYTE12(v17),
      v18,
      v14 | 1,
      a1);
LABEL_5:
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v8);
  return 3221225485LL;
}
