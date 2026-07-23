/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x1401BE950
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1401BDD84 (HvlSvmAcknowledgePageRequest.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401BE794 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, _QWORD *a2, int *a3)
{
  __int64 v3; // rbx
  void *v6; // rax
  PHYSICAL_ADDRESS v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v6 = (void *)HvlpAcquireHypercallPage(v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 32 * v3);
    LODWORD(v9) = 166;
    HIDWORD(v9) = v3 & 0xFFF;
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(v9, (PHYSICAL_ADDRESS)v8[3].QuadPart, 0LL);
    HvlpReleaseHypercallPage((__int64)v8);
    *a3 = WORD2(v10) & 0xFFF;
    return (unsigned __int16)v10;
  }
  else
  {
    if ( (unsigned int)v3 >= 3 )
      LODWORD(v3) = 3;
    return HvlpFastAcknowledgePageRequest(v3, a2, a3);
  }
}
