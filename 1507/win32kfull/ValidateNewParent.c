/*
 * XREFs of ValidateNewParent @ 0x1C0061FF8
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ValidateParentDepth @ 0x1C0061F68 (ValidateParentDepth.c)
 *     IsParentBandValid @ 0x1C006208C (IsParentBandValid.c)
 *     ProtectedContentAccessCheck @ 0x1C0062114 (ProtectedContentAccessCheck.c)
 */

__int64 __fastcall ValidateNewParent(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 i; // rax
  int v8; // ecx

  if ( *(char *)(a1 + 43) >= 0 && *(char *)(a2 + 43) >= 0 )
  {
    LOBYTE(v4) = ValidateParentDepth((_QWORD *)a1, a2);
    if ( v4 )
    {
      if ( !(unsigned int)ProtectedContentAccessCheck(a1) )
      {
        v8 = 5;
        goto LABEL_16;
      }
      if ( *(_QWORD *)(a2 + 24) == *(_QWORD *)(a1 + 24) && (unsigned int)IsParentBandValid(a1, a2) )
      {
        v5 = a2;
        while ( a1 != v5 )
        {
          v5 = *(_QWORD *)(v5 + 88);
          if ( !v5 )
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
  }
LABEL_15:
  v8 = 87;
LABEL_16:
  UserSetLastError(v8);
  return 0LL;
}
