/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180054D18
 * Callers:
 *     ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC (-ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spat.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x180064A64 (-QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // edi
  float v10; // xmm0_4
  char v12; // [rsp+20h] [rbp-28h]
  float *v13; // [rsp+20h] [rbp-28h]
  float v14; // [rsp+30h] [rbp-18h] BYREF
  float v15; // [rsp+34h] [rbp-14h] BYREF
  float v16[4]; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0;
  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, a2, a7, v12);
  if ( v9 >= 0 )
  {
    *(_DWORD *)a7 = 0x2000;
    *(_DWORD *)(a7 + 1308) = a3;
    *(_BYTE *)(a7 + 1364) = 1;
    *(_OWORD *)(a7 + 1368) = *(_OWORD *)a5;
    *(_OWORD *)(a7 + 1384) = *(_OWORD *)(a5 + 16);
    *(_OWORD *)(a7 + 1400) = *(_OWORD *)(a5 + 32);
    *(_OWORD *)(a7 + 1416) = *(_OWORD *)(a5 + 48);
    *(_OWORD *)(a7 + 1432) = *(_OWORD *)(a5 + 64);
    *(_OWORD *)(a7 + 1448) = *(_OWORD *)(a5 + 80);
    *(_OWORD *)(a7 + 1464) = *(_OWORD *)(a5 + 96);
    *(_OWORD *)(a7 + 1480) = *(_OWORD *)(a5 + 112);
    *(_QWORD *)(a7 + 1496) = *(_QWORD *)(a5 + 128);
    *(_DWORD *)(a7 + 1504) = *(_DWORD *)(a5 + 136);
    *(_OWORD *)(a7 + 1312) = *(_OWORD *)a6;
    *(_OWORD *)(a7 + 1328) = *(_OWORD *)(a6 + 16);
    *(_OWORD *)(a7 + 1344) = *(_OWORD *)(a6 + 32);
    *(_DWORD *)(a7 + 1360) = *(_DWORD *)(a6 + 48);
    *(_BYTE *)(a7 + 1296) = a4;
    if ( *(_BYTE *)(a5 + 138) )
    {
      if ( (int)SpatialInteractionDevices::QuaternionToEulerAngles(
                  (SpatialInteractionDevices *)(a5 + 96),
                  (const struct DirectX::XMFLOAT4 *)&v14,
                  &v15,
                  v16,
                  v13) >= 0 )
      {
        v10 = 180.0 - (float)(v14 * 57.295776);
        *(float *)(a7 + 1300) = v15 * 57.295776;
        *(float *)(a7 + 1304) = v10;
      }
    }
  }
  return (unsigned int)v9;
}
