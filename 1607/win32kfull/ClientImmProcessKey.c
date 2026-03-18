/*
 * XREFs of ClientImmProcessKey @ 0x1C010B8DC
 * Callers:
 *     xxxImmProcessKey @ 0x1C010B600 (xxxImmProcessKey.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 result; // rax
  _QWORD v13[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+88h] [rbp+10h]

  memset(v13, 0, 0x28uLL);
  v13[0] = a1;
  v13[1] = a2;
  LODWORD(v13[2]) = a3;
  v13[3] = a4;
  LODWORD(v13[4]) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  EtwTraceBeginCallback(93LL);
  v10 = KeUserModeCallback(93LL, v13, 40LL, &v14, &a5);
  EtwTraceEndCallback(93LL);
  EnterCrit(0LL, 1LL);
  if ( v10 < 0 || a5 != 24 )
    return 0LL;
  v11 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > W32UserProbeAddress )
    v11 = (__int64 *)W32UserProbeAddress;
  result = *v11;
  v15 = *v11;
  return result;
}
