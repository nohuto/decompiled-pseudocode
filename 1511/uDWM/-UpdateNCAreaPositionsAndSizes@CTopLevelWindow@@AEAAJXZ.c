/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180027DF8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x18001AC90 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001E920 (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023E90 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023EDC (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180023F2C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800273A0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180027C14 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  CVisual *v2; // rdi
  int v3; // eax
  CVisual *v4; // rdi
  int v5; // eax
  CVisual *v6; // rdi
  int v7; // eax
  CVisual *v8; // rdi
  int v9; // eax
  CVisual *v10; // rcx
  int v11; // eax
  char v12; // r8
  _DWORD *v13; // r13
  bool v14; // dl
  int v15; // r14d
  LONG v16; // ecx
  int v17; // eax
  int v18; // r14d
  _DWORD *v19; // rax
  int v20; // esi
  int v21; // r15d
  int updated; // eax
  unsigned int v23; // edi
  CVisual *v24; // rcx
  CVisual *v26; // rdi
  LONG *v27; // rdi
  __int64 (__fastcall *v28)(CText *, const struct tagSIZE *); // rsi
  int v29; // eax
  CWindowData *v30; // rcx
  LONG SystemMetrics; // esi
  LONG v32; // eax
  struct tagSIZE *v33; // rdi
  __int64 (__fastcall *v34)(struct tagSIZE *, const struct tagSIZE *); // rsi
  int v35; // eax
  int v36; // ecx
  void (__fastcall *v37)(CVisual *, int); // rsi
  void (__fastcall *v38)(CVisual *, int); // rsi
  void (__fastcall *v39)(CVisual *, int); // rsi
  void (__fastcall *v40)(CVisual *, int); // rsi
  void (__fastcall *v41)(CVisual *, int); // rsi
  int v42; // r9d
  unsigned int v43; // [rsp+20h] [rbp-10h]
  struct tagSIZE v44; // [rsp+70h] [rbp+40h] BYREF
  struct tagSIZE v45; // [rsp+78h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 62) )
  {
    v2 = (CVisual *)*((_QWORD *)this + 70);
    v3 = *((_DWORD *)this + 153);
    if ( *((_DWORD *)v2 + 30) != v3 )
    {
      *((_DWORD *)v2 + 30) = v3;
      v39 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v2 + 24LL);
      if ( v39 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v2, 2);
      else
        v39(v2, 2);
    }
    v4 = (CVisual *)*((_QWORD *)this + 70);
    v5 = *((_DWORD *)this + 155);
    if ( *((_DWORD *)v4 + 32) != v5 )
    {
      *((_DWORD *)v4 + 32) = v5;
      v37 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v4 + 24LL);
      if ( v37 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 2);
      else
        v37(v4, 2);
    }
    v6 = (CVisual *)*((_QWORD *)this + 70);
    v7 = *((_DWORD *)this + 154);
    if ( *((_DWORD *)v6 + 31) != v7 )
    {
      *((_DWORD *)v6 + 31) = v7;
      v40 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v40 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2);
      else
        v40(v6, 2);
    }
    v8 = (CVisual *)*((_QWORD *)this + 70);
    v9 = *((_DWORD *)this + 156);
    if ( *((_DWORD *)v8 + 33) != v9 )
    {
      *((_DWORD *)v8 + 33) = v9;
      v38 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v8 + 24LL);
      if ( v38 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v8, 2);
      else
        v38(v8, 2);
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
  v13 = (_DWORD *)((char *)this + 660);
  v14 = (*((_BYTE *)this + 264) & 4) != 0;
  if ( (*((_BYTE *)this + 264) & 4) == 0 )
    v13 = (_DWORD *)((char *)this + 644);
  v15 = *((_DWORD *)this + 153);
  v16 = v13[1] + 1;
  v17 = v11 - 1;
  if ( v17 > v16 )
    v16 = v17;
  v44.cx = v16;
  if ( v14 )
    v18 = v15 + 2;
  else
    v18 = 2 * v15 - *v13;
  v19 = (_DWORD *)*((_QWORD *)this + 93);
  if ( v12 )
  {
    v20 = v19[195];
  }
  else
  {
    v20 = *((_DWORD *)this + 159) - v13[2];
    if ( v19[24] + v19[170] < v20 )
      v20 = v19[24] + v19[170];
    if ( v20 < 0 )
      v20 = 0;
  }
  v21 = v13[2];
  if ( v12 )
  {
    if ( *((_DWORD *)this + 155) - v20 - 2 > v21 )
      v21 = *((_DWORD *)this + 155) - v20 - 2;
  }
  else if ( v14 && *((_DWORD *)this + 167) > *((_DWORD *)this + 163) )
  {
    if ( --v20 < 0 )
      v20 = 0;
  }
  else
  {
    ++v21;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 3, v20, v21, &v44);
  v23 = updated;
  if ( updated < 0 )
  {
    v43 = 3195;
LABEL_82:
    v42 = updated;
    goto LABEL_83;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 2, v20, v21, &v44);
  v23 = updated;
  if ( updated < 0 )
  {
    v43 = 3196;
    goto LABEL_82;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 1, v20, v21, &v44);
  v23 = updated;
  if ( updated < 0 )
  {
    v43 = 3197;
    goto LABEL_82;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 0, v20, v21, &v44);
  v23 = updated;
  if ( updated < 0 )
  {
    v43 = 3198;
    goto LABEL_82;
  }
  if ( *((_QWORD *)this + 68) )
  {
    v30 = (CWindowData *)*((_QWORD *)this + 93);
    if ( *((_QWORD *)v30 + 17) || (*((_DWORD *)this + 152) & 0x10000) == 0 )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(v30, 49);
      v32 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 50);
    }
    else
    {
      v32 = 0;
      SystemMetrics = 0;
    }
    v33 = (struct tagSIZE *)*((_QWORD *)this + 68);
    v45.cy = v32;
    v45.cx = SystemMetrics;
    v34 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v33 + 80LL);
    if ( v34 == CVisual::SetSize )
      v35 = CVisual::SetSize(v33, &v45);
    else
      v35 = v34(v33, &v45);
    v23 = v35;
    if ( v35 < 0 )
    {
      v43 = 3215;
      goto LABEL_78;
    }
    CVisual::SetInsetFromParentTop(
      *((CVisual **)this + 68),
      v13[2] + (*((_DWORD *)this + 155) - *(_DWORD *)(*((_QWORD *)this + 68) + 116LL) - v13[2]) / 2);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 68), v18);
    v36 = *(_DWORD *)(*((_QWORD *)this + 68) + 112LL);
    if ( v36 > 0 )
      v18 += v36 + 5;
  }
  v24 = (CVisual *)*((_QWORD *)this + 67);
  if ( v24 )
  {
    CVisual::SetInsetFromParentTop(v24, v13[2]);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 67), v18);
    v26 = (CVisual *)*((_QWORD *)this + 67);
    if ( *((_DWORD *)v26 + 31) != v44.cx )
    {
      *((_DWORD *)v26 + 31) = v44.cx;
      v41 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v26 + 24LL);
      if ( v41 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v26, 2);
      else
        v41(v26, 2);
    }
    v27 = (LONG *)*((_QWORD *)this + 67);
    v44.cx = v27[28];
    v44.cy = *((_DWORD *)this + 155) - v13[2];
    v28 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)v27 + 80LL);
    v29 = v28 == CText::SetSize ? CText::SetSize((CText *)v27, &v44) : v28((CText *)v27, &v44);
    v23 = v29;
    if ( v29 < 0 )
    {
      v43 = 3277;
LABEL_78:
      v42 = v23;
LABEL_83:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, v43);
      return v23;
    }
  }
  updated = CTopLevelWindow::UpdatePinnedParts(this);
  v23 = updated;
  if ( updated < 0 )
  {
    v43 = 3280;
    goto LABEL_82;
  }
  return v23;
}
