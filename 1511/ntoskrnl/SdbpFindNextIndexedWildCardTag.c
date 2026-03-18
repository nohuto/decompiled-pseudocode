/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x140534F48
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1403B749C (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1403B7744 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbpGetIndex @ 0x1403B7618 (SdbpGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x1403B7C1C (AslStringUpcaseToMultiByteN.c)
 *     AslStringPatternMatchA @ 0x1405011C0 (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x1405062FC (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchW @ 0x140535084 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x140535F9C (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, unsigned int *a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rdx
  __int64 Index; // r15
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+38h] [rbp-C8h]
  char v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v16, 0, 0x104uLL);
  v4 = (const WCHAR *)*((_QWORD *)a2 + 4);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *a2, &v12);
    if ( Index )
    {
      LODWORD(v7) = a2[4];
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v12 )
          break;
        memmove(&v13, (const void *)(Index + 12 * v7), 8uLL);
        if ( (a2[5] & 2) != 0 )
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
          FirstTag = SdbFindFirstTag(a1, v8, *((_WORD *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *((_QWORD *)a2 + 4)) )
              {
                a2[4] = v7;
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
