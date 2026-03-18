/*
 * XREFs of ?UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C85C4
 * Callers:
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C7A18 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     ArbitratePrimaryStatus @ 0x1C01C8F58 (ArbitratePrimaryStatus.c)
 *     RemoveContactFromActiveList @ 0x1C01CE06C (RemoveContactFromActiveList.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdatePrimaryDevice(struct tagHID_POINTER_DEVICE_INFO *a1, unsigned int a2, int a3)
{
  __int64 v4; // rcx
  bool v5; // cf

  if ( gPrimaryPointerDevice )
  {
    *(_DWORD *)(2400LL * (unsigned int)dword_1C032BAE8 + *(_QWORD *)(gPrimaryPointerDevice + 696LL) + 2392) &= ~1u;
    *(_DWORD *)(gPrimaryPointerDevice + 252LL) &= ~4u;
  }
  if ( a1 )
  {
    v4 = 2400LL * a2;
    *(_DWORD *)(*((_QWORD *)a1 + 87) + v4 + 2392) |= 1u;
    *((_DWORD *)a1 + 63) |= 4u;
    gPrimaryPointerDevice = a1;
    dword_1C032BAE8 = a2;
    v5 = __CFSHR__(*(_DWORD *)(*((_QWORD *)a1 + 87) + v4 + 2392), 2);
    dword_1C032BAF0 = a3;
    dword_1C032BAEC = -v5;
  }
  else
  {
    memset(&gPrimaryPointerDevice, 0, 0x28uLL);
  }
}
