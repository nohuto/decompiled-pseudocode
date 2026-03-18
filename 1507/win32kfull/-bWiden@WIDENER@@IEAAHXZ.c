/*
 * XREFs of ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00CB6B0
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CB4A8 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C00CB9B0 (-bValid@WIDENER@@QEAAHXZ.c)
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C00CBC4C (-vNextEvent@LINER@@QEAAXXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C00CC2F4 (-vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C00CC3A0 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00CC3EC (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?efNextStyleLength@STYLER@@IEAA?AVEFLOAT@@XZ @ 0x1C02C7FE4 (-efNextStyleLength@STYLER@@IEAA-AVEFLOAT@@XZ.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02C801C (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 *     ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02C809C (-ptfxFraction@@YA-AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C02C815C (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C02C84B4 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02C8700 (-vPrependBeforeFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02C8764 (-vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall WIDENER::bWiden(WIDENER *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  WIDEPATHOBJ *v8; // rbx
  char v9; // r10
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  float v14; // xmm0_4
  int v15; // eax
  char *v16; // rdx
  WIDENER *v17; // rcx
  float v18; // xmm0_4
  __int64 v19; // r8
  int v20; // xmm0_4
  _DWORD *StyleLength; // rax
  __int64 v22; // r8
  int v23; // xmm0_4
  __int64 v24; // rax
  struct WIDEPATHOBJ *v25; // r10
  char v26[4]; // [rsp+20h] [rbp-28h] BYREF
  char v27; // [rsp+24h] [rbp-24h] BYREF
  char v28; // [rsp+50h] [rbp+8h] BYREF
  char v29; // [rsp+58h] [rbp+10h] BYREF
  char v30; // [rsp+60h] [rbp+18h] BYREF
  char v31; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v2 = *((_DWORD *)this + 10);
        if ( (v2 & 2) == 0 )
        {
          LINER::vNextEvent(this);
          goto LABEL_3;
        }
        if ( (v2 & 4) != 0 )
        {
          if ( *((_DWORD *)this + 172) == 5 )
          {
            while ( 1 )
            {
              v18 = *((float *)this + 187);
              if ( v18 < *((float *)this + 186) )
              {
                *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
                *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
                *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                              *(struct _POINTFIX *)((char *)this + 760),
                                                              *((struct LINEDATA **)this + 89),
                                                              (WIDENER *)((char *)this + 752),
                                                              (WIDENER *)((char *)this + 756));
                *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v29);
                *((_DWORD *)this + 172) = 6;
                goto LABEL_3;
              }
              *((float *)this + 187) = v18 - *((float *)this + 186);
              LINER::vNextEvent(this);
              if ( (unsigned int)(*((_DWORD *)this + 172) - 3) > 1 )
                break;
              v19 = *((_QWORD *)this + 89);
              *((_DWORD *)this + 188) = FP_0_0;
              v20 = *(_DWORD *)STYLER::efWorldLength(this, &v28, *(_QWORD *)(v19 + 40));
              *((_QWORD *)this + 95) = *(_QWORD *)((char *)this + 692);
              *((_DWORD *)this + 189) = v20;
              *((_DWORD *)this + 186) = v20;
            }
            if ( *((_DWORD *)this + 172) == 1 )
              LINER::vNextEvent(this);
            *((_DWORD *)this + 10) &= ~4u;
            *((_DWORD *)this + 172) = 8;
            goto LABEL_3;
          }
          v14 = *((float *)this + 187);
          if ( v14 <= *((float *)this + 186) )
          {
            *((float *)this + 186) = *((float *)this + 186) - *((float *)this + 187);
            *((float *)this + 188) = *((float *)this + 187) + *((float *)this + 188);
            *(struct _POINTFIX *)((char *)this + 692) = ptfxFraction(
                                                          *(struct _POINTFIX *)((char *)this + 760),
                                                          *((struct LINEDATA **)this + 89),
                                                          (WIDENER *)((char *)this + 752),
                                                          (WIDENER *)((char *)this + 756));
            *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
            *((_DWORD *)this + 187) = *(_DWORD *)STYLER::efNextStyleLength(this, &v30);
            *((_DWORD *)this + 172) = 5;
            goto LABEL_3;
          }
          *((float *)this + 187) = v14 - *((float *)this + 186);
        }
        LINER::vNextEvent(this);
        v15 = *((_DWORD *)this + 172);
        if ( v15 )
        {
          if ( (unsigned int)(v15 - 3) > 1 )
          {
            *((_DWORD *)this + 10) &= ~4u;
            goto LABEL_3;
          }
          v16 = &v31;
          v17 = this;
        }
        else
        {
          *((_QWORD *)this + 91) = *((_QWORD *)this + 90);
          StyleLength = (_DWORD *)STYLER::efNextStyleLength(this, v26);
          v16 = &v27;
          *((_DWORD *)this + 187) = *StyleLength;
        }
        v22 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 188) = FP_0_0;
        v23 = *(_DWORD *)STYLER::efWorldLength(v17, v16, *(_QWORD *)(v22 + 40));
        v24 = *(_QWORD *)((char *)this + 692);
        *((_DWORD *)this + 10) |= 4u;
        *((_QWORD *)this + 95) = v24;
        *((_DWORD *)this + 186) = v23;
        *((_DWORD *)this + 189) = v23;
LABEL_3:
        v3 = *((_DWORD *)this + 172);
        if ( v3 > 5 )
          break;
        if ( v3 == 5 )
          goto LABEL_47;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( !v6 )
              {
                v7 = 0;
                goto LABEL_10;
              }
              if ( v6 == 1 )
              {
                v7 = 1;
LABEL_10:
                WIDENER::vAddJoin(this, v7);
              }
            }
            else
            {
              WIDENER::vAddJoin(this, 0);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 992));
              v8 = (WIDENER *)((char *)this + 1152);
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
              if ( (v9 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
                  return 0LL;
                WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), (WIDENER *)((char *)this + 992));
LABEL_14:
                WIDEPATHOBJ::vEndFigure(v8);
                goto LABEL_15;
              }
              if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
                return 0LL;
              WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), (WIDENER *)((char *)this + 992));
              WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
              WIDEPATHOBJ::vPrependBeforeSubpath((WIDENER *)((char *)this + 1152));
              WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1152));
LABEL_15:
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 1) + 40LL) + 16LL) |= 8u;
            }
          }
          else
          {
LABEL_47:
            WIDENER::vAddEndCap(this);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 992));
            if ( !(unsigned int)WIDENER::bValid(this) )
              return 0LL;
            WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 1152), v25);
            WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 145) + 40LL) + 16LL) |= 8u;
            *((_DWORD *)this + 10) |= 8u;
          }
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 992))
            || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
          {
            return 0LL;
          }
          *((_DWORD *)this + 10) &= ~8u;
          *((_QWORD *)this + 163) = *(_QWORD *)(*((_QWORD *)this + 145) + 40LL);
        }
      }
      v10 = v3 - 6;
      if ( !v10 )
        break;
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            return WIDENER::bValid(this);
        }
        else
        {
          if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
            return 0LL;
          WIDENER::vAddStartCap(this);
          WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 1152));
          WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 1152));
        }
      }
      else if ( !*((_DWORD *)this + 329) )
      {
        v8 = (WIDENER *)((char *)this + 1152);
        if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
          return 0LL;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
        goto LABEL_14;
      }
    }
    if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 992))
      || !(unsigned int)WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 1152)) )
    {
      return 0LL;
    }
    WIDENER::vAddStartCap(this);
  }
}
