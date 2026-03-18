/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0052ADC
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x1C0052D14 (GreSfmGetDirtyRgn.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C004A118 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0051714 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSfmGetDirtyRgn(
        struct SFMLOGICALSURFACE *a1,
        __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  unsigned int v13; // edi
  int *v14; // rcx
  __int64 v15; // rax
  struct HOBJ__ *v16; // rax
  struct OBJECT *v17; // rcx
  int *v18; // rax
  struct HOBJ__ *v19; // rax
  struct RGNOBJ *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  HRGN *v24; // r14
  HRGN *v25; // rdi
  struct HOBJ__ *v26; // rax
  struct _POINTL *v27; // rcx
  _BYTE v28[8]; // [rsp+20h] [rbp-30h] BYREF
  struct OBJECT *v29; // [rsp+28h] [rbp-28h] BYREF
  int v30; // [rsp+30h] [rbp-20h]
  _QWORD v31[3]; // [rsp+38h] [rbp-18h] BYREF
  struct OBJECT *v32; // [rsp+80h] [rbp+30h] BYREF

  v13 = -1073741811;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v28, (struct SFMLOGICALSURFACE *)((char *)a1 + 264));
  v14 = a9;
  *a9 = 0;
  if ( *((_QWORD *)a1 + 24) )
  {
    *v14 = *((_DWORD *)a1 + 44);
    if ( *((_DWORD *)a1 + 44) == 1
      && ((v22 = *((_QWORD *)a1 + 24)) == 0 ? (v23 = 0LL) : (v23 = *(_QWORD *)(v22 + 8)), v23 == a2) )
    {
      v24 = a6;
      if ( a6 )
      {
        v25 = a5;
        v32 = (struct OBJECT *)*((_QWORD *)a1 + 21);
        if ( a5 && *((_QWORD *)a1 + 19) )
        {
          a9 = (int *)*((_QWORD *)a1 + 19);
          *v25 = (HRGN)RGNOBJ::hrgnAssociate((struct OBJECT **)&a9);
        }
        EtwTranslationUpdateOffsetDWM(*(_QWORD *)a1, *((unsigned int *)a1 + 40), HIDWORD(*((_QWORD *)a1 + 20)));
        EtwTraceMoveRegion(*(_QWORD *)a1, 0LL, 6LL, *((_QWORD *)a1 + 21));
        v26 = RGNOBJ::hrgnAssociate(&v32);
        v27 = a7;
        *v24 = (HRGN)v26;
        if ( v27 )
          *v27 = *(struct _POINTL *)((char *)a1 + 160);
        METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a1 + 136), 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0LL;
    }
    if ( a8 )
      *a8 = (*((_DWORD *)a1 + 64) >> 6) & 1;
    if ( a3 )
    {
      v15 = *((_QWORD *)a1 + 24);
      if ( v15 )
        v15 = *(_QWORD *)(v15 + 8);
      if ( v15 == a2 )
      {
        a9 = (int *)*((_QWORD *)a1 + 17);
        if ( a9 )
        {
          EtwTraceDWMGetDirtyRegion(*(_QWORD *)a1, 0LL);
          v16 = RGNOBJ::hrgnAssociate((struct OBJECT **)&a9);
          *a3 = (HRGN)v16;
          if ( v16 )
          {
            *((_QWORD *)a1 + 17) = 0LL;
            *((_DWORD *)a1 + 64) &= ~2u;
          }
        }
      }
    }
    if ( !a4 || (*((_DWORD *)a1 + 64) & 0x10) == 0 && a2 )
      goto LABEL_34;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
    v17 = (struct OBJECT *)*((_QWORD *)a1 + 12);
    v18 = (int *)*((_QWORD *)a1 + 11);
    v32 = v17;
    a9 = v18;
    if ( !v29 )
    {
LABEL_32:
      if ( v30 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
LABEL_34:
      v13 = 0;
      goto LABEL_35;
    }
    if ( (v17 != 0LL) == (v18 != 0LL) )
    {
      if ( !v17 )
      {
LABEL_26:
        if ( v18 && (*((_DWORD *)a1 + 64) & 0x40) != 0 )
          RGNOBJ::vSet((RGNOBJ *)&a9);
        goto LABEL_29;
      }
      if ( !v18 )
      {
LABEL_29:
        if ( v29 )
        {
          v19 = RGNOBJ::hrgnAssociate(&v29);
          *a4 = (HRGN)v19;
          if ( v19 )
            *((_DWORD *)a1 + 64) &= ~4u;
          else
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
        }
        goto LABEL_32;
      }
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v31);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v31);
      if ( (*((_DWORD *)a1 + 64) & 8) != 0 )
      {
        if ( v31[0] && RGNOBJ::bMerge((RGNOBJ *)v31, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&a9, BYTE1(gafjRgnOp)) )
          RGNOBJ::vSwap((RGNOBJ *)v31, (struct RGNOBJ *)&v29);
      }
      else
      {
        RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)&v32);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
    }
    else
    {
      if ( v18 )
        v21 = (struct RGNOBJ *)&a9;
      else
        v21 = (struct RGNOBJ *)&v32;
      RGNOBJ::bCopy((RGNOBJ *)&v29, v21);
    }
    v18 = a9;
    goto LABEL_26;
  }
LABEL_35:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v28);
  return v13;
}
