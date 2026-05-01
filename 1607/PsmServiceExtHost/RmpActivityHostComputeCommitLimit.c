/*
 * XREFs of RmpActivityHostComputeCommitLimit @ 0x180008040
 * Callers:
 *     RmpActivityHostComputeEnforcementSettings @ 0x180007140 (RmpActivityHostComputeEnforcementSettings.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     RmpCoreApiSetHostLimits @ 0x180019198 (RmpCoreApiSetHostLimits.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18003571C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitLimit(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-61h] BYREF
  __int64 v8; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v12; // [rsp+70h] [rbp-29h]
  int v13; // [rsp+78h] [rbp-21h]
  int v14; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  unsigned __int64 *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  __int64 *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  _QWORD *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  _QWORD *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]
  unsigned __int64 *v25; // [rsp+D0h] [rbp+37h]
  __int64 v26; // [rsp+D8h] [rbp+3Fh]

  v1 = a1[121];
  v2 = a1[118];
  if ( v1 == -1LL || v2 == -1 || (v3 = v1 + v2, v3 < v1) )
    v3 = -1LL;
  v7 = v3;
  v4 = a1[114];
  v9 = a1[86];
  if ( v4 )
  {
    v6 = v4;
  }
  else
  {
    v4 = a1[115];
    if ( v4 )
    {
      if ( v3 < v4 )
        v4 = v3;
      v6 = v4;
    }
    else
    {
      v4 = v3;
      v6 = v3;
    }
  }
  if ( (unsigned int)dword_18004C030 <= 4 || (qword_18004C040 & 1) == 0 || (qword_18004C048 & 1) != qword_18004C048 )
    return v4;
  v8 = a1[3];
  v15 = &v8;
  v17 = &v6;
  v19 = &v9;
  v25 = &v7;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v21 = a1 + 114;
  v22 = 8LL;
  v23 = a1 + 115;
  v24 = 8LL;
  v26 = 8LL;
  *(_DWORD *)&EventDescriptor.Level = 4;
  UserData.Ptr = (ULONGLONG)off_18004C038;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040865 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_18004C038;
  v12 = &unk_180040870;
  UserData.Reserved = 2;
  v13 = 167;
  v14 = 1;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  return v6;
}
