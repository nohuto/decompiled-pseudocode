/*
 * XREFs of VerifierPortKeReleaseSpinLock @ 0x140712B24
 * Callers:
 *     <none>
 * Callees:
 *     ViKeReleaseSpinLockCommon @ 0x140713194 (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLock(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx

  v4 = ViKeReleaseSpinLockCommon(a1);
  LOBYTE(v5) = a2;
  v6 = v4;
  pXdvKeReleaseSpinLock(a1, v5);
  return ViKeIrqlLogCommon(v6, 1LL);
}
