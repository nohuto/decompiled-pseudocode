/*
 * XREFs of ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D6E0 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800733F0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180015740 (-WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180017D50 (-WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800192E0 (-WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@.c)
 *     ?WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800194B0 (-WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18003F3E0 (-WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateRenderData(CVisual *this)
{
  int v2; // esi
  int v3; // ebp
  int v4; // eax
  int v5; // edi
  __int64 v7; // r14
  CDrawGeometryInstruction *v8; // rcx
  __int64 (__fastcall *v9)(CDrawOcclusionRectangleInstruction *, struct IRenderDataBuilder *, const struct CVisual *); // rax
  int v10; // eax
  __int64 v11; // rdi
  void *(*v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v13; // rax
  CBaseObject *v14; // r14
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct IRenderDataBuilder *v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 11) )
    goto LABEL_2;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  *((_QWORD *)this + 11) = 0LL;
  v12 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v12 == WPF::ProcessHeapImpl::AllocClear )
    v13 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v13 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v12)(WPF::g_pProcessHeap, 32LL);
  v14 = v13;
  if ( !v13 )
  {
    v5 = -2147024882;
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    goto LABEL_38;
  }
  *((_DWORD *)v13 + 2) = 1;
  *((_QWORD *)v13 + 2) = v11;
  *(_QWORD *)v13 = &CResource::`vftable';
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v11 + 88LL))(v11, 26LL, (_DWORD *)v13 + 6);
  v5 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x44u);
  }
  else if ( !*((_DWORD *)v14 + 6) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
    v16 = -2147024882;
    goto LABEL_36;
  }
  v16 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)this + 11) = v14;
    goto LABEL_25;
  }
LABEL_36:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x29u);
  CBaseObject::Release(v14);
LABEL_25:
  if ( v5 < 0 )
  {
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x19Eu);
    goto LABEL_4;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL));
  v5 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1A1u);
    goto LABEL_4;
  }
LABEL_2:
  v3 = *((_DWORD *)this + 64);
  if ( v3 <= 0 )
  {
LABEL_3:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IRenderDataBuilder *))(**(_QWORD **)(*((_QWORD *)this + 11)
                                                                                              + 16LL)
                                                                                + 312LL))(
           *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
           v19);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_4;
    v18 = 439;
    goto LABEL_42;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 128LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         &v19);
  v5 = v4;
  if ( v4 < 0 )
  {
    v18 = 426;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v18);
    goto LABEL_4;
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *(CDrawGeometryInstruction **)(v7 + *((_QWORD *)this + 29));
    v9 = *(__int64 (__fastcall **)(CDrawOcclusionRectangleInstruction *, struct IRenderDataBuilder *, const struct CVisual *))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CDrawGeometryInstruction::WriteInstruction )
    {
      v10 = CDrawGeometryInstruction::WriteInstruction(v8, v19, this);
    }
    else if ( v9 == CDrawAtlasedRectsInstruction::WriteInstruction )
    {
      v10 = CDrawAtlasedRectsInstruction::WriteInstruction(v8, v19, this);
    }
    else if ( v9 == CPushTransformInstruction::WriteInstruction )
    {
      v10 = CPushTransformInstruction::WriteInstruction(v8, v19, this);
    }
    else if ( v9 == CPopInstruction::WriteInstruction )
    {
      v10 = CPopInstruction::WriteInstruction(v8, v19, this);
    }
    else
    {
      v10 = v9 == CDrawOcclusionRectangleInstruction::WriteInstruction
          ? CDrawOcclusionRectangleInstruction::WriteInstruction(v8, v19, this)
          : v9(v8, v19, this);
    }
    v5 = v10;
    if ( v10 < 0 )
      break;
    ++v2;
    v7 += 8LL;
    if ( v2 >= v3 )
      goto LABEL_3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1AEu);
LABEL_4:
  if ( v19 )
    (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v5;
}
