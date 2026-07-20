/*
 * XREFs of sub_140004EC0 @ 0x140004EC0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x14000C480 (memcpy.c)
 */

NTSTATUS __fastcall sub_140004EC0(wchar_t *Str1, __int64 a2, const WCHAR *a3, unsigned int a4)
{
  SIZE_T v5; // rsi
  NTSTATUS result; // eax
  WCHAR *Heap; // rax
  const WCHAR *v9; // rbx
  struct _UNICODE_STRING Value; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = a4;
  RtlInitUnicodeString(&DestinationString, Str1);
  RtlInitUnicodeString(&Value, a3);
  result = RtlSetEnvironmentVariable(0LL, &DestinationString, &Value);
  if ( result >= 0 )
  {
    if ( !wcsicmp(Str1, L"Path") && ++dword_14001FE5C == 2 )
    {
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags, v5);
      qword_1400208C8 = (__int64)Heap;
      v9 = Heap;
      if ( !Heap )
        return -1073741801;
      memcpy(Heap, a3, v5);
      RtlInitUnicodeString(&stru_1400208A0, v9);
    }
    return 0;
  }
  return result;
}
