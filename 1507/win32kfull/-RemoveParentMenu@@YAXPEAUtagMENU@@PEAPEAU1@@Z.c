/*
 * XREFs of ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C023C354
 * Callers:
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C0054F70 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveParentMenu(struct tagMENU *a1, struct tagMENU **a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // r8

  v2 = (__int64)*a2;
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 88);
    if ( *v3 )
    {
      while ( 1 )
      {
        v4 = (__int64 *)*v3;
        if ( *(struct tagMENU **)(*v3 + 8) == a1 )
          break;
        v3 = (__int64 *)*v3;
        if ( !*v4 )
          return;
      }
      v5 = (__int64 *)*v3;
      *v3 = *v4;
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v5);
    }
  }
}
