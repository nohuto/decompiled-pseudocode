/*
 * XREFs of _CsDdeUninitialize @ 0x1C0110C70
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0110CA0 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall CsDdeUninitialize(__int64 a1)
{
  __int64 v1; // rax

  v1 = HMValidateHandleNoRip(a1, 9);
  if ( v1 )
    xxxDestroyThreadDDEObject(gptiCurrent, v1);
  return 1LL;
}
