/*
 * XREFs of ?ProcessUpdateTemplate@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATETEMPLATE@@@Z @ 0x180113778
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801118C0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x180111928 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x180121E80 (--0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CCompiledEffect::ProcessUpdateTemplate(
        CCompiledEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECT_UPDATETEMPLATE *a3)
{
  InternalFilterInput *v3; // rdi
  unsigned int v5; // ebx
  struct CResource *Resource; // rax
  struct CResource *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // r14d
  InternalFilterInput *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  struct tagRECT v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  InternalFilterInput *v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = -2003303422;
    v14 = 133;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v14);
    return v5;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 98LL);
  v7 = Resource;
  if ( !Resource )
  {
    v5 = -2003303421;
    v14 = 141;
    goto LABEL_3;
  }
  CResource::RegisterNotifier(this, Resource);
  *((_QWORD *)this + 7) = v7;
  v8 = *((_QWORD *)v7 + 6);
  if ( v8 && (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8), v10 = 0, v11 = v9, v16 = 0, v9) )
  {
    while ( 1 )
    {
      v15 = 0LL;
      v12 = (InternalFilterInput *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     56LL);
      if ( v12 )
        v12 = InternalFilterInput::InternalFilterInput(v12, 2u, &v15, 0LL);
      v17 = v12;
      if ( !v12 )
        break;
      if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                            (__int64)this + 168,
                            &v16,
                            &v17) )
      {
        v5 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Fu);
        v3 = v17;
        goto LABEL_15;
      }
      ++v10;
      v3 = 0LL;
      v16 = v10;
      if ( v10 >= v11 )
        goto LABEL_14;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Bu);
  }
  else
  {
LABEL_14:
    v5 = 0;
LABEL_15:
    if ( v3 )
      InternalFilterInput::`scalar deleting destructor'(v3);
  }
  return v5;
}
