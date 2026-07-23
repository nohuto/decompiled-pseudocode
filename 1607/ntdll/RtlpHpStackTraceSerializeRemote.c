/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x1800F8900
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  ULONG_PTR v2; // rdi
  NTSTATUS i; // eax
  void *v4; // rcx
  int v5; // eax
  NTSTATUS v6; // ebx
  char *v7; // rdx
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-21h] BYREF
  HANDLE Buffer[14]; // [rsp+60h] [rbp-19h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+F0h] [rbp+77h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+7Fh] BYREF

  SectionHandle = 0LL;
  BaseAddress = 0LL;
  v2 = 0x10000LL;
  MaximumSize.QuadPart = 0x10000LL;
  for ( i = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
        ;
        i = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL) )
  {
    v6 = i;
    if ( i < 0 )
      break;
    memset(Buffer, 0, 0x50uLL);
    v4 = *(void **)(a1 + 8);
    Buffer[0] = SectionHandle;
    Buffer[1] = (HANDLE)MaximumSize.QuadPart;
    LODWORD(Buffer[3]) = 0x20000000;
    v5 = RtlpHeapPerformCrossProcessQuery(v4, Buffer);
    v6 = v5;
    if ( v5 >= 0 )
    {
      SectionOffset.QuadPart = 0LL;
      ViewSize = 0x10000LL;
      if ( MaximumSize.QuadPart <= 0 )
      {
LABEL_14:
        v6 = 0;
      }
      else
      {
        while ( 1 )
        {
          v6 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 v2,
                 &SectionOffset,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 4u);
          if ( v6 < 0 )
            break;
          v7 = (HANDLE)(SectionOffset.QuadPart + ViewSize) <= Buffer[4]
             ? (char *)ViewSize
             : (char *)Buffer[4] - SectionOffset.QuadPart;
          v6 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD))(a1 + 16))(BaseAddress, v7, *(_QWORD *)(a1 + 24));
          if ( v6 < 0 )
            break;
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          v2 = ViewSize;
          BaseAddress = 0LL;
          SectionOffset.QuadPart += ViewSize;
          if ( SectionOffset.QuadPart >= MaximumSize.QuadPart )
            goto LABEL_14;
        }
      }
      break;
    }
    if ( v5 != -1073741789 )
      break;
    NtClose(SectionHandle);
    MaximumSize.QuadPart = ((unsigned __int64)Buffer[4] + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return (unsigned int)v6;
}
