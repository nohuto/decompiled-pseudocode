/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60
 * Callers:
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001EF08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002C700 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0031640 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0039974 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  __int64 v4; // r12
  unsigned int v8; // esi
  __int64 v9; // rbx
  struct _ENTRY *EntryFromObject; // rax
  int v11; // ebx
  __int64 v12; // rcx
  RGNOBJ *v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // r12d
  _DWORD *v17; // rdi
  unsigned __int64 v18; // r15
  int v19; // r13d
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  struct EPOINTL *v21; // rax
  LONG v22; // r12d
  LONG v23; // ebx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  int v26; // [rsp+28h] [rbp-38h]
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  int v28; // [rsp+38h] [rbp-28h]
  tagRECT v29; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  int v32; // [rsp+B0h] [rbp+50h]

  v32 = a3;
  v4 = *((_QWORD *)this + 28);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 0;
  v25 = 0LL;
  v26 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v25, 0xD8u);
  v9 = v25;
  if ( v25 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v25, a2);
    *((_DWORD *)this + 9) |= 0x10u;
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        this);
    *((_BYTE *)EntryFromObject + 15) |= 4u;
    if ( v4 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
      if ( !v27 )
      {
        v11 = 0;
        goto LABEL_13;
      }
      v31 = v4;
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v27, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v25, a3);
      if ( v11 )
      {
        v12 = v27;
        ++*(_DWORD *)(v27 + 32);
        *((_QWORD *)this + 28) = v12;
        if ( (*(_DWORD *)(v31 + 32))-- != 1 )
        {
LABEL_13:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
          goto LABEL_14;
        }
        v14 = (RGNOBJ *)&v31;
      }
      else
      {
        v14 = (RGNOBJ *)&v27;
      }
      RGNOBJ::vDeleteRGNOBJ(v14);
      goto LABEL_13;
    }
    if ( a3 == 1 )
    {
      ++*(_DWORD *)(v9 + 32);
      *((_QWORD *)this + 28) = v9;
      v11 = 2;
LABEL_16:
      v8 = v11;
      goto LABEL_17;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v30);
    if ( v27 )
    {
      if ( v30[0] )
      {
        v15 = *((_QWORD *)this + 66);
        v16 = 0;
        v17 = (_DWORD *)*((_QWORD *)this + 6);
        v18 = HIDWORD(v15);
        v19 = 0;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
          if ( (v17[14] & 0x20000) != 0 )
          {
            v20 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
            if ( (int)v20 < 0 )
            {
              v16 = v17[652];
              LODWORD(v15) = v16 + v15;
              v19 = v17[653];
              LODWORD(v18) = v19 + v18;
            }
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
        }
        v21 = DC::eptlOrigin(this);
        v22 = v16 - *(_DWORD *)v21;
        v23 = v15 - *(_DWORD *)v21;
        LODWORD(v21) = *((_DWORD *)v21 + 1);
        v29.top = v19 - (_DWORD)v21;
        v29.bottom = v18 - (_DWORD)v21;
        v29.left = v22;
        v29.right = v23;
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v29) && IsRectEmptyInl(&v29) )
        {
          v11 = 0;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)v30, (struct _RECTL *)&v29);
          v11 = RGNOBJ::iCombine((RGNOBJ *)&v27, (struct RGNOBJ *)v30, (struct RGNOBJ *)&v25, v32);
          if ( v11 )
          {
            v24 = v27;
            ++*(_DWORD *)(v27 + 32);
            *((_QWORD *)this + 28) = v24;
LABEL_31:
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v30);
LABEL_14:
            if ( v28 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
            goto LABEL_16;
          }
        }
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
        goto LABEL_31;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
    }
    v11 = 0;
    goto LABEL_31;
  }
LABEL_17:
  if ( v26 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
  return v8;
}
