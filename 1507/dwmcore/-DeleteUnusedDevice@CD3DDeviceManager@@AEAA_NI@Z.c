/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18008BAE0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180090B90 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180090F80 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x1801332F0 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x18008B4F0 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  __int64 *v2; // r11
  char v3; // bl
  __int64 v5; // r8
  CD3DDeviceLevel1 *v6; // rdi
  unsigned int v7; // r10d
  unsigned int v8; // eax
  bool v9; // cf
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax

  v2 = (__int64 *)((char *)this + 104);
  v3 = 0;
  v5 = 32LL * a2;
  v6 = *(CD3DDeviceLevel1 **)(v5 + *((_QWORD *)this + 13));
  if ( !*((_DWORD *)v6 + 100) )
  {
    v3 = 1;
    v7 = *((_DWORD *)this + 32) - 1;
    v8 = *((_DWORD *)this + 34);
    v9 = a2 < v8;
    v10 = *v2;
    if ( v9 )
    {
      v13 = v8 - 1;
      *((_DWORD *)this + 34) = v13;
      v14 = 32LL * v13;
      *(_OWORD *)(v10 + v5) = *(_OWORD *)(v14 + v10);
      v15 = *(_OWORD *)(v14 + v10 + 16);
      v16 = 32LL * v7;
      *(_OWORD *)(v10 + v5 + 16) = v15;
      v17 = *v2;
      v18 = 32LL * *((unsigned int *)this + 34);
      *(_OWORD *)(v18 + v17) = *(_OWORD *)(v16 + *v2);
      *(_OWORD *)(v18 + v17 + 16) = *(_OWORD *)(v16 + v17 + 16);
    }
    else
    {
      v11 = 32LL * v7;
      *(_OWORD *)(v10 + v5) = *(_OWORD *)(v11 + v10);
      *(_OWORD *)(v10 + v5 + 16) = *(_OWORD *)(v11 + v10 + 16);
    }
    *((_DWORD *)this + 32) = v7;
    if ( !v7 )
      DynArrayImpl<0>::ShrinkToSize(v2, 0x20u);
    CD3DDeviceLevel1::`scalar deleting destructor'(v6, 1);
  }
  return v3;
}
