/*
 * XREFs of USBType1SetSampleRate @ 0x1C001FDE0
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004600 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0004910 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0005240 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00056C0 (USBCaptureChangePowerState.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C001B4E8 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBType1SetSampleRate(__int64 a1, int a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rbx
  int SetProperty; // edx
  int v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(v2 + 128);
  SetProperty = 0;
  if ( (*(_BYTE *)(v3[20] + 3LL) & 1) != 0 || *(_DWORD *)(a1 + 116) == 2 && *(_BYTE *)(v3[19] + 7LL) > 1u )
  {
    SetProperty = USBHwGetSetProperty(
                    *(_QWORD *)(v2 + 16),
                    28,
                    0,
                    1,
                    1,
                    0,
                    0,
                    *(unsigned __int8 *)(v3[21] + 2LL),
                    (__int64)&v6,
                    3);
    if ( SetProperty < 0 && *(_BYTE *)(v3[19] + 7LL) == 1 )
      return 0;
  }
  return (unsigned int)SetProperty;
}
