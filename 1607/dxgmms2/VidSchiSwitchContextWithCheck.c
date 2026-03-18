/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C000A340
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006D00 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C000F050 (VidSchiDecrementDeviceReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00214E0 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  bool v18; // r10
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rdx
  KSPIN_LOCK *v31; // rdi
  __int64 *v32; // rax
  LARGE_INTEGER v33; // rcx
  LARGE_INTEGER v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  LARGE_INTEGER v38; // rcx
  LARGE_INTEGER v39; // r8
  LARGE_INTEGER v40; // r9
  unsigned __int128 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int128 v43; // rtt
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r8
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  void (__fastcall *v51)(_QWORD); // rax
  void (__fastcall *v52)(_QWORD); // rax
  _QWORD *v53; // rax
  __int64 *v54; // rax
  __int64 v55; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v56; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v58; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = 1;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v7 + 2800) || (*(_BYTE *)(v7 + 2828) & 1) != 0 )
    goto LABEL_8;
  v8 = *(_QWORD *)(a1 + 648);
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
  if ( !*(_BYTE *)(v10 + 164)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 160), 0, 0)
    && !*(_DWORD *)(v11 + 2800)
    && !*(_DWORD *)(v8 + 48)
    && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    v18 = !*(_DWORD *)(v10 + 1128) && !*(_BYTE *)(v11 + 51);
    v19 = *(_DWORD *)(v8 + 456);
    a4 = *(unsigned int *)(v8 + 460);
    if ( v19 > 0x10 )
    {
      v46 = 0LL;
      if ( (_DWORD)a4 )
      {
        while ( (a4 & 1) == 0 || !*(_DWORD *)(*(_QWORD *)(v11 + 8 * v46 + 2968) + 2264LL) )
        {
          v46 = (unsigned int)(v46 + 1);
          a4 = (unsigned int)a4 >> 1;
          if ( !(_DWORD)a4 )
            goto LABEL_7;
        }
        goto LABEL_57;
      }
    }
    else
    {
      v11 = 0LL;
      if ( v19 )
      {
        while ( 1 )
        {
          if ( (a4 = *(_QWORD *)(*(_QWORD *)(v8 + 8LL * (unsigned int)v11 + 464) + 96LL), !v18)
            || (v20 = *(_DWORD *)a4, (*(_DWORD *)a4 & 0x20000000) != 0) && v20 < 0
            || (v20 & 0x80000) != 0
            || (v20 & 0x100) != 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(a4 + 16) + 8LL) )
              break;
          }
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 456) )
            goto LABEL_7;
        }
        v46 = *(unsigned int *)(a4 + 12);
LABEL_57:
        v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 8 * v46 + 2968);
        if ( *(_QWORD *)(v47 + 16) != *(_QWORD *)(a1 + 104) && !*(_QWORD *)(a1 + 48) )
        {
          v48 = v47 + 46896;
          v49 = (_QWORD *)(a1 + 40);
          v50 = *(_QWORD **)(v48 + 8);
          if ( *v50 != v48 )
            __fastfail(3u);
          *v49 = v48;
          *(_QWORD *)(a1 + 48) = v50;
          *v50 = v49;
          *(_QWORD *)(v48 + 8) = v49;
        }
        VidSchiUpdateContextStatus(a1, 3LL, 13412LL);
        return 3LL;
      }
    }
  }
LABEL_7:
  v12 = *(_DWORD *)(v4 + 2788) != -1;
  v55 = 0LL;
  if ( (*(_DWORD *)(a1 + 644) & 0xF) != 0
    || (*(_DWORD *)(a1 + 112) & 0x10) == 0
    || (v16 = *(_QWORD *)(a1 + 104), *(_BYTE *)(v16 + 164))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 160), 0, 0) )
  {
LABEL_8:
    v13 = *(_QWORD *)(a1 + 96);
    v14 = *(_QWORD *)(v13 + 216);
    if ( v14 != a1 )
    {
      VidSchiProfilePerformanceTick(
        3LL,
        *(_QWORD *)(v13 + 24),
        *(_QWORD *)(a1 + 96),
        a4,
        a1,
        0LL,
        0LL,
        *(_QWORD *)(v13 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 897) )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v24, v25);
          v53[3] = 281LL;
          v53[4] = 3840LL;
          v53[5] = a1;
          v53[6] = 0LL;
          v53[7] = 0LL;
          WdLogEvent5_WdCriticalError(v53);
          JUMPOUT(0x1C0019D6ELL);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v13 + 216) = a1;
      if ( v14 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v14 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 72), 0xFFFFFFFF) == 1 )
        {
          v27 = *(_QWORD *)(v14 + 8);
          v28 = *(_QWORD **)(v14 + 16);
          if ( *(_QWORD *)(v27 + 8) != v14 + 8 || *v28 != v14 + 8 )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          v29 = *(_QWORD *)(v14 + 24);
          v30 = *(_QWORD **)(v14 + 32);
          if ( *(_QWORD *)(v29 + 8) != v14 + 24 || *v30 != v14 + 24 )
            __fastfail(3u);
          *v30 = v29;
          v31 = (KSPIN_LOCK *)(v26 + 1864);
          *(_QWORD *)(v29 + 8) = v30;
          while ( 1 )
          {
            v32 = VidSchiInterlockedRemoveHeadListIfExist(v31, (__int64 **)(v14 + 712), (_DWORD *)(v14 + 728));
            if ( !v32 )
              break;
            ExFreePoolWithTag(v32 - 1, 0);
          }
          if ( (*(_DWORD *)(v14 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v54 = VidSchiInterlockedRemoveHeadListIfExist(v31, (__int64 **)(v14 + 736), (_DWORD *)(v14 + 752));
              if ( !v54 )
                break;
              ExFreePoolWithTag(v54 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v14);
          operator delete[](*(void **)(v14 + 984));
          VidSchiDecrementDeviceReference(*(PVOID *)(v14 + 104));
          ExFreePoolWithTag((PVOID)v14, 0);
        }
      }
    }
    return v6;
  }
  if ( VidSchiCheckPreemptionPolicy(a1, &v55, v11, a4) )
  {
    v6 = 4;
    goto LABEL_19;
  }
  v17 = v55;
  if ( v55 == -1 )
  {
    if ( *(_DWORD *)(v4 + 2748) > 1u && !*(_DWORD *)(v4 + 2768) )
    {
      v33 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( is_mul_ok(v33.QuadPart, 0x989680uLL) )
      {
        v35 = (unsigned __int64)v33.QuadPart * (unsigned __int128)0x989680uLL
            % (unsigned __int64)PerformanceFrequency.QuadPart;
        v36 = (unsigned __int64)v33.QuadPart
            * (unsigned __int128)0x989680uLL
            / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v34.QuadPart = v33.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart;
        v35 = 10000000 * (v33.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            % PerformanceFrequency.QuadPart;
        v36 = 10000000 * (v33.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
            + 10000000
            * (v33.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart;
      }
      *(_QWORD *)(v4 + 128) = v36 + *(_QWORD *)(a1 + 488);
      *(_QWORD *)(v4 + 144) = *(_QWORD *)(v4 + 96);
      v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
              (LARGE_INTEGER)v33.QuadPart,
              v35,
              (LARGE_INTEGER)v34.QuadPart,
              v36);
      *(_QWORD *)(v37 + 24) = *(unsigned __int16 *)(v4 + 4);
      *(_QWORD *)(v37 + 32) = *(_QWORD *)(v4 + 144);
      WdLogEvent5_WdEvent(v37);
    }
  }
  else
  {
    v38 = KeQueryPerformanceCounter(&v56);
    v41 = (unsigned __int64)v38.QuadPart * (unsigned __int128)0x989680uLL;
    v58 = *((_QWORD *)&v41 + 1);
    if ( is_mul_ok(v38.QuadPart, 0x989680uLL) )
    {
      v43 = v41;
      v42 = v41 % (unsigned __int64)v56.QuadPart;
      v44 = v43 / (unsigned __int64)v56.QuadPart;
    }
    else
    {
      v39.QuadPart = v38.QuadPart / (unsigned __int64)v56.QuadPart;
      v42 = 10000000 * (v38.QuadPart % (unsigned __int64)v56.QuadPart) % v56.QuadPart;
      v44 = 10000000 * (v38.QuadPart / (unsigned __int64)v56.QuadPart)
          + 10000000 * (v38.QuadPart % (unsigned __int64)v56.QuadPart) / v56.QuadPart;
    }
    *(_QWORD *)(v4 + 128) = v44 + v17;
    *(_QWORD *)(v4 + 136) = *(_QWORD *)(v4 + 96);
    v45 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
            v44,
            v42,
            (LARGE_INTEGER)v39.QuadPart,
            (LARGE_INTEGER)v40.QuadPart);
    *(_QWORD *)(v45 + 24) = *(unsigned __int16 *)(v4 + 4);
    *(_QWORD *)(v45 + 32) = *(_QWORD *)(v4 + 136);
    WdLogEvent5_WdEvent(v45);
  }
  if ( *(int *)(v4 + 2744) > 0 && *(_DWORD *)(v4 + 2760) < 0xEu && !*(_DWORD *)(v4 + 2768) )
  {
LABEL_19:
    if ( v12 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v4 + 2788) != -1 )
        {
          v51 = *(void (__fastcall **)(_QWORD))(v7 + 2856);
          if ( v51 )
            v51(*(_QWORD *)(v7 + 2896));
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) |= 0x10u;
      }
      if ( !*(_BYTE *)(v4 + 2792) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 13573LL);
        return 3LL;
      }
    }
    goto LABEL_8;
  }
  v21 = *(_QWORD *)(v7 + 392) & ~(1LL << *(_WORD *)(v4 + 4));
  *(_QWORD *)(v7 + 392) = v21;
  if ( (v21 & *(_QWORD *)(v7 + 384)) != 0 )
    return 3LL;
  if ( v12 && (*(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v4 + 2788) != -1 )
    {
      v52 = *(void (__fastcall **)(_QWORD))(v7 + 2856);
      if ( v52 )
        v52(*(_QWORD *)(v7 + 2896));
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 648) + 80LL) |= 0x10u;
  }
  return 2LL;
}
