/*
 * XREFs of SeAssignWorldSecurityDescriptor @ 0x14068D50C
 * Callers:
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall SeAssignWorldSecurityDescriptor(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  PSID v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // eax
  bool v9; // cf
  char *v10; // rbp

  if ( !a3 )
    return 3221225506LL;
  v6 = SeWorldSid;
  v7 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
  v8 = 2 * v7 + 20;
  v9 = *a2 < v8;
  *a2 = v8;
  if ( v9 )
    return 3221225507LL;
  v10 = (char *)(a1 + 20);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)a1 = 1;
  if ( (*a3 & 1) != 0 )
  {
    memmove((void *)(a1 + 20), v6, v7);
    *(_DWORD *)(a1 + 4) = (_DWORD)v10 - a1;
    v10 += v7;
  }
  if ( (*a3 & 2) != 0 )
  {
    memmove(v10, v6, v7);
    *(_DWORD *)(a1 + 8) = (_DWORD)v10 - a1;
  }
  if ( (*a3 & 4) != 0 )
    *(_WORD *)(a1 + 2) |= 4u;
  if ( (*a3 & 8) != 0 )
    *(_WORD *)(a1 + 2) |= 0x10u;
  *(_WORD *)(a1 + 2) |= 0x8000u;
  return 0LL;
}
