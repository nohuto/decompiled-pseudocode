/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00BD7D0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C003998C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  unsigned int v1; // eax
  PVOID DeferredContext; // r13
  unsigned int v4; // edi
  __int64 v5; // r15
  unsigned int v6; // edx
  signed int v7; // ecx
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // r12
  unsigned int v11; // edx
  signed int v12; // ecx
  __int64 v13; // r8
  DC *v14; // rdx
  LONG left; // r15d
  LONG top; // r12d
  unsigned __int64 v17; // rdi
  _DWORD *v18; // rbx
  LONG right; // r13d
  bool v20; // zf
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  LONG v25; // r13d
  int v26; // eax
  struct REGION *v27; // rax
  __int64 Object; // rax
  __int64 v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 result; // rax
  struct _RECTL v34; // xmm0
  struct _RECTL v35; // [rsp+20h] [rbp-38h] BYREF
  __int128 v36; // [rsp+30h] [rbp-28h] BYREF
  __int64 v37; // [rsp+40h] [rbp-18h] BYREF
  int v38; // [rsp+48h] [rbp-10h]
  __int64 v39; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp+60h]

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v1,
                                  1)
           + 13) == ((unsigned __int16)v1 | (v1 >> 8) & 0xFF0000) >> 16 )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v1;
    }
  }
  v5 = *((_QWORD *)DeferredContext + 2);
  v6 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v6 + ((*(unsigned __int16 *)(v5 + 2) - 1) << 16) )
    goto LABEL_16;
  if ( v4 < v6 )
  {
    v7 = 0;
    goto LABEL_10;
  }
  v7 = ((v4 - v6) >> 16) + 1;
  if ( (v4 - v6) >> 16 == -2 )
  {
LABEL_16:
    v10 = 0LL;
    goto LABEL_17;
  }
LABEL_10:
  v8 = *(_QWORD *)(v5 + 8LL * v7 + 8);
  if ( v7 )
    v9 = v4 - ((v7 - 1) << 16) - v6;
  else
    v9 = v4;
  v10 = 0LL;
  if ( v9 < *(_DWORD *)(v8 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8) )
  {
    v10 = *(_QWORD *)v8 + 24LL * v9;
  }
LABEL_17:
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v11 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v11 + ((*(unsigned __int16 *)(v5 + 2) - 1) << 16) )
    goto LABEL_30;
  if ( v4 >= v11 )
  {
    v12 = ((v4 - v11) >> 16) + 1;
    if ( (v4 - v11) >> 16 == -2 )
      goto LABEL_30;
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)(v5 + 8LL * v12 + 8);
  if ( v12 )
    v4 = v4 - ((v12 - 1) << 16) - v11;
  if ( v4 < *(_DWORD *)(v13 + 20) )
  {
    v14 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                 + 16LL * (unsigned __int8)v4
                 + 8);
    goto LABEL_31;
  }
LABEL_30:
  v14 = 0LL;
LABEL_31:
  *(_QWORD *)&v35.left = 0LL;
  left = 0;
  if ( v14 != this )
    v10 = 0LL;
  *(_BYTE *)(v10 + 15) |= 4u;
  top = 0;
  v17 = *((_QWORD *)this + 66);
  v18 = (_DWORD *)*((_QWORD *)this + 6);
  right = v17;
  v20 = *((_QWORD *)this + 64) == 0LL;
  v40 = v17;
  v42 = HIDWORD(v17);
  *(_QWORD *)&v35.right = v17;
  if ( !v20 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
    v22 = v18[14];
    if ( (v22 & 0x8000) != 0 )
    {
      v21 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)this + 64);
      if ( *((_DWORD *)v21 + 14) < (int)v17 || *((_DWORD *)v21 + 15) < SHIDWORD(v40) )
      {
        v23 = *((_DWORD *)v21 + 15);
        DWORD2(v36) = *((_DWORD *)v21 + 14);
        *(_QWORD *)&v36 = 0LL;
        HIDWORD(v36) = v23;
        ERECTL::operator*=(&v35, &v36);
        right = v35.right;
        top = v35.top;
        left = v35.left;
      }
    }
    if ( (v22 & 0x20000) != 0 )
    {
      v21 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
      if ( (int)v21 < 0 )
      {
        v24 = v18[652];
        v25 = v24 + right;
        v35.left = v24 + left;
        v26 = v18[653];
        v35.bottom += v26;
        v35.top = v26 + top;
        v35.right = v25;
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  }
  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v40, this);
  v27 = (struct REGION *)*((_QWORD *)this + 192);
  if ( v27 && v27 != prgnDefault )
  {
    v41 = *((_QWORD *)this + 192);
    RGNOBJ::vSet((RGNOBJ *)&v41, &v35);
LABEL_47:
    v31 = *((_QWORD *)this + 192);
    *(_DWORD *)(v31 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v40);
    v32 = *(_QWORD *)((char *)this + 916);
    *(_QWORD *)&v36 = 0LL;
    *((_QWORD *)&v36 + 1) = __PAIR64__(v42, v17);
    v39 = 0LL;
    *((_OWORD *)this + 89) = v36;
    *((_QWORD *)this + 176) = 0LL;
    result = 1LL;
    v34 = v35;
    *((_QWORD *)this + 197) = v32;
    *((struct _RECTL *)this + 87) = v34;
    return result;
  }
  v38 = 0;
  Object = AllocateObject(0xD8uLL);
  v37 = Object;
  v29 = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_QWORD *)(Object + 24) = 216LL;
    *(_QWORD *)(Object + 32) = 0LL;
    v30 = (_QWORD *)(Object + 48);
    v30[1] = v30;
    *v30 = v30;
    RGNOBJ::vSet((RGNOBJ *)&v37, &v35);
    *((_QWORD *)this + 192) = v29;
    goto LABEL_47;
  }
  *((_QWORD *)this + 192) = prgnDefault;
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v40);
  return 0LL;
}
