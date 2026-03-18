/*
 * XREFs of xxxSetClassIcon @ 0x1C0223AFC
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8530 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     xxxInternalEnumWindow @ 0x1C0090834 (xxxInternalEnumWindow.c)
 *     xxxCreateClassSmIcon @ 0x1C00F631C (xxxCreateClassSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C011E1FC (DestroyClassSmIcon.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0223A90 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 *result; // rax
  BOOL v8; // r14d
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( a4 == -14 )
    result = *(__int64 **)(a2 + 112);
  else
    result = *(__int64 **)(a2 + 152);
  if ( result != a3 )
  {
    v8 = 1;
    v9 = 0LL;
    if ( result )
      v9 = *result;
    if ( a4 == -14 )
    {
      v10 = (_QWORD *)(a2 + 152);
      if ( *(_QWORD *)(a2 + 152) )
        v8 = DestroyClassSmIcon(a2) != 0;
      v11 = a2 + 112;
    }
    else
    {
      v12 = DestroyClassSmIcon(a2);
      v10 = (_QWORD *)(a2 + 152);
      v11 = a2 + 152;
      if ( v12 )
        v9 = 0LL;
    }
    HMAssignmentLock(v11, a3);
    if ( *(_QWORD *)(a2 + 112) && !*v10 )
      xxxCreateClassSmIcon(a2);
    if ( v8 )
    {
      if ( *(int *)(a2 + 80) <= 1 )
      {
        xxxSetClassIconEnum(a1, a2);
      }
      else
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL);
        v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v16;
        v16[1] = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        xxxInternalEnumWindow(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          a2,
          2);
        ThreadUnlock1(v15, v14);
      }
    }
    if ( v9 )
      return (__int64 *)HMValidateHandleNoRip(v9, 3);
    else
      return 0LL;
  }
  return result;
}
