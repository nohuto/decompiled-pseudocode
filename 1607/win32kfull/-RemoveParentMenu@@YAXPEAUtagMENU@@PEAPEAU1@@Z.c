/*
 * XREFs of ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C0233EC4
 * Callers:
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C006AF48 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 * Callees:
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

void __fastcall RemoveParentMenu(struct tagMENU *a1, struct tagMENU **a2)
{
  char *v2; // r8
  _QWORD *v3; // rax
  void *v4; // rdx

  if ( *a2 )
  {
    v2 = (char *)*a2 + 88;
    if ( *(_QWORD *)v2 )
    {
      while ( 1 )
      {
        v3 = *(_QWORD **)v2;
        if ( *(struct tagMENU **)(*(_QWORD *)v2 + 8LL) == a1 )
          break;
        v2 = *(char **)v2;
        if ( !*v3 )
          return;
      }
      v4 = *(void **)v2;
      *(_QWORD *)v2 = *v3;
      DesktopFree(*((_QWORD *)a1 + 3), v4);
    }
  }
}
