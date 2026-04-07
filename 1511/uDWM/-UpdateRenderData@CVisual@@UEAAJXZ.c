/*
 * XREFs of ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180022E20
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180020880 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180071630 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInstructionSize@CDrawNineGridInstruction@@UEAAJPEAH@Z @ 0x180013B70 (-GetInstructionSize@CDrawNineGridInstruction@@UEAAJPEAH@Z.c)
 *     ?GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z @ 0x1800181A0 (-GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z.c)
 *     ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180018320 (-WriteInstruction@CPushTransformInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18001A810 (-WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z @ 0x18001BBE0 (-GetInstructionSize@CDrawOcclusionRectangleInstruction@@UEAAJPEAH@Z.c)
 *     ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18001BBF0 (-WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18001C430 (-WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z @ 0x18003D110 (-GetInstructionSize@CPopInstruction@@UEAAJPEAH@Z.c)
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18003D120 (-WriteInstruction@CPopInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateRenderData(CVisual *this)
{
  int v1; // ebp
  void *v3; // r14
  int v4; // r15d
  unsigned int v5; // esi
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ebx
  int v10; // r12d
  __int64 v11; // r13
  void *v12; // rcx
  __int64 (__fastcall *v13)(CDrawNineGridInstruction *, int *); // rbx
  int InstructionSize; // eax
  unsigned int v15; // esi
  void *(__fastcall *v16)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  void *v17; // rax
  __int64 v18; // r13
  __int64 (__fastcall *v19)(CDrawVisualTreeInstruction *, int *); // rbx
  int v20; // eax
  __int64 (__fastcall *v21)(CPopInstruction *__hidden, void *, const struct CVisual *); // rbx
  int v22; // eax
  void (__fastcall *v23)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  __int64 v24; // r12
  void *(*v25)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  CBaseObject *v26; // rax
  CBaseObject *v27; // rsi
  int v28; // eax
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // eax
  int v33; // [rsp+30h] [rbp-68h] BYREF
  int v34; // [rsp+34h] [rbp-64h] BYREF
  void *v35; // [rsp+38h] [rbp-60h]
  _DWORD v36[4]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v37[4]; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( *((_QWORD *)this + 11) )
    goto LABEL_2;
  v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  *((_QWORD *)this + 11) = 0LL;
  v25 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v25 == WPF::ProcessHeapImpl::AllocClear )
    v26 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v26 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v25)(WPF::g_pProcessHeap, 32LL);
  v27 = v26;
  if ( !v26 )
  {
    v29 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27u);
    v8 = -2147024882;
    goto LABEL_74;
  }
  *((_DWORD *)v26 + 2) = 1;
  *((_QWORD *)v26 + 2) = v24;
  *(_QWORD *)v26 = &CResource::`vftable';
  v28 = MilResource_CreateOrAddRefOnChannel(v24, 34LL, (char *)v26 + 24);
  v8 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x44u);
  }
  else if ( !*((_DWORD *)v27 + 6) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x45u);
    v29 = -2147024882;
    goto LABEL_72;
  }
  v29 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 11) = v27;
    goto LABEL_51;
  }
LABEL_72:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x29u);
  CBaseObject::Release(v27);
LABEL_51:
  if ( v8 < 0 )
  {
LABEL_74:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x1A1u);
    return (unsigned int)v8;
  }
  v30 = *((_QWORD *)this + 11);
  v31 = *((_QWORD *)this + 2);
  v36[0] = 52;
  v36[2] = *(_DWORD *)(v30 + 24);
  v36[1] = *(_DWORD *)(v31 + 24);
  v32 = MilResource_SendCommand(v36, 0xCu, *(struct MIL_CHANNEL__ **)(v31 + 16));
  v8 = v32;
  if ( v32 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x86u);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1A8u);
    return (unsigned int)v8;
  }
LABEL_2:
  v4 = *((_DWORD *)this + 64);
  v5 = 0;
  if ( v4 > 0 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      v12 = *(void **)(v11 + *((_QWORD *)this + 29));
      v35 = v12;
      v13 = *(__int64 (__fastcall **)(CDrawNineGridInstruction *, int *))(*(_QWORD *)v12 + 8LL);
      if ( v13 == CPopInstruction::GetInstructionSize )
      {
        InstructionSize = CPopInstruction::GetInstructionSize((CPopInstruction *)v12, &v34);
      }
      else if ( v13 == CDrawOcclusionRectangleInstruction::GetInstructionSize )
      {
        InstructionSize = CDrawOcclusionRectangleInstruction::GetInstructionSize(
                            (CDrawOcclusionRectangleInstruction *)v12,
                            &v34);
      }
      else if ( v13 == CDrawNineGridInstruction::GetInstructionSize )
      {
        InstructionSize = CDrawNineGridInstruction::GetInstructionSize((CDrawNineGridInstruction *)v12, &v34);
      }
      else if ( v13 == CDrawVisualTreeInstruction::GetInstructionSize )
      {
        InstructionSize = CDrawVisualTreeInstruction::GetInstructionSize((CDrawVisualTreeInstruction *)v12, &v34);
      }
      else
      {
        InstructionSize = ((__int64 (__fastcall *)(void *, int *, __int64 (__fastcall *)(CDrawNineGridInstruction *, int *), __int64 (__fastcall *)(CDrawVisualTreeInstruction *, int *)))v13)(
                            v35,
                            &v34,
                            CDrawNineGridInstruction::GetInstructionSize,
                            CDrawVisualTreeInstruction::GetInstructionSize);
      }
      v8 = InstructionSize;
      if ( InstructionSize < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, InstructionSize, 0x1BEu);
        return (unsigned int)v8;
      }
      if ( v34 > 0 )
      {
        v15 = v5 + 4;
        if ( v15 < 4 )
        {
          v8 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0x1C2u);
          return (unsigned int)v8;
        }
        v5 = v34 + v15;
        if ( v5 < v34 )
        {
          v8 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0x1C3u);
          return (unsigned int)v8;
        }
      }
      ++v10;
      v11 += 8LL;
    }
    while ( v10 < v4 );
    if ( !v5 )
      goto LABEL_3;
    v16 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v16 == WPF::ProcessHeapImpl::Alloc )
      v17 = HeapAlloc(g_hProcessHeap, 0, v5);
    else
      v17 = v16(WPF::g_pProcessHeap, v5);
    v3 = v17;
    if ( !v17 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1CCu);
      return (unsigned int)v8;
    }
    v35 = v17;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = *(__int64 (__fastcall **)(CDrawVisualTreeInstruction *, int *))(**(_QWORD **)(v18 + *((_QWORD *)this + 29))
                                                                          + 8LL);
      if ( v19 == CPopInstruction::GetInstructionSize )
      {
        v20 = CPopInstruction::GetInstructionSize(*(CPopInstruction **)(v18 + *((_QWORD *)this + 29)), &v33);
      }
      else if ( v19 == CDrawOcclusionRectangleInstruction::GetInstructionSize )
      {
        v20 = CDrawOcclusionRectangleInstruction::GetInstructionSize(
                *(CDrawOcclusionRectangleInstruction **)(v18 + *((_QWORD *)this + 29)),
                &v33);
      }
      else if ( v19 == CDrawNineGridInstruction::GetInstructionSize )
      {
        v20 = CDrawNineGridInstruction::GetInstructionSize(
                *(CDrawNineGridInstruction **)(v18 + *((_QWORD *)this + 29)),
                &v33);
      }
      else
      {
        v20 = v19 == CDrawVisualTreeInstruction::GetInstructionSize
            ? CDrawVisualTreeInstruction::GetInstructionSize(
                *(CDrawVisualTreeInstruction **)(v18 + *((_QWORD *)this + 29)),
                &v33)
            : v19(*(CDrawVisualTreeInstruction **)(v18 + *((_QWORD *)this + 29)), &v33);
      }
      v8 = v20;
      if ( v20 < 0 )
        break;
      if ( v33 > 0 )
      {
        v21 = *(__int64 (__fastcall **)(CPopInstruction *__hidden, void *, const struct CVisual *))(**(_QWORD **)(v18 + *((_QWORD *)this + 29))
                                                                                                  + 16LL);
        if ( (char *)v21 == (char *)CDrawGeometryInstruction::WriteInstruction )
        {
          v22 = CDrawGeometryInstruction::WriteInstruction(
                  *(CDrawGeometryInstruction **)(v18 + *((_QWORD *)this + 29)),
                  v35,
                  this);
        }
        else if ( (char *)v21 == (char *)CDrawAtlasedRectsInstruction::WriteInstruction )
        {
          v22 = CDrawAtlasedRectsInstruction::WriteInstruction(
                  *(CDrawAtlasedRectsInstruction **)(v18 + *((_QWORD *)this + 29)),
                  v35,
                  this);
        }
        else if ( (char *)v21 == (char *)CPushTransformInstruction::WriteInstruction )
        {
          v22 = CPushTransformInstruction::WriteInstruction(
                  *(CPushTransformInstruction **)(v18 + *((_QWORD *)this + 29)),
                  v35,
                  this);
        }
        else if ( v21 == CPopInstruction::WriteInstruction )
        {
          v22 = CPopInstruction::WriteInstruction(*(CPopInstruction **)(v18 + *((_QWORD *)this + 29)), v35, this);
        }
        else if ( (char *)v21 == (char *)CDrawOcclusionRectangleInstruction::WriteInstruction )
        {
          v22 = CDrawOcclusionRectangleInstruction::WriteInstruction(
                  *(CDrawOcclusionRectangleInstruction **)(v18 + *((_QWORD *)this + 29)),
                  (float *)v35,
                  this);
        }
        else
        {
          v22 = v21(*(CPopInstruction **)(v18 + *((_QWORD *)this + 29)), v35, this);
        }
        v8 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x1D8u);
          goto LABEL_7;
        }
        v35 = (char *)v35 + v33 + 4;
      }
      ++v1;
      v18 += 8LL;
      if ( v1 >= v4 )
        goto LABEL_3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x1D4u);
  }
  else
  {
LABEL_3:
    v6 = *((_QWORD *)this + 11);
    v37[0] = 39;
    v37[2] = v5;
    v37[1] = *(_DWORD *)(v6 + 24);
    v7 = MilChannel_BeginCommand(*(struct MIL_CHANNEL__ **)(v6 + 16), v37, 0xCu, v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xD9u);
    }
    else
    {
      MilChannel_AppendCommandData(*(struct MIL_CHANNEL__ **)(v6 + 16), v3, v5);
      MilChannel_EndCommand(*(struct MIL_CHANNEL__ **)(v6 + 16));
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1EEu);
  }
LABEL_7:
  if ( v3 )
  {
    v23 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v23 == WPF::ProcessHeapImpl::Free )
      HeapFree(g_hProcessHeap, 0, v3);
    else
      v23(WPF::g_pProcessHeap, v3);
  }
  return (unsigned int)v8;
}
