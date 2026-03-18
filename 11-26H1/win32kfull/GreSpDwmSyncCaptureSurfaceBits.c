/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x14009C140
 * Callers:
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14009D9B0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSpDwmSyncCaptureSurfaceBits(Gre::Base *a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  __int64 v11; // rcx
  HSEMAPHORE v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  HSURF v15; // rdi
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  unsigned int updated; // ebx
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[14]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[160]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v26; // [rsp+178h] [rbp+70h] BYREF
  int v27; // [rsp+180h] [rbp+78h]
  int v28; // [rsp+184h] [rbp+7Ch]

  v10 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a2, v10);
  if ( !v24[0] )
    goto LABEL_25;
  v11 = *(_QWORD *)(v24[0] + 8LL * (*(_DWORD *)(v24[0] + 40LL) & 1) + 1016);
  v26 = v11;
  v27 = v11 + a6;
  v28 = HIDWORD(v11) + a7;
  if ( (int)v11 > (int)v11 + a6 )
  {
    LODWORD(v26) = v11 + a6;
    v27 = v11;
  }
  if ( SHIDWORD(v11) > HIDWORD(v11) + a7 )
  {
    HIDWORD(v26) = HIDWORD(v11) + a7;
    v28 = HIDWORD(v11);
  }
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v23, v10);
  v12 = (HSEMAPHORE)(*(_QWORD *)v10 + 1144LL);
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<2>();
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, (struct XDCOBJ *)v24, 0) )
  {
    v13 = *(_QWORD *)(v24[0] + 496LL);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 56);
      v15 = *(HSURF *)(v13 + 32);
      v16 = *(_DWORD *)(v13 + 60);
      v17 = v26;
      v18 = HIDWORD(v26);
      v19 = v27;
      if ( (int)v26 < 0 )
        v17 = 0;
      LODWORD(v26) = v17;
      if ( v26 < 0 )
        v18 = 0;
      HIDWORD(v26) = v18;
      if ( v14 < v27 )
        v19 = v14;
      v20 = v28;
      v27 = v19;
      if ( v16 < v28 )
        v20 = v16;
      v28 = v20;
      if ( v19 < v17 )
      {
        LODWORD(v26) = v19;
      }
      else
      {
        if ( v20 < v18 )
          v18 = v20;
        HIDWORD(v26) = v18;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
      if ( v12 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v23);
      if ( (int)v26 < v27 && SHIDWORD(v26) < v28 && !KeAreApcsDisabled() )
      {
        updated = bSpDwmUpdateSurface((HWND)a1, 0LL, (struct XDCOBJ *)v24, v15, a3, a4, a5, (struct ERECTL *)&v26, 0LL);
        goto LABEL_26;
      }
LABEL_25:
      updated = 0;
LABEL_26:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
      return updated;
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
  if ( v12 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v23);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
  return 0LL;
}
