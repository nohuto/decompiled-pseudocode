/*
 * XREFs of MiVaToPfn @ 0x1401DA7EC
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 *v4; // rcx
  int v5; // ebx
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-30h] BYREF

  v1 = 4LL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = v13;
  v5 = 4;
  v6 = 1LL;
  do
  {
    *v4++ = v3;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v1;
  }
  while ( v1 );
  do
    v12 = MI_READ_PTE_LOCK_FREE((__int64 *)v13[--v5]);
  while ( (v12 & 0x80u) == 0LL && v5 );
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v12) >> 12) & 0xFFFFFFFFFLL;
  if ( v5 )
  {
    v8 = a1 >> 12;
    do
    {
      v9 = v8;
      v8 >>= 9;
      v10 = v6 * (v9 & 0x1FF);
      v6 <<= 9;
      v7 += v10;
      --v5;
    }
    while ( v5 );
  }
  return v7;
}
