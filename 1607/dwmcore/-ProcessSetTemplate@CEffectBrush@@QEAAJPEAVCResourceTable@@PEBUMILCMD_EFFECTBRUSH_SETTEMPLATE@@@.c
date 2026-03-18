/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18010D234
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  int v4; // ebx
  int v5; // r9d
  struct CResource *Resource; // rax
  struct CResource *v7; // rsi
  int v8; // eax
  __int64 v9; // rsi
  int v10; // ebp
  unsigned int v11; // r14d
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // eax
  void (__fastcall ***v15)(_QWORD); // rbx
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD); // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  void (__fastcall ***v20)(_QWORD); // [rsp+50h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0LL;
  if ( *((_QWORD *)this + 17) )
  {
    v4 = -2003303422;
    v19 = 305;
    goto LABEL_3;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x74u);
  v7 = Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v19 = 313;
    goto LABEL_3;
  }
  v8 = CResource::RegisterNotifier(this, Resource);
  v4 = v8;
  if ( v8 < 0 )
  {
    v19 = 316;
    goto LABEL_27;
  }
  *((_QWORD *)this + 17) = v7;
  v9 = *((_QWORD *)v7 + 16);
  if ( !v9 )
  {
LABEL_18:
    v15 = v20;
    if ( *((void (__fastcall ****)(_QWORD))this + 19) != v20 )
    {
      if ( v20 )
        (**v20)(v20);
      v16 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v15;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    v4 = 0;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    goto LABEL_29;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v9 + 120LL))(v9, &v20);
  v4 = v8;
  if ( v8 < 0 )
  {
    v19 = 324;
LABEL_27:
    v5 = v8;
    goto LABEL_28;
  }
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  if ( !v11 )
    goto LABEL_18;
  while ( 1 )
  {
    v12 = *((unsigned int *)this + 68);
    v21 = 0LL;
    v13 = v12 + 1;
    if ( (int)v12 + 1 < (unsigned int)v12 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_16;
    }
    if ( v13 > *((_DWORD *)this + 67) )
      break;
    *(_QWORD *)(*((_QWORD *)this + 31) + 8 * v12) = v21;
    *((_DWORD *)this + 68) = v13;
LABEL_17:
    if ( ++v10 >= v11 )
      goto LABEL_18;
  }
  v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 8u, 1, &v21);
  v4 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
LABEL_16:
  if ( v4 >= 0 )
    goto LABEL_17;
  v19 = 330;
LABEL_3:
  v5 = v4;
LABEL_28:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v19);
LABEL_29:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*v17)[1](v17);
  }
  return (unsigned int)v4;
}
