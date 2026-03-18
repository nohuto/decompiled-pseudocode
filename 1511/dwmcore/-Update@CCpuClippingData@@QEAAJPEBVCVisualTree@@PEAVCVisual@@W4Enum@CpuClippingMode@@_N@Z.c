/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180035E70
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800095BC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800674F4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCpuClippingData::Update(int *a1, __int64 a2, _QWORD *a3, int a4, char a5)
{
  bool v7; // r13
  int v8; // r10d
  bool v9; // r12
  char v10; // r15
  _QWORD *v11; // r14
  char *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v17; // r13
  bool v18; // r8
  int v19; // edx
  unsigned __int64 v20; // rcx
  int v21; // edx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  _QWORD *v24; // r8
  unsigned __int64 v25; // rax
  int v26; // eax
  void *(__fastcall *v27)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  void *v28; // rax
  void *(__fastcall *v29)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  void *v30; // rax
  CVisual *v31; // r11
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r13
  struct CTreeData *TreeData; // rax
  __int64 v35; // r11
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // [rsp+70h] [rbp+8h]
  unsigned __int64 v40; // [rsp+70h] [rbp+8h]
  __int64 v41; // [rsp+78h] [rbp+10h]
  bool v42; // [rsp+88h] [rbp+20h]

  v7 = a4 == 2;
  v8 = *a1;
  v42 = a4 == 2;
  v9 = *a1 == 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( *(_QWORD **)(a2 + 24) == a3 )
    goto LABEL_59;
  v13 = a3[8];
  v14 = 0LL;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v14 = (_QWORD *)(v13 + 432);
  }
  else
  {
    v24 = *(_QWORD **)(v13 + 416);
    if ( v24 != (_QWORD *)(v13 + 416) )
    {
      while ( v24[4] != a2 )
      {
        v24 = (_QWORD *)*v24;
        if ( v24 == (_QWORD *)(v13 + 416) )
          goto LABEL_4;
      }
      v14 = v24 - 33;
    }
  }
LABEL_4:
  v11 = v14 + 23;
  v12 = (char *)(v14 + 23);
  if ( *((_DWORD *)v14 + 46) == 5 )
  {
LABEL_59:
    if ( a4 <= 3 )
      a4 = 3;
  }
  else if ( a4 < 3 )
  {
    v15 = (__int64 *)a3[43];
    if ( v15 )
    {
      v41 = *v15;
      if ( *v15 )
      {
        v31 = (CVisual *)a3[8];
        v32 = 0LL;
        v33 = 0LL;
        v40 = 0LL;
        if ( v31 )
        {
          while ( 1 )
          {
            TreeData = CVisual::FindTreeData(v31, (const struct CVisualTree *)a2);
            if ( v35 == v41 )
            {
              v12 = (char *)TreeData + 184;
LABEL_80:
              v32 = v40;
              goto LABEL_81;
            }
            if ( (unsigned int)(*((_DWORD *)TreeData + 46) - 1) > 1 )
              break;
            if ( v33 <= *((_QWORD *)TreeData + 24) )
              v33 = *((_QWORD *)TreeData + 24);
            if ( *(_QWORD *)(v35 + 352) )
            {
              v37 = *((_QWORD *)TreeData + 27);
              v38 = v40;
              if ( v40 <= v37 )
                v38 = v37;
              v40 = v38;
            }
            v31 = *(CVisual **)(v35 + 64);
            if ( !v31 )
              goto LABEL_80;
          }
          a4 = 3;
        }
        else
        {
LABEL_81:
          v36 = *((_QWORD *)a1 + 8);
          if ( v33 > v36 )
            v9 = 1;
          if ( v32 > v36 )
            *((_QWORD *)a1 + 5) = 0LL;
        }
        v7 = v42;
      }
    }
  }
  if ( a4 > v8 )
    v9 = 1;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(a3[2] + 352LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 7) = *(_QWORD *)(a3[2] + 352LL);
  }
  if ( *((_QWORD *)a1 + 6) )
  {
    if ( !v9 )
      goto LABEL_15;
  }
  else
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(a3[2] + 352LL);
  }
  v26 = CCpuClippingData::CalcMode(a3, (unsigned int)a4, v7);
  if ( *a1 != v26 )
  {
    *a1 = v26;
    v10 = 1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)(a3[2] + 352LL);
  }
LABEL_15:
  *((_BYTE *)a1 + 76) = a5;
  if ( v12
    && *(_DWORD *)v12 != 5
    && *((_QWORD *)v12 + 4) > *((_QWORD *)a1 + 4)
    && ((unsigned int)(*a1 - 1) <= 1 || *a1 == 4 && a3[44]) )
  {
    v10 = 1;
  }
  else if ( !v10 )
  {
LABEL_19:
    if ( !v9 && !v10 )
      return 0LL;
    v18 = v11 && *((_DWORD *)v11 + 18);
    v19 = *a1;
    v20 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 8) = v20;
    a1[18] = 0;
    v21 = v19 - 1;
    if ( v21 )
    {
      if ( v21 != 2 )
        return 0LL;
    }
    else
    {
      if ( v20 <= v11[8] )
        v20 = v11[8];
      *((_QWORD *)a1 + 8) = v20;
      if ( v18 )
      {
        a1[18] = *((_DWORD *)v11 + 18);
        v25 = *((_QWORD *)a1 + 5);
        if ( v20 > v25 )
          v25 = v20;
        *((_QWORD *)a1 + 8) = v25;
      }
    }
    v22 = *((_QWORD *)a1 + 6);
    if ( *((_QWORD *)a1 + 8) > v22 )
      v22 = *((_QWORD *)a1 + 8);
    *((_QWORD *)a1 + 8) = v22;
    if ( v18 || a3[44] )
    {
      v23 = *((_QWORD *)a1 + 7);
      if ( v22 > v23 )
        v23 = v22;
      *((_QWORD *)a1 + 8) = v23;
      if ( a3[44] )
        ++a1[18];
    }
    return 0LL;
  }
  if ( *a1 == 5 )
    goto LABEL_19;
  v17 = 0LL;
  if ( v12 && *(_DWORD *)v12 != 5 )
    v17 = *((_QWORD *)v12 + 2);
  if ( *((_QWORD *)a1 + 2)
    || ((v27 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL),
         v27 != WPF::ProcessHeapImpl::Alloc)
      ? (v28 = v27(WPF::g_pProcessHeap, 64uLL))
      : (v28 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL)),
        (*((_QWORD *)a1 + 2) = v28) != 0LL) )
  {
    if ( !a3[44] )
    {
      v39 = *((_QWORD *)a1 + 3);
      if ( v39 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v39);
        *((_QWORD *)a1 + 3) = 0LL;
      }
      goto LABEL_32;
    }
    if ( *((_QWORD *)a1 + 3)
      || ((v29 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL),
           v29 != WPF::ProcessHeapImpl::Alloc)
        ? (v30 = v29(WPF::g_pProcessHeap, 64uLL))
        : (v30 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL)),
          (*((_QWORD *)a1 + 3) = v30) != 0LL) )
    {
LABEL_32:
      CVisual::CalcEffectiveTransform(a3, (unsigned int)*a1, v17, &a5, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 4) = *(_QWORD *)(a3[2] + 352LL);
      goto LABEL_19;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19Eu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x195u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD2u);
  return 2147942414LL;
}
