/*
 * XREFs of xxxTouchTargetWindow @ 0x14008868C
 * Callers:
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x14008837C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1400887E8 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x140089318 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x140225CF8 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 */

__int64 __fastcall xxxTouchTargetWindow(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        _DWORD *a4,
        _WORD *a5,
        __int64 a6,
        int a7)
{
  __int64 v9; // rcx
  int v12; // edi
  __int64 UserSessionState; // rax
  int Prop; // eax
  struct tagPOINT v16; // r8
  unsigned int v17; // r14d
  const struct _D3DMATRIX *v18; // rcx

  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0x10) == 0 || (*(_BYTE *)(v9 + 26) & 8) != 0 && (*(_BYTE *)(v9 + 24) & 0x20) != 0 )
    return 0LL;
  v12 = 1;
  if ( a7 )
  {
    if ( IsWindowCloaked(a1) )
      return 0LL;
    v9 = *((_QWORD *)a1 + 27);
    if ( v9 )
      ApplyWindowTransform((const struct _D3DMATRIX *)v9, a3, a2, 1);
  }
  UserSessionState = W32GetUserSessionState(v9, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41388), 1u);
  v16 = *a3;
  *a4 = Prop;
  v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD))BasicTargetingHitTest)(
          a1,
          a2,
          v16,
          a5,
          a6,
          a7,
          0LL,
          4,
          1,
          Prop,
          0);
  if ( !v17 || *a5 )
    v12 = 0;
  ClipContact(a1, a2, v12, 0LL);
  if ( a7 )
  {
    v18 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
    if ( v18 )
      ApplyWindowTransform(v18, 0LL, a2, 0);
  }
  return v17;
}
