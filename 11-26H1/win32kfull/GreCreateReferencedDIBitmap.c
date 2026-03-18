/*
 * XREFs of GreCreateReferencedDIBitmap @ 0x1400181E0
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateReferencedDIBitmap(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        _QWORD *a13)
{
  __int64 v14; // rbx
  _QWORD v16[3]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v17; // [rsp+88h] [rbp-78h]
  _BYTE v18[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v19; // [rsp+B0h] [rbp-50h]
  _QWORD v20[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[48]; // [rsp+100h] [rbp+0h] BYREF

  memset(v16, 0, sizeof(v16));
  v17 = 0;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v20, a1);
  GrepCreateDIBitmap((__int64)v18, (OPTAPIDCOBJ *)v20, 0, v16, a4, 0, 0x2Cu, 0LL, 0, 0LL, 0, 0LL, a13);
  if ( v19 )
  {
    HmgIncrementShareReferenceCount(v20[2]);
    v14 = *v19;
  }
  else
  {
    v14 = 0LL;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v18);
  v20[0] &= -(__int64)(v21[40] != 0);
  PopThreadGuardedObject(v21);
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v14;
}
