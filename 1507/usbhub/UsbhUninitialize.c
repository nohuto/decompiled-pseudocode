/*
 * XREFs of UsbhUninitialize @ 0x1C003CBB0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001F064 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhReferenceListRemove @ 0x1C00257E0 (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhUninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID *v9; // rax
  PVOID *v10; // rbx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rbx

  v5 = FdoExt(a1, a2, a3, a4);
  Log(a1, 8, 1750421065, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      43,
      (__int64)&WPP_7089f250826f62cd62a41d7a765d92e3_Traceguids);
  UsbhDisarmHubForWakeDetect(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  v9 = (PVOID *)FdoExt(a1, v6, v7, v8);
  v10 = v9;
  if ( *((_DWORD *)v9 + 1310) && PoUnregisterPowerSettingCallback(v9[656]) >= 0 )
    *((_DWORD *)v10 + 1310) = 0;
  v11 = (void *)*((_QWORD *)v5 + 377);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v5 + 377) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v5 + 378);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v5 + 378) = 0LL;
  }
  v13 = (void *)_InterlockedExchange64((volatile __int64 *)v5 + 152, 0LL);
  Log(a1, 8, 1752519238, 0LL, (__int64)v13);
  if ( v13 )
  {
    UsbhReferenceListRemove(a1, (__int64)v13);
    ObfDereferenceObject(v13);
  }
  Log(a1, 8, 1752525118, 0LL, 0LL);
}
