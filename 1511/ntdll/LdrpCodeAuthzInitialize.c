/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18007BC30
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressEx @ 0x1800812F0 (LdrGetProcedureAddressEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A5380 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  char v1; // si
  unsigned int v2; // ecx
  int ValueKey; // ebx
  int Key; // ebx
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v12[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 Heap; // [rsp+60h] [rbp-A8h]
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v15; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-90h] BYREF
  __int64 v17; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v18[8]; // [rsp+90h] [rbp-78h] BYREF
  int v19; // [rsp+98h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v21; // [rsp+A8h] [rbp-60h]
  int v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+B8h] [rbp-50h]
  _BYTE v24[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v25; // [rsp+DCh] [rbp-2Ch]
  _BYTE v26[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v27; // [rsp+FCh] [rbp-Ch]
  int v28; // [rsp+100h] [rbp-8h]
  unsigned int v29; // [rsp+104h] [rbp-4h]
  _BYTE v30[4]; // [rsp+148h] [rbp+40h] BYREF
  int v31; // [rsp+14Ch] [rbp+44h]
  int v32; // [rsp+150h] [rbp+48h]
  int v33; // [rsp+154h] [rbp+4Ch]

  v0 = 0;
  v14 = 0LL;
  v11 = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v17);
  if ( (unsigned __int16)(*(_WORD *)(v17 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)NtOpenKey(&v15, 3LL, &unk_1801029D8) < 0
    || (ValueKey = NtQueryValueKey(v15, &unk_180113840, 2LL, v30, 80, v18), NtClose(v15), ValueKey < 0)
    || v31 != 4
    || v32 != 4
    || !v33 )
  {
    v10 = 0LL;
    v1 = 0;
    if ( (int)NtOpenKey(&v10, 131097LL, &unk_180142218) >= 0 )
    {
      Key = ZwQueryKey(v10, 2LL, v24);
      NtClose(v10);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v25 )
        goto LABEL_27;
    }
    if ( (int)NtOpenKey(&Handle, 1LL, L"0") >= 0 )
    {
      if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v26, 80, &v8) >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(Handle, L"FH", 2LL, v26, 80, &v8);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v2 = UnicodeString.Length + 120;
      v12[0] = 0;
      if ( v2 <= 0xFFFE )
      {
        v12[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, (unsigned __int16)v2);
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v12, (__int16 *)&UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v12, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v19 = 48;
            v21 = v12;
            v20 = 0LL;
            v22 = 64;
            v23 = 0LL;
            if ( (int)NtOpenKey(&Handle, 1LL, &v19) >= 0 )
            {
              v6 = NtQueryValueKey(Handle, L"$&", 2LL, v26, 80, &v8);
              NtClose(Handle);
              if ( v6 >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v1 )
      {
LABEL_27:
        if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_180113810, &v14) >= 0 )
        {
          v7 = v14;
          if ( (int)LdrGetProcedureAddressEx(v14, (unsigned int)&unk_180113830, 0, (unsigned int)&v11, 0) >= 0 && v11 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = v7;
          }
          else
          {
            LdrUnloadDll(v7);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
