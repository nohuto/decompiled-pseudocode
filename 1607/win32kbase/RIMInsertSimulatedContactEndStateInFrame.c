/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00D472C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00D9E08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMSetContactEndState @ 0x1C00DB6D8 (RIMSetContactEndState.c)
 */

__int64 __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r11
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-10h]
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF
  char *v15; // [rsp+50h] [rbp+18h] BYREF

  a3[580] |= 1u;
  v15 = 0LL;
  v14 = 0;
  result = RIMSetContactEndState(a1, (_DWORD)a3, a4, a5, a6);
  if ( (a3[8] & 4) == 0 )
  {
    v12 = RIMAddSimulatedPointerDeviceData(v10, v11, (__int64)a3, (__int64)(a3 + 596), &v15, &v14);
    if ( v12 < 0 )
    {
      LODWORD(v13) = v12;
      result = WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 5u,
                 0x29u,
                 (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
                 v13);
    }
    else
    {
      result = (__int64)RIMStoreRawDataInPointerDeviceFrame(a1, a2, (__int64)v15, v14, a3 + 594);
    }
    if ( v15 )
      return Win32FreePool();
  }
  return result;
}
