/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C000B8A0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C000BFF0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00110F8 (VidSchiDecrementDeviceReference.c)
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?VidSchiAddContextToFlipDevice@@YAXPEAU_VIDSCH_CONTEXT@@I@Z @ 0x1C0014440 (-VidSchiAddContextToFlipDevice@@YAXPEAU_VIDSCH_CONTEXT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001EE88 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(struct _VIDSCH_CONTEXT *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r10
  bool v11; // r11
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // bp
  __int64 v18; // rbx
  LARGE_INTEGER v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  ULONGLONG v23; // rdx
  ULONGLONG v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  LARGE_INTEGER v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r10
  ULONGLONG v31; // rdx
  ULONGLONG v32; // r8
  void (__fastcall *v33)(_QWORD); // rax
  __int64 v34; // rcx
  void (__fastcall *v35)(_QWORD); // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rbp
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 *v43; // rax
  ULONGLONG v44[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v45; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+98h] [rbp+10h] BYREF
  ULONGLONG pullResult; // [rsp+A0h] [rbp+18h] BYREF
  union _LARGE_INTEGER v48; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)a1 + 81);
  v4 = *((_QWORD *)a1 + 12);
  v6 = 1;
  v7 = *(_QWORD *)(v3 + 80);
  v8 = *(_QWORD **)(v4 + 24);
  v9 = *(_QWORD *)(v7 + 104);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 24LL);
  if ( !*(_BYTE *)(v9 + 172) && !_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 168), 0, 0) )
  {
    if ( (*(_DWORD *)(v3 + 72) & 4) != 0 && *(_DWORD *)(v3 + 376) == 4 )
    {
      a3 = *(unsigned int *)(v3 + 144);
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 8 * a3 + 2592) + 2328LL) >= *(_DWORD *)(v10 + 2108) )
      {
LABEL_25:
        VidSchiAddContextToFlipDevice(a1, a3);
        VidSchiUpdateContextStatus(a1, 3LL, 12323LL);
        return 3LL;
      }
    }
    if ( !*(_DWORD *)(v3 + 48) && (*(_DWORD *)(v3 + 64) & 8) == 0 )
    {
      v11 = !*(_DWORD *)(v9 + 1132) && !*(_BYTE *)(v10 + 51);
      a3 = *(unsigned int *)(v3 + 448);
      v12 = *(_DWORD *)(v3 + 452);
      if ( (unsigned int)a3 > 0x10 )
      {
        a3 = 0LL;
        if ( v12 )
        {
          while ( (v12 & 1) == 0 || !*(_DWORD *)(*(_QWORD *)(v10 + 8LL * (unsigned int)a3 + 2592) + 2328LL) )
          {
            a3 = (unsigned int)(a3 + 1);
            v12 >>= 1;
            if ( !v12 )
              goto LABEL_21;
          }
          goto LABEL_25;
        }
      }
      else
      {
        v13 = 0;
        if ( (_DWORD)a3 )
        {
          v3 += 456LL;
          while ( 1 )
          {
            if ( (v14 = *(_QWORD *)(*(_QWORD *)v3 + 96LL), !v11)
              || (v15 = *(_DWORD *)v14, (*(_DWORD *)v14 & 0x20000000) != 0) && v15 < 0
              || (v15 & 0x80000) != 0 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v14 + 16) + 8LL) )
                break;
            }
            ++v13;
            v3 += 8LL;
            if ( v13 >= (unsigned int)a3 )
              goto LABEL_21;
          }
          LODWORD(a3) = *(_DWORD *)(v14 + 24);
          goto LABEL_25;
        }
      }
    }
  }
LABEL_21:
  v16 = *(_DWORD *)(v4 + 2952) != -1;
  v45 = 0LL;
  if ( (*((_DWORD *)a1 + 161) & 0xF) != 0 )
  {
LABEL_63:
    v36 = *((_QWORD *)a1 + 12);
    v37 = *(_QWORD *)(v36 + 176);
    if ( (struct _VIDSCH_CONTEXT *)v37 != a1 )
    {
      VidSchiProfilePerformanceTick(
        3LL,
        *(_QWORD *)(v36 + 24),
        *((_QWORD *)a1 + 12),
        v3,
        (__int64)a1,
        0LL,
        0LL,
        *(_QWORD *)(v36 + 176));
      if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 18) == 1 )
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 13) + 24LL));
      *(_QWORD *)(v36 + 176) = a1;
      if ( v37 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(v37 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 72), 0xFFFFFFFF) == 1 )
        {
          v39 = *(_QWORD *)(v37 + 8);
          v40 = *(_QWORD **)(v37 + 16);
          if ( *(_QWORD *)(v39 + 8) != v37 + 8 || *v40 != v37 + 8 )
            __fastfail(3u);
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
          v41 = *(_QWORD *)(v37 + 24);
          v42 = *(_QWORD **)(v37 + 32);
          if ( *(_QWORD *)(v41 + 8) != v37 + 24 || *v42 != v37 + 24 )
            __fastfail(3u);
          *v42 = v41;
          *(_QWORD *)(v41 + 8) = v42;
          while ( 1 )
          {
            v43 = VidSchiInterlockedRemoveHeadListIfExist(
                    (KSPIN_LOCK *)(v38 + 1832),
                    (__int64 **)(v37 + 712),
                    (_DWORD *)(v37 + 728));
            if ( !v43 )
              break;
            ExFreePoolWithTag(v43 - 1, 0);
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v37);
          operator delete[](*(void **)(v37 + 952));
          VidSchiDecrementDeviceReference(*(PVOID *)(v37 + 104));
          ExFreePoolWithTag((PVOID)v37, 0);
        }
      }
    }
    return v6;
  }
  if ( (unsigned int)VidSchiCheckPreemptionPolicy(a1, &v45, a3, v3) )
  {
    v6 = 4;
LABEL_46:
    if ( v16 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 2952) != -1 )
        {
          v33 = (void (__fastcall *)(_QWORD))v8[310];
          if ( v33 )
            v33(v8[315]);
        }
        *(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 2956) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 12481LL);
        return 3LL;
      }
    }
    goto LABEL_63;
  }
  v18 = v45;
  if ( v45 != -1 )
  {
    v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( RtlULongLongMult(v19.QuadPart, 0x989680uLL, &pullResult) >= 0 )
    {
      v23 = pullResult % v21;
      v24 = pullResult / v21;
    }
    else
    {
      v20 = v22 / v21;
      v23 = 10000000 * (v22 % v21) % v21;
      v24 = 10000000 * (v22 / v21) + 10000000 * (v22 % v21) / v21;
    }
    *(_QWORD *)(v4 + 120) = v24 + v18;
    *(_QWORD *)(v4 + 128) = *(_QWORD *)(v4 + 88);
    v25 = WdLogNewEntry5_WdEvent(v20, v23);
    *(_QWORD *)(v25 + 24) = *(unsigned __int16 *)(v4 + 4);
    v26 = *(_QWORD *)(v4 + 128);
LABEL_42:
    *(_QWORD *)(v25 + 32) = v26;
    WdLogEvent5_WdEvent(v25);
    goto LABEL_43;
  }
  if ( *(_DWORD *)(v4 + 2708) > 1u && !*(_DWORD *)(v4 + 2728) )
  {
    v27 = KeQueryPerformanceCounter(&v48);
    if ( RtlULongLongMult(v27.QuadPart, 0x989680uLL, v44) >= 0 )
    {
      v31 = v44[0] % v29;
      v32 = v44[0] / v29;
    }
    else
    {
      v28 = v30 / v29;
      v31 = 10000000 * (v30 % v29) % v29;
      v32 = 10000000 * (v30 / v29) + 10000000 * (v30 % v29) / v29;
    }
    *(_QWORD *)(v4 + 120) = v32 + *((_QWORD *)a1 + 61);
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 88);
    v25 = WdLogNewEntry5_WdEvent(v28, v31);
    *(_QWORD *)(v25 + 24) = *(unsigned __int16 *)(v4 + 4);
    v26 = *(_QWORD *)(v4 + 136);
    goto LABEL_42;
  }
LABEL_43:
  if ( *(int *)(v4 + 2704) > 0 && *(_DWORD *)(v4 + 2720) < 0xEu && !*(_DWORD *)(v4 + 2728) )
    goto LABEL_46;
  v34 = v8[45] & ~(1LL << *(_WORD *)(v4 + 4));
  v8[45] = v34;
  if ( (v34 & v8[44]) != 0 )
    return 3LL;
  if ( v16 && (*(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v4 + 2952) != -1 )
    {
      v35 = (void (__fastcall *)(_QWORD))v8[310];
      if ( v35 )
        v35(v8[315]);
    }
    *(_DWORD *)(*((_QWORD *)a1 + 81) + 76LL) |= 0x10u;
  }
  return 2LL;
}
