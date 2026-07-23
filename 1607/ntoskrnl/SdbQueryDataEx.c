/*
 * XREFs of SdbQueryDataEx @ 0x1406C1A74
 * Callers:
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 * Callees:
 *     SdbTagRefToTagID @ 0x14057F580 (SdbTagRefToTagID.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbQueryDataEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 a7)
{
  int v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+74h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  *(_QWORD *)v8 = 0LL;
  v9 = 0;
  LODWORD(a7) = 0;
  if ( (unsigned int)SdbTagRefToTagID(a1, a2, v8, &v9) )
    return SdbQueryDataExTagID(v8[0], v9, a5, a6, (__int64)&a7);
  AslLogCallPrintf(1, (unsigned int)"SdbQueryDataEx", 5053, (unsigned int)"Failed to convert tagref 0x%x to tagid");
  return 87LL;
}
