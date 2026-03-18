/*
 * XREFs of AdtpAppendString @ 0x14058615C
 * Callers:
 *     AdtpBuildObjectTypeStrings @ 0x140585F2C (AdtpBuildObjectTypeStrings.c)
 *     AdtpAppendZString @ 0x140586114 (AdtpAppendZString.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpAppendString(__int64 a1, __int64 a2, UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int16 Length; // si
  unsigned int v8; // ebx
  wchar_t *Buffer; // r15
  UNICODE_STRING *v10; // rcx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int64 result; // rax
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
  v8 = 0;
  if ( Source.Length )
  {
    Buffer = Source.Buffer;
    while ( 1 )
    {
      if ( *(_BYTE *)(v4 + v5) )
      {
        v10 = (UNICODE_STRING *)(16 * v4 + a1);
        if ( v10->Length != 0xFFFE )
        {
          v11 = v10->MaximumLength - v10->Length;
          if ( *Buffer != 37 || v11 >= Length )
          {
            Source.Buffer = Buffer;
            v12 = Length;
            if ( v11 < Length )
              v12 = v11;
            Source.Length = v12;
            Length -= v12;
            Buffer = (wchar_t *)((char *)Buffer + v12);
            RtlAppendUnicodeStringToString(v10, &Source);
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
        v8 = -1073741801;
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
  result = v8;
  *a4 = 0;
  return result;
}
