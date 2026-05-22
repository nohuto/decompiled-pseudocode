/*
 * XREFs of ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180054E7C
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCSixDofProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180045B90 (-OnTargetWithFocus3dChanged@MPCSixDofProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180047BB0 (-OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180049DB0 (-OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18004A1B0 (-IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     _lambda_3b92e80685ad1aeeb8378e6fd39eb279_::operator() @ 0x18004C598 (_lambda_3b92e80685ad1aeeb8378e6fd39eb279_--operator().c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180054C2C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180054D18 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivHandEventArgs@34567@@Z @ 0x180055300 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 *     ?Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@@Z @ 0x1800555B0 (-Invoke@SpectrumListener@@EEAAJUMPCMatrix4x4@@@Z.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800556B0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x180055D48 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateGenericMPCInputInfo(
        LONG a1,
        DWORD a2,
        LONG a3,
        LARGE_INTEGER *a4,
        char a5)
{
  signed __int32 v9; // eax
  __int64 result; // rax
  LARGE_INTEGER v11; // [rsp+48h] [rbp+20h] BYREF

  QueryPerformanceCounter(&v11);
  if ( a5 )
    memset(a4, 0, 0x760uLL);
  a4->LowPart = 512;
  a4->HighPart = a3;
  a4[1].LowPart = GetTickCount();
  a4[2] = v11;
  a4[5].LowPart = 1888;
  v9 = _InterlockedExchangeAdd(&MPCInputInfoHelper::m_curInputId, 1u);
  a4[102].LowPart = 0;
  a4[89].LowPart = v9;
  a4[90].LowPart = a4->HighPart;
  result = 0LL;
  a4[88].LowPart = a2;
  a4[88].HighPart = a1;
  BYTE4(a4[85].QuadPart) = 1;
  LOBYTE(a4[106].LowPart) = 0;
  LOWORD(a4[98].LowPart) = 1;
  return result;
}
