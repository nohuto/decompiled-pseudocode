/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x18002E890
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002DEF0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180125F08 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // edx
  char *v13; // r10
  __int64 v14; // r9
  __int64 i; // rcx
  CMILCOMBase *v16; // rcx
  __int64 v17; // rdx
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 55);
  v3 = 0;
  v4 = 0;
  if ( (struct CCompositionSurfaceInfo *)v2 == a2 )
    return v3;
  if ( v2 )
  {
    v12 = *(_DWORD *)(v2 + 216);
    v13 = (char *)this + 56;
    v14 = *(_QWORD *)(v2 + 192);
    for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
    {
      if ( v13 == *(char **)(v14 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v12 )
    {
      if ( (unsigned int)i < v12 - 1 )
      {
        do
        {
          v17 = (unsigned int)(i + 1);
          *(_QWORD *)(v14 + 8 * i) = *(_QWORD *)(v14 + 8 * v17);
          i = v17;
        }
        while ( (unsigned int)v17 < *(_DWORD *)(v2 + 216) - 1 );
      }
      --*(_DWORD *)(v2 + 216);
    }
    v16 = (CMILCOMBase *)*((_QWORD *)this + 55);
    if ( v16 )
    {
      CMILCOMBase::InternalRelease(v16);
      *((_QWORD *)this + 55) = 0LL;
    }
    v4 = 1;
  }
  if ( a2 )
  {
    v18 = (char *)this + 56;
    v7 = *((_DWORD *)a2 + 54);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      if ( v8 <= *((_DWORD *)a2 + 53) )
      {
        *(_QWORD *)(*((_QWORD *)a2 + 24) + 8LL * v7) = v18;
        *((_DWORD *)a2 + 54) = v8;
LABEL_7:
        *((_QWORD *)this + 55) = a2;
        CBitmapOfDeviceBitmaps::AddRef(a2);
        v4 = 1;
        goto LABEL_8;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 192, 8LL, 1LL, &v18);
      v11 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
      v3 = v11;
      if ( v11 >= 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x440u);
  }
LABEL_8:
  if ( v4 )
  {
    CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return v3;
}
