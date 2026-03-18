/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C006E2A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C000E134 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C0010F34 (Template_qqqxx.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall DeferredSetVprCallback(char *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  VIDMM_GLOBAL *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qqqxx(
      (__int64)a1,
      a2,
      a3,
      *((_DWORD *)a1 + 16),
      *((_DWORD *)a1 + 17),
      *((_DWORD *)a1 + 18),
      *((_QWORD *)a1 + 12),
      *((_QWORD *)a1 + 13));
  v4 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
         *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) + 1984LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 64));
  v9 = v4;
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = v9;
    *(_QWORD *)(v10 + 32) = 68LL;
    WdLogEvent5_WdAssertion(v10);
  }
  memset(v19, 0, 0x50uLL);
  v11 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 4);
  v19[6] = *((_QWORD *)a1 + 6);
  v19[5] = *((_QWORD *)a1 + 5);
  v19[7] = *((_QWORD *)a1 + 7);
  LODWORD(v19[0]) = 122;
  v12 = VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v11, (struct _VIDMM_SYSTEM_COMMAND *)v19, 0);
  v17 = v12;
  if ( v12 < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)(v18 + 32) = 82LL;
    WdLogEvent5_WdAssertion(v18);
  }
}
