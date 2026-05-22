/*
 * XREFs of ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0
 * Callers:
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180059560 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z @ 0x18005C0D0 (-DeliverTouchpadGestureMessage@PTPProcessor@@AEAAJPEAUInputInfo@@_N1@Z.c)
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005FE00 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x18005E280 (-FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z.c)
 *     ?GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x18005E32C (-GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z.c)
 *     ?DeliverInputToTarget@PointerProcessor@@AEAAJPEAUISystemInputRouter@@PEAUIInputDisplay@@PEAUInputInfo@@PEAPEAUPointer@@KPEAUIInputTarget@@@Z @ 0x18005E460 (-DeliverInputToTarget@PointerProcessor@@AEAAJPEAUISystemInputRouter@@PEAUIInputDisplay@@PEAUInpu.c)
 *     ?UpdatePointerIds@PointerProcessor@@AEAAJW4InputType@@PEAPEAUPointer@@K@Z @ 0x18005E530 (-UpdatePointerIds@PointerProcessor@@AEAAJW4InputType@@PEAPEAUPointer@@K@Z.c)
 *     ?AreInRangeOrInContactPointersPresent@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEA_N1@Z @ 0x18005E7FC (-AreInRangeOrInContactPointersPresent@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEA_N1@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PointerProcessor::OnInputReport(PointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // r14
  char v5; // si
  unsigned int v6; // edi
  struct ISystemInputRouter *v7; // r12
  __int64 v8; // rdx
  PointerProcessor *v9; // rcx
  int PointersFromInput; // eax
  int updated; // eax
  int v12; // eax
  bool v13; // al
  int IndexOfPrimaryPointer; // eax
  PointerProcessor *v15; // rcx
  int v16; // r9d
  unsigned int v17; // r9d
  struct Pointer *v18; // rcx
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // esi
  PointerProcessor *v23; // rcx
  struct Pointer **v24; // rdx
  __int64 v25; // r9
  struct Pointer *v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  int *v29; // r8
  struct Pointer **v30; // r9
  __int64 v31; // r10
  int v32; // r11d
  struct Pointer *v33; // rcx
  PointerProcessor *v34; // rsi
  __int64 v35; // rcx
  int v36; // eax
  bool v37; // cl
  struct Pointer **v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  bool v42; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v43[2]; // [rsp+48h] [rbp-C0h] BYREF
  bool v44; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h]
  struct Pointer *v47[10]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v48[40]; // [rsp+B0h] [rbp-58h] BYREF

  v46 = -2LL;
  LODWORD(v4) = 0;
  v43[0] = 0;
  v45 = 0;
  v5 = *((_BYTE *)this + 69);
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 153, 87);
    return v6;
  }
  v7 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
  v8 = *((_QWORD *)this + 9);
  v9 = (struct InputInfo *)((char *)a2 + 544);
  if ( a2 == (struct InputInfo *)-544LL )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 190, 87);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 164, 87);
    }
    goto LABEL_92;
  }
  *(_DWORD *)v9 = *(_DWORD *)(v8 + 84);
  PointersFromInput = GetPointersFromInput(a2, v8, v47, v43);
  v6 = PointersFromInput;
  if ( PointersFromInput < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 173, PointersFromInput);
    LODWORD(v4) = v43[0];
    goto LABEL_92;
  }
  v4 = v43[0];
  if ( v43[0] )
  {
    updated = PointerProcessor::UpdatePointerIds(this, *(unsigned int *)a2, v47, v43[0]);
    v6 = updated;
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 180, updated);
      goto LABEL_92;
    }
    if ( *((_BYTE *)this + 69) )
    {
      v42 = 0;
      v44 = 0;
      v12 = PointerProcessor::AreInRangeOrInContactPointersPresent(v9, v47, v4, &v42, &v44);
      v6 = v12;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 196, v12);
        goto LABEL_92;
      }
      v13 = v44;
      *((_BYTE *)this + 69) = v44;
      if ( !v13 && v42 )
      {
LABEL_27:
        *(_QWORD *)v43 = 0LL;
        if ( *((_QWORD *)this + 7) )
        {
          IndexOfPrimaryPointer = PointerProcessor::GetIndexOfPrimaryPointer(this, v47, v4, &v45);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_90;
            v16 = 239;
            goto LABEL_31;
          }
          v17 = v45;
        }
        else
        {
          IndexOfPrimaryPointer = PointerProcessor::FindNewPrimaryPointer(v9, v47, v4, &v45);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_90;
            v16 = 226;
            goto LABEL_31;
          }
          v17 = v45;
          *((_DWORD *)this + 16) = *(_DWORD *)v47[v45];
        }
        v18 = v47[v17];
        if ( !*((_DWORD *)v18 + 1) )
        {
          if ( (int)PointerProcessor::FindNewPrimaryPointer(v18, v47, v4, &v45) < 0 )
            *((_BYTE *)this + 68) = 0;
          v6 = 0;
          v17 = v45;
        }
        v15 = v47[v17];
        v19 = *((_DWORD *)v15 + 1);
        if ( (v19 & 2) != 0 )
        {
          if ( *((_BYTE *)this + 68) )
          {
            v20 = *((_QWORD *)this + 7);
            if ( v20 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*((_QWORD *)this + 7));
            v15 = *(PointerProcessor **)v43;
            if ( *(_QWORD *)v43 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v43 + 16LL))(*(_QWORD *)v43);
            *(_QWORD *)v43 = v20;
LABEL_57:
            v21 = *((_QWORD *)this + 7);
            if ( v21 != *(_QWORD *)v43 )
            {
              if ( v21 )
              {
                v22 = 0;
                memset(v48, 0, sizeof(v48));
                if ( (_DWORD)v4 )
                {
                  v23 = (PointerProcessor *)v48;
                  v24 = v47;
                  v25 = v4;
                  do
                  {
                    v26 = *v24;
                    v27 = *((_DWORD *)*v24 + 1);
                    *(_DWORD *)v23 = v27;
                    *((_DWORD *)v26 + 1) = 0;
                    if ( (v27 & 4) != 0 )
                      *((_DWORD *)v26 + 1) = 4;
                    ++v24;
                    v23 = (PointerProcessor *)((char *)v23 + 4);
                    --v25;
                  }
                  while ( v25 );
                }
                PointerProcessor::DeliverInputToTarget(
                  v23,
                  v7,
                  *((struct IInputDisplay **)this + 5),
                  a2,
                  v47,
                  v4,
                  *((struct IInputTarget **)this + 7));
                v6 = 0;
                *((_DWORD *)a2 + 12) = 0;
                if ( (_DWORD)v4 )
                {
                  v30 = v47;
                  v29 = (int *)v48;
                  v31 = v4;
                  do
                  {
                    v32 = *v29;
                    if ( (*v29 & 1) != 0 )
                    {
                      v33 = *v30;
                      v28 = 6LL * v22;
                      *((_DWORD *)a2 + 2 * v28 + 13) = *(_DWORD *)*v30;
                      *((_DWORD *)a2 + 2 * v28 + 16) = *((_DWORD *)v33 + 3);
                      *((_DWORD *)a2 + 2 * v28 + 17) = *((_DWORD *)v33 + 4);
                      *((_DWORD *)a2 + 2 * v28 + 14) = v32;
                      ++*((_DWORD *)a2 + 12);
                      ++v22;
                    }
                    ++v29;
                    ++v30;
                    --v31;
                  }
                  while ( v31 );
                }
                if ( !*((_DWORD *)a2 + 12) )
                {
                  if ( *(_QWORD *)v43 )
                    (*(void (__fastcall **)(_QWORD, __int64, int *, struct Pointer **))(**(_QWORD **)v43 + 16LL))(
                      *(_QWORD *)v43,
                      v28,
                      v29,
                      v30);
                  *(_QWORD *)v43 = 0LL;
                  *((_BYTE *)this + 68) = 0;
                }
              }
              if ( *((_DWORD *)a2 + 164) )
              {
                IndexOfPrimaryPointer = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
                v6 = IndexOfPrimaryPointer;
                if ( IndexOfPrimaryPointer < 0 )
                {
                  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                  {
                    v16 = 376;
                    goto LABEL_31;
                  }
LABEL_90:
                  v9 = *(PointerProcessor **)v43;
                  *(_QWORD *)v43 = 0LL;
                  if ( v9 )
                    (*(void (__fastcall **)(PointerProcessor *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_92:
                  if ( (v6 & 0x80000000) == 0 )
                    return v6;
                  goto LABEL_93;
                }
              }
              v34 = *(PointerProcessor **)v43;
              if ( *(_QWORD *)v43 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v43 + 8LL))(*(_QWORD *)v43);
              v15 = (PointerProcessor *)*((_QWORD *)this + 7);
              if ( v15 )
                (*(void (__fastcall **)(PointerProcessor *))(*(_QWORD *)v15 + 16LL))(v15);
              *((_QWORD *)this + 7) = v34;
            }
            if ( !*((_QWORD *)this + 7)
              || (IndexOfPrimaryPointer = PointerProcessor::DeliverInputToTarget(
                                            v15,
                                            v7,
                                            *((struct IInputDisplay **)this + 5),
                                            a2,
                                            v47,
                                            v4,
                                            *((struct IInputTarget **)this + 7)),
                  v6 = IndexOfPrimaryPointer,
                  IndexOfPrimaryPointer >= 0) )
            {
              if ( *((_BYTE *)a2 + 697) )
              {
                v35 = *((_QWORD *)this + 7);
                if ( v35 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                *((_QWORD *)this + 7) = 0LL;
                *((_BYTE *)this + 68) = 0;
              }
              goto LABEL_90;
            }
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v16 = 390;
              goto LABEL_31;
            }
            goto LABEL_90;
          }
          IndexOfPrimaryPointer = (*(__int64 (__fastcall **)(struct ISystemInputRouter *, _QWORD, struct InputInfo *))(*(_QWORD *)v7 + 48LL))(
                                    v7,
                                    *((_QWORD *)this + 5),
                                    a2);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer >= 0 )
          {
            *((_BYTE *)this + 68) = 1;
            goto LABEL_57;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_90;
          v16 = 278;
        }
        else
        {
          if ( (v19 & 1) == 0 )
            goto LABEL_57;
          IndexOfPrimaryPointer = (*(__int64 (__fastcall **)(struct ISystemInputRouter *, _QWORD, struct InputInfo *))(*(_QWORD *)v7 + 48LL))(
                                    v7,
                                    *((_QWORD *)this + 5),
                                    a2);
          v6 = IndexOfPrimaryPointer;
          if ( IndexOfPrimaryPointer >= 0 )
          {
            *((_BYTE *)this + 68) = 0;
            goto LABEL_57;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_90;
          v16 = 294;
        }
LABEL_31:
        Template_qqq((__int64)v15, &MinInput_Warning_CheckResult, 0, v16, IndexOfPrimaryPointer);
        goto LABEL_90;
      }
      v5 = 1;
    }
    if ( v5 )
      goto LABEL_92;
    goto LABEL_27;
  }
  v6 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 0, 177, 87);
LABEL_93:
  if ( v7 && (_DWORD)v4 )
  {
    v42 = 0;
    v36 = PointerProcessor::AreInRangeOrInContactPointersPresent(v9, v47, v4, 0LL, &v42);
    v37 = v42;
    if ( v36 < 0 )
      v37 = 1;
    *((_BYTE *)this + 69) = v37;
    v38 = v47;
    v39 = (unsigned int)v4;
    do
    {
      *((_DWORD *)*v38++ + 1) &= 4u;
      --v39;
    }
    while ( v39 );
    PointerProcessor::DeliverInputToTarget(
      (PointerProcessor *)v38,
      v7,
      *((struct IInputDisplay **)this + 5),
      a2,
      v47,
      v4,
      *((struct IInputTarget **)this + 7));
    v40 = *((_QWORD *)this + 7);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    *((_QWORD *)this + 7) = 0LL;
    *((_BYTE *)this + 68) = 0;
    return 0;
  }
  return v6;
}
