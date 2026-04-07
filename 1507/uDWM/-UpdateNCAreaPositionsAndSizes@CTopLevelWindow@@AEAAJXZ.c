/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180022530
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180015DD0 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001906C (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18001C9C0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180021AD0 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180022344 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  bool v13; // dl
  _DWORD *v14; // r14
  int v15; // edi
  LONG v16; // ecx
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // rax
  LONG v20; // r12d
  int v21; // ebp
  int v22; // esi
  int updated; // eax
  unsigned int v24; // r15d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  CWindowData *v29; // rcx
  LONG SystemMetrics; // ebp
  struct tagSIZE *v31; // rsi
  __int64 (__fastcall *v32)(struct tagSIZE *, const struct tagSIZE *); // rbp
  int v33; // eax
  CVisual *v34; // rsi
  int v35; // eax
  CVisual *v36; // rsi
  int v37; // ecx
  CVisual *v38; // rsi
  int v39; // eax
  CVisual *v40; // rsi
  CVisual *v41; // rdi
  LONG *v42; // rdi
  __int64 (__fastcall *v43)(CText *, const struct tagSIZE *); // rsi
  int v44; // eax
  unsigned int v45; // edi
  int v46; // eax
  unsigned int v47; // ebx
  void (__fastcall *v49)(CVisual *, int); // rsi
  void (__fastcall *v50)(CVisual *, int); // rsi
  void (__fastcall *v51)(CVisual *, int); // rbp
  void (__fastcall *v52)(CVisual *, int); // rsi
  void (__fastcall *v53)(CVisual *, int); // rsi
  __int64 v54; // rax
  void (__fastcall *v55)(CVisual *, int); // rdi
  __int64 v56; // rax
  void (__fastcall *v57)(CVisual *, int); // rbp
  void (__fastcall *v58)(CVisual *, int); // rbp
  void (__fastcall *v59)(CVisual *, int); // rsi
  struct tagSIZE v60; // [rsp+70h] [rbp+8h] BYREF
  struct tagSIZE v61; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 62) )
  {
    v2 = (CVisual *)*((_QWORD *)this + 70);
    v3 = *((_DWORD *)this + 153);
    if ( *((_DWORD *)v2 + 30) != v3 )
    {
      *((_DWORD *)v2 + 30) = v3;
      v52 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v2 + 24LL);
      if ( v52 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v2, 2);
      else
        v52(v2, 2);
    }
    v4 = (CVisual *)*((_QWORD *)this + 70);
    v5 = *((_DWORD *)this + 155);
    if ( *((_DWORD *)v4 + 32) != v5 )
    {
      *((_DWORD *)v4 + 32) = v5;
      v49 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v4 + 24LL);
      if ( v49 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v4, 2);
      else
        v49(v4, 2);
    }
    v6 = (CVisual *)*((_QWORD *)this + 70);
    v7 = *((_DWORD *)this + 154);
    if ( *((_DWORD *)v6 + 31) != v7 )
    {
      *((_DWORD *)v6 + 31) = v7;
      v53 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v53 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v6, 2);
      else
        v53(v6, 2);
    }
    v8 = (CVisual *)*((_QWORD *)this + 70);
    v9 = *((_DWORD *)this + 156);
    if ( *((_DWORD *)v8 + 33) != v9 )
    {
      *((_DWORD *)v8 + 33) = v9;
      v50 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v8 + 24LL);
      if ( v50 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v8, 2);
      else
        v50(v8, 2);
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
  v13 = (*((_BYTE *)this + 264) & 4) != 0;
  if ( (*((_BYTE *)this + 264) & 4) != 0 )
    v14 = (_DWORD *)((char *)this + 660);
  else
    v14 = (_DWORD *)((char *)this + 644);
  v15 = *((_DWORD *)this + 153);
  v16 = v14[1] + 1;
  v17 = v11 - 1;
  if ( v17 > v16 )
    v16 = v17;
  v60.cx = v16;
  if ( v13 )
    v18 = v15 + 2;
  else
    v18 = 2 * v15 - *v14;
  v19 = (_DWORD *)*((_QWORD *)this + 93);
  v20 = 0;
  if ( v12 )
  {
    v21 = v19[193];
  }
  else
  {
    v21 = *((_DWORD *)this + 159) - v14[2];
    if ( v19[24] + v19[168] < v21 )
      v21 = v19[24] + v19[168];
    if ( v21 < 0 )
      v21 = 0;
  }
  v22 = v14[2];
  if ( v12 )
  {
    if ( *((_DWORD *)this + 155) - v21 - 2 > v22 )
      v22 = *((_DWORD *)this + 155) - v21 - 2;
  }
  else if ( v13 && *((_DWORD *)this + 167) > *((_DWORD *)this + 163) )
  {
    if ( --v21 < 0 )
      v21 = 0;
  }
  else
  {
    ++v22;
  }
  updated = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 3, v21, v22, &v60);
  v24 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xC1Eu);
    return v24;
  }
  v25 = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 2, v21, v22, &v60);
  v24 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xC1Fu);
    return v24;
  }
  v26 = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 1, v21, v22, &v60);
  v24 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xC20u);
    return v24;
  }
  v27 = CTopLevelWindow::UpdateNCAreaButton((__int64)this, 0, v21, v22, &v60);
  v28 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0xC21u);
    return v28;
  }
  if ( *((_QWORD *)this + 68) )
  {
    v29 = (CWindowData *)*((_QWORD *)this + 93);
    if ( *((_QWORD *)v29 + 17) || (*((_DWORD *)this + 152) & 0x10000) == 0 )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(v29, 49);
      v20 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 50);
    }
    else
    {
      SystemMetrics = 0;
    }
    v31 = (struct tagSIZE *)*((_QWORD *)this + 68);
    v61.cx = SystemMetrics;
    v61.cy = v20;
    v32 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v31 + 80LL);
    if ( v32 == CVisual::SetSize )
      v33 = CVisual::SetSize(v31, &v61);
    else
      v33 = v32(v31, &v61);
    v28 = v33;
    if ( v33 >= 0 )
    {
      v34 = (CVisual *)*((_QWORD *)this + 68);
      v35 = v14[2] + (*((_DWORD *)this + 155) - *((_DWORD *)v34 + 29) - v14[2]) / 2;
      if ( *((_DWORD *)v34 + 32) != v35 )
      {
        *((_DWORD *)v34 + 32) = v35;
        v51 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v34 + 24LL);
        if ( v51 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v34, 2);
        else
          v51(v34, 2);
      }
      v36 = (CVisual *)*((_QWORD *)this + 68);
      if ( *((_DWORD *)v36 + 30) != v18 )
      {
        v56 = *(_QWORD *)v36;
        *((_DWORD *)v36 + 30) = v18;
        v57 = *(void (__fastcall **)(CVisual *, int))(v56 + 24);
        if ( v57 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v36, 2);
        else
          v57(v36, 2);
      }
      v37 = *(_DWORD *)(*((_QWORD *)this + 68) + 112LL);
      if ( v37 > 0 )
        v18 += v37 + 5;
      goto LABEL_40;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0xC32u);
    return v28;
  }
LABEL_40:
  v38 = (CVisual *)*((_QWORD *)this + 67);
  if ( !v38 )
    goto LABEL_47;
  v39 = v14[2];
  if ( *((_DWORD *)v38 + 32) != v39 )
  {
    *((_DWORD *)v38 + 32) = v39;
    v58 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v38 + 24LL);
    if ( v58 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v38, 2);
    else
      v58(v38, 2);
  }
  v40 = (CVisual *)*((_QWORD *)this + 67);
  if ( *((_DWORD *)v40 + 30) != v18 )
  {
    v54 = *(_QWORD *)v40;
    *((_DWORD *)v40 + 30) = v18;
    v55 = *(void (__fastcall **)(CVisual *, int))(v54 + 24);
    if ( v55 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v40, 2);
    else
      v55(v40, 2);
  }
  v41 = (CVisual *)*((_QWORD *)this + 67);
  if ( *((_DWORD *)v41 + 31) != v60.cx )
  {
    *((_DWORD *)v41 + 31) = v60.cx;
    v59 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v41 + 24LL);
    if ( v59 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v41, 2);
    else
      v59(v41, 2);
  }
  v42 = (LONG *)*((_QWORD *)this + 67);
  v60.cx = v42[28];
  v60.cy = *((_DWORD *)this + 155) - v14[2];
  v43 = *(__int64 (__fastcall **)(CText *, const struct tagSIZE *))(*(_QWORD *)v42 + 80LL);
  v44 = v43 == CText::SetSize ? CText::SetSize((CText *)v42, &v60) : v43((CText *)v42, &v60);
  v45 = v44;
  if ( v44 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0xC70u);
    return v45;
  }
  else
  {
LABEL_47:
    v46 = CTopLevelWindow::UpdatePinnedParts(this);
    v47 = v46;
    if ( v46 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0xC73u);
    return v47;
  }
}
