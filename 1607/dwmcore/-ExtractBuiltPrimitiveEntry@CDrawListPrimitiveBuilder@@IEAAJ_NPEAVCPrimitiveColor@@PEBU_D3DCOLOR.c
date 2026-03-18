/*
 * XREFs of ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800961EC
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x180111108 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011115C (-Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180057620 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CHWDrawListEntry@@AEAA@AEBUHWDrawListEntryParams@@@Z @ 0x18007C588 (--0CHWDrawListEntry@@AEAA@AEBUHWDrawListEntryParams@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
        CDrawListPrimitiveBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  CMILRefCountBase *v4; // rsi
  int v6; // edi
  unsigned int v7; // ecx
  CMILRefCountBase *v8; // r15
  const unsigned __int16 *v12; // r9
  unsigned int v13; // r8d
  const struct CVertexXYAAColorDUV2 *v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  LPVOID (__fastcall *v17)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CHWDrawListEntry *v18; // rax
  CHWDrawListEntry *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 (__fastcall *v22)(CMILRefCountBase *); // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  bool v27; // [rsp+38h] [rbp-29h]
  __int64 v28; // [rsp+48h] [rbp-19h] BYREF
  CHWDrawListEntry *v29; // [rsp+50h] [rbp-11h] BYREF
  struct D2D_VECTOR_2F v30; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-1h] BYREF
  __int64 v32; // [rsp+68h] [rbp+7h]
  CMILRefCountBase *v33; // [rsp+70h] [rbp+Fh]
  char *v34; // [rsp+78h] [rbp+17h]
  struct CPrimitiveColor *v35; // [rsp+80h] [rbp+1Fh]
  const struct _D3DCOLORVALUE *v36; // [rsp+88h] [rbp+27h]
  CMILRefCountBase *v37; // [rsp+C8h] [rbp+67h] BYREF

  v4 = 0LL;
  v28 = 0LL;
  v6 = 0;
  v7 = *((_DWORD *)this + 584);
  v8 = 0LL;
  v37 = 0LL;
  if ( v7 )
  {
    v12 = (const unsigned __int16 *)*((_QWORD *)this + 289);
    v13 = *((_DWORD *)this + 96);
    v14 = (const struct CVertexXYAAColorDUV2 *)*((_QWORD *)this + 45);
    v27 = *((char *)this + 344) < 0;
    v30 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)*(unsigned int *)this, (__m128)*((unsigned int *)this + 1)).m128_u64[0];
    v15 = CDrawListPrimitive::Create(0, v14, v13, v12, v7, &v30, v27, &v37);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x4C1u);
    }
    else
    {
      memset_0(&v31, 0, 0x30uLL);
      v4 = v37;
      v35 = a3;
      v34 = (char *)this + 32;
      v16 = *((_DWORD *)this + 6);
      v31 = v16;
      v33 = v37;
      v36 = a4;
      if ( a2 )
      {
        v16 |= 8u;
        v31 = v16;
      }
      if ( !*((_BYTE *)this + 2414) )
      {
        v25 = *((_QWORD *)this + 2);
        if ( v25 )
        {
          if ( *((_BYTE *)this + 29) )
          {
            v31 = v16 & 0xFFFFFFDF;
          }
          else
          {
            v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 16LL))(v25, 0LL, &v28);
            v6 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4DAu);
              goto LABEL_18;
            }
            v32 = v28;
          }
        }
      }
      v17 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v17 == WPF::ProcessHeapImpl::Alloc )
        v18 = (CHWDrawListEntry *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0xC0uLL);
      else
        v18 = (CHWDrawListEntry *)v17(WPF::g_pProcessHeap, 192LL);
      if ( v18 )
        v19 = CHWDrawListEntry::CHWDrawListEntry(v18, (const struct HWDrawListEntryParams *)&v31);
      else
        v19 = 0LL;
      if ( !v19 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x17u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4DFu);
        goto LABEL_18;
      }
      _InterlockedAdd((volatile signed __int32 *)v19 + 2, 1u);
      v8 = v19;
      v29 = v19;
      v20 = *((_DWORD *)this + 26);
      v21 = v20 + 1;
      if ( v20 + 1 < v20 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        v6 = 0;
        if ( v21 <= *((_DWORD *)this + 25) )
        {
          *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * v20) = v29;
          *((_DWORD *)this + 26) = v21;
LABEL_14:
          v4 = v37;
          v8 = 0LL;
          goto LABEL_15;
        }
        v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &v29);
        v6 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
      }
      if ( v6 >= 0 )
        goto LABEL_14;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4E0u);
    }
    v4 = v37;
    goto LABEL_18;
  }
LABEL_15:
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 584) = 0;
  *((_DWORD *)this + 602) = 0;
  *((_BYTE *)this + 2414) = (!*((_BYTE *)this + 29) || (*((_BYTE *)this + 24) & 0x20) != 0)
                         && CCommonRegistryData::m_fEnableCpuClipping != 0;
LABEL_18:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v4 )
  {
    v22 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 8LL);
    if ( v22 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v22(v4);
  }
  if ( v8 )
    CMILRefCountBase::Release(v8);
  return (unsigned int)v6;
}
