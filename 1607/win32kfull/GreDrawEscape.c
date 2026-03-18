/*
 * XREFs of GreDrawEscape @ 0x1C02672B8
 * Callers:
 *     NtGdiDrawEscape @ 0x1C02A7190 (NtGdiDrawEscape.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0265078 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0267010 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD); // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  struct REGION *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[80]; // [rsp+90h] [rbp-70h] BYREF
  struct _RECTL v23; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v24[6]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v25[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v26[156]; // [rsp+124h] [rbp+24h] BYREF

  v7 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0]
    && *(_QWORD *)(v19[0] + 512LL)
    && (*(_DWORD *)(*(_QWORD *)(v19[0] + 80LL) + 8LL) & 0x4000) == 0
    && (a2 != 8 || a3 >= 4) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v19, 0);
    v8 = *(_QWORD *)(v19[0] + 48LL);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v8 + 2912);
    if ( v9 )
    {
      if ( a2 == 8 )
      {
        v10 = *(_QWORD *)(v19[0] + 512LL);
        v11 = 0LL;
        if ( v10 )
          v11 = v10 + 24;
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200000) == 0 )
          goto LABEL_29;
        v12 = *(_QWORD *)(v19[0] + 512LL);
        if ( v12 )
          v7 = v12 + 24;
        v13 = v9(v7, 8LL, 0LL);
      }
      else
      {
        if ( (v21[24] & 1) != 0 )
        {
          v23 = *(struct _RECTL *)(v19[0] + 1424LL);
          v14 = XDCOBJ::prgnEffRao((XDCOBJ *)v19);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v25, v14, (struct ERECTL *)&v23, 0);
          if ( ERECTL::bEmpty((ERECTL *)v26) )
          {
            LODWORD(v7) = 1;
          }
          else
          {
            v15 = *(_QWORD *)(v19[0] + 512LL);
            if ( v15 )
              v16 = v15 + 24;
            else
              v16 = 0LL;
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200000) != 0 )
            {
              if ( (*(_DWORD *)(v8 + 56) & 1) != 0 )
              {
                GreAcquireSemaphore(ghsemSprite);
                EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
              }
              v24[4] = 0LL;
              DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v24, (struct XDCOBJ *)v19, &v23);
              ++*(_DWORD *)(*(_QWORD *)(v19[0] + 512LL) + 92LL);
              v17 = *(_QWORD *)(v19[0] + 512LL);
              if ( v17 )
                v7 = v17 + 24;
              LODWORD(v7) = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, struct _RECTL *, unsigned int, __int64))v9)(
                              v7,
                              a2,
                              v25,
                              &v23,
                              a3,
                              a4);
              DEVEXCLUDERECT::~DEVEXCLUDERECT(v24);
              if ( (*(_DWORD *)(v8 + 56) & 1) != 0 )
              {
                EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
                GreReleaseSemaphoreInternal(ghsemSprite);
              }
            }
          }
          goto LABEL_29;
        }
        v13 = XDCOBJ::bFullScreen((XDCOBJ *)v19);
      }
      LODWORD(v7) = v13;
    }
LABEL_29:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    DCOBJ::~DCOBJ((DCOBJ *)v22);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v19);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v20);
  return (unsigned int)v7;
}
