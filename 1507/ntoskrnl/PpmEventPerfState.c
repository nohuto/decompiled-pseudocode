/*
 * XREFs of PpmEventPerfState @ 0x140157884
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1401574A0 (PpmPerfApplyProcessorState.c)
 *     PpmEventProcessorPerfStateChange @ 0x1401576DC (PpmEventProcessorPerfStateChange.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PpmEventPerfState(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned int a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  __int64 v6; // rbx
  REGHANDLE v8; // rsi
  unsigned int v9; // ecx
  _DWORD v10[4]; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-49h] BYREF
  int *v12; // [rsp+50h] [rbp-39h]
  __int64 v13; // [rsp+58h] [rbp-31h]
  _DWORD *v14; // [rsp+60h] [rbp-29h]
  __int64 v15; // [rsp+68h] [rbp-21h]
  char *v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  char *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  char *v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+F0h] [rbp+67h] BYREF
  int v23; // [rsp+F8h] [rbp+6Fh] BYREF

  v23 = a4;
  v22 = a3;
  v6 = a2;
  if ( PpmEtwRegistered )
  {
    v8 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      if ( (_DWORD)v6 )
      {
        if ( (unsigned int)v6 < 0x280 )
        {
          v9 = KiProcessorIndexToNumberMappingTable[v6];
          if ( v9 )
          {
            LOWORD(v10[0]) = v9 >> 6;
            HIWORD(v10[0]) = v9 & 0x3F;
          }
        }
      }
      else
      {
        v10[0] = 0;
      }
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v22;
      v13 = 4LL;
      v12 = &v23;
      v15 = 2LL;
      v14 = v10;
      v17 = 1LL;
      v16 = (char *)v10 + 2;
      v19 = 4LL;
      v18 = &a5;
      v20 = &a6;
      v21 = 4LL;
      EtwWrite(v8, EventDescriptor, 0LL, 6u, &UserData);
    }
  }
}
