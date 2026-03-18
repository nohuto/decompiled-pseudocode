/*
 * XREFs of xxxSetClassIcon @ 0x1C0224654
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01DEDA8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     DestroyClassSmIcon @ 0x1C008FD30 (DestroyClassSmIcon.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     xxxCreateClassSmIcon @ 0x1C00AB5D8 (xxxCreateClassSmIcon.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0224590 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF

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
      xxxCreateClassSmIcon(a2, v13, v14, v15);
    if ( v8 )
    {
      if ( *(int *)(a2 + 80) <= 1 )
      {
        xxxSetClassIconEnum(a1, a2);
      }
      else
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL);
        v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v19;
        v19[1] = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        xxxInternalEnumWindow(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 96LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          a2,
          2u);
        ThreadUnlock1(v18, v17);
      }
    }
    if ( v9 )
    {
      LOBYTE(v13) = 3;
      return (__int64 *)HMValidateHandleNoRip(v9, v13, v14, v15);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
