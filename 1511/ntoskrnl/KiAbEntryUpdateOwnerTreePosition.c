/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140031E44 (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v5; // rdx
  char v6; // al
  __int64 v7; // r8
  char *v8; // rcx

  result = KiAbOwnerComputeCpuPriorityKey();
  if ( *(_BYTE *)(a1 + 48) == (_BYTE)result )
    return result;
  *(_BYTE *)(a1 + 48) = result;
  RtlRbRemoveNode(a2 + 48, a1);
  v5 = *(char **)(a2 + 48);
  v6 = 0;
  v7 = *(char *)(a1 + 48);
  if ( !v5 )
    goto LABEL_3;
  while ( v5[48] > (char)v7 )
  {
    v8 = *(char **)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_3;
LABEL_8:
    v5 = v8;
  }
  v8 = (char *)*((_QWORD *)v5 + 1);
  if ( v8 )
    goto LABEL_8;
  v6 = 1;
LABEL_3:
  LOBYTE(v7) = v6;
  return RtlRbInsertNodeEx(a2 + 48, v5, v7, a1);
}
