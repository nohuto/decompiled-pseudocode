/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x180071A10
 * Callers:
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800719F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x180071B5C (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlMakeSelfRelativeSD(_DWORD *a1, char *a2, unsigned int *a3)
{
  size_t v6; // r12
  size_t v7; // r14
  size_t v8; // rbx
  unsigned int v9; // ecx
  char *v10; // rsi
  __int64 v11; // rbx
  void *v13; // [rsp+50h] [rbp-20h] BYREF
  void *Src; // [rsp+58h] [rbp-18h] BYREF
  void *v15; // [rsp+60h] [rbp-10h] BYREF
  void *v16; // [rsp+68h] [rbp-8h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  size_t v18; // [rsp+B8h] [rbp+48h] BYREF
  size_t v19; // [rsp+C0h] [rbp+50h] BYREF
  size_t v20; // [rsp+C8h] [rbp+58h] BYREF

  RtlpQuerySecurityDescriptor(
    (_DWORD)a1,
    (unsigned int)&v15,
    (unsigned int)&v18,
    (unsigned int)&v16,
    (__int64)&v19,
    (__int64)&Src,
    (__int64)&Size,
    (__int64)&v13,
    (__int64)&v20);
  v6 = (unsigned int)v18;
  v7 = (unsigned int)v19;
  v8 = (unsigned int)v20;
  v9 = Size + v18 + v19 + v20 + 20;
  if ( v9 > *a3 )
  {
    *a3 = v9;
    return 3221225507LL;
  }
  else if ( a2 )
  {
    memset(a2, 0, v9);
    v10 = a2 + 20;
    *(_DWORD *)a2 = *a1;
    if ( (_DWORD)v8 )
    {
      memmove(a2 + 20, v13, v8);
      *((_DWORD *)a2 + 3) = 20;
      v10 += v8;
    }
    else
    {
      *((_DWORD *)a2 + 3) = 0;
    }
    if ( (_DWORD)Size )
    {
      v11 = (unsigned int)Size;
      memmove(v10, Src, (unsigned int)Size);
      *((_DWORD *)a2 + 4) = (_DWORD)v10 - (_DWORD)a2;
      v10 += v11;
    }
    else
    {
      *((_DWORD *)a2 + 4) = 0;
    }
    if ( (_DWORD)v6 )
    {
      memmove(v10, v15, v6);
      *((_DWORD *)a2 + 1) = (_DWORD)v10 - (_DWORD)a2;
      v10 += v6;
    }
    if ( (_DWORD)v7 )
    {
      memmove(v10, v16, v7);
      *((_DWORD *)a2 + 2) = (_DWORD)v10 - (_DWORD)a2;
    }
    *((_WORD *)a2 + 1) |= 0x8000u;
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
