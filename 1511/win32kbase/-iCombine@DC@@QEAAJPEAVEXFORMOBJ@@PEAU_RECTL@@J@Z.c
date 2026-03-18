/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550
 * Callers:
 *     GreIntersectClipRect @ 0x1C0014D20 (GreIntersectClipRect.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C002AE80 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002D734 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C006F530 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C006F620 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C006F970 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C006F9F0 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG right; // eax
  LONG left; // edx
  LONG bottom; // eax
  unsigned int v10; // esi
  __int16 *v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int16 *v15; // rcx
  __int16 **v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  int v21; // r12d
  _DWORD *v22; // rdi
  unsigned __int64 v23; // r15
  int v24; // r13d
  __int64 v25; // rdx
  DYNAMICMODECHANGESHARELOCK *v26; // rcx
  __int64 v27; // r8
  struct EPOINTL *v28; // rax
  LONG v29; // r12d
  LONG v30; // ebx
  __int16 *v31; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int16 *v34; // [rsp+28h] [rbp-D8h] BYREF
  int v35; // [rsp+30h] [rbp-D0h]
  int v36[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 *v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h]
  struct _RECTL v39; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v41[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  struct _POINTL v43; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v44; // [rsp+F8h] [rbp-8h] BYREF
  LONG v45; // [rsp+100h] [rbp+0h]
  LONG v46; // [rsp+104h] [rbp+4h]
  LONG v47; // [rsp+108h] [rbp+8h]
  LONG v48; // [rsp+10Ch] [rbp+Ch]

  right = a3->right;
  left = a3->left;
  v43.y = a3->top;
  v44.y = v43.y;
  v44.x = right;
  v45 = right;
  bottom = a3->bottom;
  v36[0] = a4;
  v43.x = left;
  v46 = bottom;
  v47 = left;
  v48 = bottom;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
  v10 = 0;
  if ( !v42 )
  {
    EngSetLastError(8u);
    goto LABEL_33;
  }
  if ( (unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v41, a2, &v43)
    && (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v41, a2, &v44, 3)
    && (unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v41) )
  {
    v38 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v41, 1u, 0LL);
    v11 = v37;
    if ( !v37 )
    {
      EngSetLastError(8u);
      goto LABEL_31;
    }
    v12 = *(_DWORD *)this;
    v13 = 0;
    *((_DWORD *)this + 9) |= 0x10u;
    v14 = *((_QWORD *)this + 28);
    *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v12 + 15) |= 4u;
    if ( v14 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
      if ( !v34 )
        goto LABEL_28;
      *(_QWORD *)v36 = v14;
      v13 = RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)v36, (struct RGNOBJ *)&v37, a4);
      if ( v13 )
      {
        v15 = v34;
        ++*((_DWORD *)v34 + 8);
        *((_QWORD *)this + 28) = v15;
        if ( (*(_DWORD *)(*(_QWORD *)v36 + 32LL))-- != 1 )
          goto LABEL_28;
        v17 = (__int16 **)v36;
      }
      else
      {
        v17 = &v34;
      }
      RGNOBJ::vDeleteRGNOBJ(v17);
    }
    else
    {
      if ( a4 == 1 )
      {
        ++*((_DWORD *)v11 + 8);
        *((_QWORD *)this + 28) = v11;
        v13 = RGNOBJ::iComplexity((RGNOBJ *)&v37);
LABEL_30:
        v10 = v13;
LABEL_31:
        if ( v38 == 1 )
          RGNOBJ::vDeleteRGNOBJ(&v37);
        goto LABEL_33;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
      if ( v34 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v40);
        if ( !v40[0] )
          goto LABEL_25;
        v20 = *((_QWORD *)this + 66);
        v21 = 0;
        v22 = (_DWORD *)*((_QWORD *)this + 6);
        v23 = HIDWORD(v20);
        v24 = 0;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33, v18, v19);
          if ( (v22[14] & 0x20000) != 0 )
          {
            v26 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
            if ( (int)v26 < 0 )
            {
              v21 = v22[652];
              LODWORD(v20) = v21 + v20;
              v24 = v22[653];
              LODWORD(v23) = v24 + v23;
            }
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v26, v25, v27);
        }
        v28 = DC::eptlOrigin(this);
        v29 = v21 - *(_DWORD *)v28;
        v30 = v20 - *(_DWORD *)v28;
        LODWORD(v28) = *((_DWORD *)v28 + 1);
        v39.top = v24 - (_DWORD)v28;
        v39.bottom = v23 - (_DWORD)v28;
        v39.left = v29;
        v39.right = v30;
        RGNOBJ::vSet((RGNOBJ *)v40, &v39);
        v13 = RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)v40, (struct RGNOBJ *)&v37, v36[0]);
        if ( v13 )
        {
          v31 = v34;
          ++*((_DWORD *)v34 + 8);
          *((_QWORD *)this + 28) = v31;
        }
        else
        {
LABEL_25:
          RGNOBJ::vDeleteRGNOBJ(&v34);
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP(v40);
      }
    }
LABEL_28:
    RGNOBJ::vDeleteRGNOBJ(&v37);
    if ( v35 == 1 )
      RGNOBJ::vDeleteRGNOBJ(&v34);
    goto LABEL_30;
  }
LABEL_33:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
  return v10;
}
