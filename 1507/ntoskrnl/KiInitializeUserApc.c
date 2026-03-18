/*
 * XREFs of KiInitializeUserApc @ 0x14011E7C8
 * Callers:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 * Callees:
 *     KeContextFromKframes @ 0x14001F72C (KeContextFromKframes.c)
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiCopyInformation @ 0x1402001F4 (KiCopyInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiInitializeUserApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v9; // rcx
  _QWORD *v10; // rdi
  __int64 result; // rax
  void *InstrumentationCallback; // rdx
  _QWORD *v13; // r8
  const char *i; // rax
  unsigned int v15; // r9d
  __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  __int64 v19; // [rsp+40h] [rbp-108h]
  _QWORD *v20; // [rsp+50h] [rbp-F8h]
  _BYTE v21[2]; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+6Ah] [rbp-DEh]

  if ( a1 )
  {
    v20 = (_QWORD *)((*(_QWORD *)(a2 + 384) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v20 - 154;
    v19 = (__int64)(v20 - 154);
    if ( (((_BYTE)v20 + 48) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[1271] = v9[1271];
    v10 = v20 - 154;
    *(_DWORD *)(v19 + 48) = 1048603;
    KeContextFromKframes(a2, a1, v19);
    v20[3] = *(_QWORD *)(v19 + 152);
    *v20 = *(_QWORD *)(v19 + 248);
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
  {
    InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 360);
      *(_QWORD *)(a2 + 360) = InstrumentationCallback;
    }
  }
  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_14034E4E0 )
  {
    __sidt(v21);
    v13 = (_QWORD *)v22;
    for ( i = (const char *)v22; (unsigned __int64)i < v22 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v15 = 848;
    v16 = qword_14034E4D0;
    while ( v15 >= 8 )
    {
      v16 = __ROR8__(v16 - *v13++, qword_14034E4D8);
      v15 -= 8;
    }
    while ( v15 )
    {
      v16 = __ROR8__(v16 - *(unsigned __int8 *)v13, qword_14034E4D8);
      v13 = (_QWORD *)((char *)v13 + 1);
      --v15;
    }
    if ( qword_14034E4E8 != v16 )
    {
      if ( qword_14034E4A0 )
        goto LABEL_25;
      qword_14034E4A0 = (unsigned int)__ROL4__(265, 160);
      qword_14034E4A8 = 0LL;
      qword_14034E4B0 = 0LL;
      qword_14034E4B8 = 269LL;
      qword_14034E4C0 = v22;
    }
    if ( !qword_14034E4A0 )
    {
LABEL_28:
      v17 = 41929663 * (__rdtsc() >> 4);
      result = 288000000000LL;
      qword_14034E4E0 = MEMORY[0xFFFFF78000000008] + v17 % 0x12A05F2000LL - MEMORY[0xFFFFF780000003B0] + 288000000000LL;
      return result;
    }
LABEL_25:
    if ( (KDEFERRED_ROUTINE *)qword_14034E478 != sub_140268DB8 )
    {
      dword_14034E460 = 275;
      qword_14034E478 = (__int64)sub_140268DB8;
      qword_14034E480 = (__int64)&dword_14034E460;
      qword_14034E498 = 0LL;
      qword_14034E470 = 0LL;
    }
    qword_14034E4C8 = 515460LL;
    KiInsertQueueDpc((__int64)&dword_14034E460, 0LL, 0LL, 0LL, 0);
    goto LABEL_28;
  }
  return result;
}
