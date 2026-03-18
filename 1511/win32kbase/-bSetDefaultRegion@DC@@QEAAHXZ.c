/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002D860
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00B3320 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  int v1; // eax
  unsigned int v2; // r14d
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  struct REGION *v7; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // rcx
  struct _RECTL v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  struct _RECTL v15; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v1 = *(_DWORD *)this;
  v2 = 0;
  *((_DWORD *)this + 9) |= 0x10u;
  *(_QWORD *)&v15.left = 0LL;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v1 + 15) |= 4u;
  v4 = *((_QWORD *)this + 66);
  v5 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v15.right = v4;
  if ( *((_QWORD *)this + 64) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    if ( (v5[14] & 0x20000) != 0 )
    {
      v6 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
      if ( (int)v6 < 0 )
      {
        v15.left = v5[652];
        v15.right = v4 + v15.left;
        v15.top = v5[653];
        v15.bottom = HIDWORD(v4) + v15.top;
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  v7 = (struct REGION *)*((_QWORD *)this + 189);
  if ( v7 && v7 != prgnDefault )
  {
    v18 = *((_QWORD *)this + 189);
    RGNOBJ::vSet((RGNOBJ *)&v18, &v15);
LABEL_9:
    v10 = *((_QWORD *)this + 189);
    v11 = v15;
    *(_DWORD *)(v10 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = v4;
    v12 = v16;
    *((_QWORD *)this + 176) = 0LL;
    v13 = *(_QWORD *)((char *)this + 916);
    v17 = 0LL;
    v2 = 1;
    *((_QWORD *)this + 194) = v13;
    *((_OWORD *)this + 89) = v12;
    *((struct _RECTL *)this + 87) = v11;
    return v2;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  v8 = v16;
  if ( (_QWORD)v16 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v16, &v15);
    v9 = DWORD2(v16) == 1;
    *((_QWORD *)this + 189) = v8;
    if ( v9 )
      RGNOBJ::vDeleteRGNOBJ((__int16 **)&v16);
    goto LABEL_9;
  }
  v9 = DWORD2(v16) == 1;
  *((_QWORD *)this + 189) = prgnDefault;
  if ( v9 )
    RGNOBJ::vDeleteRGNOBJ((__int16 **)&v16);
  return v2;
}
