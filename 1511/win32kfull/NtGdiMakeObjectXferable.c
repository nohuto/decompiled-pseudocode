/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C0290F10
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C0290BDC (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, __int64 a2)
{
  int v2; // ebp
  char v5; // bl
  unsigned int v6; // esi
  __int64 v7; // rdx

  v2 = a2;
  if ( ((unsigned __int64)a1 & 0x800000) != 0 )
    return 1LL;
  v5 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2);
  v6 = 0;
  if ( v5 == 1 )
  {
    if ( (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, v2) )
    {
      LOBYTE(v7) = 1;
      v6 = HmgMarkXferable(a1, v7);
    }
  }
  GreReleaseHmgrSemaphore();
  return v6;
}
