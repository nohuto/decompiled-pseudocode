/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x1406C50E8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140513EC0 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpGetIndex @ 0x140513E5C (SdbpGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x140514574 (AslStringUpcaseToMultiByteN.c)
 *     AslStringPatternMatchA @ 0x140535A8C (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x140539800 (SdbpKeyToAnsiString.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rdx
  __int64 Index; // r15
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int FirstTag; // eax
  WCHAR *StringTagPtr; // rax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+38h] [rbp-C8h]
  char v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v16, 0, 0x104uLL);
  v4 = *(const WCHAR **)(a2 + 32);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *(_DWORD *)a2, &v12);
    if ( Index )
    {
      LODWORD(v7) = *(_DWORD *)(a2 + 16);
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v12 )
          break;
        memmove(&v13, (const void *)(Index + 12 * v7), 8uLL);
        if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
        {
          SdbpKeyToAnsiString(v13, (__int64)&v14 + 1);
          LOBYTE(v14) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(v13, (__int64)&v14);
          LOBYTE(v15) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchA((char *)&v14, v16) )
        {
          v8 = *(_DWORD *)(Index + 12 * v7 + 8);
          FirstTag = SdbFindFirstTag(a1, v8, *(_WORD *)(a2 + 12));
          if ( FirstTag )
          {
            StringTagPtr = (WCHAR *)SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *(WCHAR **)(a2 + 32)) )
              {
                *(_DWORD *)(a2 + 16) = v7;
                return v8;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
