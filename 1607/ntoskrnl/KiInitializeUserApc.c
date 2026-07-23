/*
 * XREFs of KiInitializeUserApc @ 0x1400A6214
 * Callers:
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x1400AC51C (KiSetupForInstrumentationReturn.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x1400F22A0 (KeContextFromKframes.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiCopyInformation @ 0x1401D29AC (KiCopyInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  _QWORD *v12; // r8
  const char *i; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+38h] [rbp-110h]
  _QWORD *v18; // [rsp+40h] [rbp-108h]
  _QWORD *v19; // [rsp+50h] [rbp-F8h]
  char v20[2]; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+6Ah] [rbp-DEh]
  unsigned __int64 v22; // [rsp+78h] [rbp-D0h]

  v17 = a1;
  if ( a1 )
  {
    v19 = (_QWORD *)((*(_QWORD *)(a2 + 384) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v10 = (unsigned __int64)(v19 - 154);
    v18 = v19 - 154;
    if ( (((_BYTE)v19 + 48) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v10 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 1271) = *(_BYTE *)(v10 + 1271);
    v9 = v19 - 154;
    *((_DWORD *)v18 + 12) = 1048603;
    KeContextFromKframes(a2, v17, v18);
    a1 = v19;
    v19[3] = v18[19];
    *v19 = v18[31];
  }
  else
  {
    v9 = *(_QWORD **)(a2 + 208);
  }
  *v9 = a4;
  v9[1] = a5;
  v9[2] = a6;
  v9[3] = a3;
  *(_QWORD *)(a2 + 384) = v9;
  *(_QWORD *)(a2 + 360) = KeUserApcDispatcher;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  v22 = result;
  if ( result >= qword_140326390 )
  {
    __sidt(v20);
    v12 = (_QWORD *)v21;
    for ( i = (const char *)v21; (unsigned __int64)i < v21 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v14 = 848;
    v15 = qword_140326380;
    v16 = (unsigned int)qword_140326388;
    while ( v14 >= 8 )
    {
      v15 = __ROR8__(v15 - *v12++, qword_140326388);
      v14 -= 8;
    }
    while ( v14 )
    {
      v15 = __ROR8__(v15 - *(unsigned __int8 *)v12, qword_140326388);
      v12 = (_QWORD *)((char *)v12 + 1);
      --v14;
    }
    if ( qword_140326398 != v15 )
    {
      if ( qword_140326350 )
        goto LABEL_23;
      qword_140326350 = (unsigned int)__ROL4__(-1879048176, 196);
      qword_140326358 = 0LL;
      qword_140326360 = 0LL;
      qword_140326368 = 269LL;
      qword_140326370 = v21;
    }
    if ( !qword_140326350 )
    {
LABEL_26:
      LOBYTE(v16) = 1;
      result = KiQueryUnbiasedInterruptTime(v16) + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140326390 = result;
      return result;
    }
LABEL_23:
    if ( (KDEFERRED_ROUTINE *)qword_140326328 != KiScanQueues )
    {
      LODWORD(dword_140326310) = 275;
      qword_140326328 = (__int64)KiScanQueues;
      qword_140326330 = (__int64)&dword_140326310;
      qword_140326348 = 0LL;
      qword_140326320 = 0LL;
    }
    qword_140326378 = 528240LL;
    KiInsertQueueDpc((ULONG_PTR)&dword_140326310, 0);
    goto LABEL_26;
  }
  return result;
}
