/*
 * XREFs of xxxClientCopyImage @ 0x1C0080648
 * Callers:
 *     xxxCreateClassSmIcon @ 0x1C00F631C (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00FE3C0 (xxxCreateWindowSmIcon.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     xxxEnsureMonitorCursors @ 0x1C01E6EA4 (xxxEnsureMonitorCursors.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  __int64 *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v5 = a2;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(63LL);
  v6 = KeUserModeCallback(63LL, &v10, 24LL, &v15, &a5);
  EtwTraceEndCallback(63LL);
  EnterCrit(0LL, 1LL);
  if ( v6 < 0 || a5 != 24 )
    return 0LL;
  v7 = (__int64 *)v15;
  v8 = v15 + 8;
  if ( v15 + 8 < v15 || v8 > W32UserProbeAddress )
    v7 = (__int64 *)W32UserProbeAddress;
  result = *v7;
  if ( *v7 )
  {
    if ( v5 )
    {
      LOBYTE(v8) = 3;
      return HMValidateHandleNoRip(result, v8);
    }
  }
  return result;
}
