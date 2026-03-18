/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C0084510
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001C48C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C001E644 (Template_qqqxx.c)
 */

void __fastcall DeferredSetVprCallback(const struct _DXGKARG_SETVIDEOPROTECTEDREGION *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  SIZE_T NewStartOffset; // rbx
  _QWORD *NewSize; // rsi
  SIZE_T v13; // rbp
  SIZE_T v14; // rbx
  _QWORD *v15; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qqqxx(
      (__int64)a1,
      a2,
      a3,
      a1[1].PhysicalAdapterIndex,
      a1[1].SegmentIndex,
      a1[1].VprIndex,
      a1[1].NewStartOffset,
      a1[1].NewSize);
  v4 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
         *(ADAPTER_RENDER **)(*(_QWORD *)(a1->NewStartOffset + 24) + 1992LL),
         a1 + 1);
  v9 = v4;
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = v9;
    *(_QWORD *)(v10 + 32) = 68LL;
    WdLogEvent5_WdAssertion(v10);
  }
  NewStartOffset = a1->NewStartOffset;
  NewSize = (_QWORD *)a1->NewSize;
  v13 = NewStartOffset + 39912;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(NewStartOffset + 39912));
  v14 = NewStartOffset + 39896;
  v15 = *(_QWORD **)(v14 + 8);
  *NewSize = v14;
  NewSize[1] = v15;
  if ( *v15 != v14 )
    __fastfail(3u);
  *v15 = NewSize;
  *(_QWORD *)(v14 + 8) = NewSize;
  *(_QWORD *)(v13 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  a1->NewSize = 0LL;
}
