/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x14003D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkNextValid @ 0x14003926C (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 Valid; // rax
  int v20; // ebx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD v29[2]; // [rsp+40h] [rbp-48h] BYREF
  int v30; // [rsp+50h] [rbp-38h]
  int v31; // [rsp+54h] [rbp-34h]
  __int64 v32; // [rsp+58h] [rbp-30h]
  __int64 v33; // [rsp+60h] [rbp-28h]

  v8 = 0LL;
  v31 = 0;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  v12 = *(_DWORD **)(v11 + 512);
  if ( a1 && (struct tagTHREADINFO *)a1[2] != PtiCurrent(v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 488LL);
  v13 = (__int64 *)PsGetCurrentThreadWin32Thread(v10);
  if ( v13 )
    v15 = *v13;
  else
    v15 = 0LL;
  if ( *(_QWORD *)(v15 + 720) )
  {
    v16 = (_QWORD *)PsGetCurrentThreadWin32Thread(v14);
    v18 = v16 ? *v16 : 0LL;
    Valid = PhkNextValid(*(_QWORD *)(v18 + 720), v17);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 4 )
        return 0LL;
    }
  }
  if ( a1 )
    v32 = *a1;
  else
    v32 = 0LL;
  v30 = a2;
  v29[1] = a3;
  v29[0] = a4;
  v33 = 0LL;
  v20 = (*v12 >> 4) & 1;
  v21 = (__int64 *)PsGetCurrentThreadWin32Thread(v14);
  if ( v21 )
    v23 = *v21;
  else
    v23 = 0LL;
  if ( *(_QWORD *)(v23 + 720) )
  {
    v24 = (__int64 *)PsGetCurrentThreadWin32Thread(v22);
    if ( v24 )
      v26 = *v24;
    else
      v26 = 0LL;
    v27 = PhkNextValid(*(_QWORD *)(v26 + 720), v25);
    return xxxCallHook2(v27, 0LL, v20, (__int64)v29, 0);
  }
  return v8;
}
