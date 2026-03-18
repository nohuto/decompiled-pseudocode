/*
 * XREFs of NtQueryAttributesFile @ 0x140415160
 * Callers:
 *     <none>
 * Callees:
 *     PspGetJobSilo @ 0x140076728 (PspGetJobSilo.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     FsRtlpCleanupEcps @ 0x140415010 (FsRtlpCleanupEcps.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  unsigned __int8 v4; // si
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 JobSilo; // rax
  struct _KTHREAD *v8; // rax
  _LOOKASIDE_LIST_EX *v9; // rdx
  NTSTATUS v10; // edi
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  _QWORD v13[24]; // [rsp+50h] [rbp-238h] BYREF
  _BYTE v14[64]; // [rsp+110h] [rbp-178h] BYREF
  char v15; // [rsp+150h] [rbp-138h] BYREF

  v4 = KeGetCurrentThread()->gap0[10];
  if ( v4 )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 39) = *(_BYTE *)(v5 + 39);
  }
  memset(v13, 0, sizeof(v13));
  memset(v14, 0, 0x38uLL);
  LODWORD(v13[0]) = 12582920;
  HIWORD(v13[8]) = 7;
  LODWORD(v13[11]) = 1;
  LODWORD(v13[8]) = 2113536;
  v13[12] = FileInformation;
  v13[13] = v14;
  BYTE1(v13[16]) = 1;
  v13[17] = &v15;
  v13[6] = ObjectAttributes;
  LODWORD(v13[18]) = 32;
  memset(&v13[19], 0, 0x28uLL);
  LOWORD(v13[19]) = 40;
  v13[23] = 1LL;
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  v13[23] = JobSilo;
  v8 = KeGetCurrentThread();
  ++v8->OtherOperationCount;
  __incgsdword(0x2E64u);
  v10 = ObOpenObjectByNameEx(
          (_DWORD)ObjectAttributes,
          (_DWORD)IoFileObjectType,
          v4,
          0,
          128,
          (__int64)v13,
          v13[23],
          (__int64)Handle);
  if ( v13[20] && FsRtlpCleanupEcps((struct _SLIST_ENTRY *)v13[20], v9) )
    v13[20] = 0LL;
  if ( LODWORD(v13[4]) == -1096154543 )
    return v13[2];
  if ( v10 >= 0 )
  {
    ObCloseHandle(Handle[0], v4);
    return -1073741788;
  }
  return v10;
}
