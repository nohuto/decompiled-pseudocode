/*
 * XREFs of vCleanupFonts @ 0x14030F2E0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteFont @ 0x1401E29B0 (bDeleteFont.c)
 */

unsigned int __fastcall vCleanupFonts(unsigned int a1)
{
  unsigned int result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  struct HOBJ__ *v5; // [rsp+38h] [rbp+10h] BYREF
  struct OBJECT *v6; // [rsp+40h] [rbp+18h] BYREF

  result = HmgIsProcessCleanupRequiredByW32Pid();
  if ( result )
  {
    v5 = 0LL;
    v3 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      result = HmgNextOwned(v3, a1, &v5, &v6);
      v4 = result;
      if ( !result )
        break;
      if ( (BYTE2(v5) & 0x1F) == 0xA )
        bDeleteFont((__int64)v5, 0LL);
      v3 = v4;
    }
  }
  return result;
}
