/*
 * XREFs of GreSetBitmapDimension @ 0x140226114
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1402260A0 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreSetBitmapDimension(Gre::Base *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v8 = 0;
  v9 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v12, v9);
  SURFREF::SURFREF((SURFREF *)v13, (HSURF)a1);
  v10 = v14;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 112) & 0x4000000) != 0 )
    {
      if ( a4 )
        *a4 = *(_QWORD *)(v14 + 152);
      v8 = 1;
      *(_QWORD *)(v10 + 152) = __PAIR64__(a3, a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v12);
  return v8;
}
