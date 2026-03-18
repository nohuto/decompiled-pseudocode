/*
 * XREFs of MiCreateEnclaveRegions @ 0x14074DEE8
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  bool v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  ULONG_PTR v9; // r15
  __int64 v10; // rbp
  __int64 i; // rsi
  unsigned __int64 v12; // rbx

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
    *(_QWORD *)(result + 24) = v5;
    *(_QWORD *)(result + 32) = v2[4];
    v7 = (_QWORD *)MiEnclaveRegions;
    if ( !MiEnclaveRegions )
      goto LABEL_10;
    while ( v5 >= v7[3] )
    {
      v8 = (_QWORD *)v7[1];
      if ( !v8 )
      {
        v6 = 1;
        goto LABEL_10;
      }
LABEL_15:
      v7 = v8;
    }
    v8 = (_QWORD *)*v7;
    if ( *v7 )
      goto LABEL_15;
    v6 = 0;
LABEL_10:
    RtlAvlInsertNodeEx((unsigned __int64 *)&MiEnclaveRegions, (unsigned __int64)v7, v6, v4);
    v9 = v2[3];
    v10 = v2[4];
    for ( i = 48 * v9 - 0x58000000000LL; v10; --v10 )
    {
      v12 = (unsigned __int8)MiLockPageInline(i);
      *(_WORD *)(i + 32) = 0;
      *(_QWORD *)(i + 24) &= 0x8000000000000000uLL;
      *(_QWORD *)(i + 40) = *(_QWORD *)(i + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      MiInsertPageInFreeOrZeroedList(v9, 0x100uLL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
      i += 48LL;
      ++v9;
    }
    qword_1402FF820 -= v2[4];
LABEL_3:
    v2 = (__int64 *)*v2;
    if ( v2 == v1 )
      return 1LL;
  }
}
