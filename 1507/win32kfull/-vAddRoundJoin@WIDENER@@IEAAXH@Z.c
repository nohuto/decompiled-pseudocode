/*
 * XREFs of ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0002754 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C00028F0 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C0002930 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C00CA900 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C00CB9F8 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00CC444 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00CC494 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01136A8 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01136E8 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddRoundJoin(WIDENER *this)
{
  int v2; // r13d
  int v3; // r12d
  int v4; // r11d
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  int v8; // ebx
  struct LINEDATA *v9; // r9
  struct LINEDATA *v10; // r8
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  WIDEPATHOBJ *v16; // rcx
  unsigned int v17; // edi
  int v18; // r8d
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+90h] [rbp+40h]
  int v21; // [rsp+90h] [rbp+40h]
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v20 = bTurnLeftRandom(
          (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL),
          (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL));
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || v4 )
  {
    v5 = (__int64 *)WIDENER::vecInDraw(this, &v23);
  }
  else
  {
    v2 = 1;
    v3 = 1;
    v5 = (__int64 *)WIDENER::vecInPerp(this, &v22);
  }
  v6 = *v5;
  v22 = *v5;
  if ( v3 )
    v7 = (__int64 *)WIDENER::vecOutPerp(this, &v23);
  else
    v7 = WIDENER::vecOutDraw(this, &v19);
  v23 = *v7;
  v8 = v23;
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 1152),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v22,
    0);
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 992),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v22,
    1);
  if ( (_DWORD)v6 != v8 || HIDWORD(v22) != HIDWORD(v23) )
  {
    v9 = (struct LINEDATA *)*((_QWORD *)this + 89);
    v10 = (struct LINEDATA *)*((_QWORD *)this + 88);
    if ( v20 )
    {
      v21 = WIDEPENOBJ::cptAddRound((WIDENER *)((char *)this + 824), this, v10, v9, v20, v2, v3);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692), v11);
      if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      {
LABEL_9:
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v23,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v23, v13);
        return;
      }
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v23, v12);
      if ( v21 )
        WIDEPENOBJ::cptAddRound(
          (WIDENER *)((char *)this + 824),
          this,
          *((struct LINEDATA **)this + 89),
          *((struct LINEDATA **)this + 88),
          0,
          v3,
          v2);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v22, v14);
      v16 = (WIDENER *)((char *)this + 992);
    }
    else
    {
      v17 = WIDEPENOBJ::cptAddRound((WIDENER *)((char *)this + 824), this, v10, v9, 0, v2, v3);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1152), (struct _POINTFIX *)((char *)this + 692), v18);
      if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
        goto LABEL_9;
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1152),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v23,
        0);
      if ( v17 )
        WIDEPENOBJ::cptAddRound(
          (WIDENER *)((char *)this + 824),
          this,
          *((struct LINEDATA **)this + 89),
          *((struct LINEDATA **)this + 88),
          1,
          v3,
          v2);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1152),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v22,
        0);
      v16 = (WIDENER *)((char *)this + 1152);
    }
    WIDEPATHOBJ::vAddPoint(v16, (struct _POINTFIX *)((char *)this + 692), v15);
    goto LABEL_9;
  }
}
