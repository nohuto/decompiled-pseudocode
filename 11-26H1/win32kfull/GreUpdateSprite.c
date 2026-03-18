/*
 * XREFs of GreUpdateSprite @ 0x140016514
 * Callers:
 *     bMoveDevDragRect @ 0x14021935C (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x140219C58 (bMoveDevPreviewRect.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x14021B130 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreUpdateSprite(
        Gre::Base *a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15,
        unsigned int a16)
{
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  unsigned int updated; // ebx
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+90h] [rbp-78h]
  struct Gre::Base::SESSION_GLOBALS *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  _BYTE v28[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v29[32]; // [rsp+C8h] [rbp-40h] BYREF
  HDC v30; // [rsp+E8h] [rbp-20h]
  __int16 v31; // [rsp+F0h] [rbp-18h]
  __int64 v32; // [rsp+F8h] [rbp-10h] BYREF
  int v33; // [rsp+100h] [rbp-8h]
  struct Gre::Base::SESSION_GLOBALS *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  _BYTE v36[32]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v37[32]; // [rsp+138h] [rbp+30h] BYREF
  HDC v38; // [rsp+158h] [rbp+50h]
  __int16 v39; // [rsp+160h] [rbp+58h]

  if ( a4 == a7 && a4 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)&v24, a4);
    updated = GrepUpdateSprite(
                (HDEV)a1,
                a2,
                a3,
                (struct OPTAPIDCOBJ *)&v24,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)&v24,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                0,
                a16);
  }
  else
  {
    v27 = 0LL;
    v26 = Gre::Base::Globals(a1);
    v24 = 0LL;
    v25 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v28);
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v29);
    v30 = a4;
    v31 = 1;
    v21 = Gre::Base::Globals(v20);
    v35 = 0LL;
    v34 = v21;
    v32 = 0LL;
    v33 = 0;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v36);
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v37);
    v38 = a7;
    v39 = 1;
    updated = GrepUpdateSprite(
                (HDEV)a1,
                a2,
                a3,
                (struct OPTAPIDCOBJ *)&v24,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)&v32,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                0,
                a16);
    v32 &= -(__int64)((_BYTE)v39 != 0);
    PopThreadGuardedObject(v37);
    DCOBJ::~DCOBJ((DCOBJ *)&v32);
  }
  v24 &= -(__int64)((_BYTE)v31 != 0);
  PopThreadGuardedObject(v29);
  DCOBJ::~DCOBJ((DCOBJ *)&v24);
  return updated;
}
