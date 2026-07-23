/*
 * XREFs of IopIsFileOpenOrSection @ 0x140625694
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     MmSectionToSectionObjectPointers @ 0x14065B930 (MmSectionToSectionObjectPointers.c)
 */

bool __fastcall IopIsFileOpenOrSection(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdi
  bool v6; // bl
  unsigned __int64 v8; // rcx
  struct _OBJECT_TYPE *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v4 = *a4;
  v6 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)];
  if ( v9 == (struct _OBJECT_TYPE *)IoFileObjectType )
  {
    v10 = v8 + 48;
    if ( v4 != v10 )
    {
      v11 = *(_QWORD *)(v4 + 40);
      if ( v11 )
      {
        if ( v11 != *(_QWORD *)(v10 + 40) )
          goto LABEL_12;
      }
      else if ( *(_QWORD *)(v4 + 24) != *(_QWORD *)(v10 + 24) )
      {
        goto LABEL_12;
      }
      v6 = 1;
      goto LABEL_12;
    }
    v6 = *((_BYTE *)a4 + 8) == 0;
  }
  else if ( v9 == MmSectionObjectType && *(_QWORD *)(v4 + 40) )
  {
    v6 = MmSectionToSectionObjectPointers(v8 + 48) == *(_QWORD *)(v4 + 40);
  }
LABEL_12:
  ExUnlockHandleTableEntry(a1, a2);
  return v6;
}
