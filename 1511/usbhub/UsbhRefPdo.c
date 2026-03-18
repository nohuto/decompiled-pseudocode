/*
 * XREFs of UsbhRefPdo @ 0x1C00095D0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhSshResumePort @ 0x1C000AF00 (UsbhSshResumePort.c)
 *     UsbhSetPortData @ 0x1C000D2B4 (UsbhSetPortData.c)
 *     UsbhBusPause_Action @ 0x1C00157E0 (UsbhBusPause_Action.c)
 *     UsbhBusResume_Action @ 0x1C0016350 (UsbhBusResume_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 * Callees:
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhRefPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  _DWORD *v7; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rsi
  _DWORD *v10; // rdi
  _QWORD *v11; // rsi
  _QWORD *v12; // rax

  v4 = a4;
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a2, 0LL, a3, a4);
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_DWORD *)v9 = 1668571500;
    v10 = v7 + 316;
    v9[4] = a2;
    *((_DWORD *)v9 + 6) = v4;
    v9[5] = a3;
    v11 = v9 + 1;
    v12 = (_QWORD *)*((_QWORD *)v10 + 1);
    *v11 = v10;
    v11[1] = v12;
    if ( (_DWORD *)*v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v10 + 1) = v11;
  }
  else
  {
    ++v7[320];
  }
  return a2;
}
