/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CF44
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401CD67C (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  unsigned int *v7; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v9 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v9 = NextProcess;
    if ( !NextProcess )
      break;
    v7 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v7 )
    {
      v11[0] = a1;
      v11[2] = PnpCollectOpenHandlesCallBack;
      v11[1] = v9;
      v11[3] = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(
                              v7,
                              (__int64 (__fastcall *)(unsigned int *, signed __int64 *, __int64, __int64))PnpHandleProcessWalkWorker,
                              (__int64)v11,
                              0LL);
      ExReleaseRundownProtection(v9 + 92);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v9, 0x6E457350u);
        return v3;
      }
    }
  }
  return v3;
}
