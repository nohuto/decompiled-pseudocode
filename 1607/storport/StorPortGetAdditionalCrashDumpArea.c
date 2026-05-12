/*
 * XREFs of StorPortGetAdditionalCrashDumpArea @ 0x1C000EECC
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x1C00587CC (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall StorPortGetAdditionalCrashDumpArea(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v3 = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = 0LL;
  v7 = 0LL;
  v11 = 0LL;
  v8 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(_DWORD *)(a2 + 184) )
    goto LABEL_6;
  v9 = *(_QWORD *)(a1 + 4368);
  if ( !v9 )
  {
    if ( *(_DWORD *)(a1 + 720) == 3 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
        v9 = *(_QWORD *)(a1 + 4400);
      else
        LODWORD(v9) = -1;
    }
    else
    {
      LODWORD(v9) = -1;
    }
  }
  result = StorAllocateContiguousMemory(
             a1,
             a3,
             *(_QWORD *)(a1 + 4376),
             v9,
             *(_QWORD *)(a1 + 4384),
             *(_DWORD *)(a1 + 4360),
             0x80000000,
             (__int64)&v11);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v8 = v13;
    v7 = v12;
    v6 = v11;
LABEL_6:
    *(_QWORD *)(a2 + 176) = v7;
    result = v3;
    *(_QWORD *)(a2 + 168) = v6;
    *(_DWORD *)(a2 + 184) = v8;
  }
  return result;
}
