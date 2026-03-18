/*
 * XREFs of MmCreateSpecialImageSection @ 0x14044FAE0
 * Callers:
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x14053F9A8 (PspLocateSystemDll.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 */

int __fastcall MmCreateSpecialImageSection(HANDLE *a1, int a2, char a3, void *a4, char a5)
{
  char v5; // bl
  unsigned int v10; // edi
  unsigned int SessionId; // r12d
  int result; // eax
  __int64 v13; // rdi
  struct _FILE_OBJECT *v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-68h]
  unsigned int i; // [rsp+50h] [rbp-48h]
  int v17[2]; // [rsp+60h] [rbp-38h] BYREF
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
    v5 |= 0x10u;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  for ( i = SessionId; ; i = SessionId )
  {
    *(_QWORD *)v17 = 0LL;
    LOBYTE(v15) = a3;
    result = MiCreateSection(&Object, a2, v5, (__int64)v17, 0x10u, v10, v15, a4, 0LL, 0, i);
    if ( result >= 0 )
      break;
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v13 = MiSectionControlArea((__int64)Object);
  v14 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v13);
  CcZeroEndOfLastPage(v14);
  MI_DEREFERENCE_CONTROL_AREA_FILE(v13, (unsigned __int64)v14);
  result = ObInsertObject(Object, 0LL, 0xF001Fu, 0, 0LL, &Handle);
  if ( result >= 0 )
    *a1 = Handle;
  return result;
}
