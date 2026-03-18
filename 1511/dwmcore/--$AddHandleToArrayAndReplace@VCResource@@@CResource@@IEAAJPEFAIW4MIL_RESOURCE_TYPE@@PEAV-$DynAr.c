/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180085B7C
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009E728 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v16; // edi
  int v17; // eax
  struct CResource *v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v7 = (unsigned int)*a2;
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v18 = Resource;
    if ( !Resource )
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x14Eu);
      return v6;
    }
    v11 = CResource::RegisterNotifier(this, Resource);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x152u);
      return v6;
    }
    v13 = *(_DWORD *)(a4 + 24);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v6 = -2147024362;
    }
    else
    {
      v6 = 0;
      if ( v14 <= *(_DWORD *)(a4 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a4 + 8LL * v13) = v18;
        *(_DWORD *)(a4 + 24) = v14;
LABEL_7:
        *a2 = *(_DWORD *)(a4 + 24) - 1;
        return v6;
      }
      v17 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8LL, v12, &v18);
      v16 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      v6 = v16;
      if ( v16 >= 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x158u);
    CResource::UnRegisterNotifierInternal(this, v18);
  }
  return v6;
}
