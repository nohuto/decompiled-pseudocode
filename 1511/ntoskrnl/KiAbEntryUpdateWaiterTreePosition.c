/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140035614
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

void __fastcall KiAbEntryUpdateWaiterTreePosition(unsigned __int64 a1, __int64 a2)
{
  char v3; // al
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  bool v6; // al
  unsigned __int64 v7; // rcx

  v3 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 195);
  if ( v3 > 15 )
    v3 = 15;
  if ( *(_BYTE *)(a1 + 48) == v3 )
    return;
  v4 = (unsigned __int64 *)(a2 + 64);
  *(_BYTE *)(a1 + 48) = v3;
  RtlRbRemoveNode((unsigned __int64 *)(a2 + 64), (unsigned __int64 *)a1);
  v5 = *v4;
  v6 = 0;
  if ( !*v4 )
    goto LABEL_8;
  while ( *(_BYTE *)(v5 + 48) < *(_BYTE *)(a1 + 48) )
  {
    v7 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_8;
LABEL_10:
    v5 = v7;
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( v7 )
    goto LABEL_10;
  v6 = 1;
LABEL_8:
  RtlRbInsertNodeEx(v4, v5, v6, a1);
}
