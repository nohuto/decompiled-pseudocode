/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00164C0
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00164C0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C0071C8C (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C00154B0 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C0015510 (ACPIExtListEnumNext.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00164C0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerGetSxD @ 0x1C0067CD8 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v3; // ebx
  __int64 started; // rax
  __int64 v7; // rdi
  int SxD; // eax
  KIRQL v10; // al
  int v11; // edx
  __int64 **v12; // r8
  int v13; // ecx
  __int64 *v14; // r9
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-38h]
  KIRQL v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v19 = 760LL;
  v15[0] = a1 + 744;
  v3 = 0;
  SpinLock = &AcpiDeviceTreeLock;
  v15[1] = 0LL;
  v20 = 1;
  started = ACPIExtListStartEnum((__int64)v15);
  while ( 1 )
  {
    v7 = started;
    if ( v18 + v19 == v15[0] || v3 < 0 )
      break;
    if ( v20 == 1 )
    {
      if ( *(_DWORD *)(v18 + 676) )
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 676));
      KeReleaseSpinLock(SpinLock, v17);
    }
    v3 = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( v3 < 0 )
    {
LABEL_21:
      started = (__int64)ACPIExtListEnumNext((__int64)v15);
    }
    else
    {
      SxD = ACPISystemPowerGetSxD(v7, a2, &v21);
      v3 = SxD;
      if ( SxD < 0 )
      {
        if ( SxD == -1073741772 )
        {
          v3 = 0;
          v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v11 = 1;
          v12 = (__int64 **)(v7 + 360);
          do
          {
            v13 = 7;
            v14 = *v12;
            if ( !*v12 )
              goto LABEL_16;
            do
            {
              if ( *((_DWORD *)v14 + 4) < v13 )
                v13 = *((_DWORD *)v14 + 4);
              v14 = (__int64 *)*v14;
            }
            while ( v14 );
            if ( v13 == 7 )
LABEL_16:
              v13 = 0;
            if ( v13 >= (int)a2 )
              *a3 |= 1 << v11;
            ++v11;
            ++v12;
          }
          while ( v11 <= 3 );
          v21 = v11;
          KeReleaseSpinLock(&AcpiPowerLock, v10);
        }
        goto LABEL_21;
      }
      *a3 |= 1 << v21;
      started = (__int64)ACPIExtListEnumNext((__int64)v15);
    }
  }
  if ( v20 )
    KeReleaseSpinLock(SpinLock, v17);
  return 0LL;
}
