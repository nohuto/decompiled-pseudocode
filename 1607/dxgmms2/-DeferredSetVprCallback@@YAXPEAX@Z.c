/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C0097C70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001D264 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C0020194 (Template_qqqxx.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0098518 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 */

void __fastcall DeferredSetVprCallback(char *a1)
{
  const struct _DXGKARG_SETVIDEOPROTECTEDREGION *v1; // rbx
  bool v3; // si
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  _QWORD *v15; // rax
  _QWORD v16[12]; // [rsp+40h] [rbp-68h] BYREF

  v1 = (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 48);
  v3 = VIDMM_SEGMENT::CheckFreeVPRReserve(
         *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 5) + 16LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)a1 + 1);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qqqxx(
      *((unsigned int *)a1 + 14),
      (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
      v4,
      v1->PhysicalAdapterIndex,
      *((_DWORD *)a1 + 13),
      *((_DWORD *)a1 + 14),
      *((_QWORD *)a1 + 10),
      *((_QWORD *)a1 + 11));
  v5 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
         *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) + 2136LL),
         v1);
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = v8;
    *(_QWORD *)(v9 + 32) = 70LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v3 )
  {
    memset(v16, 0, 0x58uLL);
    v10 = *((_QWORD *)a1 + 5);
    LODWORD(v16[0]) = 128;
    LODWORD(v16[6]) = 1;
    v16[5] = *(_QWORD *)(v10 + 16);
    VIDMM_GLOBAL::QueueSystemCommandAndWait(*((VIDMM_GLOBAL **)a1 + 4), (struct _VIDMM_SYSTEM_COMMAND *)v16);
  }
  v11 = (_QWORD *)*((_QWORD *)a1 + 5);
  if ( v11[3] )
  {
    v12 = *((_QWORD *)a1 + 4);
    v13 = v12 + 39984;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 39984));
    v14 = v12 + 39968;
    v15 = *(_QWORD **)(v14 + 8);
    if ( *v15 != v14 )
      __fastfail(3u);
    *v11 = v14;
    v11[1] = v15;
    *v15 = v11;
    *(_QWORD *)(v14 + 8) = v11;
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)a1 + 5) = 0LL;
  }
}
