/*
 * XREFs of NtGdiUpdateColors @ 0x140331CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x140328CE8 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1403358D0 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 *     ??1XLATEMEMOBJ@@QEAA@XZ @ 0x14033597C (--1XLATEMEMOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  DC *v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r10
  __int64 v7; // r9
  struct REGION *v8; // rax
  struct ECLIPOBJ *v9; // rdx
  __int64 v10; // rdx
  unsigned int updated; // eax
  struct _XLATEOBJ *v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  DC *v14[14]; // [rsp+58h] [rbp-B0h] BYREF
  __m128i rclBounds; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v16[160]; // [rsp+D8h] [rbp-30h] BYREF
  struct _CLIPOBJ v17; // [rsp+178h] [rbp+70h] BYREF

  v1 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
  v2 = v14[0];
  if ( !v14[0] || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v14) )
    goto LABEL_5;
  v3 = *((_QWORD *)v2 + 6);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v13);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v14, 0) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13);
LABEL_5:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
    return 0LL;
  }
  if ( (*(_DWORD *)(v3 + 2156) & 0x100) != 0 )
  {
    v5 = *((_QWORD *)v14[0] + 62);
    if ( v5 == *(_QWORD *)(v3 + 2544) )
    {
      v6 = *(_QWORD *)(v5 + 128);
      v7 = *((_QWORD *)v14[0] + 11);
      if ( (*((_DWORD *)v14[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v14, (DC *)((char *)v14[0] + 1032));
      if ( (v16[24] & 1) != 0 )
      {
        if ( *(_QWORD *)(v7 + 80) && *(_QWORD *)(v7 + 88) )
        {
          XLATEMEMOBJ::XLATEMEMOBJ(&v12, v6, v7);
          if ( v12 )
          {
            v8 = XDCOBJ::prgnEffRao(v14);
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v17, v8, (DC *)((char *)v14[0] + 1032), 0);
            if ( ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
            {
              v1 = 1;
            }
            else
            {
              if ( (*((_DWORD *)v14[0] + 9) & 0xE0) != 0 )
              {
                rclBounds = (__m128i)v17.rclBounds;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v14, v9, &rclBounds);
              }
              v10 = v5 + 24;
              ++*(_DWORD *)(v5 + 92);
              if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
              {
                updated = MulUpdateColors((struct _SURFOBJ *)(v10 & -(__int64)(v5 != 0)), &v17, v12);
              }
              else if ( (*(_DWORD *)(v5 + 112) & 0x400) != 0 )
              {
                updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v3 + 2832))(
                            v10 & -(__int64)(v5 != 0),
                            v10 & -(__int64)(v5 != 0),
                            &v17,
                            v12,
                            &v17.rclBounds,
                            &v17.rclBounds);
              }
              else
              {
                updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                            v10 & -(__int64)(v5 != 0),
                            v10 & -(__int64)(v5 != 0),
                            &v17,
                            v12,
                            &v17.rclBounds,
                            &v17.rclBounds);
              }
              v1 = updated;
            }
          }
          XLATEMEMOBJ::~XLATEMEMOBJ((XLATEMEMOBJ *)&v12);
        }
        else
        {
          v1 = 1;
        }
      }
      else
      {
        v1 = XDCOBJ::bFullScreen((XDCOBJ *)v14);
      }
    }
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v13);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return v1;
}
