/*
 * XREFs of ?RegisterExclusiveView@CAnalogCompositorClient@@QEAAJPEAVCAnalogExclusiveView@@@Z @ 0x18013D558
 * Callers:
 *     ?ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CREATE@@@Z @ 0x1800F992C (-ProcessCreate@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_CRE.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?ActivateView@CAnalogExclusiveView@@QEAAJXZ @ 0x18013B398 (-ActivateView@CAnalogExclusiveView@@QEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorClient::RegisterExclusiveView(
        CAnalogCompositorClient *this,
        struct CAnalogExclusiveView *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  char v4; // r9
  int v5; // r11d
  struct CAnalogExclusiveView *v6; // r8
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // ebx
  int v11; // eax
  CBitmapOfDeviceBitmaps *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = 0;
  v3 = 0LL;
  v4 = 1;
  if ( !dword_1801A3FA0 )
    goto LABEL_10;
  v5 = *((_DWORD *)a2 + 12);
  do
  {
    if ( !v5
      || (v6 = *(struct CAnalogExclusiveView **)(qword_1801A3F88 + 8 * v3), v6 == a2)
      || *((_DWORD *)v6 + 13) == *((_DWORD *)a2 + 13) && *((_DWORD *)v6 + 12) == v5 )
    {
      v4 = 0;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < dword_1801A3FA0 );
  if ( v4 )
  {
LABEL_10:
    AcquireSRWLockExclusive(&stru_1801A3FC0);
    v8 = dword_1801A3FA0 + 1;
    if ( dword_1801A3FA0 + 1 < (unsigned int)dword_1801A3FA0 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_20:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Du);
      return v2;
    }
    if ( v8 > dword_1801A3F9C )
    {
      v11 = DynArrayImpl<1>::AddMultipleAndSet((__int64)&qword_1801A3F88, 8u, v7, &v12);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v2 = v9;
      if ( v9 < 0 )
        goto LABEL_20;
    }
    else
    {
      *(_QWORD *)(qword_1801A3F88 + 8LL * (unsigned int)dword_1801A3FA0) = v12;
      dword_1801A3FA0 = v8;
    }
    CBitmapOfDeviceBitmaps::AddRef(v12);
    ReleaseSRWLockExclusive(&stru_1801A3FC0);
    if ( dword_1801A3FA8 == *((_DWORD *)v12 + 12) )
      CAnalogExclusiveView::ActivateView(v12);
  }
  return v2;
}
