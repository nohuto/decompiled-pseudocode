/*
 * XREFs of ?RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z @ 0x180167574
 * Callers:
 *     ?ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CREATE@@@Z @ 0x18010E91C (-ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CRE.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x180165534 (-ActivateView@CAnalogExclusiveView@@QEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorClient::RegisterExclusiveView(
        CAnalogCompositorClient *this,
        struct CAnalogExclusiveView *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char v4; // r9
  int v5; // r11d
  struct CAnalogExclusiveView *v6; // r8
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // eax
  CBitmapOfDeviceBitmaps *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0;
  v3 = 0LL;
  v4 = 1;
  if ( !dword_1801F0390 )
    goto LABEL_10;
  v5 = *((_DWORD *)a2 + 30);
  do
  {
    if ( !v5
      || (v6 = *(struct CAnalogExclusiveView **)(qword_1801F0378 + 8 * v3), v6 == a2)
      || *((_DWORD *)v6 + 31) == *((_DWORD *)a2 + 31) && *((_DWORD *)v6 + 30) == v5 )
    {
      v4 = 0;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < dword_1801F0390 );
  if ( v4 )
  {
LABEL_10:
    AcquireSRWLockExclusive(&stru_1801F03B0);
    v8 = dword_1801F0390 + 1;
    if ( dword_1801F0390 + 1 >= (unsigned int)dword_1801F0390 )
    {
      if ( v8 <= dword_1801F038C )
      {
        *(_QWORD *)(qword_1801F0378 + 8LL * (unsigned int)dword_1801F0390) = v11;
        dword_1801F0390 = v8;
LABEL_17:
        CBitmapOfDeviceBitmaps::AddRef(v11);
        ReleaseSRWLockExclusive(&stru_1801F03B0);
        if ( dword_1801F0398 == *((_DWORD *)v11 + 30) )
          CAnalogExclusiveView::ActivateView(v11);
        return v2;
      }
      v9 = DynArrayImpl<1>::AddMultipleAndSet((__int64)&qword_1801F0378, 8u, v7, &v11);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x8Du);
      return v2;
    }
    goto LABEL_17;
  }
  return v2;
}
