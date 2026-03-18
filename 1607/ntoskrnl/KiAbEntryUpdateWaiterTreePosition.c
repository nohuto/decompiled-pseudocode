/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x14006C414
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, __int64 a2)
{
  char v3; // r8
  __int64 result; // rax
  char **v5; // rdi
  char *v6; // rdx
  char v7; // al
  __int64 v8; // r8
  char *v9; // rcx

  v3 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 195);
  result = (unsigned __int8)v3;
  if ( v3 > 15 )
    result = 15LL;
  if ( *(_BYTE *)(a1 + 48) == (_BYTE)result )
    return result;
  v5 = (char **)(a2 + 64);
  *(_BYTE *)(a1 + 48) = result;
  RtlRbRemoveNode((unsigned __int64 *)(a2 + 64), (unsigned __int64 *)a1);
  v6 = *v5;
  v7 = 0;
  v8 = *(char *)(a1 + 48);
  if ( !*v5 )
    goto LABEL_8;
  while ( v6[48] < (char)v8 )
  {
    v9 = *(char **)v6;
    if ( !*(_QWORD *)v6 )
      goto LABEL_8;
LABEL_10:
    v6 = v9;
  }
  v9 = (char *)*((_QWORD *)v6 + 1);
  if ( v9 )
    goto LABEL_10;
  v7 = 1;
LABEL_8:
  LOBYTE(v8) = v7;
  return RtlRbInsertNodeEx(v5, v6, v8, a1);
}
