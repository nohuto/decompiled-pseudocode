/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B60B0
 * Callers:
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B62C8 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C028B130 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029ACDC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B62DC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  __int64 cGlyphs; // r8
  __int64 v4; // rax
  struct RFONTOBJ *v6; // rsi
  WCHAR *pwszOrg; // r15
  ULONG v9; // edi
  unsigned __int64 v10; // r8
  int v11; // r12d
  struct RFONTOBJ *v12; // rcx
  GLYPHPOS *pgp; // rdx
  int v14; // eax
  struct XDCOBJ *v15; // rax
  _DWORD *v16; // r9
  WCHAR *v17; // r14
  WCHAR *v18; // r10
  unsigned __int64 v19; // r8
  ULONG v20; // edx
  unsigned __int64 v21; // r11
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+60h] [rbp+40h]
  struct XDCOBJ *v24; // [rsp+70h] [rbp+50h] BYREF
  struct _POINTL v25; // [rsp+78h] [rbp+58h] BYREF

  v24 = a3;
  cGlyphs = pstro->cGlyphs;
  v4 = *(_QWORD *)&pstro[4].rclBkGround.bottom;
  v6 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  v9 = 0;
  pstro->pgp = 0LL;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v10 = v4 + 4 * cGlyphs;
  v23 = v10;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 848LL) + 4;
  if ( v11 <= 0 )
  {
LABEL_35:
    pstro->pwszOrg = pwszOrg;
    result = 1LL;
    *(_QWORD *)&pstro[1].ulCharInc = v6;
    return result;
  }
  while ( 1 )
  {
    v24 = 0LL;
    *(_QWORD *)&pstro[1].ulCharInc = v6;
    if ( v9 )
    {
      switch ( v9 )
      {
        case 1u:
          if ( !pstro[5].rclBkGround.left )
            goto LABEL_33;
          v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 728LL);
          break;
        case 2u:
          if ( !pstro[5].rclBkGround.top )
            goto LABEL_33;
          v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 736LL);
          break;
        case 3u:
          if ( !pstro[5].rclBkGround.right )
            goto LABEL_33;
          v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 744LL);
          break;
        default:
          pgp = pstro[5].pgp;
          if ( pgp )
            v14 = *((_DWORD *)pgp + v9 - 4);
          else
            v14 = 0;
          if ( !v14 )
            goto LABEL_33;
          v15 = *(struct XDCOBJ **)(*(_QWORD *)(*(_QWORD *)v6 + 752LL) + 8LL * (v9 - 4));
          break;
      }
      if ( !v15 )
        goto LABEL_32;
      v24 = v15;
      v12 = (struct RFONTOBJ *)&v24;
    }
    else
    {
      v12 = v6;
    }
    v16 = *(_DWORD **)&pstro[4].rclBkGround.bottom;
    v17 = *(WCHAR **)&pstro[4].rclBkGround.top;
    v18 = pwszOrg;
    v19 = (v10 - (unsigned __int64)v16 + 3) >> 2;
    v20 = 0;
    v21 = 0LL;
    if ( (unsigned __int64)v16 > v23 )
      v19 = 0LL;
    if ( v19 )
    {
      do
      {
        if ( *v16 == v9 )
        {
          *v17++ = *v18;
          ++v20;
        }
        ++v18;
        ++v16;
        ++v21;
      }
      while ( v21 < v19 );
      if ( v20 )
      {
        pstro->pwszOrg = *(LPWSTR *)&pstro[4].rclBkGround.top;
        pstro->cGlyphs = v20;
        *(_QWORD *)&pstro[1].ulCharInc = v12;
        pstro[5].cGlyphs = v9;
        pstro[1].cGlyphs = 0;
        if ( v9 )
        {
          if ( (unsigned int)bAdjusBaseLine(v12, (struct RFONTOBJ *)&v24, &v25) )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v25);
        }
        if ( !(unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, a2) )
          break;
      }
    }
LABEL_33:
    v24 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    if ( (int)++v9 >= v11 )
      goto LABEL_35;
    v10 = v23;
  }
  pstro->pwszOrg = pwszOrg;
  *(_QWORD *)&pstro[1].ulCharInc = v6;
LABEL_32:
  v24 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  return 0LL;
}
