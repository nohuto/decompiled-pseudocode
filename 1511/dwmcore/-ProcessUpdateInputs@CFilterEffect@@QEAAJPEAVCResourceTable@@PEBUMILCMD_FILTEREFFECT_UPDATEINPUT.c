/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1800F66E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18001A880 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18012C788 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18012C7F0 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18012CCE4 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x1801374A0 (--0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x1801374F8 (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  struct CResource **v6; // rbx
  CResourceTable *v7; // r8
  unsigned __int128 v10; // rax
  int v11; // edi
  int v12; // ebp
  int *v13; // r14
  struct CResource *ResourceWithoutType; // r15
  __int64 v15; // rbx
  unsigned int *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // edx
  InternalFilterInput *v19; // rax
  struct CResource **v23; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  v10 = v5 * (unsigned __int128)0x1CuLL;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x2A2u);
    goto LABEL_39;
  }
  v11 = 0;
  if ( 28 * v5 == a5 )
  {
    if ( !a4 || (v12 = 0, !(_DWORD)v5) )
    {
LABEL_36:
      if ( v11 >= 0 )
        goto LABEL_40;
      goto LABEL_39;
    }
    v13 = (int *)((char *)this + 136);
    while ( 1 )
    {
      ResourceWithoutType = 0LL;
      v15 = 0LL;
      if ( v13[4] <= 0 )
      {
LABEL_11:
        v15 = -1LL;
      }
      else
      {
        *(_QWORD *)&v10 = *(_QWORD *)v13;
        DWORD2(v10) = a4[7 * v12];
        while ( *(_DWORD *)v10 != DWORD2(v10) )
        {
          ++v15;
          *(_QWORD *)&v10 = v10 + 4;
          if ( v15 >= v13[4] )
            goto LABEL_11;
        }
      }
      v6 = v15 == -1 ? 0LL : *(struct CResource ***)(*((_QWORD *)v13 + 1) + 8 * v15);
      v16 = &a4[7 * v12];
      if ( (v16[6] & 2) == 0 )
        break;
      if ( v6 )
      {
        CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
          v13,
          *v16,
          v7);
        InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6, v17);
LABEL_29:
        v7 = a2;
      }
      v6 = 0LL;
      if ( (unsigned int)++v12 >= *((_DWORD *)a3 + 3) )
        goto LABEL_36;
    }
    v18 = v16[1];
    if ( v18 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v18);
      if ( !ResourceWithoutType )
      {
        v11 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2C3u);
        goto LABEL_39;
      }
    }
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal(this, v6[3]);
      InternalFilterInput::Update(
        (InternalFilterInput *)v6,
        v16[6],
        (const struct tagRECT *)(v16 + 2),
        ResourceWithoutType);
    }
    else
    {
      v19 = (InternalFilterInput *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, CResourceTable *))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                     WPF::g_pProcessHeap,
                                     32LL,
                                     v7);
      if ( v19 )
      {
        v6 = (struct CResource **)InternalFilterInput::InternalFilterInput(
                                    v19,
                                    v16[6],
                                    (const struct tagRECT *)(v16 + 2),
                                    ResourceWithoutType);
        v23 = v6;
      }
      else
      {
        v6 = 0LL;
        v23 = 0LL;
      }
      if ( !v6 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CAu);
        goto LABEL_39;
      }
      if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                            v13,
                            &a4[7 * v12],
                            &v23) )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CDu);
        v6 = v23;
        goto LABEL_39;
      }
      v6 = v23;
    }
    LODWORD(v10) = CResource::RegisterNotifier(this, v6[3]);
    v11 = v10;
    if ( (v10 & 0x80000000) != 0LL )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2DFu);
      goto LABEL_36;
    }
    goto LABEL_29;
  }
  v11 = -2003303421;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2A6u);
LABEL_39:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_40:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6, DWORD2(v10));
  return (unsigned int)v11;
}
