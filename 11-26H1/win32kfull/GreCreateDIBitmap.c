/*
 * XREFs of GreCreateDIBitmap @ 0x140015974
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x14007BBA0 (NtGdiCreateSessionMappedDIBSection.c)
 *     NtGdiCreateDIBSection @ 0x14007BFA0 (NtGdiCreateDIBSection.c)
 *     RecolorDeskPattern @ 0x140246F20 (RecolorDeskPattern.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateDIBitmap(
        Gre::Base *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  Gre::Base *v15; // rcx
  __int64 v16; // rbx
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  _QWORD v19[3]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v20; // [rsp+90h] [rbp-78h]
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-68h]
  struct Gre::Base::SESSION_GLOBALS *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  _BYTE v25[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v26[32]; // [rsp+D8h] [rbp-30h] BYREF
  Gre::Base *v27; // [rsp+F8h] [rbp-10h]
  __int16 v28; // [rsp+100h] [rbp-8h]
  _BYTE v29[32]; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v30; // [rsp+128h] [rbp+20h]

  v19[1] = a7;
  v19[2] = 0LL;
  v20 = 0;
  v19[0] = a3;
  v24 = 0LL;
  v23 = Gre::Base::Globals(a1);
  v21 = 0LL;
  v22 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v25);
  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v26);
  v27 = a1;
  v28 = 1;
  GrepCreateDIBitmap(v29, &v21, a2, v19, a4, a5, a6, a8, a9, a10, a11, a12, 0LL);
  if ( v30 )
    v16 = *v30;
  else
    v16 = 0LL;
  if ( v30 )
  {
    v17 = Gre::Base::Globals(v15);
    DEC_SHARE_REF_CNT(v17, v30);
  }
  PopThreadGuardedObject(v29);
  v21 &= -(__int64)((_BYTE)v28 != 0);
  PopThreadGuardedObject(v26);
  DCOBJ::~DCOBJ((DCOBJ *)&v21);
  return v16;
}
