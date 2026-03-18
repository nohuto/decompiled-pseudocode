/*
 * XREFs of SdbpGetExeEntryFlags @ 0x1405C4FAC
 * Callers:
 *     SdbpCheckForMatch @ 0x1405AB464 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SdbReadBinaryTag @ 0x1405745EC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetEntryFlags @ 0x1405C507C (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // eax
  int v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+3Ch] [rbp-3Ch]
  int v17; // [rsp+44h] [rbp-34h]

  v4 = 0;
  v16 = 0LL;
  v15 = 0;
  v17 = 0;
  v5 = a2;
  v14 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 36868);
  if ( FirstTag && (unsigned int)SdbReadBinaryTag(a1, FirstTag, (__int64)&v15, 0x10u) )
  {
    EntryFlags = SdbGetEntryFlags(&v15, &v14);
    v9 = EntryFlags != 0 ? v14 : 0;
    v10 = SdbFindFirstTag(a1, v5, 28685);
    if ( v10 )
    {
      v9 |= 0x1000u;
      v13 = SdbFindFirstTag(a1, v10, 16400);
      if ( v13 )
      {
        if ( (unsigned int)SdbReadDWORDTag(a1, v13, 0) == 2 )
          v9 |= 0x2000u;
      }
    }
    v11 = SdbFindFirstTag(a1, v5, 16434);
    if ( v11 )
      v9 |= (unsigned int)SdbReadDWORDTag(a1, v11, 0) << 16;
    *a3 = v9;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v4;
}
