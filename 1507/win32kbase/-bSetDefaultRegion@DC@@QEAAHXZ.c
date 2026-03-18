/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00AF760 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C004BEAC (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00AF674 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  int v1; // eax
  LONG left; // r14d
  LONG top; // r15d
  unsigned __int64 v5; // rdi
  unsigned int *v6; // rbx
  unsigned __int64 v7; // kr00_8
  __int64 v8; // rdx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  LONG v13; // r12d
  unsigned int v14; // eax
  struct REGION *v15; // rax
  __int64 v16; // rbx
  bool v17; // zf
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _RECTL v21; // xmm0
  struct _RECTL v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+38h] [rbp-20h]
  __int128 v25; // [rsp+40h] [rbp-18h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp+60h]

  v1 = *(_DWORD *)this;
  left = 0;
  *((_DWORD *)this + 9) |= 0x10u;
  top = 0;
  *(_QWORD *)&v22.left = 0LL;
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v1 + 15) |= 4u;
  v5 = *((_QWORD *)this + 66);
  v6 = (unsigned int *)*((_QWORD *)this + 6);
  v7 = v5;
  v27 = v5;
  v29 = HIDWORD(v5);
  *(_QWORD *)&v22.right = v5;
  if ( *((_QWORD *)this + 64) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
      (DYNAMICMODECHANGESHARELOCK *)&v26,
      (unsigned __int16)v1,
      3LL * (unsigned __int16)v1);
    v11 = v6[14];
    if ( (v11 & 0x8000) != 0 )
    {
      v9 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)this + 64);
      v8 = *((unsigned int *)v9 + 14);
      if ( (int)v8 < (int)v5 || *((_DWORD *)v9 + 15) < SHIDWORD(v27) )
      {
        DWORD2(v25) = *((_DWORD *)v9 + 14);
        *(_QWORD *)&v25 = 0LL;
        HIDWORD(v25) = *((_DWORD *)v9 + 15);
        ERECTL::operator*=(&v22, &v25, v11, v10);
        top = v22.top;
        left = v22.left;
        v7 = *(_QWORD *)&v22.right;
      }
    }
    if ( (v11 & 0x20000) != 0 )
    {
      v9 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
      if ( (int)v9 < 0 )
      {
        v12 = v6[652];
        v13 = v12 + v7;
        v22.left = v12 + left;
        v14 = v6[653];
        v22.right = v13;
        v22.bottom = v14 + HIDWORD(v7);
        v22.top = v14 + top;
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9, v8, v11);
  }
  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v27, this);
  v15 = (struct REGION *)*((_QWORD *)this + 192);
  if ( v15 && v15 != prgnDefault )
  {
    v28 = *((_QWORD *)this + 192);
    RGNOBJ::vSet((RGNOBJ *)&v28, &v22);
LABEL_19:
    v19 = *((_QWORD *)this + 192);
    *(_DWORD *)(v19 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v27);
    v20 = *(_QWORD *)((char *)this + 916);
    *(_QWORD *)&v25 = 0LL;
    *((_QWORD *)&v25 + 1) = __PAIR64__(v29, v5);
    *((_OWORD *)this + 89) = v25;
    *((_QWORD *)this + 176) = 0LL;
    result = 1LL;
    v21 = v22;
    *((_QWORD *)this + 197) = v20;
    *((struct _RECTL *)this + 87) = v21;
    return result;
  }
  v23 = 0LL;
  v24 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v23, 0xD8u);
  v16 = v23;
  if ( v23 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v23, &v22);
    v17 = v24 == 1;
    *((_QWORD *)this + 192) = v16;
    if ( v17 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    goto LABEL_19;
  }
  v17 = v24 == 1;
  *((_QWORD *)this + 192) = prgnDefault;
  if ( v17 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v27);
  return 0LL;
}
