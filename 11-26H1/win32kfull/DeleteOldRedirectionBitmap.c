/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1400189F4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x140018A98 (GetOldRedirectionBitmap.c)
 *     GreSetRedirection @ 0x140018AE4 (GreSetRedirection.c)
 *     SetOldRedirectionBitmap @ 0x140018B50 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // edi
  HSURF OldRedirectionBitmap; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = 0;
  OldRedirectionBitmap = (HSURF)GetOldRedirectionBitmap();
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v4 = *(_QWORD *)(a1 + 24);
    GreSetRedirection(OldRedirectionBitmap);
    GreMarkDeletableBitmap(OldRedirectionBitmap);
    GreLockVisRgn();
    LOBYTE(v5) = 5;
    GreDereferenceObject(OldRedirectionBitmap, v5, 0LL);
    GreUnlockVisRgn();
    v6 = *(_QWORD *)(v4 + 40);
    if ( OldRedirectionBitmap == *(HSURF *)(v6 + 88) )
      *(_QWORD *)(v6 + 88) = 0LL;
    return 1;
  }
  return v2;
}
