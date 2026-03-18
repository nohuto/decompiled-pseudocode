/*
 * XREFs of ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C007E33C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C003CD0C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C003D218 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C003D7C0 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = Win32AllocPool();
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 16;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 2068) = 0;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    *(_QWORD *)(v4 + 2088) = v5;
    *(_BYTE *)(v4 + 2108) = 0;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v4);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    *a1 = (struct CLegacyTokenBuffer *)v4;
  else
    return (unsigned int)-1073741801;
  return v2;
}
