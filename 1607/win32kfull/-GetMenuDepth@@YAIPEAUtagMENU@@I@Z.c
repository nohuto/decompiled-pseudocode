/*
 * XREFs of ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C0113750
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C0113750 (-GetMenuDepth@@YAIPEAUtagMENU@@I@Z.c)
 * Callees:
 *     ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C0113750 (-GetMenuDepth@@YAIPEAUtagMENU@@I@Z.c)
 */

__int64 __fastcall GetMenuDepth(struct tagMENU *a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ebx
  struct tagMENU **v5; // rdi
  unsigned int MenuDepth; // eax

  v2 = 0;
  if ( !a2 )
    return 25LL;
  v4 = *((_DWORD *)a1 + 13);
  if ( v4 )
  {
    v5 = (struct tagMENU **)(*((_QWORD *)a1 + 10) + 16LL);
    do
    {
      --v4;
      if ( *v5 )
      {
        MenuDepth = GetMenuDepth(*v5, a2 - 1);
        if ( MenuDepth > v2 )
        {
          if ( MenuDepth >= 0x19 )
            return 25LL;
          v2 = MenuDepth;
        }
      }
      v5 += 19;
    }
    while ( v4 );
  }
  return v2 + 1;
}
