/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x140099610
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1400995B8 (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x1400996DC (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // di
  __int64 **v6; // rcx
  __int64 *v7; // rdx
  __int64 result; // rax
  int v9; // r9d
  int v10; // eax
  __int64 *v11; // rax
  unsigned __int16 v12; // ax
  int v13; // r10d
  int v14; // eax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 408);
  v4 = a3;
  if ( v3 )
    v6 = (__int64 **)(v3 + 392);
  else
    v6 = (__int64 **)(a1 + 22768);
  v7 = *v6;
  LOBYTE(a3) = 0;
  if ( !*v6 )
    goto LABEL_4;
  v9 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v10 = v9 - *((_DWORD *)v7 + 7);
    if ( v9 != *((_DWORD *)v7 + 7) )
      goto LABEL_9;
    v12 = *(_WORD *)(a2 + 114);
    if ( !v12 )
      break;
    a3 = *((unsigned __int16 *)v7 + 13);
    _BitScanReverse((unsigned int *)&v13, v12);
    v14 = 0;
    if ( (_WORD)a3 )
      _BitScanReverse((unsigned int *)&v14, (unsigned __int16)a3);
    v10 = v14 - v13;
LABEL_9:
    if ( v10 >= 0 )
      goto LABEL_13;
LABEL_10:
    v11 = (__int64 *)*v7;
    if ( !*v7 )
    {
      LOBYTE(a3) = 0;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v11;
  }
  if ( v9 )
  {
    v10 = 1;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a2 <= (unsigned __int64)*(v7 - 11) )
    goto LABEL_10;
LABEL_13:
  v11 = (__int64 *)v7[1];
  if ( v11 )
    goto LABEL_19;
  LOBYTE(a3) = 1;
LABEL_4:
  result = RtlRbInsertNodeEx(v6, v7, a3, a2 + 88);
  if ( v4 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
