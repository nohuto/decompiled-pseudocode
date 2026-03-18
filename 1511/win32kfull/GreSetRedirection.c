/*
 * XREFs of GreSetRedirection @ 0x1C007F85C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetRedirection(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheck(a1, a2);
  v6 = v4;
  if ( v4 )
  {
    if ( v2 )
    {
      *(_DWORD *)(v4 + 112) |= 0x800u;
      *(_DWORD *)(v4 + 116) |= 0x80u;
    }
    else
    {
      *(_DWORD *)(v4 + 116) &= ~0x80u;
      *(_DWORD *)(v4 + 112) &= ~0x800u;
    }
    v3 = 1;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return v3;
}
