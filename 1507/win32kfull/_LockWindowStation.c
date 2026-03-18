/*
 * XREFs of _LockWindowStation @ 0x1C0100254
 * Callers:
 *     NtUserLockWindowStation @ 0x1C0100200 (NtUserLockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall LockWindowStation(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // rax
  int v4; // ecx

  v2 = 0;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    *(_DWORD *)(a1 + 32) |= 1u;
    v3 = *(_QWORD **)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 32);
    if ( v3 )
    {
      while ( v3 == grpdeskLogon || !*(v3 - 5) )
      {
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_6;
      }
      v2 = 1;
    }
LABEL_6:
    if ( (v4 & 8) != 0 )
      *(_DWORD *)(a1 + 32) = v4 | 2;
    return 2 - (unsigned int)(v2 != 0);
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
