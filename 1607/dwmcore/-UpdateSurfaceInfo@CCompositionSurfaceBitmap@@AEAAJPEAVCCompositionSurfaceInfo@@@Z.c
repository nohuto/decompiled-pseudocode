/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180093308
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180093490 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18014262C (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::UpdateSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  char v4; // bp
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v10; // edx
  char *v11; // r10
  __int64 v12; // r9
  __int64 i; // rcx
  CMILCOMBase *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  char *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 65);
  v3 = 0;
  v4 = 0;
  if ( (struct CCompositionSurfaceInfo *)v2 != a2 )
  {
    if ( v2 )
    {
      v10 = *(_DWORD *)(v2 + 336);
      v11 = (char *)this + 128;
      v12 = *(_QWORD *)(v2 + 312);
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
            v16 = (unsigned int)(i + 1);
            *(_QWORD *)(v12 + 8 * i) = *(_QWORD *)(v12 + 8 * v16);
            i = v16;
          }
          while ( (unsigned int)v16 < *(_DWORD *)(v2 + 336) - 1 );
        }
        --*(_DWORD *)(v2 + 336);
      }
      v14 = (CMILCOMBase *)*((_QWORD *)this + 65);
      if ( v14 )
      {
        CMILCOMBase::InternalRelease(v14);
        *((_QWORD *)this + 65) = 0LL;
      }
      v4 = 1;
    }
    if ( a2 )
    {
      v17 = (char *)this + 128;
      v7 = *((_DWORD *)a2 + 84);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v8 <= *((_DWORD *)a2 + 83) )
        {
          *(_QWORD *)(*((_QWORD *)a2 + 39) + 8LL * v7) = v17;
          *((_DWORD *)a2 + 84) = v8;
LABEL_7:
          *((_QWORD *)this + 65) = a2;
          CBitmapOfDeviceBitmaps::AddRef(a2);
LABEL_8:
          CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
          CResource::NotifyOnChanged(this, 0, 0LL);
          return v3;
        }
        v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 312, 8LL, 1LL, &v17);
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      }
      if ( (v3 & 0x80000000) == 0 )
        goto LABEL_7;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x44Du);
    }
    if ( !v4 )
      return v3;
    goto LABEL_8;
  }
  return v3;
}
