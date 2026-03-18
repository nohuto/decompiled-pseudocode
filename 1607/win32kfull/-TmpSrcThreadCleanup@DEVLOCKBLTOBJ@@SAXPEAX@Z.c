/*
 * XREFs of ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C025B300
 * Callers:
 *     <none>
 * Callees:
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025B244 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcThreadCleanup(HSURF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    DEVLOCKBLTOBJ::TmpSrcCleanup(a1, a2, a3, a4);
}
