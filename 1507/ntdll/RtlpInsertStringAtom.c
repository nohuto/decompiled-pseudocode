/*
 * XREFs of RtlpInsertStringAtom @ 0x18005262C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x18005203C (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlAllocateHandle @ 0x1800526C0 (RtlAllocateHandle.c)
 *     memset @ 0x180098540 (memset.c)
 */

char __fastcall RtlpInsertStringAtom(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  PRTL_HANDLE_TABLE_ENTRY v4; // rbx
  __int16 v5; // ax
  char result; // al
  ULONG HandleIndex; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 16;
  v4 = RtlAllocateHandle((PRTL_HANDLE_TABLE)(a1 + 16), &HandleIndex);
  if ( v4 )
  {
    v5 = HandleIndex;
    if ( HandleIndex <= 0xFFFF && HandleIndex + 49152 >= HandleIndex && HandleIndex + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = HandleIndex;
      *(_WORD *)(a2 + 10) = v5 - 0x4000;
      result = 1;
      v4[1].NextFree = (_RTL_HANDLE_TABLE_ENTRY *)a2;
      v4->Flags = 1;
      return result;
    }
    memset(v4, 0, *(unsigned int *)(v2 + 4));
    *v4 = *(PRTL_HANDLE_TABLE_ENTRY)(v2 + 16);
    *(_QWORD *)(v2 + 16) = v4;
  }
  return 0;
}
