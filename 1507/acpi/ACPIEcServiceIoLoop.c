/*
 * XREFs of ACPIEcServiceIoLoop @ 0x1C003A4A0
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C003A3AC (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ACPIEcDispatchQueries @ 0x1C0039F74 (ACPIEcDispatchQueries.c)
 *     ACPIEcLogAction @ 0x1C003A170 (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x1C003A2FC (ACPIEcLogError.c)
 *     ACPIVectorClear @ 0x1C0041480 (ACPIVectorClear.c)
 */

void __fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  char v4; // r14
  int *v5; // r15
  ULONG v6; // r12d
  ULONG i; // r13d
  KIRQL v8; // al
  unsigned __int16 v9; // r12
  unsigned __int8 v10; // dl
  KIRQL v11; // bl
  KIRQL v12; // bl
  KIRQL v13; // bl
  char v14; // al
  KIRQL v15; // bl
  unsigned __int8 v16; // al
  unsigned __int8 v17; // di
  KIRQL v18; // bl
  char v19; // al
  KIRQL v20; // al
  __int64 v21; // r10
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // r8
  char v25; // al
  char v26; // cl
  __int16 v27; // ax
  char v28; // al
  PVOID **v29; // rax
  PVOID **v30; // rcx
  char *v31; // rax
  PLIST_ENTRY v32; // rax
  __int16 v33; // cx
  char Flink; // al
  void (__fastcall **v35)(_QWORD); // rbx
  PVOID *v36; // rax
  char v37; // [rsp+20h] [rbp-30h]
  ULONG v38; // [rsp+24h] [rbp-2Ch]
  int v39; // [rsp+28h] [rbp-28h] BYREF
  __int64 v40; // [rsp+30h] [rbp-20h]
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+40h] [rbp-10h]
  char v43; // [rsp+98h] [rbp+48h]
  char v44; // [rsp+A0h] [rbp+50h]
  char v45; // [rsp+A8h] [rbp+58h]

  p_P = &P;
  v44 = 1;
  v1 = 0LL;
  P = &P;
  v40 = 0LL;
  v3 = 1;
  v43 = 0;
  v4 = 0;
  v45 = 0;
  v5 = 0LL;
  v37 = 0;
  v6 = 0;
  v38 = 0;
  for ( i = 0; ; i = v38 )
  {
    if ( v1 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v9 = v40;
      v10 = 64;
      v11 = v8;
      if ( v40 == *(_QWORD *)(a1 + 40) )
        v10 = 48;
      ACPIEcLogAction(a1, v10, v43);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v11);
      __outbyte(v9, v43);
      KeStallExecutionProcessor(1u);
      v3 = v44;
      v38 = ++i;
      v40 = 0LL;
      v6 = 0;
    }
    if ( !v6 )
    {
      if ( v5 )
      {
        v5 = 0LL;
        v44 = 1;
        v3 = 1;
      }
      goto LABEL_24;
    }
    if ( v5 )
      break;
    if ( v3 )
    {
      v38 = v6 + i;
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
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x30u, 131);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v12);
      __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
      v3 = v44;
      v5 = (int *)(a1 + 784);
    }
    else
    {
      v5 = &v39;
    }
    if ( v5 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x80u, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v13);
      if ( !*(_BYTE *)(a1 + 805) )
        ACPIVectorClear(0LL, *(_QWORD *)(a1 + 72));
      v3 = v44;
    }
LABEL_24:
    ++v6;
    v14 = __inbyte(*(_QWORD *)(a1 + 32));
    v4 = v14;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    ACPIEcLogAction(a1, 0x10u, v4);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v15);
    if ( v45 && (v4 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v4 |= 0x10u;
      v45 = 0;
    }
    if ( (v4 & 1) != 0 )
    {
      v16 = __inbyte(*(_QWORD *)(a1 + 24));
      v17 = v16;
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x20u, v17);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v18);
      switch ( *(_BYTE *)(a1 + 488) )
      {
        case 1:
          **(_BYTE **)(a1 + 496) = v17;
          *(_BYTE *)(a1 + 488) = 5;
          break;
        case 2:
          if ( v17 )
          {
            v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v21 = v17 >> 5;
            v22 = 1 << (v17 & 0x1F);
            v39 = v22;
            v23 = *(_DWORD *)(a1 + 4 * v21 + 124);
            if ( (v23 & v22) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v21 + 124) = v22 | v23;
              if ( (v22 & *(_DWORD *)(a1 + 4 * v21 + 156)) != 0 )
              {
                v24 = *(unsigned __int8 *)(v17 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v24) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v24;
              }
              else
              {
                *(_BYTE *)(v17 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v17;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v20);
            v37 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
          break;
        case 3:
          v19 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v19;
          v45 = 1;
          *(_BYTE *)(a1 + 489) = 7;
          break;
        default:
          if ( *(_DWORD *)(a1 + 796) < 5u )
            ACPIEcLogError(a1, -2147155953);
          ++*(_DWORD *)(a1 + 796);
          break;
      }
      v1 = v40;
      v6 = 0;
      v3 = v44;
      continue;
    }
    v1 = v40;
    if ( (v4 & 2) != 0 )
      continue;
    switch ( *(_BYTE *)(a1 + 488) )
    {
      case 4:
        v31 = *(char **)(a1 + 496);
        v1 = *(_QWORD *)(a1 + 24);
        *(_BYTE *)(a1 + 488) = 5;
        v40 = v1;
        v28 = *v31;
        goto LABEL_55;
      case 5:
        v27 = *(_WORD *)(a1 + 494);
        if ( !v27 )
        {
          v29 = *(PVOID ***)(a1 + 480);
          v30 = (PVOID **)p_P;
          *(_BYTE *)(a1 + 488) = 0;
          *(_WORD *)(a1 + 494) = 0;
          *(_QWORD *)(a1 + 480) = 0LL;
          *v29 = &P;
          v29[1] = (PVOID *)v30;
          if ( *v30 != &P )
            __fastfail(3u);
          *v30 = (PVOID *)v29;
          p_P = (PVOID *)v29;
LABEL_58:
          v1 = v40;
          break;
        }
        v1 = *(_QWORD *)(a1 + 40);
        v40 = v1;
        if ( (v4 & 0x10) != 0 )
        {
          ++*(_QWORD *)(a1 + 496);
          ++*(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 488) = 6;
          *(_WORD *)(a1 + 494) = v27 - 1;
          v28 = *(_BYTE *)(a1 + 490);
LABEL_55:
          v43 = v28;
          break;
        }
        *(_WORD *)(a1 + 488) = 1283;
        v43 = -126;
        break;
      case 6:
        v25 = 4;
        v1 = *(_QWORD *)(a1 + 24);
        v26 = *(_BYTE *)(a1 + 491);
        if ( *(_BYTE *)(a1 + 490) == 0x80 )
          v25 = 1;
        *(_BYTE *)(a1 + 488) = v25;
        v40 = v1;
        v43 = v26;
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
        v40 = v1;
        *(_BYTE *)(a1 + 488) = 2;
        v43 = -124;
LABEL_66:
        KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
        continue;
      }
      v32 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
      if ( v32 )
      {
        *(_QWORD *)(a1 + 480) = v32;
        v6 = 0;
        *(_QWORD *)(a1 + 496) = v32[1].Blink;
        *(_BYTE *)(a1 + 491) = BYTE1(v32[1].Flink);
        v33 = WORD1(v32[1].Flink);
        *(_WORD *)(a1 + 492) = v33;
        Flink = (char)v32[1].Flink;
        --*(_QWORD *)(a1 + 496);
        --*(_BYTE *)(a1 + 491);
        *(_BYTE *)(a1 + 490) = Flink;
        *(_WORD *)(a1 + 494) = v33;
        *(_BYTE *)(a1 + 488) = 5;
        goto LABEL_66;
      }
      v44 = 0;
      v3 = 0;
      KeCancelTimer((PKTIMER)(a1 + 520));
    }
  }
  ++*v5;
  if ( i > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = i;
  while ( 1 )
  {
    v35 = (void (__fastcall **)(_QWORD))P;
    if ( P == &P )
      break;
    v36 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v36[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v36[1] = &P;
    v35[4](v35[5]);
    ExFreePoolWithTag(v35, 0);
  }
  if ( v37 )
    ACPIEcDispatchQueries(a1);
}
