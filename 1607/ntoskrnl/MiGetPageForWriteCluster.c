/*
 * XREFs of MiGetPageForWriteCluster @ 0x140116BC4
 * Callers:
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 */

__int64 MiGetPageForWriteCluster(__int64 a1, ULONG_PTR a2, ...)
{
  _DWORD *v2; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG_PTR v8; // rdi
  _DWORD *v10; // rdx
  int v11; // r8d
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  __int64 v16; // [rsp+70h] [rbp+28h]
  _DWORD *v17; // [rsp+78h] [rbp+30h]
  _DWORD *v18; // [rsp+80h] [rbp+38h]
  va_list va2; // [rsp+88h] [rbp+40h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _DWORD *);
  v18 = va_arg(va2, _DWORD *);
  v2 = v18;
  v4 = v12;
  *v18 = 1;
  v5 = MiLockTransitionLeafPage(a2, (__int64 *)va1);
  v8 = v5;
  if ( !v5 )
  {
LABEL_6:
    if ( *v17 <= 0x1Fu
      && !_bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)MiGetPageFileReservationOffset((__int64 *)va)) )
    {
      v8 = qword_1403276C0;
      *v10 = v11 + 1;
      return (__int64)(v8 + 0x58000000000LL) / 48;
    }
    return -1LL;
  }
  if ( (*(_BYTE *)(v5 + 34) & 7) != 3 || *(_WORD *)(v5 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v14);
    v8 = 0LL;
  }
  else if ( (*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFC00FC1FuLL) != v4
         || _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)MiGetPteTimeStamp(v4, v6, v7)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v14);
    goto LABEL_6;
  }
  if ( !v8 )
    goto LABEL_6;
  *v2 = MiReferencePageForModifiedWrite(v8, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v14);
  if ( !*v2 )
    return -1LL;
  *v17 = 0;
  return (__int64)(v8 + 0x58000000000LL) / 48;
}
