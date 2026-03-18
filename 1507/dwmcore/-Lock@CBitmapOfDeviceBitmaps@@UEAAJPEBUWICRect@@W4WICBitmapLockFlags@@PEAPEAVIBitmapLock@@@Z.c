/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180138110
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180138050 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180080174 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180080424 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180137928 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801383B0 (-PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ.c)
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x180138818 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        CBitmapOfDeviceBitmaps *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  unsigned int v6; // edi
  CBitmapOfDeviceBitmaps *v7; // r14
  int v8; // eax
  int v9; // r11d
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  struct IUnknown *v14; // rsi
  __int64 v15; // rcx
  void *v16; // r10
  const struct PixelFormatInfo *v17; // r9
  int v18; // eax
  struct IUnknown *v20; // [rsp+60h] [rbp-9h] BYREF
  int v21; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp+3h] BYREF
  __int64 v23; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v24; // [rsp+78h] [rbp+Fh] BYREF

  v20 = 0LL;
  if ( a3 != WICBitmapLockRead )
  {
    v6 = -2003292287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292287, 0xE7u);
    return v6;
  }
  v7 = (CBitmapOfDeviceBitmaps *)((char *)this - 24);
  v8 = CBitmap::HrCheckPixelRect((CBitmapOfDeviceBitmaps *)((char *)this - 24), a2, &v24);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEAu);
    return v6;
  }
  if ( (unsigned __int8)CBitmapOfDeviceBitmaps::TryFastWarpLock(
                          (_DWORD)v7,
                          (unsigned int)&v24,
                          (unsigned int)&v23,
                          (unsigned int)&v22,
                          (struct CWarpLockSubresource *)&v21,
                          (__int64)&v20) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 31));
    *((_QWORD *)this + 31) = 0LL;
    v9 = v21;
    v10 = v23;
    v11 = v22;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)this + 31) )
  {
    v12 = CBitmapOfDeviceBitmaps::PrepareSysMemBufferAsSourcePixels(v7);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x10Eu);
LABEL_13:
      v14 = v20;
      goto LABEL_18;
    }
  }
  v13 = CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer((__int64)v7, (__m128i *)&v24);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x111u);
    goto LABEL_13;
  }
  v10 = *((_QWORD *)this + 31);
  v11 = *((_DWORD *)this + 65);
  v9 = *((_DWORD *)this + 64);
LABEL_15:
  v15 = v11 * v24.top + v24.left * *((_DWORD *)this + 66);
  v16 = (void *)(v15 + v10);
  v17 = (CBitmapOfDeviceBitmaps *)((char *)this + 176);
  v14 = v20;
  v18 = CBitmap::HrLock(
          v7,
          v24.right - v24.left,
          v24.bottom - v24.top,
          v17,
          v11,
          v9 - (int)v15,
          v16,
          WICBitmapLockRead,
          a4,
          0,
          v20);
  v6 = v18;
  if ( v18 >= 0 )
    v14 = 0LL;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x129u);
LABEL_18:
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  return v6;
}
