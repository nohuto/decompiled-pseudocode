/*
 * XREFs of vCleanupMetaType @ 0x14030F360
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteServerMetaFile @ 0x140325B80 (GreDeleteServerMetaFile.c)
 */

unsigned int __fastcall vCleanupMetaType(unsigned int a1)
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
      if ( (BYTE2(v5) & 0x1F) == 0x15 )
        GreDeleteServerMetaFile(v5);
      v3 = v4;
    }
  }
  return result;
}
