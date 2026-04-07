/*
 * XREFs of ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x180082C50
 * Callers:
 *     ??_GCAnimatedGlassSheet@@UEAAPEAXI@Z @ 0x180082D10 (--_GCAnimatedGlassSheet@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800839A0 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

void __fastcall CAnimatedGlassSheet::~CAnimatedGlassSheet(CAnimatedGlassSheet *this)
{
  __int64 v2; // rsi
  CBaseObject **v3; // rdi
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rcx
  bool v7; // al

  *(_QWORD *)this = &CAnimatedGlassSheet::`vftable';
  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v2 = 13LL;
  v3 = (CBaseObject **)((char *)this + 304);
  do
  {
    if ( *v3 )
      CBaseObject::Release(*v3);
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = *((_QWORD *)this + 59);
  if ( v4 )
  {
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( !--*(_DWORD *)(v4 + 8) )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  else
  {
    v5 = CDesktopManager::s_fTimelineDirty;
  }
  v6 = *((_QWORD *)this + 57);
  if ( v6 )
  {
    --*(_DWORD *)(v6 + 8);
    v7 = v5;
    if ( !*(_DWORD *)(v6 + 8) )
      v7 = 1;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  CAtlasedRectsVisual::~CAtlasedRectsVisual((void **)this);
}
