/*
 * XREFs of RaidUnitSubmitRequest @ 0x1C0001750
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C0003360 (IsUntaggedRequest.c)
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 */

__int64 __fastcall RaidUnitSubmitRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // al
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // r9
  unsigned int v10; // r9d

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 8);
  *(_BYTE *)(v4 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  v6 = *(_BYTE *)(v5 + 2);
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    v7 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 12);
    v8 = v6;
  }
  if ( (qword_1C0044010 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | ((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  v9 = 0LL;
  if ( (v7 & 0x80000) != 0 )
    v9 = 4LL;
  if ( (v7 & 0x10) != 0 )
    v9 = (unsigned int)v9 | 2;
  if ( (unsigned int)IsUntaggedRequest(v7, v8, v5, v9) )
    v10 |= 1u;
  RaidStartIoPacket(a1, a2, v10);
  return 259LL;
}
