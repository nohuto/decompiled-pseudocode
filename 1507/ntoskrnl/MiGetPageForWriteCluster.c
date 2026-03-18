/*
 * XREFs of MiGetPageForWriteCluster @ 0x14013B604
 * Callers:
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 MiGetPageForWriteCluster(__int64 a1, _KPROCESS *a2, __int64 a3, ...)
{
  _DWORD *v3; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rdi
  __int64 v11; // r8
  _DWORD *v13; // rdx
  int v14; // r8d
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v18; // [rsp+70h] [rbp+28h]
  _DWORD *v19; // [rsp+78h] [rbp+30h]
  _DWORD *v20; // [rsp+80h] [rbp+38h]
  va_list va1; // [rsp+88h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _DWORD *);
  v20 = va_arg(va1, _DWORD *);
  v3 = v20;
  *v20 = 1;
  v6 = MiLockTransitionLeafPage(a2, (ULONG_PTR)va);
  v10 = v6;
  if ( !v6 )
  {
LABEL_6:
    v11 = (unsigned int)*v19;
    if ( (unsigned int)v11 <= 0x1F
      && !_bittest64(
            *(const signed __int64 **)(a1 + 8),
            (unsigned __int64)MiReverseSwizzleInvalidPte(a3, v19, v11, v9) >> 32) )
    {
      v10 = qword_14034F6F0;
      *v13 = v14 + 1;
      return (__int64)(v10 + 0x58000000000LL) / 48;
    }
    return -1LL;
  }
  if ( (*(_BYTE *)(v6 + 34) & 7) != 3 || *(_WORD *)(v6 + 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v16);
    v10 = 0LL;
  }
  else if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFC00FC1FuLL) != a3
         || _bittest64(
              *(const signed __int64 **)(a1 + 8),
              (unsigned __int64)MiReverseSwizzleInvalidPte(a3, v7, v8, v9) >> 32) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v16);
    goto LABEL_6;
  }
  if ( !v10 )
    goto LABEL_6;
  *v3 = MiReferencePageForModifiedWrite(v10, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v16);
  if ( !*v3 )
    return -1LL;
  *v19 = 0;
  return (__int64)(v10 + 0x58000000000LL) / 48;
}
