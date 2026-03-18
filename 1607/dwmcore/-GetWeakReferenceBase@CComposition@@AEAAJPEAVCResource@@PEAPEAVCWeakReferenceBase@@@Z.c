/*
 * XREFs of ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18004F010 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x18008BAF4 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A4D80 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800B70E8 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180116914 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801411E4 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014C264 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015E0D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetWeakReferenceBase(
        CComposition *this,
        struct CResource *a2,
        struct CWeakReferenceBase **a3)
{
  unsigned int v3; // ebp
  struct CWeakReferenceBase *v4; // rsi
  struct CWeakReferenceBase **v8; // rax
  void *(*v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CWeakReferenceBase *v11; // rax
  struct CWeakReferenceBase *v12; // rbx
  PVOID inserted; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD Buffer[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
  {
    v14[0] = 0LL;
    v14[1] = a2;
    v8 = (struct CWeakReferenceBase **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1032), v14);
    v4 = *v8;
    ++*((_DWORD *)*v8 + 4);
  }
  else
  {
    v10 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v10 == WPF::ProcessHeapImpl::AllocClear )
      v11 = (struct CWeakReferenceBase *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x18uLL);
    else
      v11 = (struct CWeakReferenceBase *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v10)(
                                           WPF::g_pProcessHeap,
                                           24LL);
    v12 = v11;
    if ( v11 )
    {
      *((_QWORD *)v11 + 1) = 0LL;
      *(_QWORD *)v11 = a2;
      *((_DWORD *)v11 + 4) = 1;
      Buffer[0] = v11;
      Buffer[1] = a2;
      NewElement = 0;
      inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 1032), Buffer, 0x10u, &NewElement);
      *((_QWORD *)v12 + 1) = inserted;
      if ( inserted )
      {
        v4 = v12;
        v12 = 0LL;
        *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1091u);
      }
      if ( v12 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CWeakReferenceBase *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 32LL))(
          WPF::g_pProcessHeap,
          v12);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1089u);
    }
  }
  *a3 = v4;
  return v3;
}
