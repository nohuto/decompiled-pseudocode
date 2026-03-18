/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02896C0
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C028A950 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0032018 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     vStringBitmapTextOut @ 0x1C028A1E8 (vStringBitmapTextOut.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029A2B8 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02B981C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  int eXY_low; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  bool v16; // zf
  int v17; // esi
  __int64 v18; // rbx
  FLOATL eXY; // r8d
  int v20; // ecx
  __int64 v21; // rax
  __int64 *v22; // rax
  int v24; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+30h] [rbp-D0h]
  void *v26; // [rsp+38h] [rbp-C8h]
  struct _FD_XFORM *v27; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v34[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B4h] [rbp-4Ch]
  int v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-30h]
  __int64 *v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+178h] [rbp+78h]
  int v44; // [rsp+190h] [rbp+90h]

  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  if ( !v31[0] )
  {
    EngSetLastError(6u);
LABEL_4:
    v7 = 0;
    goto LABEL_34;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v33, (struct XDCOBJ *)v31, 0x204u);
  if ( (*(_BYTE *)(v33 + 32) & 0x43) != 0x43 )
    goto LABEL_4;
  if ( (unsigned int)RFONTOBJ::bInit(&v27, (struct XDCOBJ *)v31, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v27[33].eXX);
  if ( !v27
    || (LODWORD(v27[4].eYX) & 2) != 0
    || (eXY_low = LODWORD(v27[24].eXY), eXY_low | *(_DWORD *)(v31[0] + 2172LL)) )
  {
    v7 = 0;
  }
  else
  {
    v41 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)v34, a2, eXY_low, (struct XDCOBJ *)v31, (struct RFONTOBJ *)&v27, v24, v25, v26);
    if ( (v41 & 4) != 0 )
    {
      v9 = v42;
      v11 = v37 - v35;
      v12 = *(_QWORD *)(v42 + 24LL * (unsigned int)(v34[0] - 1) + 8);
      v13 = v36
          + (*(int *)(*(_QWORD *)(v42 + 8) + 16LL) >> 4)
          + ((*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 20)) >> 4)
          - v34[3];
      v14 = (unsigned int)(v13 + 7) >> 3;
      v15 = (v37 - v35) * v14;
      v7 = v15 + 8;
      if ( a5 >= v15 + 8 )
      {
        memset((char *)a4 + 8, 0, v15);
        v16 = (v41 & 0x1400) == 0;
        *((_DWORD *)a4 + 1) = v11;
        v17 = 0;
        *(_DWORD *)a4 = v13;
        v18 = 0LL;
        v28 = 0LL;
        if ( !v16 )
        {
          v17 = *v43;
          if ( *v43 )
          {
            if ( v17 == 1 )
            {
              v18 = *(_QWORD *)&v27[45].eYX;
            }
            else if ( v17 == 2 )
            {
              v18 = *(_QWORD *)&v27[46].eXX;
            }
            else
            {
              v18 = v17 == 3
                  ? *(_QWORD *)&v27[46].eYX
                  : *(_QWORD *)(*(_QWORD *)&v27[47].eXX + 8LL * (unsigned int)(v17 - 4));
            }
            if ( v18 )
            {
              eXY = v27[19].eXY;
              v20 = *(_DWORD *)(v18 + 312);
              if ( SLODWORD(eXY) < *(_DWORD *)(v18 + 308) - v20 )
                v20 = *(_DWORD *)(v18 + 308) - LODWORD(eXY);
              v21 = v38;
              v28.y = v20 >> 4;
              v30 = 0LL;
              if ( v20 >> 4 )
                v21 = 0LL;
              v38 = v21;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
            }
          }
        }
        v44 = v17;
        v22 = &v29;
        v39 = 0;
        if ( !v18 )
          v22 = v40;
        v40 = v22;
        v29 = v18;
        ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v34, &v28);
        vStringBitmapTextOut(v34, a4, v14);
        v29 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
      }
    }
    else
    {
      v7 = 0;
    }
    ESTROBJ::~ESTROBJ((ESTROBJ *)v34, v9, v10);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
LABEL_34:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v31);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v32);
  return v7;
}
