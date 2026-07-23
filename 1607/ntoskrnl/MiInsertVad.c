/*
 * XREFs of MiInsertVad @ 0x1400424D0
 * Callers:
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiInsertPrivateVad @ 0x140095DF0 (MiInsertPrivateVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiInsertVad(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v4 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v5 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v6 = *(unsigned int *)(a1 + 24);
  ++*(_QWORD *)(a2 + 1592);
  v7 = v6 | v5;
  v8 = *(_QWORD *)(a2 + 1152) >> 12;
  *(_QWORD *)(a2 + 1584) = a1;
  if ( v4 <= v8 )
  {
    *(_QWORD *)(a2 + 824) += ((v4 - v7) << 12) + 4096;
    v9 = *(_QWORD *)(a2 + 824);
    if ( *(_QWORD *)(a2 + 816) < v9 )
      *(_QWORD *)(a2 + 816) = v9;
  }
  v10 = *(_QWORD *)(a2 + 1568);
  v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v12) = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v11 > (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
        || v11 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( !v12 )
        {
          LOBYTE(v12) = 1;
          break;
        }
      }
      else
      {
        v12 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          break;
      }
      v10 = v12;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 1568), v10, v12, a1);
  result = *(_DWORD *)(a1 + 48) & 7;
  if ( (_DWORD)result == 5 || (_DWORD)result == 2 && (*(_BYTE *)(a1 + 67) & 1) != 0 )
    ++*(_DWORD *)(a2 + 1708);
  return result;
}
