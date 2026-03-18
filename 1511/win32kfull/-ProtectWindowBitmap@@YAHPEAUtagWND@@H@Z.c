/*
 * XREFs of ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0239364
 * Callers:
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0239164 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E7A6C (ChangeRedirectionBitmapOwner.c)
 *     GreProtectSpriteContent @ 0x1C02617A8 (GreProtectSpriteContent.c)
 */

__int64 __fastcall ProtectWindowBitmap(struct tagWND *a1, unsigned int a2)
{
  int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // rcx

  if ( a2 )
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) + 56LL);
  else
    v4 = 0;
  v5 = ChangeRedirectionBitmapOwner((__int64)a1, v4);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
    {
      v6 = IsWindowDesktopComposed(a1);
      v5 = GreProtectSpriteContent(v7, *(_QWORD *)a1, v6, a2);
      if ( !v5 )
      {
        if ( a2 )
          ChangeRedirectionBitmapOwner((__int64)a1, 0);
      }
    }
  }
  return v5;
}
