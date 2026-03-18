/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x1400D65A4
 * Callers:
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, KIRQL a3, _DWORD *a4)
{
  _BYTE *v4; // r14
  __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned int v11; // ebx
  char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  char v16; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+40h] [rbp-48h] BYREF

  *a4 = 0;
  v4 = a4;
  v7 = 2LL;
  do
  {
    v8 = 3;
    v9 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v10 = (unsigned __int64 *)&v17;
    do
    {
      *v10-- = v9;
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v8;
    }
    while ( v8 );
    v11 = 0;
    v12 = &v16;
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      v14 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v12);
      if ( !v14 )
        break;
      if ( (v14 & 1) == 0 && v11 != 2 )
        LOBYTE(v14) = MiMakeSystemAddressValid(v13 << 25 >> 16, 0LL, 0LL, a3, 1);
      ++v11;
      v12 += 8;
      if ( v11 >= 3 )
        goto LABEL_8;
    }
    LOBYTE(v14) = 1 << (2 - v11);
    *v4 = v14;
LABEL_8:
    ++v4;
    a1 = a2;
    --v7;
  }
  while ( v7 );
  return v14;
}
