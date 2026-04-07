/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180025004
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180017D80 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001B4CC (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800245E0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180024E40 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  CVisual *v3; // rcx
  CVisual *v4; // rcx
  int v5; // eax
  CVisual *v6; // rcx
  int v7; // eax
  CVisual *v8; // rcx
  int v9; // eax
  CVisual *v10; // rcx
  int v11; // eax
  char v12; // r8
  char *v13; // rcx
  bool v14; // dl
  __int128 v15; // xmm0
  int v16; // r14d
  __int64 v17; // r9
  LONG v18; // ecx
  int v19; // eax
  int v20; // r14d
  _DWORD *v21; // rax
  LONG v22; // esi
  int v23; // r15d
  int updated; // eax
  unsigned int v25; // edi
  CVisual *v26; // rcx
  CWindowData *v28; // rcx
  LONG SystemMetrics; // edi
  LONG v30; // eax
  struct tagSIZE *v31; // rcx
  __int64 (__fastcall *v32)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v33; // eax
  int v34; // ecx
  CVisual *v35; // rcx
  LONG *v36; // rcx
  __int64 (__fastcall *v37)(CText *, const struct tagSIZE *); // rax
  int v38; // eax
  void (__fastcall *v39)(CVisual *, int); // rax
  void (__fastcall *v40)(CVisual *, int); // rax
  void (__fastcall *v41)(CVisual *, int); // rax
  void (__fastcall *v42)(CVisual *, int); // rax
  void (__fastcall *v43)(CVisual *, int); // rax
  int v44; // r9d
  unsigned int v45; // [rsp+20h] [rbp-20h]
  struct tagSIZE v46; // [rsp+80h] [rbp+40h] BYREF
  struct tagSIZE v47; // [rsp+88h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 62) )
  {
    v2 = *((_DWORD *)this + 153);
    v3 = (CVisual *)*((_QWORD *)this + 70);
    if ( *((_DWORD *)v3 + 30) != v2 )
    {
      *((_DWORD *)v3 + 30) = v2;
      v41 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v41 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 2);
      else
        v41(v3, 2);
    }
    v4 = (CVisual *)*((_QWORD *)this + 70);
    v5 = *((_DWORD *)this + 155);
    if ( *((_DWORD *)v4 + 32) != v5 )
    {
      *((_DWORD *)v4 + 32) = v5;
      v39 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v4 + 24LL);
      if ( v39 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 2);
      else
        v39(v4, 2);
    }
    v6 = (CVisual *)*((_QWORD *)this + 70);
    v7 = *((_DWORD *)this + 154);
    if ( *((_DWORD *)v6 + 31) != v7 )
    {
      *((_DWORD *)v6 + 31) = v7;
      v42 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v42 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2);
      else
        v42(v6, 2);
    }
    v8 = (CVisual *)*((_QWORD *)this + 70);
    v9 = *((_DWORD *)this + 156);
    if ( *((_DWORD *)v8 + 33) != v9 )
    {
      *((_DWORD *)v8 + 33) = v9;
      v40 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v8 + 24LL);
      if ( v40 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v8, 2);
      else
        v40(v8, 2);
    }
    v10 = (CVisual *)*((_QWORD *)this + 39);
    if ( v10 )
      CVisual::SetInsetFromParent(v10, (const struct _MARGINS *)(*((_QWORD *)this + 70) + 120LL));
  }
  v11 = *((_DWORD *)this + 154);
  if ( v11 <= 0 )
    v11 = *(_DWORD *)(*((_QWORD *)this + 93) + 96LL);
  if ( (*((_BYTE *)this + 608) & 2) != 0 )
  {
    v12 = 1;
    ++v11;
  }
  else
  {
    v12 = 0;
  }
  v13 = (char *)this + 660;
  v14 = (*((_BYTE *)this + 264) & 4) != 0;
  if ( (*((_BYTE *)this + 264) & 4) == 0 )
    v13 = (char *)this + 644;
  v15 = *(_OWORD *)v13;
  v16 = *((_DWORD *)this + 153);
  v17 = *(_QWORD *)v13;
  v18 = HIDWORD(*(_QWORD *)v13) + 1;
  v19 = v11 - 1;
  if ( v19 > v18 )
    v18 = v19;
  v46.cx = v18;
  if ( v14 )
    v20 = v16 + 2;
  else
    v20 = 2 * v16 - v17;
  v21 = (_DWORD *)*((_QWORD *)this + 93);
  if ( v12 )
  {
    v22 = v21[197];
  }
  else
  {
    v22 = *((_DWORD *)this + 159) - DWORD2(v15);
    if ( v21[24] + v21[172] < v22 )
      v22 = v21[24] + v21[172];
    if ( v22 < 0 )
    {
      v22 = 0;
      v23 = DWORD2(v15);
      goto LABEL_23;
    }
  }
  v23 = DWORD2(v15);
  if ( !v12 )
  {
LABEL_23:
    if ( v14 && *((_DWORD *)this + 167) > *((_DWORD *)this + 163) )
    {
      if ( --v22 < 0 )
        v22 = 0;
    }
    else
    {
      v23 = DWORD2(v15) + 1;
    }
    goto LABEL_25;
  }
  if ( *((_DWORD *)this + 155) - v22 - 2 > SDWORD2(v15) )
    v23 = *((_DWORD *)this + 155) - v22 - 2;
LABEL_25:
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 3, v22, v23, &v46);
  v25 = updated;
  if ( updated < 0 )
  {
    v45 = 2728;
LABEL_82:
    v44 = updated;
    goto LABEL_83;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 2, v22, v23, &v46);
  v25 = updated;
  if ( updated < 0 )
  {
    v45 = 2729;
    goto LABEL_82;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 1, v22, v23, &v46);
  v25 = updated;
  if ( updated < 0 )
  {
    v45 = 2730;
    goto LABEL_82;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 0, v22, v23, &v46);
  v25 = updated;
  if ( updated < 0 )
  {
    v45 = 2731;
    goto LABEL_82;
  }
  if ( *((_QWORD *)this + 68) )
  {
    v28 = (CWindowData *)*((_QWORD *)this + 93);
    if ( *((_QWORD *)v28 + 17) || (*((_DWORD *)this + 152) & 0x10000) == 0 )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(v28, 49);
      v30 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 50);
    }
    else
    {
      v30 = 0;
      SystemMetrics = 0;
    }
    v31 = (struct tagSIZE *)*((_QWORD *)this + 68);
    v47.cy = v30;
    v47.cx = SystemMetrics;
    v32 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v31 + 80LL);
    if ( v32 == CVisual::SetSize )
      v33 = CVisual::SetSize(v31, &v47);
    else
      v33 = v32(v31, &v47);
    v25 = v33;
    if ( v33 < 0 )
    {
      v45 = 2748;
      goto LABEL_78;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 68),
      (*((_DWORD *)this + 155) - *(_DWORD *)(*((_QWORD *)this + 68) + 116LL) - DWORD2(v15)) / 2 + DWORD2(v15));
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 68), v20);
    v34 = *(_DWORD *)(*((_QWORD *)this + 68) + 112LL);
    if ( v34 > 0 )
      v20 += v34 + 5;
  }
  v26 = (CVisual *)*((_QWORD *)this + 67);
  if ( v26 )
  {
    CVisual::SetInsetFromParentTop(v26, SDWORD2(v15));
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 67), v20);
    v35 = (CVisual *)*((_QWORD *)this + 67);
    if ( *((_DWORD *)v35 + 31) != v46.cx )
    {
      *((_DWORD *)v35 + 31) = v46.cx;
      v43 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v35 + 24LL);
      if ( v43 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v35, 2);
      else
        v43(v35, 2);
    }
    v36 = (LONG *)*((_QWORD *)this + 67);
    v46.cx = v36[28];
    v46.cy = *((_DWORD *)this + 155) - DWORD2(v15);
    v37 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)v36 + 80LL);
    v38 = v37 == CText::SetSize ? CText::SetSize((CText *)v36, &v46) : v37((CText *)v36, &v46);
    v25 = v38;
    if ( v38 < 0 )
    {
      v45 = 2768;
LABEL_78:
      v44 = v25;
LABEL_83:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, v45);
      return v25;
    }
  }
  updated = CTopLevelWindow::UpdatePinnedParts(this);
  v25 = updated;
  if ( updated < 0 )
  {
    v45 = 2771;
    goto LABEL_82;
  }
  return v25;
}
