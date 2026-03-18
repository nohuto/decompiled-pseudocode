/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8
 * Callers:
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180034D80 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA360 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180080990 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800B59AC (-GetCurrentFrameId@@YA_KXZ.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  int v2; // r10d
  __int64 *v3; // r11
  char v4; // si
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  HANDLE *v15; // rcx

  v2 = *((_DWORD *)this + 42);
  v3 = (__int64 *)((char *)this + 144);
  v4 = 0;
  v6 = 5LL * a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 18) + 40LL * a2);
  if ( !*(_DWORD *)(v7 + 416)
    && (*(int *)(v7 + 824) < 0
     || !*(_DWORD *)(*(_QWORD *)(v7 + 8) + 16LL)
     && !*(_DWORD *)(v7 + 1000)
     && GetCurrentFrameId() >= *(_QWORD *)(v7 + 1064)) )
  {
    v8 = *((_DWORD *)this + 64);
    v9 = (unsigned int)(v2 - 1);
    v4 = 1;
    if ( a2 >= v8 )
    {
      v14 = *v3;
      *(_OWORD *)(v14 + 8 * v6) = *(_OWORD *)(*v3 + 40 * v9);
      *(_OWORD *)(v14 + 8 * v6 + 16) = *(_OWORD *)(v14 + 40 * v9 + 16);
      *(_QWORD *)(v14 + 8 * v6 + 32) = *(_QWORD *)(v14 + 40 * v9 + 32);
    }
    else
    {
      v10 = *v3;
      v11 = v8 - 1;
      *((_DWORD *)this + 64) = v11;
      *(_OWORD *)(v10 + 8 * v6) = *(_OWORD *)(v10 + 40LL * v11);
      *(_OWORD *)(v10 + 8 * v6 + 16) = *(_OWORD *)(v10 + 40LL * v11 + 16);
      *(_QWORD *)(v10 + 8 * v6 + 32) = *(_QWORD *)(v10 + 40LL * v11 + 32);
      v12 = *v3;
      v13 = 5LL * *((unsigned int *)this + 64);
      *(_OWORD *)(v12 + 8 * v13) = *(_OWORD *)(*v3 + 40 * v9);
      *(_OWORD *)(v12 + 8 * v13 + 16) = *(_OWORD *)(v12 + 40 * v9 + 16);
      *(_QWORD *)(v12 + 8 * v13 + 32) = *(_QWORD *)(v12 + 40 * v9 + 32);
    }
    *((_DWORD *)this + 42) = v9;
    if ( !(_DWORD)v9 )
      DynArrayImpl<0>::ShrinkToSize((__int64)v3, 0x28u);
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v7, 1);
    v15 = (HANDLE *)*((_QWORD *)this + 10);
    if ( v15 )
      CSurfaceManager::ResetTokenThread(v15);
  }
  return v4;
}
