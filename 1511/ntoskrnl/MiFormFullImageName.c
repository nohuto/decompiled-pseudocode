/*
 * XREFs of MiFormFullImageName @ 0x14050B410
 * Callers:
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAppendStringToString @ 0x1404C3EF4 (RtlAppendStringToString.c)
 */

__int64 __fastcall MiFormFullImageName(unsigned __int16 *a1, const STRING *a2, STRING *a3)
{
  unsigned __int16 v4; // r9
  char *PoolWithTag; // rax
  NTSTATUS appended; // eax
  char *Buffer; // rcx
  __int64 result; // rax

  v4 = a2->Length + 2 + *a1;
  a3->MaximumLength = v4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4, 0x54446D4Du);
  a3->Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    a3->Length = *a1;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    appended = RtlAppendStringToString(a3, a2);
    Buffer = a3->Buffer;
    if ( appended >= 0 )
    {
      result = 1LL;
      *(_WORD *)&Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
      return result;
    }
    ExFreePoolWithTag(Buffer, 0);
  }
  return 0LL;
}
