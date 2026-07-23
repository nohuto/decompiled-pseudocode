/*
 * XREFs of PsIoRateControlReference @ 0x1400B3FA0
 * Callers:
 *     IoGetIoRateControl @ 0x1400B3E00 (IoGetIoRateControl.c)
 * Callees:
 *     PspIoRateEntryIoControlReference @ 0x1400B4024 (PspIoRateEntryIoControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14020F848 (PspJobIoRateVolumeEntryReference.c)
 */

__int64 __fastcall PsIoRateControlReference(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // r15
  __int64 result; // rax

  v5 = a1 + 1392;
  result = PspIoRateEntryIoControlReference(a1 + 1392);
  *a3 = result;
  if ( result )
  {
    result = *(_QWORD *)(a1 + 1344);
    *a4 = result;
    *a5 = v5;
  }
  else
  {
    *a5 = 0LL;
  }
  a3[1] = 0LL;
  a5[1] = 0LL;
  if ( *(_QWORD *)(a1 + 1456) && a2 )
  {
    result = PspJobIoRateVolumeEntryReference(a1, a2);
    if ( result )
    {
      a3[1] = *(_QWORD *)(result + 40);
      a4[1] = *(_QWORD *)(result + 48);
      a5[1] = result;
    }
  }
  return result;
}
