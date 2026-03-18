/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180002C40 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801118C0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x180111928 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?Lookup@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPEAVInternalFilterInput@@AEBI@Z @ 0x180111E24 (-Lookup@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEBAPE.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x1801120B0 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x180121E80 (--0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x180121EF0 (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        char *a4,
        unsigned int a5)
{
  struct CResource **v5; // rbx
  int v8; // edi
  unsigned int i; // ebp
  struct CResource *ResourceWithoutType; // r14
  char *v11; // rsi
  __int64 v12; // rax
  CResourceTable *v13; // r11
  unsigned int v14; // edx
  InternalFilterInput *v15; // rax
  int v16; // eax
  struct CResource **v19; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !is_mul_ok(*((unsigned int *)a3 + 3), 0x1CuLL) )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x297u);
    goto LABEL_29;
  }
  v8 = 0;
  if ( 28LL * *((unsigned int *)a3 + 3) != a5 )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x29Bu);
LABEL_29:
    CFilterEffect::EmptyFilterInputMap(this);
    goto LABEL_30;
  }
  if ( a4 )
  {
    for ( i = 0; i < *((_DWORD *)a3 + 3); ++i )
    {
      ResourceWithoutType = 0LL;
      v11 = &a4[28 * i];
      v12 = CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Lookup();
      v5 = (struct CResource **)v12;
      if ( (v11[24] & 2) != 0 )
      {
        if ( v12 )
        {
          CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
            (char *)this + 120,
            *(unsigned int *)v11);
          InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v5);
        }
      }
      else
      {
        v14 = *((_DWORD *)v11 + 1);
        if ( v14 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v13, v14);
          if ( !ResourceWithoutType )
          {
            v8 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2B8u);
            goto LABEL_29;
          }
        }
        if ( v5 )
        {
          CResource::UnRegisterNotifierInternal(this, v5[6]);
          v5[6] = 0LL;
          InternalFilterInput::Update(
            (InternalFilterInput *)v5,
            *((_DWORD *)v11 + 6),
            (const struct tagRECT *)(v11 + 8),
            ResourceWithoutType);
        }
        else
        {
          v15 = (InternalFilterInput *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 8LL))(
                                         WPF::g_pProcessHeap,
                                         56LL);
          if ( v15 )
          {
            v5 = (struct CResource **)InternalFilterInput::InternalFilterInput(
                                        v15,
                                        *((_DWORD *)v11 + 6),
                                        (const struct tagRECT *)(v11 + 8),
                                        ResourceWithoutType);
            v19 = v5;
          }
          else
          {
            v5 = 0LL;
            v19 = 0LL;
          }
          if ( !v5 )
          {
            v8 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2BFu);
            goto LABEL_29;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (__int64)this + 120,
                                v11,
                                &v19) )
          {
            v8 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2C2u);
            v5 = v19;
            goto LABEL_29;
          }
          v5 = v19;
        }
        v16 = CResource::RegisterNotifier(this, v5[6]);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2D3u);
          break;
        }
      }
      v5 = 0LL;
    }
  }
  if ( v8 < 0 )
    goto LABEL_29;
LABEL_30:
  if ( v5 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v5);
  return (unsigned int)v8;
}
