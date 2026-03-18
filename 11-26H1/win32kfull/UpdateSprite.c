/*
 * XREFs of UpdateSprite @ 0x140015F78
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     OffsetWindow @ 0x140018874 (OffsetWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     UpdateSpriteArea @ 0x14020440C (UpdateSpriteArea.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400145A8 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     IsWindowContentProtected @ 0x14001475C (IsWindowContentProtected.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int v15; // esi
  __int64 v16; // rdx
  int v17; // eax
  Gre::Base *v18; // rcx
  HWND v19; // r15
  int v20; // r14d
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  int updated; // ebx
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  _BYTE v29[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[32]; // [rsp+E0h] [rbp-20h] BYREF
  HDC v31; // [rsp+100h] [rbp+0h]
  __int16 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h] BYREF
  int v34; // [rsp+118h] [rbp+18h]
  struct Gre::Base::SESSION_GLOBALS *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  _BYTE v37[32]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v38[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v39; // [rsp+170h] [rbp+70h]
  __int16 v40; // [rsp+178h] [rbp+78h]
  _BYTE v41[144]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v41, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v41);
  v15 = 0;
  if ( (unsigned int)IsWindowContentProtected((__int64)a2, v16) )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL) + 56LL);
  v17 = IsWindowDesktopComposed(a2);
  v19 = *(HWND *)a2;
  v20 = v17;
  if ( a4 == a7 && a4 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)&v25, a4);
    updated = GrepUpdateSprite(
                a1,
                v19,
                0LL,
                (struct OPTAPIDCOBJ *)&v25,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)&v25,
                a8,
                a9,
                a10,
                a11,
                a12,
                (struct tagMINIWINDOWINFO *)v41,
                v20,
                0,
                v15);
    v25 &= -(__int64)((_BYTE)v32 != 0);
  }
  else
  {
    v27 = Gre::Base::Globals(v18);
    v28 = 0LL;
    v25 = 0LL;
    v26 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v29);
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v30);
    v31 = a4;
    v32 = 1;
    v22 = Gre::Base::Globals(v21);
    v36 = 0LL;
    v35 = v22;
    v33 = 0LL;
    v34 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v37);
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v38);
    v39 = (__int64)a7;
    v40 = 1;
    updated = GrepUpdateSprite(
                a1,
                v19,
                0LL,
                (struct OPTAPIDCOBJ *)&v25,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)&v33,
                a8,
                a9,
                a10,
                a11,
                a12,
                (struct tagMINIWINDOWINFO *)v41,
                v20,
                0,
                v15);
    v33 &= -(__int64)((_BYTE)v40 != 0);
    PopThreadGuardedObject(v38);
    DCOBJ::~DCOBJ((DCOBJ *)&v33);
    v25 &= -(__int64)((_BYTE)v32 != 0);
  }
  PopThreadGuardedObject(v30);
  DCOBJ::~DCOBJ((DCOBJ *)&v25);
  return updated == 0 ? 0x803F0001 : 0;
}
