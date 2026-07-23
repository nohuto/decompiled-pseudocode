/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x140014214
 * Callers:
 *     NtAddAtomEx @ 0x1404B2CE4 (NtAddAtomEx.c)
 *     RtlAddAtomToAtomTable @ 0x1404D1028 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpReferenceAtom @ 0x140014638 (RtlpReferenceAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14010D31C (RtlpAllocateAtomTableEntry.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpLockAtomTable @ 0x140420E90 (RtlpLockAtomTable.c)
 *     RtlGetIntegerAtom @ 0x1404283AC (RtlGetIntegerAtom.c)
 *     RtlpHashStringToAtom @ 0x140428450 (RtlpHashStringToAtom.c)
 *     RtlpUnlockAtomTable @ 0x14042A2C0 (RtlpUnlockAtomTable.c)
 *     RtlpInsertStringAtom @ 0x1404B913C (RtlpInsertStringAtom.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, WCHAR *a2, USHORT *a3, unsigned int a4)
{
  int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  USHORT v14; // ax
  USHORT IntegerAtom[2]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+44h] [rbp-44h]
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+58h] [rbp-30h] BYREF

  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( RtlGetIntegerAtom(a2, IntegerAtom) )
    {
      v14 = IntegerAtom[0];
      if ( IntegerAtom[0] >= 0xC000u )
      {
        v14 = 0;
        IntegerAtom[0] = 0;
        v8 = -1073741811;
        v17 = -1073741811;
      }
      else
      {
        v8 = 0;
        v17 = 0;
      }
      if ( a3 )
        *a3 = v14;
      goto LABEL_27;
    }
    if ( *a2 )
    {
      v8 = RtlpHashStringToAtom(a1, a2, 0LL, &v20, IntegerAtom, &v18, &v19);
      v17 = v8;
      if ( v8 < 0 )
      {
LABEL_27:
        RtlpUnlockAtomTable(a1);
        return (unsigned int)v8;
      }
      if ( v19 )
      {
        RtlpReferenceAtom(v19, v18);
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 10);
        v8 = 0;
        v17 = 0;
        goto LABEL_27;
      }
      v10 = v20;
      if ( v20 )
      {
        v8 = -1073741801;
        v17 = -1073741801;
        v11 = RtlpAllocateAtomTableEntry(*(unsigned int *)IntegerAtom, &v18, a4);
        v12 = v11;
        v19 = v11;
        if ( v11 )
        {
          v13 = *(unsigned int *)IntegerAtom;
          memmove((void *)(v11 + 42), a2, *(unsigned int *)IntegerAtom);
          v13 >>= 1;
          *(_BYTE *)(v12 + 40) = v13;
          *(_WORD *)(v12 + 2LL * (unsigned __int8)v13 + 42) = 0;
          if ( (unsigned __int8)RtlpInsertStringAtom(a1, v12) )
          {
            *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
            *v10 = v12;
            if ( a3 )
              *a3 = *(_WORD *)(v12 + 10);
            v8 = 0;
            v17 = 0;
          }
          else
          {
            if ( v18 && v18 != v12 + 16 )
              ((void (*)(void))RtlpFreeAtom)();
            RtlpFreeAtom(v12);
          }
        }
        goto LABEL_27;
      }
      v8 = -1073741811;
    }
    else
    {
      v8 = -1073741773;
    }
    v17 = v8;
    goto LABEL_27;
  }
  return 3221225485LL;
}
