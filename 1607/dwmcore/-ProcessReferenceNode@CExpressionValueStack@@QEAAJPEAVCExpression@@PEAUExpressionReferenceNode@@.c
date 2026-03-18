/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000C1D0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180019790 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180022330 (-GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002FA20 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18004DBA0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x180055F00 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180089FA0 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18008A020 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18008C7D0 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x18008CC30 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180112924 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180137834 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180137960 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x18015CAF8 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18015CE30 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  _DWORD *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r12
  bool v12; // zf
  struct CExpressionValue *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(CExpression *, unsigned int, unsigned int *, struct CResource **); // rax
  __int64 v18; // r14
  volatile signed __int32 *v19; // rbx
  __int64 (__fastcall *v20)(CBitmapOfDeviceBitmaps *); // rax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(CManipulationTransform *, int, struct CExpressionValue *); // rax
  int Property; // eax
  CExpression *v25; // rcx
  void (*v26)(void); // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  int v30; // eax
  unsigned int v31; // ebp
  __int64 result; // rax
  CEffectGroup *(__fastcall *v33)(CEffectGroup *, char); // rax
  int ObjectPropertyValue; // eax
  int v35; // r9d
  __int64 Elapsed; // rax
  int v37; // eax
  __int64 v38; // rax
  CExpressionValueStack *v39; // rcx
  unsigned __int64 v40; // r9
  unsigned int v41; // [rsp+20h] [rbp-78h]
  unsigned int v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  struct CExpressionValue *v45; // [rsp+40h] [rbp-58h]
  bool v46; // [rsp+A0h] [rbp+8h] BYREF
  int v47; // [rsp+A8h] [rbp+10h] BYREF
  CManipulationTransform *v48; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+20h] BYREF

  v49 = a4;
  v4 = *((_DWORD *)a3 + 1);
  v5 = 0LL;
  if ( v4 >= *((_DWORD *)a2 + 124) )
    v9 = 0LL;
  else
    v9 = (_DWORD *)(*((_QWORD *)a2 + 59) + 32LL * v4);
  v10 = *((_DWORD *)this + 4);
  if ( v10 == -1 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC9u);
LABEL_78:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13Fu);
    return 2147942414LL;
  }
  if ( *((_DWORD *)this + 12) == v10 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD6u);
    goto LABEL_78;
  }
  v11 = 0LL;
  *((_DWORD *)this + 4) = v10 + 1;
  v12 = v9[6] == 1;
  v13 = (struct CExpressionValue *)(*((_QWORD *)this + 3) + 72LL * v10);
  v45 = v13;
  if ( v12 )
    v11 = *((_QWORD *)a2 + 31);
  if ( v9[4] == 1 )
  {
    ObjectPropertyValue = CExpression::ReadValueFromCache(a2, v9[5], v13, &v46);
    v31 = ObjectPropertyValue;
    if ( ObjectPropertyValue < 0 )
    {
      v42 = 390;
    }
    else
    {
      if ( v46 )
        return 0LL;
      ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(
                              v39,
                              a2,
                              a3,
                              v40,
                              v13,
                              (struct SubchannelMaskInfo *)v11);
      v31 = ObjectPropertyValue;
      if ( ObjectPropertyValue < 0 )
      {
        v42 = 400;
      }
      else
      {
        ObjectPropertyValue = CExpression::StoreValueToCache(a2, v9[5], v13);
        v31 = ObjectPropertyValue;
        if ( ObjectPropertyValue >= 0 )
          return 0LL;
        v42 = 406;
      }
    }
    goto LABEL_94;
  }
  if ( v9[4] != 2 )
  {
    v31 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x19Cu);
    goto LABEL_62;
  }
  v14 = *((_DWORD *)a3 + 1);
  v15 = 0LL;
  v48 = 0LL;
  v43 = 0LL;
  if ( v14 < *((_DWORD *)a2 + 124) )
    v5 = *((_QWORD *)a2 + 59) + 32LL * v14;
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 33) + 4LL) & 0x40000000) != 0 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v15 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 168LL) + 104LL;
    QpcStopwatch::Start((QpcStopwatch *)&v43);
  }
  v16 = *(unsigned int *)(v5 + 28);
  v17 = *(__int64 (__fastcall **)(CExpression *, unsigned int, unsigned int *, struct CResource **))(*(_QWORD *)a2 + 168LL);
  if ( v17 == CExpression::ResolveSourceReference )
  {
    if ( (unsigned int)v16 < *((_DWORD *)a2 + 100)
      && (v18 = 2LL * (unsigned int)v16, *(_QWORD *)(*((_QWORD *)a2 + 47) + 16LL * (unsigned int)v16 + 8)) )
    {
      _mm_lfence();
      v19 = **(volatile signed __int32 ***)(*((_QWORD *)a2 + 47) + 16LL * (unsigned int)v16 + 8);
      v48 = (CManipulationTransform *)v19;
      if ( v19 )
      {
        v20 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v19 + 8LL);
        if ( (char *)v20 == (char *)CResource::AddRef )
        {
          if ( *((int *)v19 + 2) < 0 )
            AssertW(
              L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
              0LL,
              L"CMILCOMBase::InternalAddRef",
              L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
              0x1Fu);
          _InterlockedIncrement(v19 + 2);
        }
        else if ( v20 == CBitmapOfDeviceBitmaps::AddRef )
        {
          CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v19);
        }
        else
        {
          v20((CBitmapOfDeviceBitmaps *)v19);
        }
        v21 = 0;
        v47 = *(_DWORD *)(*((_QWORD *)a2 + 47) + 8 * v18);
        goto LABEL_22;
      }
    }
    else
    {
      v48 = 0LL;
    }
    v47 = 0;
    v21 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x14Eu);
LABEL_22:
    v13 = v45;
    goto LABEL_23;
  }
  v21 = v17(a2, v16, (unsigned int *)&v47, &v48);
LABEL_23:
  if ( v21 < 0 )
  {
    v41 = 259;
LABEL_57:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v41);
    goto LABEL_31;
  }
  if ( v43 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v43);
    CExpressionPerformanceCounter::AddDurationSample(v15, 3LL, Elapsed);
  }
  v22 = *(unsigned int *)(v5 + 4);
  v23 = *(__int64 (__fastcall **)(CManipulationTransform *, int, struct CExpressionValue *))(*(_QWORD *)v48 + 88LL);
  if ( (char *)v23 == (char *)CPropertyBagBase::GetProperty )
  {
    Property = CPropertyBagBase::GetProperty(v48, v22, v13);
  }
  else if ( v23 == CVisual::GetProperty )
  {
    Property = CVisual::GetProperty(v48, v22, v13);
  }
  else if ( v23 == CManipulationTransform::GetProperty )
  {
    Property = CManipulationTransform::GetProperty(v48, v22, v13);
  }
  else
  {
    Property = v23(v48, v22, v13);
  }
  v21 = Property;
  if ( Property < 0 )
  {
    v41 = 266;
    goto LABEL_57;
  }
  if ( v11
    && *(_BYTE *)(v11 + 4)
    && (v37 = CExpressionValue::ApplyMaskToValue(v13, (struct SubchannelMaskInfo *)v11), v21 = v37, v37 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x11Au);
  }
  else
  {
    v21 = 0;
  }
LABEL_31:
  v25 = v48;
  if ( v48 )
  {
    v26 = *(void (**)(void))(*(_QWORD *)v48 + 16LL);
    if ( (char *)v26 == (char *)CResource::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v48 + 2, 0xFFFFFFFF) == 1 )
      {
        --*((_DWORD *)v25 + 2);
        v33 = *(CEffectGroup *(__fastcall **)(CEffectGroup *, char))(*(_QWORD *)v25 + 24LL);
        if ( v33 == CExpression::`vector deleting destructor' )
        {
          CExpression::`vector deleting destructor'(v25, 1);
        }
        else if ( v33 == CRgnGeometry::`scalar deleting destructor' )
        {
          CRgnGeometry::`scalar deleting destructor'(v25, 1);
        }
        else if ( (char *)v33 == (char *)CPropertyBag::`scalar deleting destructor' )
        {
          CPropertyBag::`scalar deleting destructor'(v25, 1u);
        }
        else if ( v33 == CRenderData::`scalar deleting destructor' )
        {
          CRenderData::`scalar deleting destructor'(v25, 1);
        }
        else if ( v33 == CEffectGroup::`vector deleting destructor' )
        {
          CEffectGroup::`vector deleting destructor'(v25, 1);
        }
        else
        {
          v33(v25, 1);
        }
      }
    }
    else if ( (char *)v26 == (char *)CVisual::Release )
    {
      CVisual::Release(v48);
    }
    else
    {
      v26();
    }
  }
  if ( v21 < 0 )
  {
    ObjectPropertyValue = CExpression::ReadValueFromCache(a2, v9[5], v13, (bool *)&v49);
    v31 = ObjectPropertyValue;
    if ( ObjectPropertyValue >= 0 )
    {
      if ( !(_BYTE)v49 )
      {
        v31 = v21;
        v42 = 377;
        v35 = v21;
LABEL_61:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, v42);
        goto LABEL_62;
      }
      return 0LL;
    }
    v42 = 373;
LABEL_94:
    v35 = ObjectPropertyValue;
    goto LABEL_61;
  }
  v27 = *((_QWORD *)a2 + 33);
  v28 = 0LL;
  v29 = 0LL;
  v44 = 0LL;
  if ( (*(_DWORD *)(v27 + 4) & 0x40000000) != 0 )
  {
    v29 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 168LL) + 104LL;
    QpcStopwatch::Start((QpcStopwatch *)&v44);
    v28 = v44;
  }
  v30 = CExpression::StoreValueToCache(a2, v9[5], v45);
  v31 = v30;
  if ( v30 >= 0 )
  {
    if ( v28 )
    {
      v38 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v44);
      CExpressionPerformanceCounter::AddDurationSample(v29, 4LL, v38);
    }
    return 0LL;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x164u);
  v13 = v45;
LABEL_62:
  result = v31;
  if ( v13 )
    --*((_DWORD *)this + 4);
  return result;
}
