/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60
 * Callers:
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0025650 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0025860 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0025BB0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0025C30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C003DA74 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003E0B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C004C060 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00690C8 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG right; // eax
  LONG left; // edx
  LONG bottom; // eax
  unsigned int v10; // esi
  struct _RECTL *v11; // r9
  __int16 *v12; // r8
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int16 *v16; // rcx
  __int16 **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  int v22; // r12d
  _DWORD *v23; // rdi
  unsigned __int64 v24; // r15
  int v25; // r13d
  __int64 v26; // rdx
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  __int64 v28; // r8
  struct EPOINTL *v29; // rax
  LONG v30; // r12d
  LONG v31; // ebx
  __int16 *v32; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int16 *v35; // [rsp+28h] [rbp-D8h] BYREF
  int v36; // [rsp+30h] [rbp-D0h]
  int v37[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 *v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h]
  struct _RECTL v40; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v42[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  struct _POINTL v44; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v45; // [rsp+F8h] [rbp-8h] BYREF
  LONG v46; // [rsp+100h] [rbp+0h]
  LONG v47; // [rsp+104h] [rbp+4h]
  LONG v48; // [rsp+108h] [rbp+8h]
  LONG v49; // [rsp+10Ch] [rbp+Ch]

  right = a3->right;
  left = a3->left;
  v44.y = a3->top;
  v45.y = v44.y;
  v45.x = right;
  v46 = right;
  bottom = a3->bottom;
  v37[0] = a4;
  v44.x = left;
  v47 = bottom;
  v48 = left;
  v49 = bottom;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v42);
  v10 = 0;
  if ( !v43 )
  {
    EngSetLastError(8u);
    goto LABEL_33;
  }
  if ( (unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v42, a2, &v44)
    && (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v42, a2, &v45, 3)
    && (unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v42) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v42, 1u, v11);
    v12 = v38;
    if ( !v38 )
    {
      EngSetLastError(8u);
      goto LABEL_31;
    }
    v13 = *(_DWORD *)this;
    v14 = 0;
    *((_DWORD *)this + 9) |= 0x10u;
    v15 = *((_QWORD *)this + 28);
    *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v13 + 15) |= 4u;
    if ( v15 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
      if ( !v35 )
        goto LABEL_28;
      *(_QWORD *)v37 = v15;
      v14 = RGNOBJ::iCombine((RGNOBJ *)&v35, (struct RGNOBJ *)v37, (struct RGNOBJ *)&v38, a4);
      if ( v14 )
      {
        v16 = v35;
        ++*((_DWORD *)v35 + 8);
        *((_QWORD *)this + 28) = v16;
        if ( (*(_DWORD *)(*(_QWORD *)v37 + 32LL))-- != 1 )
          goto LABEL_28;
        v18 = (__int16 **)v37;
      }
      else
      {
        v18 = &v35;
      }
      RGNOBJ::vDeleteRGNOBJ(v18);
    }
    else
    {
      if ( a4 == 1 )
      {
        ++*((_DWORD *)v12 + 8);
        *((_QWORD *)this + 28) = v12;
        v14 = RGNOBJ::iComplexity((RGNOBJ *)&v38);
LABEL_30:
        v10 = v14;
LABEL_31:
        if ( v39 == 1 )
          RGNOBJ::vDeleteRGNOBJ(&v38);
        goto LABEL_33;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
      if ( v35 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v41);
        if ( !v41[0] )
          goto LABEL_25;
        v21 = *((_QWORD *)this + 66);
        v22 = 0;
        v23 = (_DWORD *)*((_QWORD *)this + 6);
        v24 = HIDWORD(v21);
        v25 = 0;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v34, v19, v20);
          if ( (v23[14] & 0x20000) != 0 )
          {
            v27 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
            if ( (int)v27 < 0 )
            {
              v22 = v23[652];
              LODWORD(v21) = v22 + v21;
              v25 = v23[653];
              LODWORD(v24) = v25 + v24;
            }
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27, v26, v28);
        }
        v29 = DC::eptlOrigin(this);
        v30 = v22 - *(_DWORD *)v29;
        v31 = v21 - *(_DWORD *)v29;
        LODWORD(v29) = *((_DWORD *)v29 + 1);
        v40.top = v25 - (_DWORD)v29;
        v40.bottom = v24 - (_DWORD)v29;
        v40.left = v30;
        v40.right = v31;
        RGNOBJ::vSet((RGNOBJ *)v41, &v40);
        v14 = RGNOBJ::iCombine((RGNOBJ *)&v35, (struct RGNOBJ *)v41, (struct RGNOBJ *)&v38, v37[0]);
        if ( v14 )
        {
          v32 = v35;
          ++*((_DWORD *)v35 + 8);
          *((_QWORD *)this + 28) = v32;
        }
        else
        {
LABEL_25:
          RGNOBJ::vDeleteRGNOBJ(&v35);
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP(v41);
      }
    }
LABEL_28:
    RGNOBJ::vDeleteRGNOBJ(&v38);
    if ( v36 == 1 )
      RGNOBJ::vDeleteRGNOBJ(&v35);
    goto LABEL_30;
  }
LABEL_33:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v42);
  return v10;
}
