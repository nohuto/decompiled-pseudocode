/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140602B0C
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401BF298 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  unsigned int *v8; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v10 = NextProcess;
    if ( !NextProcess )
      break;
    v8 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v8 )
    {
      v12[0] = a1;
      v12[1] = v10;
      v12[2] = a2;
      v12[3] = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(
                              v8,
                              (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))PnpHandleProcessWalkWorker,
                              (__int64)v12,
                              0LL);
      ExReleaseRundownProtection_0(v10 + 92);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v3;
      }
    }
  }
  return v3;
}
