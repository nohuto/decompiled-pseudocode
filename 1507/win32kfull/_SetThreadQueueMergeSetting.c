/*
 * XREFs of _SetThreadQueueMergeSetting @ 0x1C02237A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D1534 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall SetThreadQueueMergeSetting(int a1, int a2)
{
  char v2; // di
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi

  v2 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = 87;
  }
  else
  {
    v4 = PtiFromThreadId(a1);
    v6 = v4;
    if ( !v4 || (*(_DWORD *)(v4 + 1080) & 0x40000) != 0 )
    {
      v3 = 1444;
      goto LABEL_17;
    }
    v7 = *(_QWORD *)(v4 + 384);
    if ( v7 == PsGetCurrentProcessWin32Process(v5) )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v7) )
      {
        if ( (v2 & 1) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v6 + 392) + 336LL) != 1
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v6) )
          {
            v3 = 170;
            goto LABEL_17;
          }
          *(_DWORD *)(v6 + 448) |= 0xC0u;
        }
        else
        {
          *(_DWORD *)(v6 + 448) &= 0xFFFFFF3F;
        }
        return 1LL;
      }
      v3 = 50;
    }
    else
    {
      v3 = 5;
    }
  }
LABEL_17:
  UserSetLastError(v3);
  return 0LL;
}
