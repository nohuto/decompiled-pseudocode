/*
 * XREFs of ACPIEcServiceIoLoop @ 0x1C002AD9C
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0003EB4 (ACPIEcServiceDevice.c)
 * Callees:
 *     ACPIEcLogAction @ 0x1C002B398 (ACPIEcLogAction.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ACPIEcDispatchQueries @ 0x1C004D104 (ACPIEcDispatchQueries.c)
 *     ACPIEcLogError @ 0x1C004D300 (ACPIEcLogError.c)
 *     ACPIVectorClear @ 0x1C0057A70 (ACPIVectorClear.c)
 */

PVOID *__fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  unsigned __int8 v4; // r14
  int *v5; // r15
  ULONG v6; // r12d
  ULONG i; // r13d
  KIRQL v8; // al
  unsigned __int16 v9; // r12
  __int64 v10; // rdx
  KIRQL v11; // bl
  __int64 v12; // r8
  KIRQL v13; // al
  __int64 v14; // r8
  KIRQL v15; // bl
  KIRQL v16; // al
  __int64 v17; // rdx
  KIRQL v18; // bl
  unsigned __int8 v19; // al
  KIRQL v20; // al
  __int64 v21; // r8
  __int64 v22; // rdx
  KIRQL v23; // bl
  unsigned __int8 v24; // al
  unsigned __int8 v25; // di
  KIRQL v26; // al
  __int64 v27; // r8
  __int64 v28; // rdx
  KIRQL v29; // bl
  char v30; // al
  KIRQL v31; // al
  __int64 v32; // r10
  int v33; // r8d
  int v34; // ecx
  __int64 v35; // r8
  char v36; // al
  unsigned __int8 v37; // cl
  __int16 v38; // ax
  unsigned __int8 v39; // al
  PVOID **v40; // rcx
  PVOID **v41; // rax
  unsigned __int8 *v42; // rax
  PLIST_ENTRY v43; // rax
  __int16 v44; // cx
  char Flink; // al
  void (__fastcall **v46)(_QWORD); // rbx
  PVOID *result; // rax
  PVOID *v48; // rax
  char v49; // [rsp+20h] [rbp-30h]
  ULONG v50; // [rsp+24h] [rbp-2Ch]
  int v51; // [rsp+28h] [rbp-28h] BYREF
  __int64 v52; // [rsp+30h] [rbp-20h]
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+40h] [rbp-10h]
  unsigned __int8 v55; // [rsp+98h] [rbp+48h]
  char v56; // [rsp+A0h] [rbp+50h]
  char v57; // [rsp+A8h] [rbp+58h]

  p_P = &P;
  v56 = 1;
  v1 = 0LL;
  P = &P;
  v52 = 0LL;
  v3 = 1;
  v55 = 0;
  v4 = 0;
  v57 = 0;
  v5 = 0LL;
  v49 = 0;
  v6 = 0;
  v50 = 0;
  for ( i = 0; ; i = v50 )
  {
    if ( v1 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v9 = v52;
      v10 = 64LL;
      v11 = v8;
      LOBYTE(v12) = v55;
      if ( v52 == *(_QWORD *)(a1 + 40) )
        v10 = 48LL;
      ACPIEcLogAction(a1, v10, v12);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v11);
      __outbyte(v9, v55);
      KeStallExecutionProcessor(1u);
      v3 = v56;
      v50 = ++i;
      v52 = 0LL;
      v6 = 0;
    }
    if ( !v6 )
    {
      if ( v5 )
      {
        v5 = 0LL;
        v56 = 1;
        v3 = 1;
      }
      goto LABEL_24;
    }
    if ( v5 )
      break;
    if ( v3 )
    {
      v50 = v6 + i;
      KeStallExecutionProcessor(v6);
      if ( (v4 & 0x10) != 0 )
      {
        if ( v6 < *(_DWORD *)(a1 + 64) )
          goto LABEL_24;
        v5 = (int *)(a1 + 780);
      }
      else
      {
        if ( v6 < *(_DWORD *)(a1 + 68) )
          goto LABEL_24;
        v5 = (int *)(a1 + 776);
      }
    }
    else if ( (v4 & 0x10) != 0 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      LOBYTE(v14) = -125;
      v15 = v13;
      ACPIEcLogAction(a1, 48LL, v14);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v15);
      __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
      v3 = v56;
      v5 = (int *)(a1 + 784);
    }
    else
    {
      v5 = &v51;
    }
    if ( v5 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      LOBYTE(v17) = 0x80;
      v18 = v16;
      ACPIEcLogAction(a1, v17, 0LL);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v18);
      if ( !*(_BYTE *)(a1 + 805) )
        ACPIVectorClear(0LL, *(_QWORD *)(a1 + 72));
      v3 = v56;
    }
LABEL_24:
    ++v6;
    v19 = __inbyte(*(_QWORD *)(a1 + 32));
    v4 = v19;
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    LOBYTE(v21) = v4;
    LOBYTE(v22) = 16;
    v23 = v20;
    ACPIEcLogAction(a1, v22, v21);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v23);
    if ( v57 && (v4 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v4 |= 0x10u;
      v57 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v24 = __inbyte(*(_QWORD *)(a1 + 24));
      v25 = v24;
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      LOBYTE(v27) = v25;
      LOBYTE(v28) = 32;
      v29 = v26;
      ACPIEcLogAction(a1, v28, v27);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v29);
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 1:
          **(_BYTE **)(a1 + 496) = v25;
          *(_BYTE *)(a1 + 488) = 5;
          break;
        case 2:
          if ( v25 )
          {
            v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v32 = v25 >> 5;
            v33 = 1 << (v25 & 0x1F);
            v51 = v33;
            v34 = *(_DWORD *)(a1 + 4 * v32 + 124);
            if ( (v34 & v33) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v32 + 124) = v33 | v34;
              if ( (v33 & *(_DWORD *)(a1 + 4 * v32 + 156)) != 0 )
              {
                v35 = *(unsigned __int8 *)(v25 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v35) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v35;
              }
              else
              {
                *(_BYTE *)(v25 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v25;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v31);
            v49 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
          break;
        case 3:
          v30 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v30;
          v57 = 1;
          *(_BYTE *)(a1 + 489) = 7;
          break;
        default:
          if ( *(_DWORD *)(a1 + 796) < 5u )
            ACPIEcLogError(a1, 2147811343LL);
          ++*(_DWORD *)(a1 + 796);
          break;
      }
      v1 = v52;
      v6 = 0;
      v3 = v56;
      continue;
    }
    v1 = v52;
    if ( (v4 & 2) != 0 )
      continue;
    switch ( *(_BYTE *)(a1 + 488) )
    {
      case 4:
        v42 = *(unsigned __int8 **)(a1 + 496);
        v1 = *(_QWORD *)(a1 + 24);
        *(_BYTE *)(a1 + 488) = 5;
        v52 = v1;
        v39 = *v42;
        goto LABEL_55;
      case 5:
        v38 = *(_WORD *)(a1 + 494);
        if ( !v38 )
        {
          v40 = (PVOID **)p_P;
          v41 = *(PVOID ***)(a1 + 480);
          *(_BYTE *)(a1 + 488) = 0;
          *(_WORD *)(a1 + 494) = 0;
          *(_QWORD *)(a1 + 480) = 0LL;
          if ( *v40 != &P )
            __fastfail(3u);
          v41[1] = (PVOID *)v40;
          *v41 = &P;
          *v40 = (PVOID *)v41;
          p_P = (PVOID *)v41;
LABEL_58:
          v1 = v52;
          break;
        }
        v1 = *(_QWORD *)(a1 + 40);
        v52 = v1;
        if ( (v4 & 0x10) != 0 )
        {
          ++*(_QWORD *)(a1 + 496);
          ++*(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 488) = 6;
          *(_WORD *)(a1 + 494) = v38 - 1;
          v39 = *(_BYTE *)(a1 + 490);
LABEL_55:
          v55 = v39;
          break;
        }
        *(_WORD *)(a1 + 488) = 1283;
        v55 = -126;
        break;
      case 6:
        v36 = 4;
        v1 = *(_QWORD *)(a1 + 24);
        v37 = *(_BYTE *)(a1 + 491);
        if ( *(_BYTE *)(a1 + 490) == 0x80 )
          v36 = 1;
        *(_BYTE *)(a1 + 488) = v36;
        v52 = v1;
        v55 = v37;
        break;
      default:
        goto LABEL_58;
    }
    if ( !v1 && !*(_BYTE *)(a1 + 488) )
    {
      *(_BYTE *)(a1 + 504) = 0;
      if ( (v4 & 0x20) != 0 )
      {
        v1 = *(_QWORD *)(a1 + 40);
        v52 = v1;
        *(_BYTE *)(a1 + 488) = 2;
        v55 = -124;
LABEL_66:
        KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
        continue;
      }
      v43 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
      if ( v43 )
      {
        *(_QWORD *)(a1 + 480) = v43;
        v6 = 0;
        *(_QWORD *)(a1 + 496) = v43[1].Blink;
        *(_BYTE *)(a1 + 491) = BYTE1(v43[1].Flink);
        v44 = WORD1(v43[1].Flink);
        *(_WORD *)(a1 + 492) = v44;
        Flink = (char)v43[1].Flink;
        --*(_QWORD *)(a1 + 496);
        --*(_BYTE *)(a1 + 491);
        *(_BYTE *)(a1 + 490) = Flink;
        *(_WORD *)(a1 + 494) = v44;
        *(_BYTE *)(a1 + 488) = 5;
        goto LABEL_66;
      }
      v56 = 0;
      v3 = 0;
      KeCancelTimer((PKTIMER)(a1 + 520));
    }
  }
  ++*v5;
  if ( i > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = i;
  while ( 1 )
  {
    v46 = (void (__fastcall **)(_QWORD))P;
    result = &P;
    if ( P == &P )
      break;
    v48 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v48[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v48[1] = &P;
    v46[4](v46[5]);
    ExFreePoolWithTag(v46, 0);
  }
  if ( v49 )
    return (PVOID *)ACPIEcDispatchQueries(a1);
  return result;
}
