/*
 * XREFs of WmipProcessLegacyEtwRegister @ 0x1405754B0
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140575384 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     EtwRegisterClassicProvider @ 0x1404936BC (EtwRegisterClassicProvider.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 */

LONG __fastcall WmipProcessLegacyEtwRegister(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  REGHANDLE v5; // rbx
  LONG result; // eax
  int v7; // ebx
  LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 == a2 )
    *(_QWORD *)(a1 + 112) = -1LL;
  v5 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  v8.QuadPart = v5;
  result = KeReleaseMutex(&WmipSMMutex, 0);
  if ( v5 )
    result = EtwUnregister(v5);
  if ( v4 == a2 )
  {
    v7 = EtwRegisterClassicProvider(
           a1 + 72,
           0LL,
           (void (__fastcall *)(__int64, __int64, __int128 *, __int64))WmipLegacyEtwCallback,
           a1,
           (__int64 *)&v8);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v7 < 0 )
      *(_QWORD *)(a1 + 112) = 0LL;
    else
      *(LARGE_INTEGER *)(a1 + 104) = v8;
    return KeReleaseMutex(&WmipSMMutex, 0);
  }
  return result;
}
