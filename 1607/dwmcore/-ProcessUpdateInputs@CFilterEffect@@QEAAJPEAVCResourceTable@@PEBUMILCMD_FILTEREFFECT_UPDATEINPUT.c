/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180108A44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180014DF4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18014C668 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18014C6B0 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18014CC2C (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x18015FFEC (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rbx
  CResourceTable *v7; // r8
  unsigned __int128 v10; // rax
  int v11; // edi
  int v12; // r9d
  int v13; // ebp
  _QWORD *v14; // r15
  struct CResource *ResourceWithoutType; // r14
  __int64 v16; // rbx
  unsigned int *v17; // rsi
  unsigned int v18; // edx
  unsigned int v19; // edx
  __int128 v20; // xmm0
  unsigned int v22; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  v10 = v5 * (unsigned __int128)0x1CuLL;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x2C0u);
    goto LABEL_40;
  }
  v11 = 0;
  if ( 28 * v5 == a5 )
  {
    if ( a4 )
    {
      v13 = 0;
      if ( (_DWORD)v5 )
      {
        v14 = (_QWORD *)((char *)this + 216);
        while ( 1 )
        {
          ResourceWithoutType = 0LL;
          v16 = 0LL;
          if ( *((int *)this + 58) <= 0 )
          {
LABEL_13:
            v16 = -1LL;
          }
          else
          {
            *(_QWORD *)&v10 = *v14;
            DWORD2(v10) = a4[7 * v13];
            while ( *(_DWORD *)v10 != DWORD2(v10) )
            {
              ++v16;
              *(_QWORD *)&v10 = v10 + 4;
              if ( v16 >= *((int *)this + 58) )
                goto LABEL_13;
            }
          }
          v6 = v16 == -1 ? 0LL : *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v16);
          v17 = &a4[7 * v13];
          if ( (v17[6] & 2) == 0 )
            break;
          if ( v6 )
          {
            CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
              (char *)this + 216,
              *v17,
              v7);
            InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6, v18);
LABEL_32:
            v7 = a2;
          }
          v6 = 0LL;
          if ( (unsigned int)++v13 >= *((_DWORD *)a3 + 3) )
            goto LABEL_40;
        }
        v19 = v17[1];
        if ( v19 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v19);
          if ( !ResourceWithoutType )
          {
            v22 = 737;
            goto LABEL_4;
          }
        }
        if ( v6 )
        {
          CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v6 + 24));
          InternalFilterInput::Update(
            (InternalFilterInput *)v6,
            v17[6],
            (const struct tagRECT *)(v17 + 2),
            ResourceWithoutType);
        }
        else
        {
          v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, CResourceTable *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                 WPF::g_pProcessHeap,
                 32LL,
                 v7);
          if ( v6 )
          {
            *(_DWORD *)v6 = v17[6];
            v20 = *(_OWORD *)(v17 + 2);
            *(_QWORD *)(v6 + 24) = ResourceWithoutType;
            *(_OWORD *)(v6 + 4) = v20;
            if ( ResourceWithoutType )
              (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          }
          else
          {
            v6 = 0LL;
          }
          v25 = v6;
          if ( !v6 )
          {
            v12 = -2147024882;
            v22 = 744;
            goto LABEL_5;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (char *)this + 216,
                                &a4[7 * v13],
                                &v25) )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2EBu);
            v6 = v25;
            goto LABEL_41;
          }
          v6 = v25;
        }
        LODWORD(v10) = CResource::RegisterNotifier(this, *(struct CResource **)(v6 + 24));
        v11 = v10;
        if ( (v10 & 0x80000000) != 0LL )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2FDu);
          goto LABEL_40;
        }
        goto LABEL_32;
      }
    }
LABEL_40:
    if ( v11 >= 0 )
      goto LABEL_42;
    goto LABEL_41;
  }
  v22 = 708;
LABEL_4:
  v12 = -2003303421;
LABEL_5:
  v11 = v12;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v22);
LABEL_41:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_42:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6, DWORD2(v10));
  return (unsigned int)v11;
}
