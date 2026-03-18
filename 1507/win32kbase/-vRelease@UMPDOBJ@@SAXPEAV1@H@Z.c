/*
 * XREFs of ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0069690
 * Callers:
 *     GdiThreadCallout @ 0x1C005A6A0 (GdiThreadCallout.c)
 * Callees:
 *     UMPDOBJ_bCleanupWrap_0 @ 0x1C00017E0 (UMPDOBJ_bCleanupWrap_0.c)
 *     IsUMPDOBJ_bCleanupSupported_0 @ 0x1C00017E8 (IsUMPDOBJ_bCleanupSupported_0.c)
 *     IsFreeNonCachedUserMemSupported_0 @ 0x1C00017F0 (IsFreeNonCachedUserMemSupported_0.c)
 *     FreeNonCachedUserMemWrap_0 @ 0x1C00017F8 (FreeNonCachedUserMemWrap_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall UMPDOBJ::vRelease(struct UMPDOBJ *a1, int a2)
{
  __int64 v4; // rdx
  struct UMPDOBJ **v5; // rcx
  int v6; // eax

  if ( (int)IsFreeNonCachedUserMemSupported_0() >= 0 )
    FreeNonCachedUserMemWrap_0();
  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    v5 = (struct UMPDOBJ **)*((_QWORD *)a1 + 6);
    if ( *(struct UMPDOBJ **)(v4 + 8) != (struct UMPDOBJ *)((char *)a1 + 40)
      || *v5 != (struct UMPDOBJ *)((char *)a1 + 40) )
    {
      __fastfail(3u);
    }
    *v5 = (struct UMPDOBJ *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  if ( a1 )
  {
    HmgDecrementShareReferenceCount(a1);
    if ( (int)IsUMPDOBJ_bCleanupSupported_0() < 0 )
      v6 = 0;
    else
      v6 = UMPDOBJ_bCleanupWrap_0();
    if ( v6 )
      Win32FreePool();
  }
}
