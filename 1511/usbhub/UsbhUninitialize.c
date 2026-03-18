/*
 * XREFs of UsbhUninitialize @ 0x1C003CDE0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C0024EB0 (UsbhReferenceListRemove.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0025B78 (UsbhDisarmHubForWakeDetect.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
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
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  UsbhDisarmHubForWakeDetect(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
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
