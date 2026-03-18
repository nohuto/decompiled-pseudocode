/*
 * XREFs of SdbpCheckForMatch @ 0x140573228
 * Callers:
 *     SdbpCheckKObject @ 0x140572FBC (SdbpCheckKObject.c)
 *     SdbpCheckExe @ 0x1406C1F3C (SdbpCheckExe.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbReadWORDTag @ 0x140506948 (SdbReadWORDTag.c)
 *     SdbpGetExeEntryFlags @ 0x140573320 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchList @ 0x1405737E8 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1405738EC (SdbpMatchOsVersion.c)
 */

__int64 __fastcall SdbpCheckForMatch(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  int v10; // r15d
  BOOL v11; // r12d
  unsigned int v12; // ebx
  _DWORD *v13; // rdi
  unsigned int FirstTag; // eax
  __int64 result; // rax
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  v10 = 1;
  v11 = SdbFindFirstTag(a2, a3, 4109) != 0;
  if ( (unsigned int)SdbpMatchOsVersion(a2, a3)
    && (unsigned int)SdbpMatchList((unsigned int)&v16, a1, a2, a3, a4, 0)
    && (v12 = v16) != 0
    && (unsigned int)SdbpGetExeEntryFlags(a2, a3, a6) )
  {
    v13 = a5;
    if ( a5 )
    {
      FirstTag = SdbFindFirstTag(a2, a3, 12289);
      if ( FirstTag )
        *v13 = (unsigned __int16)SdbReadWORDTag(a2, FirstTag, 2u);
      else
        *v13 = 2;
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
