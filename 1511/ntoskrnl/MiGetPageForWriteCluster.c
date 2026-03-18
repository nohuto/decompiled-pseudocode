/*
 * XREFs of MiGetPageForWriteCluster @ 0x140109954
 * Callers:
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 */

__int64 MiGetPageForWriteCluster(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, ...)
{
  _DWORD *v3; // r14
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v12; // [rsp+70h] [rbp+28h]
  _DWORD *v13; // [rsp+78h] [rbp+30h]
  _DWORD *v14; // [rsp+80h] [rbp+38h]
  va_list va1; // [rsp+88h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _DWORD *);
  v14 = va_arg(va1, _DWORD *);
  v3 = v14;
  *v14 = 1;
  v6 = MiLockTransitionLeafPage(a2, (__int64 *)va);
  v7 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( (*(_BYTE *)(v6 + 34) & 7) != 3 || *(_WORD *)(v6 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v10);
    v7 = 0LL;
  }
  else if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFF003C1FuLL) != a3
         || _bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v10);
    goto LABEL_2;
  }
  if ( !v7 )
  {
LABEL_2:
    if ( *v13 <= 0x1Fu && !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
    {
      v7 = qword_1402FF230;
      ++*v13;
      return (__int64)(v7 + 0x58000000000LL) / 48;
    }
    return -1LL;
  }
  *v3 = MiReferencePageForModifiedWrite(v7, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v10);
  if ( *v3 )
  {
    *v13 = 0;
    return (__int64)(v7 + 0x58000000000LL) / 48;
  }
  return -1LL;
}
