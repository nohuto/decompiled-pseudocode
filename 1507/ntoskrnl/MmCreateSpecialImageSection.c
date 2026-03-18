/*
 * XREFs of MmCreateSpecialImageSection @ 0x140508F84
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 */

int __fastcall MmCreateSpecialImageSection(HANDLE *a1, __int64 a2, char a3, __int64 a4, char a5)
{
  char v5; // bl
  int v10; // edi
  unsigned int SessionId; // r12d
  int result; // eax
  __int64 v13; // rdi
  struct _FILE_OBJECT *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+30h] [rbp-68h]
  unsigned int i; // [rsp+50h] [rbp-48h]
  int v20[2]; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+68h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-28h] BYREF

  v5 = 0;
  if ( (a5 & 1) != 0 )
  {
    v10 = 0x1000000;
    v5 = 1;
  }
  else
  {
    v10 = 37748736;
  }
  if ( (a5 & 4) != 0 )
    v5 |= 8u;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  for ( i = SessionId; ; i = SessionId )
  {
    *(_QWORD *)v20 = 0LL;
    LOBYTE(v18) = a3;
    result = MiCreateSection(&Object, a2, v5, (unsigned __int64 *)v20, 0x10u, v10, v18, a4, 0LL, 0, i);
    if ( result >= 0 )
      break;
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v13 = MiSectionControlArea((__int64)Object);
  v14 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v13);
  CcZeroEndOfLastPage(v14, v15, v16, v17);
  MI_DEREFERENCE_CONTROL_AREA_FILE(v13, (unsigned __int64)v14);
  result = ObInsertObject(Object, 0LL, 0xF001Fu, 0, 0LL, &Handle);
  if ( result >= 0 )
    *a1 = Handle;
  return result;
}
