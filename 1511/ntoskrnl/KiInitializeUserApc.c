/*
 * XREFs of KiInitializeUserApc @ 0x140022898
 * Callers:
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x140022644 (KiSetupForInstrumentationReturn.c)
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x140023314 (KeContextFromKframes.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiCopyInformation @ 0x1401C4068 (KiCopyInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v9; // rcx
  _QWORD *v10; // rdi
  unsigned __int64 result; // rax
  _QWORD *v12; // r8
  const char *i; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+30h] [rbp-118h]
  _QWORD *v18; // [rsp+40h] [rbp-108h]
  _QWORD *v19; // [rsp+50h] [rbp-F8h]
  char v20[2]; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+6Ah] [rbp-DEh]
  unsigned __int64 v22; // [rsp+78h] [rbp-D0h]

  v17 = a1;
  if ( a1 )
  {
    v19 = (_QWORD *)((*(_QWORD *)(a2 + 384) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v19 - 154;
    v18 = v19 - 154;
    if ( (((_BYTE)v19 + 48) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[1271] = v9[1271];
    v10 = v19 - 154;
    *((_DWORD *)v18 + 12) = 1048603;
    KeContextFromKframes(a2, v17, v18);
    a1 = v19;
    v19[3] = v18[19];
    *v19 = v18[31];
  }
  else
  {
    v10 = *(_QWORD **)(a2 + 208);
  }
  *v10 = a4;
  v10[1] = a5;
  v10[2] = a6;
  v10[3] = a3;
  *(_QWORD *)(a2 + 384) = v10;
  *(_QWORD *)(a2 + 360) = KeUserApcDispatcher;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  v22 = result;
  if ( result >= qword_1402FE040 )
  {
    __sidt(v20);
    v12 = (_QWORD *)v21;
    for ( i = (const char *)v21; (unsigned __int64)i < v21 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v14 = 848;
    v15 = qword_1402FE030;
    v16 = (unsigned int)qword_1402FE038;
    while ( v14 >= 8 )
    {
      v15 = __ROR8__(v15 - *v12++, qword_1402FE038);
      v14 -= 8;
    }
    while ( v14 )
    {
      v15 = __ROR8__(v15 - *(unsigned __int8 *)v12, qword_1402FE038);
      v12 = (_QWORD *)((char *)v12 + 1);
      --v14;
    }
    if ( qword_1402FE048 != v15 )
    {
      if ( qword_1402FE000 )
        goto LABEL_24;
      qword_1402FE000 = (unsigned int)__ROL4__(265, 160);
      qword_1402FE008 = 0LL;
      qword_1402FE010 = 0LL;
      qword_1402FE018 = 269LL;
      qword_1402FE020 = v21;
    }
    if ( !qword_1402FE000 )
    {
LABEL_27:
      LOBYTE(v16) = 1;
      result = KiQueryUnbiasedInterruptTime(v16) + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_1402FE040 = result;
      return result;
    }
LABEL_24:
    if ( (KDEFERRED_ROUTINE *)qword_1402FDFD8 != sub_140218690 )
    {
      LODWORD(dword_1402FDFC0) = 275;
      qword_1402FDFD8 = (__int64)sub_140218690;
      qword_1402FDFE0 = (__int64)&dword_1402FDFC0;
      qword_1402FDFF8 = 0LL;
      qword_1402FDFD0 = 0LL;
    }
    qword_1402FE028 = 515460LL;
    KiInsertQueueDpc((ULONG_PTR)&dword_1402FDFC0, 0);
    goto LABEL_27;
  }
  return result;
}
