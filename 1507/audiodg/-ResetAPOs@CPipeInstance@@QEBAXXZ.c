/*
 * XREFs of ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400043F0
 * Callers:
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F460 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F4F0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?StopStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032C70 (-StopStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::ResetAPOs(CPipeInstance *this)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h]

  v1 = *((_QWORD *)this + 3);
  while ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 8);
    if ( *(_DWORD *)(v2 + 40) == 2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 40LL);
      v5 = v3;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(v3, &GUID_0ef25615_b134_4fba_80e3_e3ea2f74206e, &v4) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
