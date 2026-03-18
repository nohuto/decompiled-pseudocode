/*
 * XREFs of SdbpCheckExe @ 0x140702524
 * Callers:
 *     SdbpSearchDB @ 0x1405AADAC (SdbpSearchDB.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpCheckForMatch @ 0x1405AB464 (SdbpCheckForMatch.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpCheckExe(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        int *a7,
        void *a8)
{
  unsigned int v11; // esi
  unsigned int FirstTag; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int DWORDTag; // eax
  int v18; // ebx
  __int64 v19; // rdx
  int v20; // eax
  int v22; // [rsp+30h] [rbp-18h] BYREF
  int v23[5]; // [rsp+34h] [rbp-14h] BYREF

  v22 = 2;
  v11 = 0;
  v23[0] = 0;
  FirstTag = SdbFindFirstTag(a2, a3, 24582);
  if ( FirstTag )
    SdbGetStringTagPtr(a2, FirstTag);
  v14 = SdbFindFirstTag(a2, a3, 16418);
  if ( !v14 || (v15 = SdbReadDWORDTag(a2, v14, 0xFFFFFFFF), v15 == -1) || (v15 & *(_DWORD *)(a1 + 548)) != 0 )
  {
    v16 = SdbFindFirstTag(a2, a3, 16415);
    if ( !v16
      || (DWORDTag = SdbReadDWORDTag(a2, v16, 0xFFFFFFFF), DWORDTag == -1)
      || (DWORDTag & *(_DWORD *)(a1 + 552)) != 0 )
    {
      if ( (unsigned int)SdbpCheckForMatch(a1, a2, a3, a5, &v22, (__int64)v23) )
      {
        v18 = v22;
        if ( (a6 != 1 || v22 == 2) && (a6 != 2 || v22 != 2) )
        {
          if ( v22 == 1 )
          {
            memset(a8, 0, 0x80uLL);
            *a4 = 0;
          }
          v19 = (unsigned int)*a4;
          if ( (unsigned int)v19 < 0x10 )
          {
            v20 = v23[0];
            *((_DWORD *)a8 + 2 * v19) = a3;
            *((_DWORD *)a8 + 2 * v19 + 1) = v20;
            *a4 = v19 + 1;
            v11 = 1;
            if ( a7 )
              *a7 = v18;
          }
          else
          {
            AslLogCallPrintf(1LL);
            ++*a4;
            return 0;
          }
        }
      }
    }
  }
  return v11;
}
