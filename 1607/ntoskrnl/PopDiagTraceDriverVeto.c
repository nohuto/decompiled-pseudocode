/*
 * XREFs of PopDiagTraceDriverVeto @ 0x1403DF510
 * Callers:
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopDiagGetDriverName @ 0x1401239A8 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDriverVeto(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int16 Length; // cx
  __int16 v6; // ax
  unsigned __int16 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rax
  ULONG v10; // r9d
  __int64 v11; // rcx
  __int16 v13; // [rsp+38h] [rbp-59h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-55h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  wchar_t *Buffer; // [rsp+68h] [rbp-29h]
  int v18; // [rsp+70h] [rbp-21h]
  int v19; // [rsp+74h] [rbp-1Dh]
  WCHAR SourceString[32]; // [rsp+98h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DRIVERVETO);
    if ( (_BYTE)v2 )
    {
      if ( PopDiagGetDriverName(a1, SourceString, 0x40u) < 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_1403D6DE0);
        Length = DestinationString.Length;
        v6 = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        Length = DestinationString.Length;
        v6 = DestinationString.Length >> 1;
      }
      v7 = *(_WORD *)(a2 - 104);
      UserData.Ptr = (ULONGLONG)&v13;
      v13 = v6;
      v14 = v7 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      v8 = 1;
      if ( v6 )
      {
        v8 = 2;
        Buffer = DestinationString.Buffer;
        v18 = Length;
        v19 = 0;
      }
      v9 = 2LL * v8;
      v10 = v8 + 1;
      *(&UserData.Ptr + v9) = (ULONGLONG)&v14;
      *((_QWORD *)&UserData.Size + v9) = 2LL;
      if ( v7 >> 1 )
      {
        v11 = 2LL * v10++;
        *(&UserData.Ptr + v11) = *(_QWORD *)(a2 - 96);
        *(&UserData.Size + 2 * v11) = v7;
        *(&UserData.Reserved + 2 * v11) = 0;
      }
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DRIVERVETO, 0LL, v10, &UserData);
    }
  }
  return (char)v2;
}
