/*
 * XREFs of AVrfpDllLoadNotificationInternal @ 0x1800D6884
 * Callers:
 *     AVrfDllLoadNotification @ 0x1800879A0 (AVrfDllLoadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800D73A0 (AVrfpSnapAlreadyLoadedDlls.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     AVrfpDetectVerifiedExports @ 0x1800D67A4 (AVrfpDetectVerifiedExports.c)
 *     AVrfpSnapDllImports @ 0x1800D742C (AVrfpSnapDllImports.c)
 */

__int64 __fastcall AVrfpDllLoadNotificationInternal(__int64 a1)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rbp
  int v5; // r14d
  __int64 v6; // rbx

  if ( !AVrfpEnabled )
    return 0LL;
  v3 = (__int64 *)AVrfpVerifierProvidersList;
  while ( v3 != &AVrfpVerifierProvidersList )
  {
    v4 = (_QWORD *)v3[5];
    v5 = 0;
    v3 = (__int64 *)*v3;
    if ( *v4 )
    {
      v6 = (__int64)v4;
      do
      {
        if ( (*(_BYTE *)(v6 + 8) & 1) == 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), *(const wchar_t **)v6) )
        {
          if ( (AVrfpDebug & 4) != 0 )
            DbgPrint(
              "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
              LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
              *(_QWORD *)(a1 + 96));
          if ( AVrfpDetectVerifiedExports(v6, a1) )
            *(_DWORD *)(v6 + 8) |= 1u;
        }
        v6 = (__int64)&v4[4 * (unsigned int)++v5];
      }
      while ( *(_QWORD *)v6 );
    }
  }
  return AVrfpSnapDllImports(a1);
}
