/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x1400C39E4
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1400C398C (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

void __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // r8
  int v9; // r9d
  int v10; // eax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r8
  int v13; // r10d
  int v14; // eax
  unsigned __int64 v15; // rax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 392);
  if ( v3 )
    v6 = (unsigned __int64 *)(v3 + 376);
  else
    v6 = (unsigned __int64 *)(a1 + 22768);
  v7 = *v6;
  v8 = 0;
  if ( !*v6 )
    goto LABEL_4;
  v9 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v10 = v9 - *(_DWORD *)(v7 + 28);
    if ( v9 != *(_DWORD *)(v7 + 28) )
      goto LABEL_13;
    v11 = *(_WORD *)(a2 + 114);
    if ( !v11 )
      break;
    v12 = *(_WORD *)(v7 + 26);
    _BitScanReverse((unsigned int *)&v13, v11);
    v14 = 0;
    if ( v12 )
      _BitScanReverse((unsigned int *)&v14, v12);
    v10 = v14 - v13;
LABEL_13:
    if ( v10 >= 0 )
      goto LABEL_16;
LABEL_14:
    v15 = *(_QWORD *)v7;
    if ( !*(_QWORD *)v7 )
    {
      v8 = 0;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v15;
  }
  if ( v9 )
  {
    v10 = 1;
    goto LABEL_13;
  }
  if ( *(_QWORD *)a2 <= *(_QWORD *)(v7 - 88) )
    goto LABEL_14;
LABEL_16:
  v15 = *(_QWORD *)(v7 + 8);
  if ( v15 )
    goto LABEL_19;
  v8 = 1;
LABEL_4:
  RtlRbInsertNodeEx(v6, v7, v8, a2 + 88);
  if ( a3 )
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
}
