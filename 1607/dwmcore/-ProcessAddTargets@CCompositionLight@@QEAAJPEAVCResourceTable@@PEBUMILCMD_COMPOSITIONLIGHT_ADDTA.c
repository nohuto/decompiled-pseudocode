/*
 * XREFs of ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x18010A5B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z @ 0x180137E4C (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CCompositionLight::ProcessAddTargets(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONLIGHT_ADDTARGETS *a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  struct CResource *ResourceWithoutType; // rax
  CVisual *v11; // rdi
  CVisual **v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  CVisual *v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[v5]);
      v11 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              32LL) )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x3Bu);
        return v4;
      }
      v19 = v11;
      v12 = (CVisual **)*((_QWORD *)this + 17);
      v13 = 0;
      if ( *((_DWORD *)this + 40) )
      {
        while ( v11 != *v12 )
        {
          ++v13;
          ++v12;
          if ( v13 >= *((_DWORD *)this + 40) )
            goto LABEL_7;
        }
        goto LABEL_15;
      }
LABEL_7:
      v14 = *((_DWORD *)this + 40);
      v15 = v14 + 1;
      if ( v14 + 1 < v14 )
        break;
      if ( v15 > *((_DWORD *)this + 39) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 136, 8u, 1, &v19);
        v4 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
LABEL_13:
        if ( (v4 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x41u);
          return v4;
        }
        goto LABEL_14;
      }
      *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)this + 40)) = v19;
      *((_DWORD *)this + 40) = v15;
LABEL_14:
      v17 = CVisual::AddLight(v19, this);
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x42u);
        return v4;
      }
LABEL_15:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_13;
  }
  return v4;
}
