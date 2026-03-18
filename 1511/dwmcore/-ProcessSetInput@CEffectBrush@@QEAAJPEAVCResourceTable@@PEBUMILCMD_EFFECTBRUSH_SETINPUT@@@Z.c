/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1800F5C60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UpdateAlphaMode@CEffectBrush@@AEAAXI@Z @ 0x18012339C (-UpdateAlphaMode@CEffectBrush@@AEAAXI@Z.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  struct CResource *ResourceWithoutType; // rax
  unsigned int v6; // esi
  struct CResource *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v11; // [rsp+20h] [rbp-28h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  v6 = 0;
  v7 = ResourceWithoutType;
  if ( ResourceWithoutType
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
          ResourceWithoutType,
          78LL) )
  {
    v11 = 332;
LABEL_6:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v11);
    return v6;
  }
  if ( *((_DWORD *)a3 + 2) >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 9) + 48LL) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 9) + 48LL)) )
  {
    v11 = 340;
    goto LABEL_6;
  }
  v8 = *((unsigned int *)a3 + 2);
  v9 = *((_QWORD *)this + 23);
  if ( *(_QWORD *)(v9 + 8 * v8) )
  {
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v9 + 8 * v8));
    *(_QWORD *)(v9 + 8 * v8) = 0LL;
  }
  if ( v7 )
  {
    *(_QWORD *)(*((_QWORD *)this + 23) + 8LL * *((unsigned int *)a3 + 2)) = v7;
    CResource::RegisterNotifier(this, v7);
    CEffectBrush::UpdateAlphaMode(this, *((_DWORD *)a3 + 2));
  }
  return v6;
}
