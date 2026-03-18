/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x14006C06C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14006C4AC (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiAbEntryUpdateOwnerTreePosition(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v5; // rdx
  char v6; // al
  __int64 v7; // r8
  char *v8; // rcx

  result = KiAbOwnerComputeCpuPriorityKey(a1);
  if ( *(_BYTE *)(a1 + 48) == (_BYTE)result )
    return result;
  *(_BYTE *)(a1 + 48) = result;
  RtlRbRemoveNode((unsigned __int64 *)(a2 + 48), (unsigned __int64 *)a1);
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
