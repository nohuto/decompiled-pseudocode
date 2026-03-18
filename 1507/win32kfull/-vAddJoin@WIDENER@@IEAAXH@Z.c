/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C00CB7F8
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00CB6B0 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C0002794 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C00CA900 (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C00CB9F8 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00CC444 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00CC494 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C01133AC (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C01134C8 (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01136A8 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01136E8 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v2; // eax
  struct EVECTORFX *v4; // rdx
  struct EVECTORFX *v5; // rcx
  int v6; // eax
  int v7; // r14d
  int v8; // r8d
  int v9; // r8d
  WIDEPATHOBJ *v10; // rcx
  int v11; // r8d
  int v12; // eax
  int v13; // r14d
  int v14; // r8d
  int v15; // r8d
  WIDEPATHOBJ *v16; // rcx
  int v17; // r8d
  int v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+64h] [rbp+34h]
  int v20; // [rsp+70h] [rbp+40h] BYREF
  int v21; // [rsp+74h] [rbp+44h]
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v2 = *((_DWORD *)this + 328);
  if ( !v2 || a2 )
  {
    WIDENER::vAddRoundJoin(this);
  }
  else
  {
    v4 = (struct EVECTORFX *)(*((_QWORD *)this + 89) + 48LL);
    v5 = (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL);
    if ( v2 == 1 )
    {
      LOBYTE(v12) = bTurnLeftRandom(v5, v4);
      v13 = v12;
      WIDENER::vecInPerp(this, &v18);
      WIDENER::vecOutPerp(this, &v20);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v18, v14);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1152),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v18,
        0);
      if ( v18 != v20 || v19 != v21 )
      {
        v16 = (WIDENER *)((char *)this + 992);
        if ( !v13 )
          v16 = (WIDENER *)((char *)this + 1152);
        WIDEPATHOBJ::vAddPoint(v16, (struct _POINTFIX *)((char *)this + 692), v15);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v20,
          0);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v20, v17);
      }
    }
    else
    {
      LOBYTE(v6) = bTurnLeftRandom(v5, v4);
      v7 = v6;
      WIDENER::vecInPerp(this, &v18);
      WIDENER::vecOutPerp(this, &v20);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v18, v8);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1152),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v18,
        0);
      if ( v18 != v20 || v19 != v21 )
      {
        if ( (unsigned int)bComputeIntersect(
                             (struct EVECTORFX *)&v18,
                             (struct EVECTORFX *)(*((_QWORD *)this + 88) + 40LL),
                             (struct EVECTORFX *)&v20,
                             (struct EVECTORFX *)(*((_QWORD *)this + 89) + 40LL),
                             (struct EVECTORFX *)&v22)
          && (unsigned int)WIDENER::bMiterInLimit(this, v22) )
        {
          if ( v7 )
            WIDEPATHOBJ::vAddPoint(
              (WIDENER *)((char *)this + 1152),
              (struct _POINTFIX *)((char *)this + 692),
              (struct EVECTORFX *)&v22,
              0);
          else
            WIDENER::vAddLeft(this, (struct EVECTORFX *)&v22, v9);
        }
        v10 = (WIDENER *)((char *)this + 992);
        if ( !v7 )
          v10 = (WIDENER *)((char *)this + 1152);
        WIDEPATHOBJ::vAddPoint(v10, (struct _POINTFIX *)((char *)this + 692), v9);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v20, v11);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 1152),
          (struct _POINTFIX *)((char *)this + 692),
          (struct EVECTORFX *)&v20,
          0);
      }
    }
  }
}
