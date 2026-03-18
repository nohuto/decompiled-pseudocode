/*
 * XREFs of ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x1800F4A90
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800B8944 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18008B230 (-AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFlipChain::AddBuffer(CFlipChain *this, struct CBitmapOfDeviceBitmaps **a2)
{
  struct IDeviceResourceNotify *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebp
  bool v7; // zf
  __int64 v8; // r14
  CBitmapOfDeviceBitmaps *v9; // rcx
  char *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ebx
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  if ( this )
    v4 = (CFlipChain *)((char *)this + 72);
  else
    v4 = 0LL;
  v5 = CBitmapOfDeviceBitmaps::AddResourceNotifier((struct CBitmapOfDeviceBitmaps *)((char *)*a2 + 256), v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2CEu);
    goto LABEL_19;
  }
  DWORD2(v17) = 0;
  v7 = *((_DWORD *)this + 38) == 0;
  *(_QWORD *)&v17 = *a2;
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 8));
    v9 = *a2;
    if ( *a2 )
      v10 = (char *)v9 + 16;
    else
      v10 = 0LL;
    *((_QWORD *)this + 8) = v10;
    if ( v9 )
      CBitmapOfDeviceBitmaps::AddRef(v9);
  }
  v11 = (_QWORD *)((char *)this + 128);
  v12 = *((unsigned int *)this + 38);
  v13 = v12 + 1;
  if ( (int)v12 + 1 >= (unsigned int)v12 )
  {
    v6 = 0;
    if ( v13 > *((_DWORD *)this + 37) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 16, 1, &v17);
      v14 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      v6 = v14;
      if ( v14 < 0 )
        goto LABEL_25;
    }
    else
    {
      *(_OWORD *)(*v11 + 16 * v12) = v17;
      *((_DWORD *)this + 38) = v13;
    }
    *a2 = 0LL;
    goto LABEL_19;
  }
  v14 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v6 = -2147024362;
LABEL_25:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2DAu);
LABEL_19:
  if ( *a2 )
  {
    CMILCOMBase::InternalRelease(*a2);
    *a2 = 0LL;
  }
  return v6;
}
