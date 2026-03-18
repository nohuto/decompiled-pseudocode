/*
 * XREFs of NtGdiUpdateColors @ 0x1C02B4B20
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0297B74 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B9D48 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  int v2; // r15d
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r10
  __int64 v6; // r9
  struct REGION *v7; // rax
  struct ERECTL *v8; // r8
  struct ECLIPOBJ *v9; // rdx
  int updated; // eax
  struct _XLATEOBJ *v12; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL *v13[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[32]; // [rsp+58h] [rbp-A8h] BYREF
  RECTL rclBounds; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v16[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v17[80]; // [rsp+B0h] [rbp-50h] BYREF
  struct _CLIPOBJ v18; // [rsp+100h] [rbp+0h] BYREF

  v1 = 0;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v13) )
  {
    v3 = *(_QWORD *)&v13[0][3].left;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v13, 0);
    if ( (*(_DWORD *)(v3 + 2196) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)&v13[0][32].left;
      if ( v4 == *(_QWORD *)(v3 + 2576) )
      {
        v5 = *(_QWORD *)(v4 + 120);
        v6 = *(_QWORD *)&v13[0][6].left;
        if ( (v13[0][2].top & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v13, (struct ERECTL *)&v13[0][89]);
        if ( (v16[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v6 + 80) && *(_QWORD *)(v6 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v12, v5, v6);
            if ( v12 )
            {
              v7 = XDCOBJ::prgnEffRao((XDCOBJ *)v13);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v18, v7, v8, 0);
              if ( ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
              {
                v2 = 1;
              }
              else
              {
                if ( (v13[0][2].top & 0xE0) != 0 )
                {
                  rclBounds = v18.rclBounds;
                  XDCOBJ::vAccumulateTight(v13, v9, &rclBounds);
                }
                ++*(_DWORD *)(v4 + 92);
                if ( (*(_DWORD *)(v3 + 56) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v4 + 24), &v18, v12);
                }
                else if ( (*(_DWORD *)(v4 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v3 + 2864))(
                              v4 + 24,
                              v4 + 24,
                              &v18,
                              v12,
                              &v18.rclBounds,
                              &v18.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v4 + 24,
                              v4 + 24,
                              &v18,
                              v12,
                              &v18.rclBounds,
                              &v18.rclBounds);
                }
                v2 = updated;
              }
              FreeThreadBufferWithTag(v12);
              v12 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v12);
          }
          else
          {
            v2 = 1;
          }
        }
        else
        {
          v2 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
        }
      }
    }
    v1 = v2;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
    DCOBJ::~DCOBJ((DCOBJ *)v17);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v14);
  return v1;
}
