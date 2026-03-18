/*
 * XREFs of ?ProcessSetTreeEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTREEEFFECT@@@Z @ 0x180109C44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x18010A1B0 (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 */

__int64 __fastcall CVisual::ProcessSetTreeEffect(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTREEEFFECT *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // r14
  _QWORD *v8; // rax
  struct CTreeEffect *v9; // rax
  struct CResource **v10; // rsi
  int v11; // eax
  struct CResource *v12; // rcx
  struct CResource **TreeEffectInternal; // rsi
  struct CResource *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  _QWORD *v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) == 0 )
      return v4;
    TreeEffectInternal = (struct CResource **)CVisual::GetTreeEffectInternal(this);
    CResource::UnRegisterNotifierInternal(this, *TreeEffectInternal);
    v14 = *TreeEffectInternal;
    if ( *TreeEffectInternal )
    {
      *TreeEffectInternal = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_24;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x51u);
  if ( Resource )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x10000) == 0 )
    {
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       16LL);
      if ( !v8 )
      {
        v4 = -2147024882;
        v16 = 2111;
        goto LABEL_4;
      }
      *v8 = 0LL;
      v17 = v8;
      if ( v8 == (_QWORD *)`CVisual::SetTreeEffectInternal'::`2'::sc_defaultValue )
        *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x10000u;
      else
        CSparseStorage::SetData((char **)this + 34, 16, 8u, &v17);
    }
    v9 = CVisual::GetTreeEffectInternal(this);
    v10 = (struct CResource **)v9;
    if ( !v9 )
    {
      v4 = -2147024890;
      v16 = 2117;
      goto LABEL_4;
    }
    if ( *(struct CResource **)v9 == Resource )
      return v4;
    v11 = CResource::RegisterNotifier(this, Resource);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x849u);
      return v4;
    }
    CResource::UnRegisterNotifierInternal(this, *v10);
    if ( *v10 != Resource )
    {
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
      v12 = *v10;
      *v10 = Resource;
      if ( v12 )
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 16LL))(v12);
    }
LABEL_24:
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    return v4;
  }
  v4 = -2003303421;
  v16 = 2104;
LABEL_4:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v16);
  return v4;
}
