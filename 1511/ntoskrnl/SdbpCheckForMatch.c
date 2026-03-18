/*
 * XREFs of SdbpCheckForMatch @ 0x140535248
 * Callers:
 *     SdbpCheckKObject @ 0x14053511C (SdbpCheckKObject.c)
 *     SdbpCheckExe @ 0x14067D6B8 (SdbpCheckExe.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbReadWORDTag @ 0x1403B6560 (SdbReadWORDTag.c)
 *     SdbpMatchList @ 0x14053533C (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1405354A8 (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x14054D86C (SdbpGetExeEntryFlags.c)
 */

__int64 __fastcall SdbpCheckForMatch(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  int v10; // r15d
  BOOL v11; // r12d
  unsigned int v12; // ebx
  __int64 result; // rax
  _DWORD *v14; // rdi
  unsigned int FirstTag; // eax
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  v10 = 1;
  v11 = SdbFindFirstTag(a2, a3, 4109) != 0;
  if ( (unsigned int)SdbpMatchOsVersion(a2, a3)
    && (unsigned int)SdbpMatchList((unsigned int)&v16, a1, a2, a3, a4, 0)
    && (v12 = v16) != 0
    && (unsigned int)SdbpGetExeEntryFlags(a2, a3, a6) )
  {
    v14 = a5;
    if ( a5 )
    {
      FirstTag = SdbFindFirstTag(a2, a3, 12289);
      if ( FirstTag )
        *v14 = (unsigned __int16)SdbReadWORDTag(a2, FirstTag, 2u);
      else
        *v14 = 2;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( !*(_DWORD *)(a4 + 80) || v11 )
    v10 = 0;
  result = v12;
  *(_DWORD *)(a4 + 80) = v10;
  return result;
}
