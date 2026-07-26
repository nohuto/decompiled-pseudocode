/*
 * XREFs of ndisQueryWolPatternList @ 0x1C00CB008
 * Callers:
 *     ndisOidPrePMWOLPatternList @ 0x1C00CA530 (ndisOidPrePMWOLPatternList.c)
 *     ndisOidPreWakeUpPatternList @ 0x1C00CA850 (ndisOidPreWakeUpPatternList.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     ndisGetWoLPatternSize @ 0x1C009A2B0 (ndisGetWoLPatternSize.c)
 */

__int64 __fastcall ndisQueryWolPatternList(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 *v4; // r14
  unsigned int v5; // r9d
  int v6; // r15d
  __int64 *i; // r10
  int WoLPatternSize; // eax
  __int64 *v9; // r10
  int v10; // r9d
  _DWORD *v11; // r13
  size_t v12; // rbx
  const void *v13; // rcx

  v2 = 0;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  for ( i = a1; i; v5 = ((WoLPatternSize + 7) & 0xFFFFFFF8) + v10 )
  {
    WoLPatternSize = ndisGetWoLPatternSize((_DWORD *)i + 12);
    i = (__int64 *)*v9;
  }
  if ( *(_DWORD *)(a2 + 48) >= v5 )
  {
    v11 = *(_DWORD **)(a2 + 40);
    while ( v4 )
    {
      v12 = (unsigned int)ndisGetWoLPatternSize((_DWORD *)v4 + 12);
      memmove(v11, v13, v12);
      v6 += (v12 + 7) & 0xFFFFFFF8;
      v11[38] = *v4 != 0 ? v6 : 0;
      v4 = (__int64 *)*v4;
      v11 = (_DWORD *)((char *)v11 + ((v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_DWORD *)(a2 + 52) = v6;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = v5;
    return (unsigned int)-1073676268;
  }
  return v2;
}
