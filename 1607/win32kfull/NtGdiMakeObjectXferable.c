/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C028FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C028F93C (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, int a2)
{
  char v5; // bl
  MLOCKFAST *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v5 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore();
  v7 = 0;
  if ( v5 == 1 )
  {
    if ( (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, a2) )
    {
      LOBYTE(v8) = 1;
      v7 = HmgMarkXferable(a1, v8);
    }
  }
  GreReleaseHmgrSemaphore(v6);
  return v7;
}
