/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x1407FB858
 * Callers:
 *     PopCheckShutdownMarker @ 0x1407E8B40 (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

BOOLEAN __fastcall PopDiagTraceDirtyTransition(__int64 a1, int a2, __int64 a3)
{
  BOOLEAN result; // al
  REGHANDLE v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  int v12; // [rsp+38h] [rbp-79h] BYREF
  int v13; // [rsp+40h] [rbp-71h] BYREF
  int v14; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v15[5]; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-39h] BYREF
  char v17; // [rsp+94h] [rbp-1Dh] BYREF
  int *v18; // [rsp+C8h] [rbp+17h]
  int v19; // [rsp+D0h] [rbp+1Fh]
  int v20; // [rsp+D4h] [rbp+23h]
  __int64 *v21; // [rsp+D8h] [rbp+27h]
  int v22; // [rsp+E0h] [rbp+2Fh]
  int v23; // [rsp+E4h] [rbp+33h]
  int *v24; // [rsp+E8h] [rbp+37h]
  int v25; // [rsp+F0h] [rbp+3Fh]
  int v26; // [rsp+F4h] [rbp+43h]
  __int64 v27; // [rsp+128h] [rbp+77h] BYREF

  v27 = a3;
  result = ExBootAppFailureStatus;
  v13 = ExBootAppFailureStatus;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      v12 = 0;
      memset(v15, 0, 0x20uLL);
      v7 = *(_QWORD *)(a1 + 240);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 176);
        if ( v8 )
        {
          v12 = *(_DWORD *)(v8 + 56);
          v15[0] = *(_QWORD *)(v8 + 64);
          v15[1] = *(_QWORD *)(v8 + 72);
          v15[2] = *(_QWORD *)(v8 + 80);
          v15[3] = *(_QWORD *)(v8 + 88);
        }
      }
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      v14 = a2;
      v9 = v15;
      UserData.Size = 4;
      v10 = &v17;
      v11 = 4LL;
      do
      {
        *(_DWORD *)v10 = 0;
        *(_QWORD *)(v10 - 12) = v9++;
        *((_DWORD *)v10 - 1) = 8;
        v10 += 16;
        --v11;
      }
      while ( v11 );
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = &v14;
      v21 = &v27;
      v24 = &v13;
      v19 = 4;
      v25 = 4;
      v22 = 8;
      return EtwWrite(v6, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 8u, &UserData);
    }
  }
  return result;
}
