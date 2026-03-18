/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00A4854
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C00A4740 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C021B050 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00A742C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00A7444 (GetHmodTableIndex.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01DD8E4 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  unsigned __int8 v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r12
  ACCESS_MASK v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  int HmodTableIndex; // eax
  char v18; // cl
  __int64 *v19; // r12
  PRKPROCESS *v20; // rcx
  int v21; // edx
  __int64 v22; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+48h] [rbp-50h] BYREF
  __int64 v32; // [rsp+50h] [rbp-48h]

  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v24 = 1426LL;
    goto LABEL_68;
  }
  if ( !a5 )
  {
    v24 = 1427LL;
LABEL_68:
    UserSetLastError(v24);
    return 0LL;
  }
  if ( !a3 )
  {
    if ( a1 || (byte_1C02E8F38[a4 + 1] & 0x24) != 0 )
      goto LABEL_10;
LABEL_41:
    v24 = 1428LL;
    goto LABEL_68;
  }
  v9 = byte_1C02E8F38[a4 + 1];
  if ( (v9 & 2) == 0 )
  {
    v24 = 1429LL;
    goto LABEL_68;
  }
  if ( *(_QWORD *)(a3 + 408) != *(_QWORD *)(gptiCurrent + 408LL) )
  {
LABEL_43:
    v24 = 5LL;
    goto LABEL_68;
  }
  v10 = *(_QWORD *)(gptiCurrent + 376LL);
  v11 = *(_QWORD *)(a3 + 376);
  if ( v10 == v11 )
    goto LABEL_10;
  if ( !a1 && (v9 & 0x24) == 0 )
    goto LABEL_41;
  if ( !gbEnforceUIPI
    && (*(_DWORD *)(v11 + 732) != *(_DWORD *)(v10 + 732) || *(_DWORD *)(v11 + 736) != *(_DWORD *)(v10 + 736))
    && (*(_DWORD *)(a3 + 440) & 0x400000) == 0 )
  {
    goto LABEL_43;
  }
  if ( ((unsigned __int8)~(v9 >> 4) & ((*(_DWORD *)(a3 + 440) & 0xC) != 0)) != 0 )
  {
    v24 = 1458LL;
    goto LABEL_68;
  }
LABEL_10:
  v12 = a4 + 1;
  if ( (byte_1C02E8F38[v12] & 4) != 0 )
  {
    v25 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v25 + 824) <= 0x3FFF && *(int *)(v25 + 12) >= 0 )
      {
        UserSetLastError(5LL);
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
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), v13) )
    goto LABEL_43;
  if ( v13 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL) + 32LL) & 4) != 0 )
  {
    v24 = 1459LL;
    goto LABEL_68;
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
      UserSetLastError(126LL);
      HMFreeObject(v16);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
  }
  v18 = a4 + 1;
  if ( a3 )
  {
    v19 = (__int64 *)(a3 + 8 * (v12 + 99));
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
    v19 = (__int64 *)(*(_QWORD *)(gptiCurrent + 416LL) + 32LL + 8 * v12);
    *(_DWORD *)(v16 + 64) |= 1u;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL) |= 1 << v18;
    *(_QWORD *)(v16 + 72) = 0LL;
  }
  *(_DWORD *)(v16 + 64) |= a6 & 2;
  *(_DWORD *)(v16 + 48) = a4;
  *(_QWORD *)(v16 + 56) = a5 - a1;
  *(_QWORD *)(v16 + 40) = *v19;
  *v19 = v16;
  v22 = a4 + 1;
  if ( (byte_1C02E8F38[v22] & 4) != 0 )
  {
    v31 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v31;
    v32 = v16;
    ++*(_DWORD *)(v16 + 8);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v27, v26) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v16);
      return 0LL;
    }
    v16 = ThreadUnlock1(v27, v26);
    if ( !v16 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v16 + 64) & 1) != 0 && (byte_1C02E8F38[v22] & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (byte_1C02E8F38[v22] & 4) != 0 )
    {
      v31 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v31;
      v32 = v16;
      ++*(_DWORD *)(v16 + 8);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
      v16 = ThreadUnlock1(v30, v29);
      if ( a4 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
    }
  }
  return v16;
}
