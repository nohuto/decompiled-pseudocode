/*
 * XREFs of ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B270 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800685B0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInstructionSize@CDrawNineGridInstruction@@UEAAJPEAH@Z @ 0x180011C10 (-GetInstructionSize@CDrawNineGridInstruction@@UEAAJPEAH@Z.c)
 *     ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180014B70 (-WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z @ 0x180014CB0 (-GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z.c)
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180014CC0 (-WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180014EA0 (-WriteInstruction@CPushTransformInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z @ 0x180016B50 (-GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z.c)
 *     ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016B60 (-WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016D40 (-WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z @ 0x1800351F0 (-GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateRenderData(CVisual *this)
{
  int v1; // ebp
  void *v3; // r14
  int v4; // r15d
  unsigned int v5; // esi
  char *v6; // rcx
  int v7; // r12d
  __int64 (__fastcall *v8)(CDrawNineGridInstruction *, int *); // rbx
  int InstructionSize; // eax
  int v10; // ebx
  unsigned int v11; // esi
  void *(__fastcall *v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  void *v13; // rax
  __int64 v14; // r13
  __int64 (__fastcall *v15)(CDrawVisualTreeInstruction *__hidden, int *); // rbx
  int v16; // eax
  __int64 (__fastcall *v17)(_QWORD, void *, CVisual *); // rbx
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  void (__fastcall *v21)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  __int64 v23; // r12
  void *(*v24)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  CBaseObject *v25; // rax
  CBaseObject *v26; // rsi
  int v27; // eax
  int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // eax
  int v32; // [rsp+30h] [rbp-68h] BYREF
  void *v33; // [rsp+38h] [rbp-60h]
  int v34; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v35[4]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v36[4]; // [rsp+58h] [rbp-40h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( *((_QWORD *)this + 11) )
    goto LABEL_2;
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  *((_QWORD *)this + 11) = 0LL;
  v24 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v24 == WPF::ProcessHeapImpl::AllocClear )
    v25 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v25 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v24)(WPF::g_pProcessHeap, 32LL);
  v26 = v25;
  if ( !v25 )
  {
    v28 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27u);
    v10 = -2147024882;
    goto LABEL_73;
  }
  *((_DWORD *)v25 + 2) = 1;
  *((_QWORD *)v25 + 2) = v23;
  *(_QWORD *)v25 = &CResource::`vftable';
  v27 = MilResource_CreateOrAddRefOnChannel(v23, 33LL, (char *)v25 + 24);
  v10 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x44u);
  }
  else if ( !*((_DWORD *)v26 + 6) )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    v28 = -2147024882;
    goto LABEL_71;
  }
  v28 = v10;
  if ( v10 >= 0 )
  {
    *((_QWORD *)this + 11) = v26;
    goto LABEL_50;
  }
LABEL_71:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x29u);
  CBaseObject::Release(v26);
LABEL_50:
  if ( v10 < 0 )
  {
LABEL_73:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x1A1u);
    return (unsigned int)v10;
  }
  v29 = *((_QWORD *)this + 11);
  v30 = *((_QWORD *)this + 2);
  v35[0] = 49;
  v35[2] = *(_DWORD *)(v29 + 24);
  v35[1] = *(_DWORD *)(v30 + 24);
  v31 = MilResource_SendCommand(v35, 0xCu, *(struct MIL_CHANNEL__ **)(v30 + 16));
  v10 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x86u);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1A8u);
    return (unsigned int)v10;
  }
LABEL_2:
  v4 = *((_DWORD *)this + 64);
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_35:
    v19 = *((_QWORD *)this + 11);
    v36[0] = 36;
    v36[2] = v5;
    v36[1] = *(_DWORD *)(v19 + 24);
    v20 = MilChannel_BeginCommand(*(struct MIL_CHANNEL__ **)(v19 + 16), v36, 0xCu, v5);
    v10 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xD9u);
    }
    else
    {
      MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(v19 + 16), v3, v5);
      MilChannel_EndCommand(*(struct MIL_CHANNEL__ **)(v19 + 16));
    }
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1EEu);
  }
  else
  {
    v6 = 0LL;
    v7 = 0;
    v33 = 0LL;
    do
    {
      v8 = *(__int64 (__fastcall **)(CDrawNineGridInstruction *, int *))(**(_QWORD **)&v6[*((_QWORD *)this + 29)] + 8LL);
      if ( v8 == CPopInstruction::GetInstructionSize )
      {
        InstructionSize = CPopInstruction::GetInstructionSize(*(CPopInstruction **)&v6[*((_QWORD *)this + 29)], &v34);
      }
      else if ( v8 == CDrawOcclusionRectangleInstruction::GetInstructionSize )
      {
        InstructionSize = CDrawOcclusionRectangleInstruction::GetInstructionSize(
                            *(CDrawOcclusionRectangleInstruction **)&v6[*((_QWORD *)this + 29)],
                            &v34);
      }
      else if ( v8 == CDrawNineGridInstruction::GetInstructionSize )
      {
        InstructionSize = CDrawNineGridInstruction::GetInstructionSize(
                            *(CDrawNineGridInstruction **)&v6[*((_QWORD *)this + 29)],
                            &v34);
      }
      else if ( v8 == CDrawVisualTreeInstruction::GetInstructionSize )
      {
        InstructionSize = CDrawVisualTreeInstruction::GetInstructionSize(
                            *(CDrawVisualTreeInstruction **)&v6[*((_QWORD *)this + 29)],
                            &v34);
      }
      else
      {
        InstructionSize = ((__int64 (__fastcall *)(_QWORD, int *, __int64 (__fastcall *)(CDrawNineGridInstruction *, int *), __int64 (__fastcall *)(CDrawVisualTreeInstruction *__hidden, int *)))v8)(
                            *(_QWORD *)&v6[*((_QWORD *)this + 29)],
                            &v34,
                            CDrawNineGridInstruction::GetInstructionSize,
                            CDrawVisualTreeInstruction::GetInstructionSize);
      }
      v10 = InstructionSize;
      if ( InstructionSize < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, InstructionSize, 0x1BEu);
        return (unsigned int)v10;
      }
      if ( v34 > 0 )
      {
        v11 = v5 + 4;
        if ( v11 < 4 )
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0x1C2u);
          return (unsigned int)v10;
        }
        v5 = v34 + v11;
        if ( v5 < v34 )
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0x1C3u);
          return (unsigned int)v10;
        }
      }
      ++v7;
      v6 = (char *)v33 + 8;
      v33 = (char *)v33 + 8;
    }
    while ( v7 < v4 );
    if ( !v5 )
      goto LABEL_35;
    v12 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v12 == WPF::ProcessHeapImpl::Alloc )
      v13 = HeapAlloc(g_hProcessHeap, 0, v5);
    else
      v13 = v12(WPF::g_pProcessHeap, v5);
    v3 = v13;
    if ( !v13 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1CCu);
      return (unsigned int)v10;
    }
    v33 = v13;
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *(__int64 (__fastcall **)(CDrawVisualTreeInstruction *__hidden, int *))(**(_QWORD **)(v14
                                                                                                + *((_QWORD *)this + 29))
                                                                                  + 8LL);
      if ( v15 == CPopInstruction::GetInstructionSize )
      {
        v16 = CPopInstruction::GetInstructionSize(*(CPopInstruction **)(v14 + *((_QWORD *)this + 29)), &v32);
      }
      else if ( v15 == CDrawOcclusionRectangleInstruction::GetInstructionSize )
      {
        v16 = CDrawOcclusionRectangleInstruction::GetInstructionSize(
                *(CDrawOcclusionRectangleInstruction **)(v14 + *((_QWORD *)this + 29)),
                &v32);
      }
      else if ( v15 == CDrawNineGridInstruction::GetInstructionSize )
      {
        v16 = CDrawNineGridInstruction::GetInstructionSize(
                *(CDrawNineGridInstruction **)(v14 + *((_QWORD *)this + 29)),
                &v32);
      }
      else
      {
        v16 = v15 == CDrawVisualTreeInstruction::GetInstructionSize
            ? CDrawVisualTreeInstruction::GetInstructionSize(
                *(CDrawVisualTreeInstruction **)(v14 + *((_QWORD *)this + 29)),
                &v32)
            : v15(*(CDrawVisualTreeInstruction **)(v14 + *((_QWORD *)this + 29)), &v32);
      }
      v10 = v16;
      if ( v16 < 0 )
        break;
      if ( v32 > 0 )
      {
        v17 = *(__int64 (__fastcall **)(_QWORD, void *, CVisual *))(**(_QWORD **)(v14 + *((_QWORD *)this + 29)) + 16LL);
        if ( (char *)v17 == (char *)CDrawAtlasedRectsInstruction::WriteInstruction )
        {
          v18 = CDrawAtlasedRectsInstruction::WriteInstruction(
                  *(CDrawAtlasedRectsInstruction **)(v14 + *((_QWORD *)this + 29)),
                  v33,
                  this);
        }
        else if ( (char *)v17 == (char *)CDrawGeometryInstruction::WriteInstruction )
        {
          v18 = CDrawGeometryInstruction::WriteInstruction(
                  *(CDrawGeometryInstruction **)(v14 + *((_QWORD *)this + 29)),
                  v33,
                  this);
        }
        else if ( (char *)v17 == (char *)CPushTransformInstruction::WriteInstruction )
        {
          v18 = CPushTransformInstruction::WriteInstruction(
                  *(CPushTransformInstruction **)(v14 + *((_QWORD *)this + 29)),
                  v33,
                  this);
        }
        else if ( (char *)v17 == (char *)CPopInstruction::WriteInstruction )
        {
          v18 = CPopInstruction::WriteInstruction(*(CPopInstruction **)(v14 + *((_QWORD *)this + 29)), v33, this);
        }
        else if ( (char *)v17 == (char *)CDrawOcclusionRectangleInstruction::WriteInstruction )
        {
          v18 = CDrawOcclusionRectangleInstruction::WriteInstruction(
                  *(CDrawOcclusionRectangleInstruction **)(v14 + *((_QWORD *)this + 29)),
                  (float *)v33,
                  this);
        }
        else
        {
          v18 = v17(*(_QWORD *)(v14 + *((_QWORD *)this + 29)), v33, this);
        }
        v10 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x1D8u);
          goto LABEL_39;
        }
        v33 = (char *)v33 + v32 + 4;
      }
      ++v1;
      v14 += 8LL;
      if ( v1 >= v4 )
        goto LABEL_35;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x1D4u);
  }
LABEL_39:
  if ( v3 )
  {
    v21 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v21 == WPF::ProcessHeapImpl::Free )
      HeapFree(g_hProcessHeap, 0, v3);
    else
      v21(WPF::g_pProcessHeap, v3);
  }
  return (unsigned int)v10;
}
