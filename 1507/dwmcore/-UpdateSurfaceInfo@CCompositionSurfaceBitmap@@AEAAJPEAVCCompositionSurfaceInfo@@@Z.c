/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800870F8
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180087270 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18010A63C (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::UpdateSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r14d
  char v4; // si
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v10; // edx
  char *v11; // r10
  __int64 v12; // r9
  __int64 i; // rcx
  CMILCOMBase *v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdx
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 54);
  v3 = 0;
  v4 = 0;
  if ( (struct CCompositionSurfaceInfo *)v2 == a2 )
    return v3;
  if ( v2 )
  {
    v10 = *(_DWORD *)(v2 + 224);
    v11 = (char *)this + 48;
    v12 = *(_QWORD *)(v2 + 200);
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      if ( v11 == *(char **)(v12 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v10 )
    {
      if ( (unsigned int)i < v10 - 1 )
      {
        do
        {
          v17 = (unsigned int)(i + 1);
          *(_QWORD *)(v12 + 8 * i) = *(_QWORD *)(v12 + 8 * v17);
          i = v17;
        }
        while ( (unsigned int)v17 < *(_DWORD *)(v2 + 224) - 1 );
      }
      --*(_DWORD *)(v2 + 224);
    }
    v14 = (CMILCOMBase *)*((_QWORD *)this + 54);
    if ( v14 )
    {
      CMILCOMBase::InternalRelease(v14);
      *((_QWORD *)this + 54) = 0LL;
    }
    v4 = 1;
  }
  if ( a2 )
  {
    v18 = (char *)this + 48;
    v7 = *((_DWORD *)a2 + 56);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      if ( v8 <= *((_DWORD *)a2 + 55) )
      {
        *(_QWORD *)(*((_QWORD *)a2 + 25) + 8LL * v7) = v18;
        *((_DWORD *)a2 + 56) = v8;
LABEL_7:
        *((_QWORD *)this + 54) = a2;
        CBitmapOfDeviceBitmaps::AddRef(a2);
        v4 = 1;
        goto LABEL_8;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 200, 8u, 1, &v18);
      v16 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v3 = v16;
      if ( v16 >= 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x44Fu);
  }
LABEL_8:
  if ( v4 )
  {
    CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  return v3;
}
