/*
 * XREFs of _SetThreadQueueMergeSetting @ 0x1C021DCF0
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01CAF50 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall SetThreadQueueMergeSetting(int a1, int a2)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi

  v2 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = 87LL;
  }
  else
  {
    v4 = PtiFromThreadId(a1);
    v7 = v4;
    if ( !v4 || (*(_DWORD *)(v4 + 1096) & 0x40000) != 0 )
    {
      v3 = 1444LL;
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(v4 + 376);
    if ( v8 == PsGetCurrentProcessWin32Process(v6, v5) )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v8) )
      {
        if ( (v2 & 1) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 384) + 344LL) != 1
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v7) )
          {
            v3 = 170LL;
            goto LABEL_17;
          }
          *(_DWORD *)(v7 + 440) |= 0xC0u;
        }
        else
        {
          *(_DWORD *)(v7 + 440) &= 0xFFFFFF3F;
        }
        return 1LL;
      }
      v3 = 50LL;
    }
    else
    {
      v3 = 5LL;
    }
  }
LABEL_17:
  UserSetLastError(v3);
  return 0LL;
}
