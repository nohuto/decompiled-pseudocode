/*
 * XREFs of bDeleteFont @ 0x1401E29B0
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z @ 0x14010FDF8 (-FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z.c)
 *     vCleanupFonts @ 0x14030F2E0 (vCleanupFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDeleteFont(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  Gre::Base *v5; // rcx
  int v6; // eax
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  void *v8; // rax
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 1;
  LOBYTE(a2) = 10;
  v10 = 1;
  if ( (unsigned int)HmgMarkLazyDelete(a1, a2, &v10) )
  {
    v6 = v10;
  }
  else
  {
    v3 = 0;
    v6 = 0;
    v10 = 0;
  }
  if ( !v6 && v3 )
  {
    v7 = Gre::Base::Globals(v5);
    v8 = (void *)HmgRemoveObject(v7, a1, 0LL, 0LL, v2, 10, 0LL);
    if ( v8 )
    {
      FreeObject(v7, v8, 0xAu);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
