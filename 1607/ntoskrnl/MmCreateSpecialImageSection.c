/*
 * XREFs of MmCreateSpecialImageSection @ 0x14045DF70
 * Callers:
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140554680 (PspLocateSystemDll.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140024850 (CcZeroEndOfLastPage.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 */

NTSTATUS __fastcall MmCreateSpecialImageSection(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6)
{
  char v10; // bl
  int v11; // edi
  unsigned int SessionId; // r12d
  NTSTATUS result; // eax
  __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  int v16[2]; // [rsp+60h] [rbp-48h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-38h] BYREF

  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    v11 = 0x1000000;
    v10 = 1;
  }
  else
  {
    v11 = 37748736;
  }
  if ( (a6 & 4) != 0 )
    v10 |= 0x10u;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  *(_QWORD *)v16 = 0LL;
  for ( result = MiCreateSection(&Object, a2, v10, (__int64 *)v16, 0x10u, v11, a3, a4, a5, 0LL, 0, SessionId);
        result < 0;
        result = MiCreateSection(&Object, a2, v10, (__int64 *)v16, 0x10u, v11, a3, a4, a5, 0LL, 0, SessionId) )
  {
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    *(_QWORD *)v16 = 0LL;
  }
  v14 = MiSectionControlArea((__int64)Object);
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  CcZeroEndOfLastPage(v15);
  MiDereferenceControlAreaFile(v14, (unsigned __int64)v15);
  result = ObInsertObject(Object, 0LL, 0xF001Fu, 0, 0LL, &Handle);
  if ( result >= 0 )
    *a1 = Handle;
  return result;
}
