/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C000BA9C
 * Callers:
 *     ACPIBuildFixedButtonExtension @ 0x1C0005044 (ACPIBuildFixedButtonExtension.c)
 *     OSNotifyCreateDevice @ 0x1C000BCD0 (OSNotifyCreateDevice.c)
 *     ACPIBuildProcessorExtension @ 0x1C00214D0 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C00223BC (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDockExtension @ 0x1C00354AC (ACPIBuildDockExtension.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C000BC9C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdx
  char *v10; // rax

  if ( a1 && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 96LL)) != 0 )
  {
    if ( *(_QWORD *)(v6 + 736) == a2 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    return 3221225486LL;
  }
  else
  {
    v7 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x390uLL);
      *((_QWORD *)v8 + 88) = a1;
      ++*((_DWORD *)v8 + 169);
      ++*((_DWORD *)v8 + 168);
      if ( a1 )
      {
        dword_1C005A228 = 0;
        byte_1C005A22C = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedAdd(a1 + 2, 1u);
      }
      *((_QWORD *)v8 + 2) = 0LL;
      *((_DWORD *)v8 + 78) = 0;
      *((_DWORD *)v8 + 2) = 1599293264;
      *(_QWORD *)v8 = 10LL;
      *((_DWORD *)v8 + 113) = 0;
      *((_DWORD *)v8 + 120) = 0;
      *((_DWORD *)v8 + 121) = 0;
      *((_DWORD *)v8 + 118) = 4;
      *((_DWORD *)v8 + 119) = 4;
      *((_DWORD *)v8 + 114) = 1;
      *((_DWORD *)v8 + 115) = 1;
      *((_DWORD *)v8 + 116) = 1;
      *((_DWORD *)v8 + 117) = 1;
      *((_DWORD *)v8 + 123) = 1;
      *((_QWORD *)v8 + 94) = v8 + 744;
      *((_QWORD *)v8 + 93) = v8 + 744;
      *((_QWORD *)v8 + 98) = v8 + 776;
      *((_QWORD *)v8 + 97) = v8 + 776;
      *((_QWORD *)v8 + 100) = v8 + 792;
      *((_QWORD *)v8 + 99) = v8 + 792;
      *((_QWORD *)v8 + 64) = v8 + 504;
      *((_QWORD *)v8 + 63) = v8 + 504;
      *((_QWORD *)v8 + 67) = v8 + 528;
      *((_QWORD *)v8 + 66) = v8 + 528;
      *((_QWORD *)v8 + 102) = v8 + 808;
      *((_QWORD *)v8 + 101) = v8 + 808;
      *a3 = v8;
      KeInitializeEvent((PRKEVENT)(v8 + 848), SynchronizationEvent, 1u);
      *((_QWORD *)v8 + 109) = 0LL;
      v8[880] = 0;
      *((_QWORD *)v8 + 92) = a2;
      if ( a2 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 676), 1u);
        v9 = *(_QWORD **)(a2 + 752);
        v10 = v8 + 760;
        *((_QWORD *)v8 + 95) = a2 + 744;
        *((_QWORD *)v8 + 96) = v9;
        if ( *v9 != a2 + 744 )
          __fastfail(3u);
        *v9 = v10;
        *(_QWORD *)(a2 + 752) = v10;
        _InterlockedOr64((volatile signed __int64 *)a2, 0x40000000000uLL);
      }
      if ( a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v8;
      *((_DWORD *)v8 + 162) = -1;
      *((_QWORD *)v8 + 83) = v8 + 656;
      *((_QWORD *)v8 + 82) = v8 + 656;
      return 0LL;
    }
    return 3221225626LL;
  }
}
