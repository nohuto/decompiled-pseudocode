/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C008F970 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C0029140 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C00565B8 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C0087BB0 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, unsigned int a2, _DWORD *a3)
{
  _QWORD **v3; // rbp
  int v4; // ebx
  int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  int SxD; // eax
  int v10; // ebx
  int v11; // edx
  __int64 *v12; // r8
  __int64 v13; // rax
  char v14; // cl
  __int64 *v15; // r10
  __int64 *v16; // r8
  int v17; // edx
  __int64 v18; // rax
  const char *v19; // r8
  const char *v20; // rcx
  char v21; // dl
  __int64 v22; // rax
  __int64 *v23; // r10
  int v24; // r9d
  __int64 *v25; // r8
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-A8h]
  _QWORD v28[2]; // [rsp+68h] [rbp-60h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-50h]
  KIRQL v30; // [rsp+80h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp-40h]
  __int64 v32; // [rsp+90h] [rbp-38h]
  int v33; // [rsp+98h] [rbp-30h]
  KIRQL v34; // [rsp+D0h] [rbp+8h]
  int v37; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_QWORD **)(a1 + 752);
  v32 = 768LL;
  v28[0] = a1 + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v4 = 1;
  v5 = 0;
  v33 = 1;
  v30 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = (__int64)(*v3 - 96);
  v28[1] = **v3;
  v7 = (_QWORD *)v6;
  v31 = v6;
  if ( (_QWORD **)(v6 + 768) == v3 )
    v7 = 0LL;
  while ( (_QWORD **)(v6 + v32) != v3 && v5 >= 0 )
  {
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(v6 + 684) )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 684));
      KeReleaseSpinLock(SpinLock, v30);
    }
    v5 = ACPISystemPowerDetermineSupportedDeviceStates(v7, a2, a3);
    if ( v5 >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v7, a2, &v37);
      v5 = SxD;
      if ( SxD >= 0 )
      {
        v14 = v37;
        v15 = qword_1C002C340;
        v16 = qword_1C002C340;
        *a3 |= 1 << v37;
        v17 = 0;
        if ( v7 )
        {
          v18 = v7[1];
          v17 = (int)v7;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v15 = (__int64 *)v7[70];
            if ( (v18 & 0x400000000000LL) != 0 )
              v16 = (__int64 *)v7[71];
          }
        }
        WPP_RECORDER_SF_DDqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          15,
          10,
          (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
          a2 - 1,
          v14 - 1,
          v17,
          (__int64)v15,
          (__int64)v16);
      }
      else if ( SxD == -1073741772 )
      {
        v10 = 1;
        v34 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        do
        {
          v11 = 7;
          v12 = (__int64 *)v7[v10 + 45];
          if ( !v12 )
            goto LABEL_17;
          do
          {
            if ( *((_DWORD *)v12 + 4) < v11 )
              v11 = *((_DWORD *)v12 + 4);
            v12 = (__int64 *)*v12;
          }
          while ( v12 );
          if ( v11 == 7 )
LABEL_17:
            v11 = (int)v12;
          if ( v11 >= (int)a2 )
          {
            v23 = qword_1C002C340;
            v24 = (int)v12;
            v25 = qword_1C002C340;
            *a3 |= 1 << v10;
            if ( v7 )
            {
              v26 = v7[1];
              v24 = (int)v7;
              if ( (v26 & 0x200000000000LL) != 0 )
              {
                v23 = (__int64 *)v7[70];
                if ( (v26 & 0x400000000000LL) != 0 )
                  v25 = (__int64 *)v7[71];
              }
            }
            WPP_RECORDER_SF_DDDDqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v11 - 1,
              (_DWORD)v25,
              v24,
              v27,
              v10 - 1,
              v11 - 1,
              a2 - 1,
              v10 - 1,
              v24,
              (__int64)v23,
              (__int64)v25);
          }
          ++v10;
        }
        while ( v10 <= 3 );
        v37 = v10;
        KeReleaseSpinLock(&AcpiPowerLock, v34);
        v5 = 0;
      }
      else
      {
        v19 = (const char *)qword_1C002C340;
        v20 = (const char *)qword_1C002C340;
        v21 = 0;
        if ( v7 )
        {
          v22 = v7[1];
          v21 = (char)v7;
          if ( (v22 & 0x200000000000LL) != 0 )
          {
            v19 = (const char *)v7[70];
            if ( (v22 & 0x400000000000LL) != 0 )
              v20 = (const char *)v7[71];
          }
        }
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0xBu,
          (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
          v5,
          v21,
          v19,
          v20);
      }
    }
    v13 = ACPIExtListEnumNext(v28);
    v6 = v31;
    v7 = (_QWORD *)v13;
    v4 = v33;
    v3 = (_QWORD **)v28[0];
  }
  if ( v4 )
    KeReleaseSpinLock(SpinLock, v30);
  return 0LL;
}
