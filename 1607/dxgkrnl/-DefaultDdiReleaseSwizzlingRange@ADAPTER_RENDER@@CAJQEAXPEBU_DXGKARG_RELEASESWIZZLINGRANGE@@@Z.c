/*
 * XREFs of ?DefaultDdiReleaseSwizzlingRange@ADAPTER_RENDER@@CAJQEAXPEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x1C014D1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange(
        void *const a1,
        const struct _DXGKARG_RELEASESWIZZLINGRANGE *a2,
        __int64 a3)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[3] = 275LL;
  v3[4] = 7LL;
  WdLogEvent5_WdCriticalError(v3);
  return 3221225659LL;
}
