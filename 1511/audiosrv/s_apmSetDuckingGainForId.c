/*
 * XREFs of s_apmSetDuckingGainForId @ 0x180091480
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v7);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)g_PolicyManager;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    v3 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, __int64))(v4 + 224))(g_PolicyManager, v5, a2);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
