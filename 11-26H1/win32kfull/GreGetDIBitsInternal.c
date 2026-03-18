/*
 * XREFs of GreGetDIBitsInternal @ 0x1401B5FB8
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14025E63C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402EE6B0 (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 * Callees:
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        Gre::Base *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int DIBits; // ebx
  __int64 v14[3]; // [rsp+58h] [rbp-71h] BYREF
  __int16 v15; // [rsp+70h] [rbp-59h]
  __int64 v16; // [rsp+78h] [rbp-51h] BYREF
  int v17; // [rsp+80h] [rbp-49h]
  struct Gre::Base::SESSION_GLOBALS *v18; // [rsp+88h] [rbp-41h]
  __int64 v19; // [rsp+90h] [rbp-39h]
  _OWORD v20[2]; // [rsp+98h] [rbp-31h] BYREF
  _OWORD v21[2]; // [rsp+B8h] [rbp-11h] BYREF
  Gre::Base *v22; // [rsp+D8h] [rbp+Fh]
  __int16 v23; // [rsp+E0h] [rbp+17h]

  v14[0] = a5;
  v14[1] = a8;
  v14[2] = 0LL;
  v15 = 0;
  v19 = 0LL;
  v18 = Gre::Base::Globals(a1);
  v16 = 0LL;
  v17 = 0;
  memset(v20, 0, sizeof(v20));
  PushThreadGuardedObject(
    v20,
    &v16,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v21, 0, sizeof(v21));
  PushThreadGuardedObject(
    v21,
    &v16,
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v22 = a1;
  v23 = 1;
  DIBits = GrepGetDIBits((OPTAPIDCOBJ *)&v16, a2, 0, a4, (__int64)v14, a6, 0, a8, a9);
  v16 &= -(__int64)((_BYTE)v23 != 0);
  PopThreadGuardedObject(v21);
  DCOBJ::~DCOBJ((DCOBJ *)&v16);
  return DIBits;
}
