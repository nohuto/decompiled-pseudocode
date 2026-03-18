/*
 * XREFs of ?vUMPDThreadCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C000B048
 * Callers:
 *     GdiThreadCallout @ 0x1C000AF20 (GdiThreadCallout.c)
 * Callees:
 *     IsUMPDCachedResourceCleanupSupported_0 @ 0x1C00017A0 (IsUMPDCachedResourceCleanupSupported_0.c)
 *     UMPDCachedResourceCleanupWrap_0 @ 0x1C00017A8 (UMPDCachedResourceCleanupWrap_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0083F20 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 */

void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  _QWORD *v2; // rcx
  struct UMPDOBJ *v3; // rcx
  __int64 v4; // rcx

  while ( 1 )
  {
    if ( a1 && (v2 = (_QWORD *)((char *)a1 + 40), (_QWORD *)*v2 != v2) )
      v3 = (struct UMPDOBJ *)(*v2 - 40LL);
    else
      v3 = 0LL;
    if ( !v3 )
      break;
    UMPDOBJ::vRelease(v3, 1);
  }
  if ( (int)IsUMPDCachedResourceCleanupSupported_0() >= 0 )
    UMPDCachedResourceCleanupWrap_0();
  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}
