/*
 * XREFs of SdbQueryDataEx @ 0x14067D0B8
 * Callers:
 *     PiIsDriverBlocked @ 0x1403B6AD0 (PiIsDriverBlocked.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbTagRefToTagID @ 0x14054F2BC (SdbTagRefToTagID.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
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
  AslLogCallPrintf(1LL);
  return 87LL;
}
