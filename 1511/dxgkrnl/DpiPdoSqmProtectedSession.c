/*
 * XREFs of DpiPdoSqmProtectedSession @ 0x1C0175370
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00C7CD0 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     DxgkSqmOptedIn @ 0x1C000BF30 (DxgkSqmOptedIn.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 */

void __fastcall DpiPdoSqmProtectedSession(__int64 a1, int a2)
{
  _DWORD *v4; // rax
  int v5; // edi
  _DWORD v6[20]; // [rsp+20h] [rbp-68h] BYREF

  if ( DxgkSqmOptedIn() )
  {
    v4 = *(_DWORD **)(a1 + 936);
    v5 = -2;
    if ( *v4 == 1 )
      v5 = v4[1];
    memset(v6, 0, sizeof(v6));
    DxgkSqmCreateDwordStreamEntry(v6, 0);
    DxgkSqmCreateDwordStreamEntry(&v6[4], v5);
    DxgkSqmCreateDwordStreamEntry(&v6[8], *(_DWORD *)(a1 + 976));
    DxgkSqmCreateDwordStreamEntry(&v6[12], *(_DWORD *)(a1 + 980));
    DxgkSqmCreateDwordStreamEntry(&v6[16], a2);
    DxgkSqmAddToStream(12671LL, 5u, (__int64)v6);
  }
}
