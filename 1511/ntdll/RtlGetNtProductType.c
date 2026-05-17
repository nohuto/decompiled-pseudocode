/*
 * XREFs of RtlGetNtProductType @ 0x1800743D0
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18000F440 (SbpUpdateCacheWithCurrentImpl.c)
 *     SwitchedRtlGetVersion @ 0x180074114 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800742A0 (RtlGetVersion.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E2A00 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v3; // si
  int v4; // eax
  unsigned __int64 Heap; // rbx
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // [rsp+30h] [rbp-49h] BYREF
  __int16 v8; // [rsp+32h] [rbp-47h]
  unsigned __int64 v9; // [rsp+38h] [rbp-41h]
  UNICODE_STRING v10; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING v13; // [rsp+70h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  int v15; // [rsp+90h] [rbp+17h] BYREF
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  __int128 v19; // [rsp+B0h] [rbp+37h]
  char v20; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF

  if ( MEMORY[0x7FFE0268] )
  {
    *a1 = MEMORY[0x7FFE0264];
    return 1;
  }
  *a1 = 1;
  v3 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  RtlInitUnicodeString(&v12, L"ProductType");
  v16 = 0LL;
  p_DestinationString = &DestinationString;
  v15 = 48;
  v18 = 576;
  v19 = 0LL;
  v4 = NtOpenKey(&Handle, 0x2000000LL, &v15);
  Heap = 0LL;
  if ( v4 < 0 )
  {
    Handle = 0LL;
    goto LABEL_7;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 256LL);
  if ( Heap )
  {
    v4 = NtQueryValueKey(Handle, &v12, 1LL, Heap, 256, &v20);
LABEL_7:
    if ( v4 >= 0 && *(_DWORD *)(Heap + 4) == 1 )
    {
      v6 = Heap + *(unsigned int *)(Heap + 8);
      v8 = *(_WORD *)(Heap + 12);
      v9 = v6;
      v7 = v8 - 2;
      RtlInitUnicodeString(&v10, L"WinNt");
      RtlInitUnicodeString(&v11, L"LanmanNt");
      RtlInitUnicodeString(&v13, L"ServerNt");
      if ( RtlEqualUnicodeString(&v7, &v10.Length, 1) )
      {
        *a1 = 1;
      }
      else if ( RtlEqualUnicodeString(&v7, &v11.Length, 1) )
      {
        *a1 = 2;
      }
      else
      {
        if ( !RtlEqualUnicodeString(&v7, &v13.Length, 1) )
          goto LABEL_16;
        *a1 = 3;
      }
      v3 = 1;
    }
LABEL_16:
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  if ( Handle )
    NtClose(Handle);
  return v3;
}
