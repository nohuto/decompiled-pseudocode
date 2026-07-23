/*
 * XREFs of SdbpCheckExe @ 0x1406C2074
 * Callers:
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpCheckForMatch @ 0x140573768 (SdbpCheckForMatch.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckExe(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        int *a7,
        void *a8)
{
  unsigned int v11; // ebp
  unsigned int FirstTag; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int DWORDTag; // eax
  int v19; // ebx
  __int64 v20; // rdx
  int v21; // eax
  int v23; // [rsp+30h] [rbp-28h] BYREF
  int v24[9]; // [rsp+34h] [rbp-24h] BYREF

  v23 = 2;
  v11 = 0;
  v24[0] = 0;
  FirstTag = SdbFindFirstTag(a2, a3, 16418);
  if ( !FirstTag || (v14 = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFF), v14 == -1) || (v14 & a1[137]) != 0 )
  {
    v15 = SdbFindFirstTag(a2, a3, 16403);
    if ( !v15 || (v16 = SdbReadDWORDTag(a2, v15, 3u), v16 == 3) || (v16 & a1[139]) != 0 )
    {
      v17 = SdbFindFirstTag(a2, a3, 16415);
      if ( !v17 || (DWORDTag = SdbReadDWORDTag(a2, v17, 0xFFFFFFFF), DWORDTag == -1) || (DWORDTag & a1[138]) != 0 )
      {
        if ( (unsigned int)SdbpCheckForMatch((int)a1, a2, a3, a5, &v23, (__int64)v24) )
        {
          v19 = v23;
          if ( (a6 != 1 || v23 == 2) && (a6 != 2 || v23 != 2) )
          {
            if ( v23 == 1 )
            {
              memset(a8, 0, 0x80uLL);
              *a4 = 0;
            }
            v20 = (unsigned int)*a4;
            if ( (unsigned int)v20 < 0x10 )
            {
              v21 = v24[0];
              v11 = 1;
              *((_DWORD *)a8 + 2 * v20) = a3;
              *((_DWORD *)a8 + 2 * v20 + 1) = v21;
              *a4 = v20 + 1;
              if ( a7 )
                *a7 = v19;
            }
            else
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpCheckExe",
                2709,
                (unsigned int)"The number of matching EXEs exceeded the max allowed");
              ++*a4;
            }
          }
        }
      }
    }
  }
  return v11;
}
