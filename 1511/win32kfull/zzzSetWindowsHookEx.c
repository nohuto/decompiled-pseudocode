/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00823B4
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C00822A0 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C02210E0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00821F0 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C00848A8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00848C0 (GetHmodTableIndex.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E7124 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  __int64 v12; // r8
  ACCESS_MASK v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  int HmodTableIndex; // eax
  int v18; // ecx
  __int64 *v19; // r12
  PRKPROCESS *v20; // rcx
  int v21; // edx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+48h] [rbp-50h] BYREF
  __int64 v33; // [rsp+50h] [rbp-48h]

  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v23 = 1426;
    goto LABEL_33;
  }
  if ( !a5 )
  {
    v23 = 1427;
    goto LABEL_33;
  }
  if ( !a3 )
  {
    if ( a1 || (*((_BYTE *)&unk_1C02E1BF0 + a4 + 1) & 0x24) != 0 )
      goto LABEL_10;
    goto LABEL_43;
  }
  v10 = *((_BYTE *)&unk_1C02E1BF0 + a4 + 1);
  if ( (v10 & 2) == 0 )
  {
    v23 = 1429;
    goto LABEL_33;
  }
  if ( *(_QWORD *)(a3 + 408) != *(_QWORD *)(gptiCurrent + 408LL) )
    goto LABEL_32;
  v11 = *(_QWORD *)(gptiCurrent + 376LL);
  v12 = *(_QWORD *)(a3 + 376);
  if ( v11 == v12 )
    goto LABEL_10;
  if ( !a1 && (v10 & 0x24) == 0 )
  {
LABEL_43:
    v23 = 1428;
    goto LABEL_33;
  }
  if ( !gbEnforceUIPI
    && (*(_DWORD *)(v12 + 740) != *(_DWORD *)(v11 + 740) || *(_DWORD *)(v12 + 744) != *(_DWORD *)(v11 + 744))
    && (*(_DWORD *)(a3 + 440) & 0x400000) == 0 )
  {
LABEL_32:
    v23 = 5;
LABEL_33:
    UserSetLastError(v23);
    return 0LL;
  }
  if ( ((unsigned __int8)~(v10 >> 4) & ((*(_DWORD *)(a3 + 440) & 0xC) != 0)) != 0 )
  {
    v23 = 1458;
    goto LABEL_33;
  }
LABEL_10:
  if ( (*((_BYTE *)&unk_1C02E1BF0 + a4 + 1) & 4) != 0 )
  {
    v24 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v24 + 832) <= 0x3FFF && *(int *)(v24 + 12) >= 0 )
      {
        UserSetLastError(5);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 4LL);
        return 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( a4 == 1 )
      v13 = 32;
    else
      v13 = 8;
  }
  else
  {
    v13 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 768LL), v13) )
    goto LABEL_32;
  if ( v13 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL) + 32LL) & 4) != 0 )
  {
    v23 = 1459;
    goto LABEL_33;
  }
  LOBYTE(v14) = 5;
  v15 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 408LL), v14);
  v16 = v15;
  if ( !v15 )
    return 0LL;
  *(_DWORD *)(v15 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v16 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      HMFreeObject(v16);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
  }
  v18 = a4 + 1;
  if ( a3 )
  {
    v19 = (__int64 *)(a3 + 8 * (v18 + 98LL));
    *(_DWORD *)(a3 + 600) |= 1 << v18;
    if ( *(_QWORD *)(a3 + 432) )
    {
      v20 = *(PRKPROCESS **)(a3 + 376);
      if ( v20 == *(PRKPROCESS **)(gptiCurrent + 376LL) )
      {
        v21 = 0;
      }
      else
      {
        KeAttachProcess(*v20);
        v21 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 432) + 56LL) = *(_DWORD *)(a3 + 600);
      if ( v21 )
        KeDetachProcess();
    }
    *(_QWORD *)(v16 + 72) = a3;
  }
  else
  {
    v19 = (__int64 *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * (v18 + 4LL));
    *(_DWORD *)(v16 + 64) |= 1u;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL) |= 1 << v18;
    *(_QWORD *)(v16 + 72) = 0LL;
  }
  *(_DWORD *)(v16 + 64) |= a6 & 2;
  *(_DWORD *)(v16 + 48) = a4;
  *(_QWORD *)(v16 + 56) = a5 - a1;
  *(_QWORD *)(v16 + 40) = *v19;
  *v19 = v16;
  if ( (*((_BYTE *)&unk_1C02E1BF0 + a4 + 1) & 4) != 0 )
  {
    v32 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v32;
    v33 = v16;
    ++*(_DWORD *)(v16 + 8);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v26, v25) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v16, v27, v28);
      return 0LL;
    }
    v16 = ThreadUnlock1(v26, v25);
    if ( !v16 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v16 + 64) & 1) != 0 && (*((_BYTE *)&unk_1C02E1BF0 + a4 + 1) & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (*((_BYTE *)&unk_1C02E1BF0 + a4 + 1) & 4) != 0 )
    {
      v32 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v32;
      v33 = v16;
      ++*(_DWORD *)(v16 + 8);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
      v16 = ThreadUnlock1(v31, v30);
      if ( a4 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
    }
  }
  return v16;
}
