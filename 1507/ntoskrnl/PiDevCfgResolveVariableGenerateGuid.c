/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x14068BD84
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x1404EBB90 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  PVOID PoolWithTag; // rax
  PVOID v7; // rbp
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  UUID v10; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v4 = ExUuidCreate(&v10);
  if ( v4 >= 0 )
  {
    v4 = RtlStringFromGUIDEx(&v10.Data1, (__int64)&DestinationString, 1);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( v4 >= 0 )
      {
        v5 = DestinationString.Length + 2;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x63647050u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, DestinationString.Buffer, v5);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v5;
          *(_QWORD *)(a3 + 40) = v7;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v4;
}
