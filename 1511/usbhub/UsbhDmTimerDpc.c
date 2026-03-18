/*
 * XREFs of UsbhDmTimerDpc @ 0x1C000D720
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r12
  __int64 v6; // r15
  __int64 **v7; // rbx
  KIRQL v8; // r10
  __int64 v9; // r11
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG TimeIncrement; // eax
  __int64 *v24; // rcx
  __int64 *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 ***v34; // r9
  __int64 ***v35; // rax
  __int64 *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  ULONG v40; // eax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  KIRQL v45; // r14
  __int64 v46; // rsi
  _QWORD *v47; // rbx
  _QWORD *v48; // rcx
  _QWORD *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  KIRQL v65; // al
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r9
  int v71; // eax
  _WORD *v72; // [rsp+28h] [rbp-89h]
  __int64 v73; // [rsp+30h] [rbp-81h]
  _DWORD *v74; // [rsp+38h] [rbp-79h]
  __int64 v75; // [rsp+40h] [rbp-71h]
  _QWORD *v76; // [rsp+48h] [rbp-69h]
  int v77; // [rsp+50h] [rbp-61h]
  __int64 v78; // [rsp+58h] [rbp-59h]
  KIRQL v79; // [rsp+6Ch] [rbp-45h]
  __int64 *v80; // [rsp+88h] [rbp-29h] BYREF
  __int64 **v81; // [rsp+90h] [rbp-21h]
  _DWORD v82[5]; // [rsp+98h] [rbp-19h] BYREF
  __int16 v83; // [rsp+ACh] [rbp-5h]
  __int16 v84; // [rsp+AEh] [rbp-3h]
  __int16 v85; // [rsp+B0h] [rbp-1h]
  __int16 v86; // [rsp+B2h] [rbp+1h]
  _WORD v87[2]; // [rsp+B8h] [rbp+7h] BYREF
  int v88; // [rsp+BCh] [rbp+Bh]
  int v89; // [rsp+C0h] [rbp+Fh]
  int v95; // [rsp+D8h] [rbp+27h]

  v5 = 1;
  if ( !DeferredContext )
    UsbhTrapFatal_Dbg(0LL, 0LL, SystemArgument1, SystemArgument2);
  v6 = DeferredContext[8];
  if ( !v6 )
    UsbhTrapFatal_Dbg(DeferredContext, 0LL, SystemArgument1, SystemArgument2);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8], SystemArgument1, SystemArgument2);
  v7 = (__int64 **)(v6 + 3744);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v79 = v8;
  v81 = &v80;
  v80 = (__int64 *)&v80;
LABEL_5:
  v9 = 0LL;
  while ( *v7 != (__int64 *)v7 )
  {
    v10 = *v7;
    v11 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v7 = (__int64 *)v11;
    v12 = v10 - 7;
    *(_QWORD *)(v11 + 8) = v7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v13 = DeferredContext[8];
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 827616612;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v10;
      }
    }
    v15 = *((_DWORD *)v12 + 1) == 1;
    *v10 = 0LL;
    v12[8] = 0LL;
    if ( v15 )
    {
      v16 = *((int *)v12 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v17 = DeferredContext[8];
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 826633572;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v12;
          *(_QWORD *)(v18 + 24) = v16;
        }
      }
      *((_DWORD *)v12 + 1) = 2;
      v19 = v81;
      *v10 = (__int64)&v80;
      v12[8] = (__int64)v19;
      if ( *v19 != (__int64 *)&v80 )
        __fastfail(3u);
      *v19 = v10;
      v81 = (__int64 **)v10;
      if ( *((int *)v12 + 3) > 0 )
      {
        v20 = *((int *)v12 + 3);
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v21 = DeferredContext[8];
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v22 = 843410788;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 16) = v12;
            *(_QWORD *)(v22 + 24) = v20;
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        v8 = v79;
        *((_DWORD *)v12 + 3) += -15 - (TimeIncrement - 1) / 0x2710;
        *((_DWORD *)v12 + 5) = 1;
        goto LABEL_5;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v54 = DeferredContext[8];
        if ( v54 )
        {
          v55 = *(_QWORD *)(v54 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884));
          *(_DWORD *)v55 = 860188004;
          *(_QWORD *)(v55 + 8) = 0LL;
          *(_QWORD *)(v55 + 16) = v12;
          *(_QWORD *)(v55 + 24) = 0LL;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
      v82[0] = *((_DWORD *)v12 + 6);
      if ( dword_1C0067650 )
      {
        v58 = DeferredContext[8];
        if ( !v58 )
          UsbhTrapFatal_Dbg(DeferredContext, 0LL, v56, v57);
        if ( *(_DWORD *)v58 != 541218120 )
          UsbhTrapFatal_Dbg(DeferredContext, v58, v56, v57);
        v82[4] = *(_DWORD *)(v58 + 5192);
        v83 = *(_WORD *)(v58 + 5196);
        v59 = *(_DWORD *)(v58 + 5200);
        v84 = v59;
        v82[2] = v59;
        v85 = *(_WORD *)(v58 + 5228);
        v86 = *(_WORD *)(v58 + 5230);
        v87[0] = *(_WORD *)(v58 + 2548);
        v87[1] = *(_WORD *)(v58 + 2550);
        v88 = 0;
        v89 = *(unsigned __int16 *)(v58 + 5208);
        v60 = *(_WORD *)(v58 + 5208) != 0;
        v88 = v60;
        if ( *(unsigned __int16 *)(v58 + 5210) )
          v88 = ++v60;
        if ( *(unsigned __int16 *)(v58 + 5212) )
          v88 = ++v60;
        if ( *(unsigned __int16 *)(v58 + 5214) )
          v88 = ++v60;
        if ( *(unsigned __int16 *)(v58 + 5216) )
          v88 = ++v60;
        if ( *(unsigned __int16 *)(v58 + 5218) )
          v88 = v60 + 1;
        v78 = 0LL;
        v77 = 4;
        v95 = *(_DWORD *)(v58 + 2536);
        v76 = v12 + 9;
        v75 = 4LL;
        v74 = v82;
        HIDWORD(v73) = 0;
        v72 = v87;
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK, 0LL);
      }
      LODWORD(v73) = *((_DWORD *)v12 + 8);
      LODWORD(v72) = *((_DWORD *)v12 + 7);
      v61 = ((unsigned int (__fastcall *)(__int64 *, _QWORD *, _QWORD, __int64, _WORD *, __int64, _DWORD *, __int64, _QWORD *, int, __int64))v12[6])(
              v12,
              DeferredContext,
              *((unsigned int *)v12 + 6),
              v12[5],
              v72,
              v73,
              v74,
              v75,
              v76,
              v77,
              v78);
      v62 = *((_DWORD *)v12 + 4);
      *((_DWORD *)v12 + 5) = v61;
      *((_DWORD *)v12 + 3) = v62;
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v63 = DeferredContext[8];
        if ( v63 )
        {
          v64 = *(_QWORD *)(v63 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v63 + 880)) & *(_DWORD *)(v63 + 884));
          *(_DWORD *)v64 = 1381133668;
          *(_QWORD *)(v64 + 8) = 0LL;
          *(_QWORD *)(v64 + 16) = v12;
          *(_QWORD *)(v64 + 24) = v61;
        }
      }
      v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
      v9 = 0LL;
      v8 = v65;
      v79 = v65;
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v66 = DeferredContext[8];
        if ( v66 )
        {
          v67 = *(_QWORD *)(v66 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v66 + 880)) & *(_DWORD *)(v66 + 884));
          *(_DWORD *)v67 = 876965220;
          *(_QWORD *)(v67 + 8) = 0LL;
          *(_QWORD *)(v67 + 16) = v12;
          *(_QWORD *)(v67 + 24) = 0LL;
        }
      }
    }
  }
  while ( 1 )
  {
    v36 = v80;
    if ( v80 == (__int64 *)&v80 )
      break;
    v24 = (__int64 *)*v80;
    if ( (__int64 **)v80[1] != &v80 || (__int64 *)v24[1] != v80 )
      __fastfail(3u);
    v80 = (__int64 *)*v80;
    v24[1] = (__int64)&v80;
    v25 = v36 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v26 = DeferredContext[8];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 827485540;
        *(_QWORD *)(v27 + 8) = v9;
        *(_QWORD *)(v27 + 16) = v25;
        *(_QWORD *)(v27 + 24) = v36;
      }
    }
    v28 = *((_DWORD *)v25 + 1);
    if ( v28 == 2 )
    {
      v29 = *((int *)v25 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v30 = DeferredContext[8];
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1112698212;
          *(_QWORD *)(v31 + 8) = v9;
          *(_QWORD *)(v31 + 16) = v25;
          *(_QWORD *)(v31 + 24) = v29;
        }
      }
      if ( *((_DWORD *)v25 + 5) )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v32 = DeferredContext[8];
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 844262756;
            *(_QWORD *)(v33 + 8) = v9;
            *(_QWORD *)(v33 + 16) = v25;
            *(_QWORD *)(v33 + 24) = v9;
          }
        }
        *((_DWORD *)v25 + 1) = 1;
        v34 = (__int64 ***)(v25 + 7);
        v35 = *(__int64 ****)(v6 + 3752);
        *v34 = v7;
        v34[1] = (__int64 **)v35;
        if ( *v35 != v7 )
          __fastfail(3u);
LABEL_36:
        *v35 = (__int64 **)v34;
        *(_QWORD *)(v6 + 3752) = v34;
        continue;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v68 = DeferredContext[8];
        if ( v68 )
        {
          v69 = *(_QWORD *)(v68 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v68 + 880)) & *(_DWORD *)(v68 + 884));
          *(_DWORD *)v69 = 861039972;
          *(_QWORD *)(v69 + 8) = v9;
          *(_QWORD *)(v69 + 16) = v25;
          *(_QWORD *)(v69 + 24) = v9;
        }
      }
      *((_DWORD *)v25 + 1) = v9;
    }
    else if ( v28 == 1 )
    {
      Log((_DWORD)DeferredContext, 0x2000, 1684886068, (_DWORD)v25, v9);
      v35 = *(__int64 ****)(v6 + 3752);
      v34 = (__int64 ***)(v70 + 56);
      *v34 = v7;
      v34[1] = (__int64 **)v35;
      if ( *v35 != v7 )
        __fastfail(3u);
      goto LABEL_36;
    }
  }
  if ( !*(_DWORD *)(v6 + 3736) )
  {
    Log((_DWORD)DeferredContext, 0x2000, 1680948785, 0, v9);
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    goto LABEL_44;
  }
  if ( *v7 == (__int64 *)v7 )
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v50 = DeferredContext[8];
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
        *(_DWORD *)v51 = 1414360420;
        *(_QWORD *)(v51 + 8) = v9;
        *(_QWORD *)(v51 + 16) = v9;
        *(_QWORD *)(v51 + 24) = v9;
      }
    }
    if ( *(_DWORD *)(v6 + 3736) )
      *(_DWORD *)(v6 + 3736) = 2;
  }
  else
  {
    v37 = *(int *)(v6 + 3736);
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v38 = DeferredContext[8];
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 1414807140;
        *(_QWORD *)(v39 + 8) = v9;
        *(_QWORD *)(v39 + 16) = v9;
        *(_QWORD *)(v39 + 24) = v37;
      }
    }
    v40 = KeQueryTimeIncrement();
    KeSetTimer((PKTIMER)(v6 + 3848), (LARGE_INTEGER)(int)(-149999 - v40), (PKDPC)(v6 + 3784));
    v5 = 0;
LABEL_44:
    v8 = v79;
    v9 = 0LL;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v41 = DeferredContext[8];
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
      *(_DWORD *)v42 = 827878756;
      *(_QWORD *)(v42 + 8) = v9;
      *(_QWORD *)(v42 + 16) = v9;
      *(_QWORD *)(v42 + 24) = v9;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
  if ( v5 )
  {
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    v46 = DeferredContext[8];
    if ( !v46 )
      UsbhTrapFatal_Dbg(DeferredContext, 0LL, v43, v44);
    if ( *(_DWORD *)v46 != 541218120 )
      UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8], v43, v44);
    v47 = (_QWORD *)(v46 + 2512);
    if ( (_QWORD *)*v47 == v47 )
      goto LABEL_116;
    v48 = (_QWORD *)*v47;
    v49 = 0LL;
    if ( !*v47 )
      goto LABEL_116;
    while ( v48 != v47 )
    {
      v49 = v48 - 3;
      if ( v48 == (_QWORD *)24 )
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext, v49, v44);
      if ( *(_DWORD *)v49 != 1397515890 )
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext, v49, v44);
      if ( v49[2] == v6 + 3848 )
        break;
      v48 = (_QWORD *)*v48;
      if ( !v48 )
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext, v49, v44);
    }
    if ( !v49 || v48 == v47 )
    {
LABEL_116:
      v71 = *(_DWORD *)(v46 + 2528);
      if ( v71 )
        *(_DWORD *)(v46 + 2528) = v71 - 1;
    }
    else
    {
      v52 = (_QWORD *)*v48;
      v53 = (_QWORD *)v48[1];
      if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v53 != v48 )
        __fastfail(3u);
      *v53 = v52;
      v52[1] = v53;
      ExFreePoolWithTag(v49, 0);
    }
    if ( (_QWORD *)*v47 == v47 && !*(_DWORD *)(v46 + 2528) )
      KeSetEvent((PRKEVENT)(v46 + 2488), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v45);
  }
}
