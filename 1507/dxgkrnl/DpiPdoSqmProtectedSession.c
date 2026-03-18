/*
 * XREFs of DpiPdoSqmProtectedSession @ 0x1C0170AF0
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     DxgkSqmOptedIn @ 0x1C000EA40 (DxgkSqmOptedIn.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 */

void __fastcall DpiPdoSqmProtectedSession(__int64 a1, int a2)
{
  _DWORD *v4; // rax
  int v5; // edi
  __int64 v6; // r9
  _DWORD v7[20]; // [rsp+20h] [rbp-68h] BYREF

  if ( DxgkSqmOptedIn() )
  {
    v4 = *(_DWORD **)(a1 + 904);
    v5 = -2;
    if ( *v4 == 1 )
      v5 = v4[1];
    memset(v7, 0, sizeof(v7));
    DxgkSqmCreateDwordStreamEntry(v7, 0);
    DxgkSqmCreateDwordStreamEntry(&v7[4], v5);
    DxgkSqmCreateDwordStreamEntry(&v7[8], *(_DWORD *)(a1 + 944));
    DxgkSqmCreateDwordStreamEntry(&v7[12], *(_DWORD *)(a1 + 948));
    DxgkSqmCreateDwordStreamEntry(&v7[16], a2);
    DxgkSqmAddToStream(12671LL, 5LL, (__int64)v7, v6);
  }
}
