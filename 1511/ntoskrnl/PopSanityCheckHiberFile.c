/*
 * XREFs of PopSanityCheckHiberFile @ 0x1404F9F38
 * Callers:
 *     PopResizeHiberFile @ 0x1404F5DF0 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ZwFsControlFile @ 0x140150D40 (ZwFsControlFile.c)
 */

__int64 __fastcall PopSanityCheckHiberFile(void *a1, __int64 a2, _QWORD *a3, __int64 **a4, _DWORD *a5)
{
  NTSTATUS Status; // edx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 i; // rax
  __int64 *v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK v14; // [rsp+58h] [rbp-20h] BYREF

  Status = ZwFsControlFile(a1, 0LL, 0LL, 0LL, &v14, 0x9003Bu, a3, 8u, &v13, 8u);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 152), Executive, 0, 0, 0LL);
    Status = v14.Status;
  }
  if ( Status >= 0 )
  {
    v9 = 0LL;
    LODWORD(v10) = 0;
    for ( i = *v13; i; i = v13[v10] )
    {
      v9 += i;
      if ( v13[(unsigned int)(v10 + 1)] < 0 )
        return (unsigned int)-1073741823;
      v10 = (unsigned int)(v10 + 2);
    }
    if ( v9 >= *a3 )
    {
      *a4 = v13;
      *a5 = 8 * v10 + 16;
      return (unsigned int)Status;
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)Status;
}
