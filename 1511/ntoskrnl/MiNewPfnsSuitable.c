/*
 * XREFs of MiNewPfnsSuitable @ 0x140622CA4
 * Callers:
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNewPfnsSuitable(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r11
  __int64 v4; // r9

  v2 = 0LL;
  v3 = -1LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v4 == a2 )
    {
      if ( !v2 )
        return 1LL;
    }
    else
    {
      if ( !v2 )
      {
        v3 = *(_QWORD *)(a1 + 8 * v4);
        v2 = 1LL;
        goto LABEL_9;
      }
      if ( *(_QWORD *)(a1 + 8 * v4 - 8) + 1LL == *(_QWORD *)(a1 + 8 * v4) )
      {
        ++v2;
        goto LABEL_9;
      }
    }
    if ( v3 + v2 >= qword_1402FEF60 && v3 < qword_1402FEF60 + 2048 || v3 + v2 >= 0xFFFFFFFFCLL )
      return 0LL;
    if ( (unsigned int)v4 == a2 )
      return 1LL;
    v2 = 0LL;
    LODWORD(v4) = v4 - 1;
LABEL_9:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 > a2 )
      return 1LL;
  }
}
