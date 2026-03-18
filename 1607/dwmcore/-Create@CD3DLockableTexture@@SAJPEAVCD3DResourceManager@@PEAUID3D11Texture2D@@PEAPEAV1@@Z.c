/*
 * XREFs of ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18017D9EC
 * Callers:
 *     ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x18017361C (-CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800814A4 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x180081690 (--0CD3DTexture@@IEAA@_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DLockableTexture::Create(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        struct CD3DLockableTexture **a3)
{
  CD3DTexture *v6; // rcx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax

  *a3 = 0LL;
  v6 = (CD3DTexture *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        256LL);
  if ( v6 )
  {
    CD3DTexture::CD3DTexture(v6, 0);
    *(_QWORD *)(v7 + 24) = &CD3DLockableTexture::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v7 = &CD3DLockableTexture::`vftable'{for `CMILPoolResource'};
  }
  else
  {
    v7 = 0LL;
  }
  *a3 = (struct CD3DLockableTexture *)v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Au);
    goto LABEL_10;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v9 = CD3DTexture::Init(*a3, a1, a2, 0);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7Bu);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x41u);
LABEL_10:
    if ( *a3 )
    {
      CMILPoolResource::Release(*a3);
      *a3 = 0LL;
    }
  }
  return (unsigned int)v8;
}
