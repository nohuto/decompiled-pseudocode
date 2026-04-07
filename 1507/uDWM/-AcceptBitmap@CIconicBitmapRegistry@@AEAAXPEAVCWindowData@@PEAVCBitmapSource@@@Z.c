/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18006DC88
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x18006DDD4 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180030D04 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003A0A8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18006FA84 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007AA98 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        CWindowIconic ****this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  bool v5; // di
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  CWindowIconic *v10; // rcx
  CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v5 = *((_QWORD *)a2 + 45) == 0LL;
  *((_BYTE *)a2 + 554) &= ~8u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, v11, 0);
  if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
    CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)this, *this[2]);
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 10);
    v7 = v6 + 1;
    if ( v6 + 1 >= v6 )
    {
      if ( v7 > *((_DWORD *)this + 9) )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 2), 8u, 1, &v11);
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
      }
      else
      {
        this[2][*((unsigned int *)this + 10)] = (CWindowIconic **)v11;
        *((_DWORD *)this + 10) = v7;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
  }
  CWindowData::SetIconicBitmap(v11, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v9, (__int64)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)v11 + 5));
  v10 = (CWindowIconic *)*((_QWORD *)v11 + 49);
  if ( v10 )
  {
    CWindowIconic::SetBitmap(v10, *((struct CBitmapSource **)v11 + 45), (*((_BYTE *)v11 + 554) & 2) != 0, 1);
    if ( v5 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v11 + 49));
  }
}
