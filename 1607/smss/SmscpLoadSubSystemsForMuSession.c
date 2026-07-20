/*
 * XREFs of SmscpLoadSubSystemsForMuSession @ 0x140001B30
 * Callers:
 *     SmscMain @ 0x140001A14 (SmscMain.c)
 * Callees:
 *     SmpExecuteCommand @ 0x140001FB4 (SmpExecuteCommand.c)
 *     SmpNtSerializeBoot @ 0x140006964 (SmpNtSerializeBoot.c)
 */

NTSTATUS __fastcall SmscpLoadSubSystemsForMuSession(int a1)
{
  char v2; // r14
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  char *v5; // rcx
  int v6; // edi
  _DWORD *v7; // r15
  char *v8; // r12
  char *v9; // r8
  unsigned int v10; // edi
  unsigned int *v11; // r15
  char *v12; // r12
  int v13; // ebx
  int v14; // r8d
  _DWORD *v15; // r14
  char *v16; // r15
  int v17; // edi
  int v18; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+20h] [rbp-30h]
  __int16 SystemInformation; // [rsp+30h] [rbp-20h] BYREF
  __int16 v22; // [rsp+32h] [rbp-1Eh]
  char *v23; // [rsp+38h] [rbp-18h]
  UNICODE_STRING String1; // [rsp+40h] [rbp-10h] BYREF
  PVOID ReturnedState; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  result = RtlAcquirePrivilege((PULONG)&SmpSessionCreatePrivilege, 1u, 2u, &ReturnedState);
  v4 = result;
  if ( result >= 0 )
  {
    if ( !a1 && SmpSerializeBoot == 1 )
    {
      v4 = SmpNtSerializeBoot();
      if ( v4 < 0 )
      {
        *(_DWORD *)SmscpSharedWindow = 1;
        _InterlockedOr(v19, 0);
        *((_DWORD *)SmscpSharedWindow + 2) = 847;
        *((_DWORD *)SmscpSharedWindow + 1) = v4;
        *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
      }
      else
      {
        v2 = 1;
      }
    }
    v5 = (char *)SmpMappedView;
    v6 = 0;
    v7 = (char *)SmpMappedView + 64;
    v8 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 7);
    if ( *((_DWORD *)SmpMappedView + 16) )
    {
      while ( 1 )
      {
        v23 = &v5[*(_QWORD *)&v8[16 * v6]];
        v22 = *(_WORD *)&v8[16 * v6 + 8];
        SystemInformation = v22;
        v4 = NtSetSystemInformation(SystemExtendServiceTableInformation, &SystemInformation, 0x10u);
        if ( v4 < 0 )
          break;
        if ( (unsigned int)++v6 >= *v7 )
          break;
        v5 = (char *)SmpMappedView;
      }
    }
    RtlReleasePrivilege(ReturnedState);
    if ( v4 < 0 )
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v19, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 893;
    }
    else
    {
      v9 = (char *)SmpMappedView;
      v10 = 0;
      v11 = (unsigned int *)((char *)SmpMappedView + 80);
      v12 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 9);
      if ( !*((_DWORD *)SmpMappedView + 20) )
      {
LABEL_17:
        v15 = v9 + 96;
        v16 = &v9[*((_QWORD *)v9 + 11)];
        v17 = 0;
        if ( *((_DWORD *)v9 + 24) )
        {
          while ( 1 )
          {
            v20 = 0LL;
            v23 = &v9[*(_QWORD *)&v16[16 * v17]];
            v22 = *(_WORD *)&v16[16 * v17 + 8];
            SystemInformation = v22;
            SmpExecuteCommand((int)&SystemInformation, a1, (int)v9, 0, 0LL);
            if ( (unsigned int)++v17 >= *v15 )
              break;
            v9 = (char *)SmpMappedView;
          }
        }
        return v4;
      }
      while ( 1 )
      {
        v13 = 4104;
        String1.Buffer = (PWSTR)&v9[*(_QWORD *)&v12[16 * v10]];
        String1.MaximumLength = *(_WORD *)&v12[16 * v10 + 8];
        String1.Length = String1.MaximumLength;
        v23 = &v9[*(_QWORD *)&v12[16 * v10 + 16]];
        v22 = *(_WORD *)&v12[16 * v10 + 24];
        SystemInformation = v22;
        if ( !a1 )
          v13 = 12296;
        if ( RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
          v13 |= 1u;
        if ( !v2 && a1 == 1 && SmpSerializeBoot == 2 )
        {
          v18 = SmpNtSerializeBoot();
          if ( v18 >= 0 )
          {
            v2 = 1;
          }
          else
          {
            *(_DWORD *)SmscpSharedWindow = 1;
            _InterlockedOr(v19, 0);
            *((_DWORD *)SmscpSharedWindow + 2) = 959;
            *((_DWORD *)SmscpSharedWindow + 1) = v18;
            *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
          }
        }
        v4 = SmpExecuteCommand((int)&SystemInformation, a1, v14, v13, 0LL);
        if ( v4 < 0 )
          break;
        v9 = (char *)SmpMappedView;
        v10 += 2;
        if ( v10 >= *v11 )
          goto LABEL_17;
      }
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v19, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 975;
    }
    *((_DWORD *)SmscpSharedWindow + 1) = v4;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
    return v4;
  }
  *(_DWORD *)SmscpSharedWindow = 1;
  _InterlockedOr(v19, 0);
  *((_DWORD *)SmscpSharedWindow + 2) = 824;
  *((_DWORD *)SmscpSharedWindow + 1) = result;
  *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
  return result;
}
