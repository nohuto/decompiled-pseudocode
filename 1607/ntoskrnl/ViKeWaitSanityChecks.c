/*
 * XREFs of ViKeWaitSanityChecks @ 0x1407133FC
 * Callers:
 *     ViKeWaitForMultipleObjectsCommon @ 0x140713278 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x140713354 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004EF10 (RtlpGetStackLimits.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViKeWaitSanityChecks(
        unsigned int a1,
        ULONG_PTR *a2,
        char a3,
        _QWORD *a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned __int8 result; // al
  __int64 v8; // rdi
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rbp
  ULONG_PTR v13; // r14
  int v14; // r15d
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v17[4]; // [rsp+38h] [rbp-20h] BYREF

  result = a6;
  v8 = a1;
  if ( a6 <= 2u )
  {
    if ( a6 != 2 )
      goto LABEL_9;
    if ( a4 )
    {
      if ( !*a4 )
        goto LABEL_9;
      v11 = 290LL;
    }
    else
    {
      v11 = 289LL;
    }
  }
  else
  {
    v11 = 288LL;
  }
  result = VerifierBugCheckIfAppropriate(0xC4u, v11, a6, *a2, (__int64)a4);
LABEL_9:
  if ( (MmVerifierData & 0x800) != 0 && a3 == 1 && (!a4 || *a4) && a5 )
  {
    result = RtlpGetStackLimits((__int64)v17, (__int64)&v16);
    v12 = v16;
    v13 = v17[0];
    v14 = result;
  }
  else
  {
    v14 = 0;
    v13 = 0LL;
    v12 = 0LL;
  }
  if ( (_DWORD)v8 )
  {
    do
    {
      v15 = *a2;
      result = VfUtilSynchronizationObjectSanityChecks((void *)*a2, 1LL);
      if ( v14 && v15 >= v13 && v15 < v12 )
        result = VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, v15, 0LL, 0LL);
      ++a2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
