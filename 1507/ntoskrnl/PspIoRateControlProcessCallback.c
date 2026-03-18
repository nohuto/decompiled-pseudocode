/*
 * XREFs of PspIoRateControlProcessCallback @ 0x1406C4628
 * Callers:
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 */

__int64 __fastcall PspIoRateControlProcessCallback(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  unsigned __int64 v6; // rtt

  v4 = 0;
  v5 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( v5 )
  {
    if ( (unsigned __int8)ExEnumHandleTable(
                            v5,
                            (__int64 (__fastcall *)(unsigned int *, __int64 *, __int64, __int64))PspSetFileHandleFlow,
                            a2,
                            0LL) )
      v4 = -1073741823;
    _m_prefetchw(&a1[92]);
    v6 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v6 - 2, v6) )
      ExfReleaseRundownProtection(a1 + 92);
  }
  return v4;
}
