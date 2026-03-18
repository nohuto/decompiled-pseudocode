/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800F59F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@UIEffectInstance@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801226C8 (--4-$ComPtr@UIEffectInstance@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  unsigned int v4; // edi
  struct CResource *Resource; // rax
  struct CResource *v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // r15d
  __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rsi
  unsigned int v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v4 = -2003303422;
    v17 = 276;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v17);
    goto LABEL_18;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x6Au);
  v6 = Resource;
  if ( !Resource )
  {
    v4 = -2003303421;
    v17 = 284;
    goto LABEL_3;
  }
  CResource::RegisterNotifier(this, Resource);
  *((_QWORD *)this + 9) = v6;
  v7 = *((_QWORD *)v6 + 6);
  if ( !v7 )
    goto LABEL_17;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &v18);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x127u);
    goto LABEL_18;
  }
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *((unsigned int *)this + 52);
      v19 = 0LL;
      v12 = v11 + 1;
      if ( (int)v11 + 1 < (unsigned int)v11 )
        break;
      if ( v12 > *((_DWORD *)this + 51) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 184, 8, 1, &v19);
        v14 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        v4 = v14;
        if ( v14 < 0 )
          goto LABEL_22;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v11) = v19;
        *((_DWORD *)this + 52) = v12;
      }
      if ( ++v9 >= v10 )
        goto LABEL_17;
    }
    v14 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x12Du);
  }
  else
  {
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IEffectInstance>::operator=((char *)this + 88, &v18);
    v4 = 0;
  }
LABEL_18:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
  return v4;
}
