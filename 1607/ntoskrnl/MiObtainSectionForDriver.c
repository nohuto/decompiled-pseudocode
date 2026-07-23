/*
 * XREFs of MiObtainSectionForDriver @ 0x140482AA0
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MiCreateSectionForDriver @ 0x14048338C (MiCreateSectionForDriver.c)
 */

__int64 __fastcall MiObtainSectionForDriver(PCUNICODE_STRING String1, __int64 a2, unsigned int a3, PVOID **a4)
{
  struct _KTHREAD *CurrentThread; // r15
  PVOID v8; // rdi
  PVOID *i; // rbx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 result; // rax
  PVOID *PoolWithTag; // rax
  unsigned __int64 v15; // rcx
  BOOL v16; // eax
  bool v17; // zf
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
LABEL_2:
  for ( i = (PVOID *)PsLoadedModuleList; ; i = (PVOID *)*i )
  {
    if ( i == &PsLoadedModuleList )
    {
      if ( v8 )
      {
        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x644C6D4Du);
        i = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0xA0uLL);
          result = 0LL;
          i[14] = v8;
          *((_DWORD *)i + 26) = 0x1000000;
          *((_WORD *)i + 54) = 1;
          i[17] = (PVOID)-2LL;
          goto LABEL_16;
        }
        v11 = -1073741670;
        goto LABEL_12;
      }
      MmReleaseLoadLock((__int64)CurrentThread);
      v11 = MiCreateSectionForDriver(a2, a3, &Object);
      MmAcquireLoadLock();
      if ( v11 < 0 )
        return (unsigned int)v11;
      v8 = Object;
      v12 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)Object) + 56LL);
      if ( *(__int16 *)(v12 + 46) < 0 && *(_DWORD *)(v12 + 32) == 1 && (a3 & 1) == 0 )
      {
        v11 = -1073741800;
LABEL_12:
        ObDereferenceObjectDeferDelete(v8);
        return (unsigned int)v11;
      }
      goto LABEL_2;
    }
    if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 9), 1u) )
      break;
  }
  if ( v8 )
    ObDereferenceObjectDeferDelete(v8);
  v15 = (unsigned __int64)i[6];
  v16 = v15 >= qword_140326950 && v15 < qword_140326950 + 0x8000000000LL;
  if ( (a3 & 1) != 0 )
    v17 = !v16;
  else
    v17 = v16;
  if ( v17 )
    return 3221225496LL;
  result = 272LL;
LABEL_16:
  *a4 = i;
  return result;
}
