/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0170EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     sub_1C01714CC @ 0x1C01714CC (sub_1C01714CC.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v5; // ebx
  __int64 v6; // r8
  bool v7; // zf
  _DWORD v9[16]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 2992), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 3232) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      v7 = *(_BYTE *)(v2 + 2976) == 0;
      *(_BYTE *)(v2 + 2984) = a2;
      if ( v7 )
      {
        LOBYTE(v6) = a2;
        v5 = sub_1C01714CC(a1, v2 + 3192, v6);
        if ( v5 >= 0 )
          *(_BYTE *)(v2 + 2920) = a2;
        if ( *(_BYTE *)(v2 + 2977) )
        {
          memset(v9, 0, sizeof(v9));
          DxgkDiagInitializeCodePointPacket(v9, 67, a2, v5, 0);
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
        }
      }
      else
      {
        v5 = 0;
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 2992), 0);
  return (unsigned int)v5;
}
