/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18002A5C4
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18002BECC (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18000818C (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ??_GCDCompThumbnailData@@UEAAPEAXI@Z @ 0x180011F30 (--_GCDCompThumbnailData@@UEAAPEAXI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CVisual **a2)
{
  int v2; // edi
  struct CVisual *v5; // rcx
  struct CVisual *v6; // rdx
  struct CVisual *v7; // rdx
  CBaseObject *v8; // rcx
  struct CVisual *v9; // rcx
  struct CVisual *v10; // rax
  CBaseObject *v11; // rcx
  CDCompThumbnailData *(__fastcall *v12)(CDCompThumbnailData *, char); // rsi
  __int64 v14; // rsi
  struct CVisual *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  CBaseObject *v19; // rcx
  struct CThumbnailData *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = (struct CThumbnailData *)a2;
  v2 = 0;
  if ( *((_BYTE *)a2 + 34) )
  {
    v5 = a2[12];
    if ( v5 )
    {
      v6 = a2[13];
      if ( v6 )
      {
        VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), v6);
        v19 = a2[13];
        if ( v19 )
        {
          CBaseObject::Release(v19);
          a2[13] = 0LL;
        }
      }
      v7 = a2[11];
      if ( v7 )
        VisualCollection::Remove((struct CVisual *)((char *)a2[12] + 32), v7);
      v8 = a2[12];
      if ( v8 )
      {
        CBaseObject::Release(v8);
        a2[12] = 0LL;
      }
    }
  }
  else
  {
    v14 = *((_QWORD *)a2[2] + 46);
    if ( v14 )
    {
      v15 = a2[11];
      if ( v15 )
      {
        v16 = *(_QWORD *)(v14 + 552);
        if ( v16 )
        {
          v17 = VisualCollection::Remove((VisualCollection *)(v16 + 32), v15);
          v2 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x640u);
          }
          else if ( *(_DWORD *)(*(_QWORD *)(v14 + 552) + 72LL) == (*(_QWORD *)(v14 + 496) != 0LL) )
          {
            v18 = CWindowData::NotifyRepresentationChanged(*(CWindowData **)(v14 + 744));
            v2 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x649u);
          }
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x14EAu);
          return (unsigned int)v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove((__int64 *)a2[2] + 55, (__int64 *)&v20);
  v9 = a2[3];
  if ( v9 )
    DynArray<CThumbnailData *,0>::Remove((__int64 *)v9 + 59, (__int64 *)&v20);
  v10 = a2[11];
  if ( v10 )
    *((_QWORD *)v10 + 44) = 0LL;
  v11 = a2[11];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    a2[11] = 0LL;
  }
  v12 = *(CDCompThumbnailData *(__fastcall **)(CDCompThumbnailData *, char))*a2;
  if ( v12 == CDCompThumbnailData::`scalar deleting destructor' )
    CDCompThumbnailData::`scalar deleting destructor'((CDCompThumbnailData *)a2, 1);
  else
    v12((CDCompThumbnailData *)a2, 1);
  DynArray<CThumbnailData *,0>::Remove((__int64 *)this + 44, (__int64 *)&v20);
  return (unsigned int)v2;
}
