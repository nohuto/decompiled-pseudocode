/*
 * XREFs of RIMIDERemoveInjectionDevice @ 0x1C00C1C90
 * Callers:
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00C05C8 (RIMIDEProcessRemoveInjectionDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 */

__int64 __fastcall RIMIDERemoveInjectionDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edi

  v1 = *(_QWORD *)(a1 + 408);
  RIMLockExclusive(v1 + 96);
  v5 = 0;
  if ( !*(_QWORD *)(v1 + 760) || *(_QWORD *)(v1 + 32) == PsGetCurrentProcess(v4, v3) )
  {
    rimDoRimDevChangeCallback(v1, a1 + 64, 3);
    if ( *(_BYTE *)(v1 + 73) || *(_BYTE *)(v1 + 74) )
    {
      v5 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x30u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      v5 = RIMFreeDev(v1, a1 + 64);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 248) |= 0x50000u;
    ZwSetEvent(*(HANDLE *)(v1 + 480), 0LL);
  }
  RIMUnlockExclusive(v1 + 96);
  return v5;
}
