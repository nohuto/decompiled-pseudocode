/*
 * XREFs of MiCreateEnclaveRegions @ 0x1407A682C
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  __int64 *v1; // r15
  __int64 *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // r9
  ULONG_PTR v5; // r14
  bool v6; // r8
  __int64 v7; // rbp
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 i; // rsi
  unsigned __int64 v11; // rbx

  v1 = (__int64 *)(a1 + 32);
  v2 = *(__int64 **)(a1 + 32);
  if ( v2 == (__int64 *)(a1 + 32) )
    return 1LL;
  while ( 1 )
  {
    if ( *((_DWORD *)v2 + 4) != 33 )
      goto LABEL_3;
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52456D4Du);
    v4 = result;
    if ( !result )
      return result;
    v5 = v2[3];
    v6 = 0;
    v7 = v2[4];
    *(_QWORD *)(result + 24) = v5;
    *(_QWORD *)(result + 32) = v7;
    v8 = (_QWORD *)qword_140326AD8;
    if ( !qword_140326AD8 )
      goto LABEL_10;
    while ( v5 >= v8[3] )
    {
      v9 = (_QWORD *)v8[1];
      if ( !v9 )
      {
        v6 = 1;
        goto LABEL_10;
      }
LABEL_15:
      v8 = v9;
    }
    v9 = (_QWORD *)*v8;
    if ( *v8 )
      goto LABEL_15;
    v6 = 0;
LABEL_10:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140326AD8, (unsigned __int64)v8, v6, v4);
    for ( i = 48 * v5 - 0x58000000000LL; v7; --v7 )
    {
      v11 = (unsigned __int8)MiLockPageInline(i);
      *(_WORD *)(i + 32) = 0;
      *(_QWORD *)(i + 24) &= 0x8000000000000000uLL;
      *(_QWORD *)(i + 40) = *(_QWORD *)(i + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      MiInsertPageInFreeOrZeroedList(v5, 256);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v11);
      i += 48LL;
      ++v5;
    }
    qword_140327928 -= v2[4];
LABEL_3:
    v2 = (__int64 *)*v2;
    if ( v2 == v1 )
      return 1LL;
  }
}
