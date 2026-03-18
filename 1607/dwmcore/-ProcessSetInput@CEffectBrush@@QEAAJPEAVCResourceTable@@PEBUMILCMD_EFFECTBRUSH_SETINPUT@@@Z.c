/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x18010D51C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  struct CResource *ResourceWithoutType; // rax
  unsigned int v6; // ebx
  struct CResource *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned int v11; // [rsp+20h] [rbp-28h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  v6 = 0;
  v7 = ResourceWithoutType;
  if ( ResourceWithoutType
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
          ResourceWithoutType,
          80LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 79LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 84LL) )
  {
    v11 = 366;
LABEL_6:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v11);
    return v6;
  }
  if ( *((_DWORD *)a3 + 2) >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 17) + 128LL)
                                                                     + 32LL))(*(_QWORD *)(*((_QWORD *)this + 17) + 128LL)) )
  {
    v11 = 374;
    goto LABEL_6;
  }
  v8 = *((unsigned int *)a3 + 2);
  v9 = *((_QWORD *)this + 31);
  if ( *(_QWORD *)(v9 + 8 * v8) )
  {
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v9 + 8 * v8));
    *(_QWORD *)(v9 + 8 * v8) = 0LL;
  }
  if ( v7 )
  {
    *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)a3 + 2)) = v7;
    CResource::RegisterNotifier(this, v7);
  }
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  return v6;
}
