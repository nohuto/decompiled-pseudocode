/*
 * XREFs of PoTraceSystemTimerResolution @ 0x1403EB4E0
 * Callers:
 *     NtSetTimerResolution @ 0x1403EB304 (NtSetTimerResolution.c)
 *     ExTraceTimerResolution @ 0x14052C678 (ExTraceTimerResolution.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IoIs32bitProcess @ 0x1400C1690 (IoIs32bitProcess.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PoTraceSystemTimerResolution(char a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rax
  REGHANDLE v6; // rbx
  unsigned __int16 *v7; // r14
  _DWORD *v8; // rbx
  int v9; // eax
  int v10; // ecx
  ULONG v11; // r9d
  const EVENT_DESCRIPTOR *v12; // rdx
  int *v13; // r8
  __int16 v15; // [rsp+30h] [rbp-98h] BYREF
  int v16; // [rsp+34h] [rbp-94h] BYREF
  int v17; // [rsp+38h] [rbp-90h] BYREF
  int v18; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v19; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-78h] BYREF
  int *v21; // [rsp+60h] [rbp-68h]
  int v22; // [rsp+68h] [rbp-60h]
  int v23; // [rsp+6Ch] [rbp-5Ch]
  __int16 *v24; // [rsp+70h] [rbp-58h]
  int v25; // [rsp+78h] [rbp-50h]
  int v26; // [rsp+7Ch] [rbp-4Ch]
  __int64 v27; // [rsp+80h] [rbp-48h]
  int v28; // [rsp+88h] [rbp-40h]
  int v29; // [rsp+8Ch] [rbp-3Ch]
  int *v30; // [rsp+90h] [rbp-38h]
  int v31; // [rsp+98h] [rbp-30h]
  int v32; // [rsp+9Ch] [rbp-2Ch]
  _DWORD *v33; // [rsp+A0h] [rbp-28h]
  int v34; // [rsp+A8h] [rbp-20h]
  int v35; // [rsp+ACh] [rbp-1Ch]

  if ( a1 )
  {
    v6 = PopDiagHandle;
    v4 = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN)
      || EtwEventEnabled(v6, &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN);
  }
  else
  {
    v4 = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STRS);
  }
  LOBYTE(v5) = PopDiagHandleRegistered;
  if ( PopDiagHandleRegistered && v4 )
  {
    v7 = *(unsigned __int16 **)(a2 + 1128);
    v15 = *v7 >> 1;
    v17 = *(_DWORD *)(a2 + 1672);
    v16 = 0;
    if ( !a1 )
    {
      v8 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() ? 0LL : KeGetCurrentThread()->Teb;
      if ( v8 )
      {
        if ( IoIs32bitProcess(0LL) )
          v9 = v8[3032];
        else
          v9 = v8[1480];
        v16 = v9;
      }
    }
    v18 = *(_DWORD *)(a2 + 744);
    UserData.Ptr = (ULONGLONG)&v17;
    UserData.Size = 4;
    UserData.Reserved = 0;
    v21 = &v18;
    v22 = 4;
    v23 = 0;
    v24 = &v15;
    v25 = 2;
    v26 = 0;
    v10 = *v7;
    v5 = *((_QWORD *)v7 + 1);
    v27 = v5;
    v28 = v10;
    v29 = 0;
    if ( a1 )
    {
      if ( (*(_DWORD *)(a2 + 772) & 0x1000) != 0 )
        LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_REQUEST_RUNDOWN, 0LL, 4u, &UserData);
      v13 = *(int **)(a2 + 1664);
      if ( !v13 || !*v13 )
        return v5;
      v17 = *(_DWORD *)(a2 + 1676);
      v19 = *v13;
      v30 = &v19;
      v33 = v13 + 2;
      v34 = 8 * v19;
      v35 = 0;
      v11 = 6;
      v12 = &POP_ETW_EVENT_TIME_RESOLUTION_STACK_RUNDOWN;
    }
    else
    {
      v30 = &v16;
      v11 = 5;
      v12 = &POP_ETW_EVENT_STRS;
    }
    v31 = 4;
    v32 = 0;
    LOBYTE(v5) = EtwWrite(PopDiagHandle, v12, 0LL, v11, &UserData);
  }
  return v5;
}
