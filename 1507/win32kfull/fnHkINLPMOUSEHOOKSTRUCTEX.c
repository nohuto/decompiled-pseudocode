/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00EE5E8
 * Callers:
 *     xxxCallCtfHook @ 0x1C0067860 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C006CB30 (xxxHkCallHook.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  _QWORD *v14; // rcx
  _DWORD *v15; // r8
  _DWORD *v16; // rcx
  _QWORD v18[10]; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+A0h] [rbp+8h] BYREF

  memset(v18, 0, sizeof(v18));
  LODWORD(v18[0]) = a1;
  v18[1] = a2;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  *(_OWORD *)&v18[5] = *(_OWORD *)a3;
  *(_OWORD *)&v18[7] = *(_OWORD *)(a3 + 16);
  v18[9] = *(_QWORD *)(a3 + 32);
  v18[2] = a4;
  v18[3] = a5;
  v10 = a6;
  LODWORD(v18[4]) = *a6;
  UserSessionSwitchLeaveCrit(v12, v11);
  EtwTraceBeginCallback(44LL);
  v13 = KeUserModeCallback(44LL, v18, 80LL, &a5, &v19);
  EtwTraceEndCallback(44LL);
  EnterCrit(1LL);
  if ( v13 < 0 || v19 != 24 )
    return 0LL;
  v14 = (_QWORD *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
    v14 = (_QWORD *)W32UserProbeAddress;
  v15 = (_DWORD *)*v14;
  a6 = (_DWORD *)*v14;
  v16 = *(_DWORD **)(a5 + 16);
  if ( v16 + 1 < v16 || (unsigned __int64)(v16 + 1) > W32UserProbeAddress )
    v16 = (_DWORD *)W32UserProbeAddress;
  *v10 ^= ((unsigned __int8)*v16 ^ (unsigned __int8)*v10) & 0x10;
  return (unsigned int)v15;
}
