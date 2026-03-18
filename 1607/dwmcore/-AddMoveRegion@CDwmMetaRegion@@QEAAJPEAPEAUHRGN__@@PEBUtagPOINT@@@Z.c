/*
 * XREFs of ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18013051C
 * Callers:
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18013044C (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801403AC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800B19EC (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x180130C44 (-CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ.c)
 *     ?SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z @ 0x18013196C (-SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddMoveRegion(CDwmMetaRegion *this, HRGN *a2, const struct tagPOINT *a3)
{
  HRGN RectRgn; // rbp
  HRGN v6; // rdx
  HRGN v7; // r15
  HRGN v8; // r12
  HRGN v9; // r13
  signed int v10; // ebx
  signed int LastError; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  signed int v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  int v20; // r8d
  signed int v21; // eax
  int v22; // edx
  unsigned int v23; // ecx
  int v24; // r8d
  signed int v25; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // r8d
  int v29; // eax
  signed int v30; // eax
  int v31; // edx
  unsigned int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  HRGN v35; // rsi
  signed int v36; // eax
  int v37; // edx
  unsigned int v38; // ecx
  int v39; // r8d
  signed int v40; // eax
  int v41; // edx
  unsigned int v42; // ecx
  int v43; // r8d
  signed int v44; // eax
  int v45; // edx
  unsigned int v46; // ecx
  int v47; // r8d
  signed int v48; // eax
  int v49; // edx
  unsigned int v50; // ecx
  int v51; // r8d
  signed int v52; // eax
  int v53; // edx
  unsigned int v54; // ecx
  int v55; // r8d
  signed int v56; // eax
  int v57; // edx
  unsigned int v58; // ecx
  int v59; // r8d
  signed int v60; // eax
  int v61; // edx
  unsigned int v62; // ecx
  int v63; // r8d
  int v64; // eax
  signed int v65; // eax
  int v66; // edx
  unsigned int v67; // ecx
  int v68; // r8d
  CDwmMetaRegion *v69; // rcx
  int v70; // eax
  unsigned int v72; // [rsp+20h] [rbp-48h]
  HRGN hrgnDst; // [rsp+78h] [rbp+10h]
  HRGN ho; // [rsp+88h] [rbp+20h]

  RectRgn = 0LL;
  ho = 0LL;
  v6 = *a2;
  v7 = 0LL;
  hrgnDst = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( v6 && a3 && *((_BYTE *)this + 40) )
  {
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( !RectRgn )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v14, v13, v15);
      v72 = 164;
LABEL_10:
      v16 = v10;
      goto LABEL_95;
    }
    SetLastError(0);
    if ( !CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
    {
      v17 = GetLastError();
      v10 = v17;
      if ( v17 > 0 )
        v10 = (unsigned __int16)v17 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v19, v18, v20);
      v72 = 168;
      goto LABEL_10;
    }
    OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
    SetLastError(0);
    v7 = CreateRectRgn(0, 0, 0, 0);
    if ( !v7 )
    {
      v21 = GetLastError();
      v10 = v21;
      if ( v21 > 0 )
        v10 = (unsigned __int16)v21 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v23, v22, v24);
      v72 = 175;
      goto LABEL_10;
    }
    SetLastError(0);
    if ( !CombineRgn(v7, v7, *a2, 2) )
    {
      v25 = GetLastError();
      v10 = v25;
      if ( v25 > 0 )
        v10 = (unsigned __int16)v25 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v27, v26, v28);
      v72 = 179;
      goto LABEL_10;
    }
    SetLastError(0);
    v29 = CombineRgn(v7, v7, RectRgn, 1);
    if ( !v29 )
    {
      v30 = GetLastError();
      v10 = v30;
      if ( v30 > 0 )
        v10 = (unsigned __int16)v30 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v32, v31, v33);
      v72 = 184;
      goto LABEL_10;
    }
    if ( v29 != 1 )
    {
      OffsetRgn(v7, -*((_DWORD *)this + 4), -*((_DWORD *)this + 5));
      CDwmMetaRegion::SetMoveRegion(this, v7);
      v7 = 0LL;
      *((_DWORD *)this + 4) += a3->x;
      *((_DWORD *)this + 5) += a3->y;
      goto LABEL_40;
    }
    CDwmMetaRegion::SetMoveRegion(this, *a2);
    *a2 = 0LL;
    v34 = (__int64)*a3;
  }
  else
  {
    CDwmMetaRegion::SetMoveRegion(this, v6);
    *a2 = 0LL;
    v34 = (__int64)*a3;
    *((_BYTE *)this + 40) = 1;
  }
  *((_QWORD *)this + 2) = v34;
LABEL_40:
  if ( *((_BYTE *)this + 40) != 1 )
    goto LABEL_98;
  v35 = (HRGN)*((_QWORD *)this + 1);
  if ( !v35 )
  {
    if ( !*(_QWORD *)this )
      goto LABEL_98;
    v35 = *(HRGN *)this;
  }
  SetLastError(0);
  v9 = CreateRectRgn(0, 0, 0, 0);
  if ( !v9 )
  {
    v36 = GetLastError();
    v10 = v36;
    if ( v36 > 0 )
      v10 = (unsigned __int16)v36 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v38, v37, v39);
    v72 = 237;
    goto LABEL_10;
  }
  SetLastError(0);
  hrgnDst = CreateRectRgn(0, 0, 0, 0);
  if ( !hrgnDst )
  {
    v40 = GetLastError();
    v10 = v40;
    if ( v40 > 0 )
      v10 = (unsigned __int16)v40 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v42, v41, v43);
    v72 = 238;
    goto LABEL_10;
  }
  SetLastError(0);
  ho = CreateRectRgn(0, 0, 0, 0);
  if ( !ho )
  {
    v44 = GetLastError();
    v10 = v44;
    if ( v44 > 0 )
      v10 = (unsigned __int16)v44 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v46, v45, v47);
    v72 = 240;
    goto LABEL_10;
  }
  SetLastError(0);
  if ( !CombineRgn(ho, ho, *((HRGN *)this + 3), 2) )
  {
    v48 = GetLastError();
    v10 = v48;
    if ( v48 > 0 )
      v10 = (unsigned __int16)v48 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v50, v49, v51);
    v72 = 244;
    goto LABEL_10;
  }
  SetLastError(0);
  v8 = CreateRectRgn(0, 0, 0, 0);
  if ( !v8 )
  {
    v52 = GetLastError();
    v10 = v52;
    if ( v52 > 0 )
      v10 = (unsigned __int16)v52 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v54, v53, v55);
    v72 = 246;
    goto LABEL_10;
  }
  SetLastError(0);
  if ( !CombineRgn(v8, v8, *((HRGN *)this + 3), 2) )
  {
    v56 = GetLastError();
    v10 = v56;
    if ( v56 > 0 )
      v10 = (unsigned __int16)v56 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v58, v57, v59);
    v72 = 250;
    goto LABEL_10;
  }
  OffsetRgn(v8, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
  SetLastError(0);
  if ( !CombineRgn(v9, ho, v8, 2) )
  {
    v60 = GetLastError();
    v10 = v60;
    if ( v60 > 0 )
      v10 = (unsigned __int16)v60 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v62, v61, v63);
    v72 = 257;
    goto LABEL_10;
  }
  SetLastError(0);
  v64 = CombineRgn(hrgnDst, v9, v35, 1);
  if ( !v64 )
  {
    v65 = GetLastError();
    v10 = v65;
    if ( v65 > 0 )
      v10 = (unsigned __int16)v65 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v67, v66, v68);
    v72 = 263;
    goto LABEL_10;
  }
  v69 = this;
  if ( v64 != 1 )
    goto LABEL_97;
  v70 = CDwmMetaRegion::CalculateNoMoveDirty(this);
  v10 = v70;
  if ( v70 >= 0 )
    goto LABEL_98;
  v72 = 274;
  v16 = v70;
LABEL_95:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v72);
  if ( v10 >= 0 )
    goto LABEL_98;
  v69 = this;
LABEL_97:
  CDwmMetaRegion::ClearMoveData(v69);
LABEL_98:
  if ( v7 )
    DeleteObject(v7);
  if ( RectRgn )
    DeleteObject(RectRgn);
  if ( ho )
    DeleteObject(ho);
  if ( v8 )
    DeleteObject(v8);
  if ( hrgnDst )
    DeleteObject(hrgnDst);
  if ( v9 )
    DeleteObject(v9);
  return (unsigned int)v10;
}
