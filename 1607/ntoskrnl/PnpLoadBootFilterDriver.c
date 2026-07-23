/*
 * XREFs of PnpLoadBootFilterDriver @ 0x14079A54C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x1401CC9A8 (PipIs32bitKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  unsigned int v7; // r9d
  void **v8; // rdx
  char *i; // rax
  __int64 v10; // rbx
  char *v11; // rcx
  char *v12; // rdi
  int started; // ebx
  UNICODE_STRING String2; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h]

  *a4 = 0LL;
  if ( !IopGroupTable || a3 >= IopGroupIndex )
    return 3221225473LL;
  v7 = 0;
  if ( a3 )
  {
    v8 = (void **)IopGroupTable;
    do
    {
      for ( i = (char *)*v8; i != (char *)IopGroupTable + 16 * v7; i = *(char **)i )
      {
        if ( !i[47] )
          return 3221225473LL;
      }
      ++v7;
      v8 += 2;
    }
    while ( v7 < a3 );
  }
  _mm_lfence();
  v10 = 16LL * a3;
  v11 = (char *)IopGroupTable + v10;
  v12 = *(char **)((char *)IopGroupTable + v10);
  while ( v12 != v11 )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)v12 + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( v12[47] )
        {
          started = *((_DWORD *)v12 + 10);
          if ( started >= 0 )
            started = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      (unsigned int)&String2,
                      (unsigned int)*((_QWORD *)v12 + 3) + 32,
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL),
                      KeLoaderBlock_0 + 16,
                      1,
                      1);
          *((_DWORD *)v12 + 10) = started;
          *((_QWORD *)v12 + 2) = Object;
          v12[47] = 1;
          if ( Object )
          {
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
            *a4 = Object;
          }
          else
          {
            v12[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)started;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
    v12 = *(char **)v12;
    v11 = (char *)IopGroupTable + v10;
  }
  started = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)started;
}
