/*
 * XREFs of NtGdiUpdateColors @ 0x1C02B1C00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02983D4 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B6BA8 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  int v2; // r15d
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  struct REGION *v8; // rax
  struct ERECTL *v9; // r8
  struct ECLIPOBJ *v10; // rdx
  int updated; // eax
  struct _XLATEOBJ *v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-B8h] BYREF
  RECTL rclBounds; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[80]; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ v17; // [rsp+C0h] [rbp-40h] BYREF

  v1 = 0;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v14) )
  {
    v3 = *(_QWORD *)(v14[0] + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v14, 0);
    if ( (*(_DWORD *)(v3 + 2196) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v14[0] + 512LL);
      if ( v4 == *(_QWORD *)(v3 + 2576) )
      {
        v5 = *(_QWORD *)(v4 + 120);
        v6 = *(_QWORD *)(v14[0] + 96LL);
        if ( (*(_DWORD *)(v14[0] + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v14, (struct ERECTL *)(v14[0] + 1424LL));
        if ( (v16[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v6 + 80) && *(_QWORD *)(v6 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v13, v5, v6);
            if ( v13 )
            {
              v8 = XDCOBJ::prgnEffRao((XDCOBJ *)v14);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v17, v8, v9, 0);
              if ( ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
              {
                v2 = 1;
              }
              else
              {
                if ( (*(_DWORD *)(v14[0] + 36LL) & 0xE0) != 0 )
                {
                  rclBounds = v17.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v14, v10, &rclBounds);
                }
                ++*(_DWORD *)(v4 + 92);
                if ( (*(_DWORD *)(v3 + 56) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v4 + 24), &v17, v13);
                }
                else if ( (*(_DWORD *)(v4 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v3 + 2872))(
                              v4 + 24,
                              v4 + 24,
                              &v17,
                              v13,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v4 + 24,
                              v4 + 24,
                              &v17,
                              v13,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                v2 = updated;
              }
              FreeThreadBufferWithTag(v13, v10);
              v13 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v13, v7);
          }
          else
          {
            v2 = 1;
          }
        }
        else
        {
          v2 = XDCOBJ::bFullScreen((XDCOBJ *)v14);
        }
      }
    }
    v1 = v2;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v14);
  return v1;
}
