/*
 * XREFs of RtlpGetAssemblyStorageMapRootLocation @ 0x1800D2F4C
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800426C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpGetAssemblyStorageMapRootLocation(__int64 a1, __int64 a2, __int64 a3)
{
  int ValueKey; // eax
  unsigned int v5; // ebx
  const char *v6; // r8
  unsigned int v7; // ecx
  __int64 StringRoutine; // rax
  _DWORD *v10; // [rsp+28h] [rbp-D8h]
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h]
  _DWORD v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h]
  __int64 *v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+60h] [rbp-A0h]
  __int128 v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+84h] [rbp-7Ch]
  unsigned int Size; // [rsp+88h] [rbp-78h]
  size_t Size_4; // [rsp+8Ch] [rbp-74h] BYREF

  Handle = 0LL;
  v13[0] = 0;
  v11 = a2;
  if ( a1 && a2 && a3 )
  {
    v14 = a1;
    v15 = &v11;
    v13[2] = 48;
    v16 = 64;
    v17 = 0LL;
    ValueKey = NtOpenKey();
    v5 = ValueKey;
    if ( ValueKey < 0 )
    {
      v6 = "SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n";
LABEL_8:
      DbgPrintEx(51, 0, v6, &v11, ValueKey, v10);
      goto LABEL_22;
    }
    v10 = v13;
    ValueKey = NtQueryValueKey();
    v5 = ValueKey;
    if ( ValueKey < 0 )
    {
      v6 = "SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n";
      goto LABEL_8;
    }
    if ( v18 != 1 )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location value type is not REG_SZ\n");
LABEL_13:
      v5 = -1073741766;
      goto LABEL_22;
    }
    v7 = Size;
    if ( (Size & 1) != 0 )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location value has non-even size\n");
      goto LABEL_13;
    }
    if ( Size > *(unsigned __int16 *)(a3 + 2) )
    {
      if ( Size > 0xFFFE )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n",
          &v11,
          536,
          v13);
        v5 = -1073741562;
        goto LABEL_22;
      }
      *(_WORD *)(a3 + 2) = Size;
      StringRoutine = NtdllpAllocateStringRoutine((unsigned __int16)v7);
      *(_QWORD *)(a3 + 8) = StringRoutine;
      if ( !StringRoutine )
      {
        v5 = -1073741801;
        goto LABEL_22;
      }
      v7 = Size;
    }
    memmove(*(void **)(a3 + 8), &Size_4, v7);
    v5 = 0;
    *(_WORD *)a3 = Size;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_22:
  if ( Handle )
    NtClose(Handle);
  return v5;
}
