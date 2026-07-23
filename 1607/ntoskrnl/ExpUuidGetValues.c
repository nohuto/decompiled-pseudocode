/*
 * XREFs of ExpUuidGetValues @ 0x140580F6C
 * Callers:
 *     ExUuidCreate @ 0x14051A810 (ExUuidCreate.c)
 * Callees:
 *     ExpAllocateUuids @ 0x1404C8288 (ExpAllocateUuids.c)
 */

__int64 __fastcall ExpUuidGetValues(__int64 a1)
{
  int v2; // eax
  __int32 v3; // r8d
  __int64 v4; // rax
  char v5; // ch
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int32 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v2 = ExpAllocateUuids((__int64)&v9, &v8, &v7);
  if ( v2 == -1073741267 )
    return 3221226029LL;
  if ( v2 < 0 )
    return 3221225495LL;
  v3 = v8;
  v4 = v9 + 5748192000000000LL;
  v5 = BYTE1(v7);
  *(_BYTE *)(a1 + 13) = v7;
  v9 = v4;
  *(_BYTE *)(a1 + 12) = v5 & 0x3F | 0x80;
  *(_QWORD *)a1 = v4 + (unsigned int)(v3 - 1);
  result = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 8), v3);
  return result;
}
