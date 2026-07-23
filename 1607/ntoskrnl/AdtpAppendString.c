/*
 * XREFs of AdtpAppendString @ 0x1406D15D4
 * Callers:
 *     AdtpAppendZString @ 0x1406D1770 (AdtpAppendZString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1406D1C48 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpAppendString(__int64 a1, __int64 a2, UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int16 Length; // si
  unsigned int v9; // ebx
  wchar_t *Buffer; // r15
  UNICODE_STRING *v11; // rcx
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  unsigned int v15; // r13d
  PVOID PoolWithTag; // rax
  const void *v17; // rdx
  UNICODE_STRING Source; // [rsp+20h] [rbp-48h] BYREF
  PVOID v20; // [rsp+80h] [rbp+18h]

  v4 = (unsigned int)*a4;
  v5 = a2;
  Source = *a3;
  if ( (_DWORD)v4 )
    return 0LL;
  Length = Source.Length;
  v9 = 0;
  if ( Source.Length )
  {
    Buffer = Source.Buffer;
    while ( 1 )
    {
      if ( *(_BYTE *)(v4 + v5) )
      {
        v11 = (UNICODE_STRING *)(16 * v4 + a1);
        if ( v11->Length != 0xFFFE )
        {
          v12 = v11->MaximumLength - v11->Length;
          if ( *Buffer != 37 || v12 >= Length )
          {
            Source.Buffer = Buffer;
            v13 = Length;
            if ( v12 < Length )
              v13 = v12;
            Source.Length = v13;
            Length -= v13;
            Buffer = (wchar_t *)((char *)Buffer + v13);
            RtlAppendUnicodeStringToString(v11, &Source);
          }
        }
      }
      if ( !Length )
        break;
      v14 = *(_WORD *)(a1 + 16 * v4);
      if ( v14 >= 0xFFFEu || *Buffer == 37 && Length + (unsigned int)v14 >= 0xFFFE )
        break;
      v15 = Length;
      if ( *(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024 > Length )
        v15 = *(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024;
      if ( v15 >= 0xFFFE )
        v15 = 65534;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x6B416553u);
      v20 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741801;
        break;
      }
      v17 = *(const void **)(a1 + 16 * v4 + 8);
      if ( v17 )
      {
        memmove(PoolWithTag, v17, *(unsigned __int16 *)(a1 + 16 * v4));
        if ( *(_BYTE *)(v4 + a2) )
          ExFreePoolWithTag(*(PVOID *)(a1 + 16 * v4 + 8), 0);
        PoolWithTag = v20;
      }
      *(_QWORD *)(a1 + 16 * v4 + 8) = PoolWithTag;
      *(_WORD *)(a1 + 16 * v4 + 2) = v15;
      v5 = a2;
      *(_BYTE *)(v4 + a2) = 1;
    }
  }
  result = v9;
  *a4 = 0;
  return result;
}
