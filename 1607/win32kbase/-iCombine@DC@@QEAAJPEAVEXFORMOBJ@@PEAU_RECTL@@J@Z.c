/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0
 * Callers:
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002C700 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00469A0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0046CE0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0046D60 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0047A90 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0047AC0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0083240 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG right; // eax
  LONG left; // edx
  LONG bottom; // eax
  unsigned int v10; // esi
  struct _RECTL *v11; // r9
  __int16 *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r15
  struct _ENTRY *EntryFromObject; // rax
  __int16 *v16; // rcx
  __int16 **v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r12d
  _DWORD *v21; // rdi
  unsigned __int64 v22; // r15
  int v23; // r13d
  DYNAMICMODECHANGESHARELOCK *v24; // rcx
  struct EPOINTL *v25; // rax
  LONG v26; // r12d
  LONG v27; // ebx
  __int16 *v28; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int16 *v31; // [rsp+28h] [rbp-D8h] BYREF
  int v32; // [rsp+30h] [rbp-D0h]
  int v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 *v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h]
  struct _RECTL v36; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  struct _POINTL v40; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v41; // [rsp+F8h] [rbp-8h] BYREF
  LONG v42; // [rsp+100h] [rbp+0h]
  LONG v43; // [rsp+104h] [rbp+4h]
  LONG v44; // [rsp+108h] [rbp+8h]
  LONG v45; // [rsp+10Ch] [rbp+Ch]

  right = a3->right;
  left = a3->left;
  v40.y = a3->top;
  v41.y = v40.y;
  v41.x = right;
  v42 = right;
  bottom = a3->bottom;
  v33[0] = a4;
  v40.x = left;
  v43 = bottom;
  v44 = left;
  v45 = bottom;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v38);
  v10 = 0;
  if ( !v39 )
  {
    EngSetLastError(8u);
    goto LABEL_33;
  }
  if ( (unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v38, a2, &v40)
    && (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v38, a2, &v41, 3)
    && (unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v38) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34, (struct EPATHOBJ *)v38, 1u, v11);
    v12 = v34;
    if ( !v34 )
    {
      EngSetLastError(8u);
      goto LABEL_31;
    }
    *((_DWORD *)this + 9) |= 0x10u;
    v13 = 0;
    v14 = *((_QWORD *)this + 28);
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        this);
    *((_BYTE *)EntryFromObject + 15) |= 4u;
    if ( v14 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
      if ( !v31 )
        goto LABEL_28;
      *(_QWORD *)v33 = v14;
      v13 = RGNOBJ::iCombine((RGNOBJ *)&v31, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v34, a4);
      if ( v13 )
      {
        v16 = v31;
        ++*((_DWORD *)v31 + 8);
        *((_QWORD *)this + 28) = v16;
        if ( (*(_DWORD *)(*(_QWORD *)v33 + 32LL))-- != 1 )
          goto LABEL_28;
        v18 = (__int16 **)v33;
      }
      else
      {
        v18 = &v31;
      }
      RGNOBJ::vDeleteRGNOBJ(v18);
    }
    else
    {
      if ( a4 == 1 )
      {
        ++*((_DWORD *)v12 + 8);
        *((_QWORD *)this + 28) = v12;
        v13 = RGNOBJ::iComplexity((RGNOBJ *)&v34);
LABEL_30:
        v10 = v13;
LABEL_31:
        if ( v35 == 1 )
          RGNOBJ::vDeleteRGNOBJ(&v34);
        goto LABEL_33;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
      if ( v31 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
        if ( !v37[0] )
          goto LABEL_25;
        v19 = *((_QWORD *)this + 66);
        v20 = 0;
        v21 = (_DWORD *)*((_QWORD *)this + 6);
        v22 = HIDWORD(v19);
        v23 = 0;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v30);
          if ( (v21[14] & 0x20000) != 0 )
          {
            v24 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
            if ( (int)v24 < 0 )
            {
              v20 = v21[652];
              LODWORD(v19) = v20 + v19;
              v23 = v21[653];
              LODWORD(v22) = v23 + v22;
            }
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v24);
        }
        v25 = DC::eptlOrigin(this);
        v26 = v20 - *(_DWORD *)v25;
        v27 = v19 - *(_DWORD *)v25;
        LODWORD(v25) = *((_DWORD *)v25 + 1);
        v36.top = v23 - (_DWORD)v25;
        v36.bottom = v22 - (_DWORD)v25;
        v36.left = v26;
        v36.right = v27;
        RGNOBJ::vSet((RGNOBJ *)v37, &v36);
        v13 = RGNOBJ::iCombine((RGNOBJ *)&v31, (struct RGNOBJ *)v37, (struct RGNOBJ *)&v34, v33[0]);
        if ( v13 )
        {
          v28 = v31;
          ++*((_DWORD *)v31 + 8);
          *((_QWORD *)this + 28) = v28;
        }
        else
        {
LABEL_25:
          RGNOBJ::vDeleteRGNOBJ(&v31);
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP(v37);
      }
    }
LABEL_28:
    RGNOBJ::vDeleteRGNOBJ(&v34);
    if ( v32 == 1 )
      RGNOBJ::vDeleteRGNOBJ(&v31);
    goto LABEL_30;
  }
LABEL_33:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v38);
  return v10;
}
