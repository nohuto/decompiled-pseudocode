/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x14003DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkNextValid @ 0x14003926C (PhkNextValid.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 Valid; // rax
  __int64 v15[3]; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]
  __int64 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]

  v15[0] = 0LL;
  v17 = 0;
  v9 = *((_QWORD *)PtiCurrent(a1) + 64);
  if ( a1 && *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 529LL);
  if ( *((_QWORD *)PtiCurrent(v8) + 90) )
  {
    v11 = PtiCurrent(v10);
    Valid = PhkNextValid(*((_QWORD *)v11 + 90), v12);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 12 )
        return 0LL;
    }
  }
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  v16 = a2;
  v15[2] = a3;
  v15[1] = a4;
  v19 = 0LL;
  v15[0] = *(_QWORD *)(v9 + 104);
  return xxxCallNextHookEx(0LL, (*(_DWORD *)v9 >> 4) & 1, (__int64)v15);
}
