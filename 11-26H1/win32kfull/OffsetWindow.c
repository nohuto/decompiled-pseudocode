/*
 * XREFs of OffsetWindow @ 0x140018874
 * Callers:
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     HasVisRgnTracker @ 0x14001975C (HasVisRgnTracker.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 */

__int64 __fastcall OffsetWindow(tagWND *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  HRGN ExplicitClipRgn; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // r8
  struct tagPOINT v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 88LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 96LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 92LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 100LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 104LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 112LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 108LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 116LL) += a3;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 136LL);
  if ( v6 > 1 )
    GreOffsetRgn(v6, a2, a3);
  ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
  if ( ExplicitClipRgn )
    GreOffsetRgn(ExplicitClipRgn, v5, v4);
  result = IsWindowDesktopComposed(this);
  if ( (_DWORD)result )
  {
    result = HasVisRgnTracker(this);
    if ( (_DWORD)result )
      result = DwmChildRectChange(this);
  }
  v10 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v10 + 26) & 8) != 0 )
  {
    v13 = *(struct tagPOINT *)(v10 + 88);
    UserSessionState = W32GetUserSessionState(v10, v9);
    return UpdateSprite(
             *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
             this,
             v12,
             0LL,
             &v13,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0,
             0LL);
  }
  return result;
}
