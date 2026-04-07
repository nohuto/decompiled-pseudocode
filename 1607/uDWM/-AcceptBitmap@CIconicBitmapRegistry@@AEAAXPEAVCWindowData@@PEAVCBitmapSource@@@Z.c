/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800778F0
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180077A70 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180033858 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800338D8 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180038444 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180078EFC (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180082CB0 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
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
  CWindowData **v11; // [rsp+40h] [rbp+8h] BYREF
  CWindowData *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v5 = *((_QWORD *)a2 + 47) == 0LL;
  *((_BYTE *)a2 + 578) &= ~8u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, v12, 0);
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
        v11 = &v12;
        v8 = DynArrayImpl<0>::Grow((__int64)(this + 2), 8u, 1, 0, (unsigned __int64 *)&v11);
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
        else
          *(CWindowIconic ***)((char *)this[2] + (unsigned int)(8 * (*((_DWORD *)this + 10))++)) = (CWindowIconic **)*v11;
      }
      else
      {
        this[2][*((unsigned int *)this + 10)] = (CWindowIconic **)v12;
        *((_DWORD *)this + 10) = v7;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
  }
  CWindowData::SetIconicBitmap(v12, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v9, (__int64)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)v12 + 5));
  v10 = (CWindowIconic *)*((_QWORD *)v12 + 52);
  if ( v10 )
  {
    CWindowIconic::SetBitmap(v10, *((struct CBitmapSource **)v12 + 47), (*((_BYTE *)v12 + 578) & 2) != 0, 1);
    if ( v5 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v12 + 52));
  }
}
