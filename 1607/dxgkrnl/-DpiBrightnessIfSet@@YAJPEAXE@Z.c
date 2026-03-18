/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C01991E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiCallDrvSetBrightness @ 0x1C019984C (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  int v5; // edi
  __int64 v6; // r8
  bool v7; // zf
  _QWORD v9[8]; // [rsp+30h] [rbp-50h] BYREF

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4144), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4384) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      v7 = *(_BYTE *)(v2 + 4128) == 0;
      *(_BYTE *)(v2 + 4136) = a2;
      if ( !v7 || *(_BYTE *)(v2 + 4129) )
      {
        v5 = 0;
      }
      else
      {
        LOBYTE(v6) = a2;
        v5 = DpiCallDrvSetBrightness(a1, v2 + 4344, v6);
        if ( v5 >= 0 )
          *(_BYTE *)(v2 + 4072) = a2;
        if ( *(_BYTE *)(v2 + 4130) )
        {
          memset(v9, 0, sizeof(v9));
          memset(&v9[1], 0, 36);
          HIDWORD(v9[6]) = a2;
          v9[0] = 0x4000000006LL;
          LODWORD(v9[6]) = 67;
          v9[7] = (unsigned int)v5;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
        }
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4144), 0);
  return (unsigned int)v5;
}
