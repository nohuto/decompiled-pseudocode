/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x1400959C0
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, KIRQL a3, _DWORD *a4)
{
  _BYTE *v4; // rsi
  unsigned __int64 v5; // r9
  __int64 v8; // rbp
  int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // r8
  unsigned int v12; // ebx
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r10
  char v17; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+40h] [rbp-38h] BYREF

  *a4 = 0;
  v4 = a4;
  v5 = 0xFFFFF68000000000uLL;
  v8 = 2LL;
  do
  {
    v9 = 3;
    v10 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v11 = (unsigned __int64 *)&v18;
    do
    {
      *v11 = v10;
      v10 = v5 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      --v11;
      --v9;
    }
    while ( v9 );
    v12 = 0;
    v13 = &v17;
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)v13);
      if ( !v14 )
        break;
      if ( (v14 & 1) == 0 && v12 != 2 )
      {
        LOBYTE(v14) = MiMakeSystemAddressValid((__int64)((v15 << 25) - (v5 << 25)) >> 16, 0LL, 0, a3, 1);
        v5 = 0xFFFFF68000000000uLL;
      }
      ++v12;
      v13 += 8;
      if ( v12 >= 3 )
        goto LABEL_8;
    }
    LOBYTE(v14) = 1 << (2 - v12);
    *v4 = v14;
LABEL_8:
    ++v4;
    a1 = a2;
    --v8;
  }
  while ( v8 );
  return v14;
}
