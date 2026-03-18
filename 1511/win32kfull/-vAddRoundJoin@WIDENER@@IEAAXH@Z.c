/*
 * XREFs of ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02C7580
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01318E0 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C0131CB4 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0131CD0 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0131D10 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0131F88 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0131FD8 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C0132408 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z @ 0x1C02C6E34 (-cptAddRound@WIDEPENOBJ@@QEAAKAEAVWIDENER@@AEAVLINEDATA@@1HHH@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02C7C34 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02C7C74 (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddRoundJoin(WIDENER *this)
{
  int v2; // eax
  int v3; // r11d
  int v4; // r13d
  int v5; // r12d
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax
  int v9; // ebx
  struct LINEDATA *v10; // r9
  struct LINEDATA *v11; // r8
  WIDEPATHOBJ *v12; // rcx
  int v13; // edi
  _BYTE v14[16]; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+90h] [rbp+40h]
  int v16; // [rsp+90h] [rbp+40h]
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+58h] BYREF

  LOBYTE(v2) = bTurnLeftRandom(
                 (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL),
                 (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL));
  v4 = 0;
  v5 = 0;
  v15 = v2;
  if ( (*((_DWORD *)this + 10) & 0x10) != 0 || v3 )
  {
    v6 = (__int64 *)WIDENER::vecInDraw(this, &v18);
  }
  else
  {
    v4 = 1;
    v5 = 1;
    v6 = WIDENER::vecInPerp(this, &v17);
  }
  v7 = *v6;
  v17 = *v6;
  if ( v5 )
    v8 = WIDENER::vecOutPerp(this, &v18);
  else
    v8 = (__int64 *)WIDENER::vecOutDraw(this, v14);
  v18 = *v8;
  v9 = v18;
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 1152),
    (struct _POINTFIX *)((char *)this + 692),
    (struct EVECTORFX *)&v17,
    0);
  WIDENER::vAddLeft(this, (struct EVECTORFX *)&v17);
  if ( (_DWORD)v7 != v9 || HIDWORD(v17) != HIDWORD(v18) )
  {
    v10 = (struct LINEDATA *)*((_QWORD *)this + 89);
    v11 = (struct LINEDATA *)*((_QWORD *)this + 88);
    if ( v15 )
    {
      v16 = WIDEPENOBJ::cptAddRound((WIDENER *)((char *)this + 824), this, v11, v10, v15, v4, v5);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 992), (struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v18);
        if ( v16 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            0,
            v5,
            v4);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v17);
        v12 = (WIDENER *)((char *)this + 992);
LABEL_19:
        WIDEPATHOBJ::vAddPoint(v12, (struct _POINTFIX *)((char *)this + 692));
      }
    }
    else
    {
      v13 = WIDEPENOBJ::cptAddRound((WIDENER *)((char *)this + 824), this, v11, v10, 0, v4, v5);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1152), (struct _POINTFIX *)((char *)this + 692));
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
      {
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v18,
          0);
        if ( v13 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            this,
            *((struct LINEDATA **)this + 89),
            *((struct LINEDATA **)this + 88),
            1,
            v5,
            v4);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v17,
          0);
        v12 = (WIDENER *)((char *)this + 1152);
        goto LABEL_19;
      }
    }
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1152),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v18,
      0);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v18);
  }
}
