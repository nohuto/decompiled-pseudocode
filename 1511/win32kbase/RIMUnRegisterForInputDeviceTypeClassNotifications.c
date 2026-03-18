/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C000A70C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     RIMRemoveInputOfType @ 0x1C007D4D0 (RIMRemoveInputOfType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // rsi
  __int64 v5; // rbx
  char v7; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 76);
  if ( _bittest(&v2, a2) )
  {
    v4 = a2;
    if ( *(_QWORD *)(a1 + 8LL * a2 + 360) )
    {
      if ( !*(_DWORD *)(a1 + 4LL * a2 + 432) )
      {
        v5 = *(_QWORD *)(a1 + 8LL * a2 + 448);
        *(_QWORD *)(v5 + 88) = a1;
        v7 = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 8LL * a2 + 448) + 96LL) = a2;
        KeInitializeApc(
          v5,
          KeGetCurrentThread(),
          0LL,
          ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers,
          rimRundownApcIoUnregisterPlugPlayNotificationEx,
          rimNormalApcIoUnregisterPlugPlayNotificationEx,
          v7,
          v5 + 88);
        KeInsertQueueApc(v5, v5, 0LL, 0LL);
        *(_DWORD *)(a1 + 4 * v4 + 432) = 1;
      }
    }
  }
  return 0LL;
}
