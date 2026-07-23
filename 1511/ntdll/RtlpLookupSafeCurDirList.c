/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x1800D1EFC
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180048FD0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DB80 (RtlQueryEnvironmentVariable_U.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A5320 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800D1E64 (RtlpEnsureTailingSlashAndAddToList.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  __int64 **Heap; // rax
  __int64 **v2; // rbx
  HANDLE v3; // rdi
  NTSTATUS v4; // eax
  signed __int64 v5; // rcx
  int v6; // eax
  HANDLE v7; // rcx
  ULONG v8; // edi
  ULONG i; // edx
  _UNICODE_STRING *p_Value; // rdx
  NTSTATUS v11; // eax
  signed __int64 v12; // rdi
  __int64 *v13; // r8
  __int64 v14; // rax
  PVOID v15; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Value; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+78h] [rbp-90h] BYREF
  int v22; // [rsp+84h] [rbp-84h]
  _BYTE v23[4]; // [rsp+88h] [rbp-80h] BYREF
  int v24; // [rsp+8Ch] [rbp-7Ch]
  int v25; // [rsp+90h] [rbp-78h]
  char v26; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v27[4]; // [rsp+298h] [rbp+190h] BYREF
  int v28; // [rsp+29Ch] [rbp+194h]
  char v29; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v30; // [rsp+4B8h] [rbp+3B0h] BYREF

  result = qword_180142298;
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = 0LL;
  *(_DWORD *)&Value.Length = 34078720;
  Value.Buffer = 0LL;
  *(_DWORD *)&ValueName.Length = 0x2000000;
  ValueName.Buffer = 0LL;
  if ( qword_180142298 == -1 )
  {
    ValueName.Buffer = (unsigned __int16 *)&v26;
    Value.Buffer = (unsigned __int16 *)&v29;
    Destination.Buffer = (unsigned __int16 *)&v30;
    Heap = (__int64 **)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x10uLL);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = (__int64 *)Heap;
      *Heap = (__int64 *)Heap;
      KeyHandle = qword_1801461F8;
      v3 = qword_1801461F8;
      if ( !qword_1801461F8 )
      {
        v4 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180106320);
        v5 = (signed __int64)KeyHandle;
        if ( v4 < 0 )
          v5 = -1LL;
        KeyHandle = (HANDLE)v5;
        v3 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&qword_1801461F8, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose(KeyHandle);
          KeyHandle = v3;
        }
        else
        {
          v3 = KeyHandle;
        }
      }
      if ( v3 != (HANDLE)-1LL
        && NtQueryValueKey(
             v3,
             (PUNICODE_STRING)&stru_180106300,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10u,
             ResultLength) >= 0
        && ResultLength[0] == 16 )
      {
        v6 = v22;
        if ( v22 )
        {
          if ( v22 != 1 )
            v6 = 0;
          if ( v6 )
            goto LABEL_46;
        }
      }
      if ( RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&stru_180106310, &Value) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)&Value) >= 0 )
      {
LABEL_46:
        v7 = KeyHandle;
        if ( KeyHandle != (HANDLE)-1LL )
        {
          v8 = 0;
          for ( i = 0; ; i = v8 )
          {
            v11 = ZwEnumerateValueKey(v7, i, KeyValueBasicInformation, v23, 0x20Cu, ResultLength);
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -2147483643 )
            {
              if ( v11 < 0 )
                break;
              if ( v25 )
              {
                if ( (unsigned int)(v24 - 1) <= 1 )
                {
                  ValueName.Length = v25;
                  if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v27, 0x214u, ResultLength) >= 0
                    && (unsigned int)(v24 - 1) <= 1 )
                  {
                    p_Value = &Value;
                    Value.Length = 2 * (((ResultLength[0] - 12) >> 1) - 1);
                    if ( v28 == 2 )
                    {
                      if ( RtlExpandEnvironmentStrings_U(0LL, &Value, &Destination, 0LL) < 0 )
                        goto LABEL_32;
                      p_Value = &Destination;
                    }
                    RtlpEnsureTailingSlashAndAddToList((__int64)v2, (__int64)p_Value);
                  }
                }
              }
            }
LABEL_32:
            v7 = KeyHandle;
            ++v8;
          }
        }
      }
    }
    v12 = _InterlockedCompareExchange64(&qword_180142298, (signed __int64)v2, 0LL);
    if ( v12 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v13 = *v2;
          if ( *v2 == (__int64 *)v2 )
            break;
          v14 = *v13;
          if ( (__int64 **)v13[1] != v2 || *(__int64 **)(v14 + 8) != v13 )
            __fastfail(3u);
          v15 = LdrpHeap;
          *v2 = (__int64 *)v14;
          *(_QWORD *)(v14 + 8) = v2;
          RtlFreeHeap(v15, 0, v13);
        }
        RtlFreeHeap(LdrpHeap, 0, v2);
      }
      return v12;
    }
  }
  return result;
}
