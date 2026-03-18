/*
 * XREFs of PspIoRateControlProcessCallback @ 0x140642104
 * Callers:
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 */

__int64 __fastcall PspIoRateControlProcessCallback(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rax

  v4 = 0;
  v5 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( v5 )
  {
    if ( (unsigned __int8)ExEnumHandleTable(
                            v5,
                            (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))PspSetFileHandleFlow,
                            a2,
                            0LL) )
      v4 = -1073741823;
    ExReleaseRundownProtection_0(a1 + 92);
  }
  return v4;
}
