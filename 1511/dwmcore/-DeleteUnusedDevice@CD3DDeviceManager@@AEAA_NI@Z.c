/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8
 * Callers:
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180071260 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180071DF0 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180144B30 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x180024A20 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18006CB40 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  __int64 *v2; // r10
  char v3; // di
  __int64 v5; // r8
  CD3DDeviceLevel1 *v6; // rsi
  unsigned int v7; // r9d
  unsigned int v8; // eax
  bool v9; // cf
  __int64 v10; // rdx
  __int64 v11; // rax
  HANDLE *v12; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax

  v2 = (__int64 *)((char *)this + 96);
  v3 = 0;
  v5 = 32LL * a2;
  v6 = *(CD3DDeviceLevel1 **)(v5 + *((_QWORD *)this + 12));
  if ( !*((_DWORD *)v6 + 98) )
  {
    v3 = 1;
    v7 = *((_DWORD *)this + 30) - 1;
    v8 = *((_DWORD *)this + 32);
    v9 = a2 < v8;
    v10 = *v2;
    if ( v9 )
    {
      v14 = v8 - 1;
      *((_DWORD *)this + 32) = v14;
      v15 = 32LL * v14;
      *(_OWORD *)(v10 + v5) = *(_OWORD *)(v15 + v10);
      v16 = *(_OWORD *)(v15 + v10 + 16);
      v17 = 32LL * v7;
      *(_OWORD *)(v10 + v5 + 16) = v16;
      v18 = *v2;
      v19 = 32LL * *((unsigned int *)this + 32);
      *(_OWORD *)(v19 + v18) = *(_OWORD *)(v17 + *v2);
      *(_OWORD *)(v19 + v18 + 16) = *(_OWORD *)(v17 + v18 + 16);
    }
    else
    {
      v11 = 32LL * v7;
      *(_OWORD *)(v10 + v5) = *(_OWORD *)(v11 + v10);
      *(_OWORD *)(v10 + v5 + 16) = *(_OWORD *)(v11 + v10 + 16);
    }
    *((_DWORD *)this + 30) = v7;
    if ( !v7 )
      DynArrayImpl<0>::ShrinkToSize(v2, 32LL);
    CD3DDeviceLevel1::`scalar deleting destructor'(v6, 1);
    v12 = (HANDLE *)*((_QWORD *)this + 10);
    if ( v12 )
      CSurfaceManager::ResetTokenThread(v12);
  }
  return v3;
}
