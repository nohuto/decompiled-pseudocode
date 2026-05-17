/*
 * XREFs of AVrfpIsVerifierProviderDll @ 0x1800CED50
 * Callers:
 *     AVrfDllLoadNotification @ 0x1800836E8 (AVrfDllLoadNotification.c)
 *     AVrfDllUnloadNotification @ 0x1800CDEF8 (AVrfDllUnloadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800CF394 (AVrfpSnapAlreadyLoadedDlls.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpIsVerifierProviderDll(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // r8

  v1 = (__int64 *)AVrfpVerifierProvidersList;
  do
  {
    if ( v1 == &AVrfpVerifierProvidersList )
      return 0;
    v2 = v1;
    v1 = (__int64 *)*v1;
    v3 = v2[4];
  }
  while ( !v3 || *(_QWORD *)(v3 + 48) != a1 );
  return 1;
}
