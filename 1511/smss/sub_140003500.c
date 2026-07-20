/*
 * XREFs of sub_140003500 @ 0x140003500
 * Callers:
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 *     sub_14000BC10 @ 0x14000BC10 (sub_14000BC10.c)
 * Callees:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 *     sub_140003408 @ 0x140003408 (sub_140003408.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_140004800 @ 0x140004800 (sub_140004800.c)
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140004A4C @ 0x140004A4C (sub_140004A4C.c)
 *     sub_140004B10 @ 0x140004B10 (sub_140004B10.c)
 *     sub_140004D90 @ 0x140004D90 (sub_140004D90.c)
 *     sub_14000BA14 @ 0x14000BA14 (sub_14000BA14.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 */

__int64 __fastcall sub_140003500(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE *v3; // rax
  HANDLE *v4; // rbx
  int v5; // edi
  __int64 v6; // r8
  int v7; // eax
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  NTSTATUS v10; // eax
  PVOID v12; // rcx
  int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE EventInformation[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h]
  HANDLE Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+110h] [rbp+10h]

  v19.Size = 0;
  memset(&v19.ProcessHandle, 0, 0x60uLL);
  v2 = *(unsigned int *)(a1 + 48);
  *(_OWORD *)BaseAddress = 0LL;
  if ( (unsigned int)v2 < dword_14001F028 )
  {
    v5 = sub_14000BA14(v2, BaseAddress);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(qword_14001FCC8 + 40LL * *(unsigned int *)(a1 + 48));
    if ( v5 >= 0 )
    {
      v12 = BaseAddress[0];
      if ( BaseAddress[0] && *((_DWORD *)BaseAddress[0] + 6) == 2 )
        *(_QWORD *)(a1 + 320) = *((_QWORD *)BaseAddress[0] + 6);
      else
        v5 = -1073741823;
      if ( v12 )
        sub_1400046B4(v12);
      if ( v5 >= 0 )
      {
        *(PVOID *)(a1 + 312) = BaseAddress[1];
        return 0LL;
      }
      v22 = *(_DWORD *)(a1 + 48);
      v21 = 6;
      sub_140004D90(v20, 0LL, 0LL);
      return (unsigned int)v5;
    }
  }
  NtWaitForSingleObject(EventHandle, 0, 0LL);
  UnicodeString.Length = *(_WORD *)(a1 + 52);
  UnicodeString.MaximumLength = UnicodeString.Length;
  UnicodeString.Buffer = (PWSTR)(a1 + 56);
  v3 = (HANDLE *)sub_140003408();
  v4 = v3;
  if ( !v3 )
    return 3221225626LL;
  v5 = sub_140004B10(v3[3], &UnicodeString);
  if ( v5 >= 0 )
  {
    v5 = sub_140001E9C((__int64)&UnicodeString, 0LL, v6, 5152, &v19);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v5 >= 0 )
    {
      v7 = NtQueryInformationProcess(v19.ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = v4[2];
        *v8 = v4[4];
        v8[1] = v4[5];
        v4[6] = v19.ProcessHandle;
        v4[7] = v19.ClientId.UniqueProcess;
        *((_DWORD *)v4 + 2) = ProcessInformation;
        v9 = _InterlockedIncrement(&dword_140020900);
        if ( v9 > dword_14001F028 )
          _InterlockedDecrement(&dword_140020900);
        else
          *(_DWORD *)(qword_14001FCC8 + 40LL * (v9 - 1)) = ProcessInformation;
        *((_OWORD *)v4 + 4) = *(_OWORD *)a1;
        *((_OWORD *)v4 + 5) = *(_OWORD *)(a1 + 16);
        v4[12] = *(HANDLE *)(a1 + 32);
        sub_140004A4C(v4);
        v5 = NtResumeThread(v19.ThreadHandle, 0LL);
        NtClose(v19.ThreadHandle);
        if ( v5 >= 0 )
        {
          Object[0] = v4[6];
          Object[1] = v4[4];
          v10 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
          v5 = v10;
          if ( v10 < 0 )
          {
            if ( (*(_BYTE *)v4 & 1) != 0
              || (_m_prefetchw(v4), (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) != 0) )
            {
              v5 = 0;
            }
          }
          else
          {
            if ( v10 )
              goto LABEL_11;
            NtQueryEvent(v4[4], EventBasicInformation, EventInformation, 8u, 0LL);
            if ( !v17 )
            {
              if ( (*(_BYTE *)v4 & 1) == 0 )
                _InterlockedOr((volatile signed __int32 *)v4, 1u);
              v5 = -1073741823;
LABEL_31:
              sub_140004800(v4);
              goto LABEL_26;
            }
            v5 = NtClearEvent(v4[4]);
          }
LABEL_11:
          if ( v5 >= 0 )
          {
            sub_140004890(v4);
            return 259LL;
          }
          goto LABEL_31;
        }
        if ( (*(_BYTE *)v4 & 1) == 0 )
          _InterlockedOr((volatile signed __int32 *)v4, 1u);
        goto LABEL_31;
      }
      NtTerminateProcess(v19.ProcessHandle, v7);
      NtClose(v19.ProcessHandle);
      NtClose(v19.ThreadHandle);
    }
  }
LABEL_26:
  sub_140004890(v4);
  return (unsigned int)v5;
}
