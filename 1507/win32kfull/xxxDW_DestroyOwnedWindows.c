/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C0087DB8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 704LL);
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v5 = *(_QWORD *)(result + 16);
    if ( v5 )
    {
      v6 = gptiCurrent;
      v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v11;
      v11[1] = v5;
      ++*(_DWORD *)(v5 + 8);
LABEL_4:
      for ( i = *(_QWORD *)(v5 + 96); i; i = *(_QWORD *)(i + 72) )
      {
        if ( *(_QWORD *)(i + 104) == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 448LL) & 1) != 0 || i != v3 )
          {
            if ( (*(_WORD *)(i + 66) & 0x3FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              HMAssignmentUnlock(i + 104);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v10 = (void *)ReferenceDwmApiPort(v6, a2, v8, v9);
                DwmAsyncOwnerChange(v10, *(_QWORD *)i, 0LL);
              }
            }
            goto LABEL_4;
          }
          HMAssignmentUnlock(i + 104);
        }
      }
      return ThreadUnlock1(v6, a2);
    }
  }
  return result;
}
