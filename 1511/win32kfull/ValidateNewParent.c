/*
 * XREFs of ValidateNewParent @ 0x1C004FA4C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 * Callees:
 *     IsParentBandValid @ 0x1C004FAE0 (IsParentBandValid.c)
 *     ProtectedContentAccessCheck @ 0x1C004FB48 (ProtectedContentAccessCheck.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ValidateParentDepth @ 0x1C0056948 (ValidateParentDepth.c)
 */

__int64 __fastcall ValidateNewParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 i; // rax
  __int64 v7; // rcx

  if ( *(char *)(a1 + 43) >= 0 && *(char *)(a2 + 43) >= 0 && (unsigned int)ValidateParentDepth(a1, a2) )
  {
    if ( !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v7 = 5LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(a2 + 24) == *(_QWORD *)(a1 + 24) && (unsigned int)IsParentBandValid(a1, a2) )
    {
      v4 = a2;
      while ( a1 != v4 )
      {
        v4 = *(_QWORD *)(v4 + 88);
        if ( !v4 )
        {
          for ( i = *(_QWORD *)(a2 + 104); i; i = *(_QWORD *)(i + 104) )
          {
            if ( a1 == i )
              goto LABEL_15;
          }
          return 1LL;
        }
      }
    }
  }
LABEL_15:
  v7 = 87LL;
LABEL_16:
  UserSetLastError(v7);
  return 0LL;
}
