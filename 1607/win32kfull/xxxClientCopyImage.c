/*
 * XREFs of xxxClientCopyImage @ 0x1C00A9BF0
 * Callers:
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     xxxCreateClassSmIcon @ 0x1C00AB5D8 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C011E944 (xxxCreateWindowSmIcon.c)
 *     xxxEnsureMonitorCursors @ 0x1C01DD64C (xxxEnsureMonitorCursors.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // r8
  __int64 *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+54h] [rbp-14h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v5 = a2;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v11, 24LL, &v16, &a5);
  EtwTraceEndCallback(64LL);
  EnterCrit(0LL, 1LL);
  if ( v6 < 0 || a5 != 24 )
    return 0LL;
  v8 = (__int64 *)v16;
  v9 = v16 + 8;
  if ( v16 + 8 < v16 || v9 > W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  result = *v8;
  if ( *v8 )
  {
    if ( v5 )
    {
      LOBYTE(v9) = 3;
      return HMValidateHandleNoRip(result, v9, v7);
    }
  }
  return result;
}
