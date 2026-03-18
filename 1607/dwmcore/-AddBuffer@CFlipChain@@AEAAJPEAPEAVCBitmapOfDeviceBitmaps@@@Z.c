/*
 * XREFs of ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18010BB5C
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800BC508 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180093F80 (-AddResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipChain::AddBuffer(CFlipChain *this, struct CBitmapOfDeviceBitmaps **a2)
{
  struct IDeviceResourceNotify *v4; // rdx
  int v5; // eax
  int v6; // ebx
  bool v7; // zf
  __int64 v8; // rcx
  CBitmapOfDeviceBitmaps *v9; // rcx
  char *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  if ( this )
    v4 = (CFlipChain *)((char *)this + 144);
  else
    v4 = 0LL;
  v5 = CBitmapOfDeviceBitmaps::AddResourceNotifier((struct CBitmapOfDeviceBitmaps *)((char *)*a2 + 256), v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    DWORD2(v16) = 0;
    v7 = *((_DWORD *)this + 56) == 0;
    *(_QWORD *)&v16 = *a2;
    if ( v7 )
    {
      v8 = *((_QWORD *)this + 17);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = *a2;
      if ( *a2 )
        v10 = (char *)v9 + 16;
      else
        v10 = 0LL;
      *((_QWORD *)this + 17) = v10;
      if ( v9 )
        CBitmapOfDeviceBitmaps::AddRef(v9);
    }
    v11 = (_QWORD *)((char *)this + 200);
    v12 = *((unsigned int *)this + 56);
    v13 = v12 + 1;
    if ( (int)v12 + 1 >= (unsigned int)v12 )
    {
      v6 = 0;
      if ( v13 <= *((_DWORD *)this + 55) )
      {
        *(_OWORD *)(*v11 + 16 * v12) = v16;
        *((_DWORD *)this + 56) = v13;
        goto LABEL_24;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 0x10u, 1, &v16);
      v6 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2DAu);
      goto LABEL_22;
    }
LABEL_24:
    *a2 = 0LL;
    return (unsigned int)v6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2CEu);
LABEL_22:
  if ( *a2 )
  {
    CMILCOMBase::InternalRelease(*a2);
    goto LABEL_24;
  }
  return (unsigned int)v6;
}
