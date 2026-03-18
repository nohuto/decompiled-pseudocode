/*
 * XREFs of HMChangeOwnerThread @ 0x1C0077980
 * Callers:
 *     MarkThreadsObjects @ 0x1C0041E20 (MarkThreadsObjects.c)
 * Callees:
 *     IsFVisCountableSupported_0 @ 0x1C00028D0 (IsFVisCountableSupported_0.c)
 *     FVisCountable_0 @ 0x1C00028D8 (FVisCountable_0.c)
 *     IsGetClassPtrSupported_0 @ 0x1C00028E0 (IsGetClassPtrSupported_0.c)
 *     GetClassPtr_0 @ 0x1C00028E8 (GetClassPtr_0.c)
 *     IsDereferenceClassSupported_0 @ 0x1C00028F0 (IsDereferenceClassSupported_0.c)
 *     DereferenceClass_0 @ 0x1C00028F8 (DereferenceClass_0.c)
 *     IsReferenceClassSupported_0 @ 0x1C0002900 (IsReferenceClassSupported_0.c)
 *     ReferenceClass_0 @ 0x1C0002908 (ReferenceClass_0.c)
 *     LockObjectAssignment @ 0x1C0042100 (LockObjectAssignment.c)
 */

LONG_PTR __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r9
  LONG_PTR result; // rax
  __int64 v7; // rcx
  _QWORD *ClassPtr_0; // rsi

  v3 = *(_QWORD *)(a1 + 16);
  v5 = qword_1C0102D48 + dword_1C0102D50 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 376LL) + 68LL);
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  result = *(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(*(_QWORD *)(result + 376) + 68LL);
  if ( *(_BYTE *)(v5 + 16) == 1 )
  {
    ++*(_DWORD *)(a2 + 772);
    --*(_DWORD *)(v3 + 772);
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 && (int)IsFVisCountableSupported_0() >= 0 && (unsigned int)FVisCountable_0() )
    {
      ++*(_DWORD *)(a2 + 776);
      --*(_DWORD *)(v3 + 776);
    }
    result = *(_QWORD *)(v3 + 376);
    if ( *(_QWORD *)(a2 + 376) != result )
    {
      if ( (int)IsGetClassPtrSupported_0() < 0 )
        ClassPtr_0 = 0LL;
      else
        ClassPtr_0 = (_QWORD *)GetClassPtr_0();
      if ( !ClassPtr_0 )
      {
        if ( !*(_QWORD *)(a1 + 24) )
          PsGetCurrentProcessWin32Process(v7);
        if ( (int)IsGetClassPtrSupported_0() < 0 )
          ClassPtr_0 = 0LL;
        else
          ClassPtr_0 = (_QWORD *)GetClassPtr_0();
      }
      if ( (int)IsDereferenceClassSupported_0() >= 0 )
        DereferenceClass_0();
      *(_QWORD *)(a1 + 152) = *ClassPtr_0;
      result = IsReferenceClassSupported_0();
      if ( (int)result >= 0 )
      {
        result = ReferenceClass_0();
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 152);
          ++*(_DWORD *)(result + 80);
        }
      }
    }
  }
  else if ( *(_BYTE *)(v5 + 16) == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 408));
  }
  return result;
}
