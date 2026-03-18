/*
 * XREFs of ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180035BA0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180046D60 (-IsOfType@CAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180048180 (-Release@CResource@@UEAAKXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180049EC4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18006E070 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsMesh@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006F460 (-IsOfType@CAtlasedRectsMesh@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006FA50 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x180070290 (-Release@CAtlasedRects@@UEAAKXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18008DBD0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z @ 0x1800E3AA8 (-RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z.c)
 */

__int64 __fastcall CComposition::Channel_DeleteResource(
        CRenderTargetManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_DELETERESOURCE *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  bool (__fastcall *v8)(__int64, int); // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  bool (__fastcall *v15)(__int64, int); // rbx
  char v16; // al
  __int64 v17; // r14
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // r12d
  bool (__fastcall *v22)(__int64, int); // rbx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(CVisual *); // rbp

  v4 = *((_DWORD *)a4 + 1);
  v5 = *((_DWORD *)a4 + 2);
  v6 = 0;
  v8 = CAnimation::IsOfType;
  v10 = CRgnGeometry::IsOfType;
  if ( v4
    && v4 < *((_DWORD *)a3 + 7)
    && (v12 = *((_QWORD *)a3 + 5), *(_DWORD *)(v4 * *((_DWORD *)a3 + 6) + v12))
    && (v13 = v12 + v4 * *((_DWORD *)a3 + 6), (v14 = *(_QWORD *)(v13 + 8)) != 0)
    && ((v15 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 48LL), v15 == CVisual::IsOfType)
      ? (v16 = CVisual::IsOfType(*(_QWORD *)(v13 + 8), v5))
      : (char *)v15 == (char *)CRgnGeometry::IsOfType
      ? (v16 = CRgnGeometry::IsOfType(*(_QWORD *)(v13 + 8), v5, CRgnGeometry::IsOfType, CAnimation::IsOfType))
      : v15 == CAnimation::IsOfType
      ? (v16 = CAnimation::IsOfType(*(_QWORD *)(v13 + 8), v5))
      : (char *)v15 == (char *)CAtlasedRectsMesh::IsOfType
      ? (v16 = CAtlasedRectsMesh::IsOfType(*(_QWORD *)(v13 + 8), v5, CRgnGeometry::IsOfType, CAnimation::IsOfType))
      : (char *)v15 == (char *)CPrimitiveGroup::IsOfType
      ? (v16 = CPrimitiveGroup::IsOfType(*(_QWORD *)(v13 + 8), v5))
      : (v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, bool (__fastcall *)(__int64, int)))v15)(
                 *(_QWORD *)(v13 + 8),
                 v5,
                 CRgnGeometry::IsOfType,
                 CAnimation::IsOfType)),
        v16) )
  {
    v17 = *(_QWORD *)(v13 + 8);
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17
    && ((v18 = *((_DWORD *)a4 + 1)) == 0 || v18 >= *((_DWORD *)a3 + 7)
      ? (v19 = 0)
      : (v19 = *(_DWORD *)(*((_DWORD *)a3 + 6) * v18 + *((_QWORD *)a3 + 5))),
        v20 = *((_DWORD *)a4 + 2),
        v19 == v20) )
  {
    if ( v20 == 37 )
    {
      CComposition::RemoveDesktopRenderTarget((CComposition *)this, (struct CDesktopRenderTarget *)v17);
      CDesktopRenderTarget::ReleaseResourcesForDisplayChange((CDesktopRenderTarget *)(v17 + 40));
    }
    else if ( v20 == 36 || v20 == 49 )
    {
      CRenderTargetManager::RemoveRenderTarget(this[4], (struct CRenderTarget *)v17);
    }
    v21 = *((_DWORD *)a4 + 1);
    v22 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v17 + 48LL);
    if ( v22 == CVisual::IsOfType )
    {
      v23 = CVisual::IsOfType(v17, 40);
    }
    else if ( (char *)v22 == (char *)CRgnGeometry::IsOfType )
    {
      v23 = CRgnGeometry::IsOfType(v17, 40LL, v10, v8);
    }
    else if ( v22 == CAnimation::IsOfType )
    {
      v23 = CAnimation::IsOfType(v17, 40);
    }
    else if ( (char *)v22 == (char *)CAtlasedRectsMesh::IsOfType )
    {
      v23 = CAtlasedRectsMesh::IsOfType(v17, 40LL, v10, v8);
    }
    else if ( (char *)v22 == (char *)CPrimitiveGroup::IsOfType )
    {
      v23 = CPrimitiveGroup::IsOfType(v17, 40LL);
    }
    else
    {
      v23 = v22(v17, 40);
    }
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 40) + 144LL))(v17 + 40);
      CRenderTargetManager::RemoveRenderTarget(this[4], (struct CRenderTarget *)v17);
    }
    if ( v21 && v21 < *((_DWORD *)a3 + 7) && (v24 = *((_QWORD *)a3 + 5), *(_DWORD *)(v21 * *((_DWORD *)a3 + 6) + v24)) )
      v25 = v24 + v21 * *((_DWORD *)a3 + 6);
    else
      v25 = 0LL;
    if ( v25 && *(_DWORD *)v25 )
    {
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
      {
        v27 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v26 + 16LL);
        if ( v27 == CResource::Release )
        {
          CResource::Release(*(CResource **)(v25 + 8));
        }
        else if ( v27 == CVisual::Release )
        {
          CVisual::Release(*(CVisual **)(v25 + 8));
        }
        else if ( (char *)v27 == (char *)CAtlasedRects::Release )
        {
          CAtlasedRects::Release(*(CAtlasedRects **)(v25 + 8));
        }
        else if ( (char *)v27 == (char *)CPrimitiveGroup::Release )
        {
          CPrimitiveGroup::Release(*(CPrimitiveGroup **)(v25 + 8));
        }
        else
        {
          v27(*(CVisual **)(v25 + 8));
        }
        *(_QWORD *)(v25 + 8) = 0LL;
      }
      memset_0((void *)(*((_QWORD *)a3 + 5) + v21 * *((_DWORD *)a3 + 6)), 0, *((unsigned int *)a3 + 6));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x1103u);
      v6 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0xA03u);
    }
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9ECu);
  }
  return v6;
}
