/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C0049CE8
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C0049BD0 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C0221090 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0049B20 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C004AB4C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C004AB64 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E6CB4 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
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
  int v17; // ecx
  __int64 *v18; // r12
  PRKPROCESS *v19; // rcx
  int v20; // edx
  int HmodTableIndex; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  DWORD LowPart; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+48h] [rbp-50h] BYREF
  __int64 v31; // [rsp+50h] [rbp-48h]

  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v23 = 1426LL;
    goto LABEL_34;
  }
  if ( !a5 )
  {
    v23 = 1427LL;
    goto LABEL_34;
  }
  if ( !a3 )
  {
    if ( a1 || (*((_BYTE *)&unk_1C02E2030 + a4 + 1) & 0x24) != 0 )
      goto LABEL_7;
    goto LABEL_44;
  }
  v10 = *((_BYTE *)&unk_1C02E2030 + a4 + 1);
  if ( (v10 & 2) == 0 )
  {
    v23 = 1429LL;
    goto LABEL_34;
  }
  if ( *(_QWORD *)(a3 + 416) != *(_QWORD *)(gptiCurrent + 416LL) )
    goto LABEL_33;
  v11 = *(_QWORD *)(gptiCurrent + 384LL);
  v12 = *(_QWORD *)(a3 + 384);
  if ( v11 == v12 )
    goto LABEL_7;
  if ( !a1 && (v10 & 0x24) == 0 )
  {
LABEL_44:
    v23 = 1428LL;
    goto LABEL_34;
  }
  if ( !gbEnforceUIPI
    && (*(_DWORD *)(v12 + 740) != *(_DWORD *)(v11 + 740) || *(_DWORD *)(v12 + 744) != *(_DWORD *)(v11 + 744))
    && (*(_DWORD *)(a3 + 448) & 0x400000) == 0 )
  {
LABEL_33:
    v23 = 5LL;
    goto LABEL_34;
  }
  if ( ((unsigned __int8)~(v10 >> 4) & ((*(_DWORD *)(a3 + 448) & 0xC) != 0)) != 0 )
  {
    v23 = 1458LL;
LABEL_34:
    UserSetLastError(v23);
    return 0LL;
  }
LABEL_7:
  if ( (*((_BYTE *)&unk_1C02E2030 + a4 + 1) & 4) != 0 )
  {
    v24 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v24 + 832) <= 0x3FFF && *(int *)(v24 + 12) >= 0 )
      {
        UserSetLastError(5LL);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 384LL), 0LL, 4LL);
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
    goto LABEL_33;
  if ( v13 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL) + 32LL) & 4) != 0 )
  {
    v23 = 1459LL;
    goto LABEL_34;
  }
  LOBYTE(v14) = 5;
  v15 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 416LL), v14, 96LL);
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
  v17 = a4 + 1;
  if ( a3 )
  {
    v18 = (__int64 *)(a3 + 8 * (v17 + 99LL));
    *(_DWORD *)(a3 + 608) |= 1 << v17;
    if ( *(_QWORD *)(a3 + 440) )
    {
      v19 = *(PRKPROCESS **)(a3 + 384);
      if ( v19 == *(PRKPROCESS **)(gptiCurrent + 384LL) )
      {
        v20 = 0;
      }
      else
      {
        KeAttachProcess(*v19);
        v20 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 440) + 56LL) = *(_DWORD *)(a3 + 608);
      if ( v20 )
        KeDetachProcess();
    }
    *(_QWORD *)(v16 + 72) = a3;
  }
  else
  {
    v18 = (__int64 *)(*(_QWORD *)(gptiCurrent + 424LL) + 8 * (v17 + 4LL));
    *(_DWORD *)(v16 + 64) |= 1u;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL) |= 1 << v17;
    *(_QWORD *)(v16 + 72) = 0LL;
  }
  *(_DWORD *)(v16 + 64) |= a6 & 2;
  *(_DWORD *)(v16 + 48) = a4;
  *(_QWORD *)(v16 + 56) = a5 - a1;
  *(_QWORD *)(v16 + 40) = *v18;
  *v18 = v16;
  if ( (*((_BYTE *)&unk_1C02E2030 + a4 + 1) & 4) != 0 )
  {
    v30 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v30;
    v31 = v16;
    ++*(_DWORD *)(v16 + 8);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v26, v25) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v16);
      return 0LL;
    }
    v16 = ThreadUnlock1(v26, v25);
    if ( !v16 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v16 + 64) & 1) != 0 && (*((_BYTE *)&unk_1C02E2030 + a4 + 1) & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 448LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (*((_BYTE *)&unk_1C02E2030 + a4 + 1) & 4) != 0 )
    {
      v30 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v30;
      v31 = v16;
      ++*(_DWORD *)(v16 + 8);
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      zzzSetFMouseMoved(LowPart, 0);
      v16 = ThreadUnlock1(v29, v28);
      if ( a4 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 384LL);
    }
  }
  return v16;
}
