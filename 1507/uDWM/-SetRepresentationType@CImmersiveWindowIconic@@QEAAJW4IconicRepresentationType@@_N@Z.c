/*
 * XREFs of ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180071A8C
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800715A4 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800719A0 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800707A0 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180071930 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetRepresentationType(CImmersiveWindowIconic *a1, int a2, char a3)
{
  int v3; // r14d
  unsigned int v4; // edi
  int ImmersiveIconContainerSize; // eax
  int v9; // ecx
  int v10; // eax

  v3 = *((_DWORD *)a1 + 72);
  v4 = 0;
  *((_DWORD *)a1 + 72) = a2;
  if ( a2 != 1 )
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(*((_DWORD *)a1 + 75), a2);
    v9 = *((_DWORD *)a1 + 75);
    *((_DWORD *)a1 + 73) = ImmersiveIconContainerSize - 2;
    *((_DWORD *)a1 + 74) = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(v9, a2);
  }
  if ( *((_DWORD *)a1 + 72) != v3 )
  {
    if ( a3 )
    {
      v10 = CImmersiveWindowIconic::OnIconUpdated(a1, a3);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xFCu);
    }
  }
  return v4;
}
