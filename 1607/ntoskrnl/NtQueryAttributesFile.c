/*
 * XREFs of NtQueryAttributesFile @ 0x140414020
 * Callers:
 *     <none>
 * Callees:
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FsRtlpCleanupEcps @ 0x140413ED0 (FsRtlpCleanupEcps.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  unsigned __int8 v4; // si
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 JobSilo; // rax
  struct _KTHREAD *v8; // rax
  NTSTATUS v9; // edi
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  _QWORD v12[24]; // [rsp+50h] [rbp-238h] BYREF
  _BYTE v13[64]; // [rsp+110h] [rbp-178h] BYREF
  char v14; // [rsp+150h] [rbp-138h] BYREF

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
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, 0x38uLL);
  LODWORD(v12[0]) = 12582920;
  HIWORD(v12[8]) = 7;
  LODWORD(v12[11]) = 1;
  LODWORD(v12[8]) = 2113536;
  v12[12] = FileInformation;
  v12[13] = v13;
  BYTE1(v12[16]) = 1;
  v12[17] = &v14;
  v12[6] = ObjectAttributes;
  LODWORD(v12[18]) = 32;
  memset(&v12[19], 0, 0x28uLL);
  LOWORD(v12[19]) = 40;
  v12[23] = 1LL;
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  v12[23] = JobSilo;
  v8 = KeGetCurrentThread();
  ++v8->OtherOperationCount;
  __incgsdword(0x2E64u);
  v9 = ObOpenObjectByNameEx(
         (_DWORD)ObjectAttributes,
         (_DWORD)IoFileObjectType,
         v4,
         0,
         128,
         (__int64)v12,
         v12[23],
         (__int64)Handle);
  if ( v12[20] && FsRtlpCleanupEcps((_SLIST_ENTRY *)v12[20]) )
    v12[20] = 0LL;
  if ( LODWORD(v12[4]) == -1096154543 )
    return v12[2];
  if ( v9 >= 0 )
  {
    ObCloseHandle(Handle[0], v4);
    return -1073741788;
  }
  return v9;
}
