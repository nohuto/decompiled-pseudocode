/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x14012DB84
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnredirectDCEs @ 0x14012E3C8 (UnredirectDCEs.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x140293FB4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     _IsDescendant @ 0x14012EA64 (_IsDescendant.c)
 *     UpdateRedirectedDCE @ 0x14012EAA0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9

  GreLockVisRgn(a1, a2, a3);
  v6 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968) + 24LL);
  if ( v6 != (__int64 *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 24LL) )
  {
    while ( 1 )
    {
      v11 = *((unsigned int *)v6 + 12);
      if ( (v6[6] & 0x4404800) != 0x4000 || !v6[10] || (v11 & 0x1000) == 0 )
        goto LABEL_8;
      if ( (unsigned int)IsDesktopWindow(a1) )
        break;
      if ( (unsigned int)IsDescendant(v11, v12) )
        goto LABEL_7;
LABEL_8:
      v6 = (__int64 *)*v6;
      v10 = *(_QWORD *)(W32GetUserSessionState(v11, v9) + 56968) + 24LL;
      if ( v6 == (__int64 *)v10 )
        return GreUnlockVisRgn(v10);
    }
    if ( a1 != v12 )
      goto LABEL_8;
LABEL_7:
    UpdateRedirectedDCE((tagDCE *)v6);
    goto LABEL_8;
  }
  return GreUnlockVisRgn(v10);
}
