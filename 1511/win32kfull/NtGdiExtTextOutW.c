/*
 * XREFs of NtGdiExtTextOutW @ 0x1C003E280
 * Callers:
 *     <none>
 * Callees:
 *     GreExtTextOutRect @ 0x1C003CB0C (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        __int64 a6,
        unsigned int a7,
        int *Src,
        unsigned int a9)
{
  struct tagRECT *v10; // rbx
  __int64 v11; // rax
  char *v12; // rdx
  unsigned int v13; // esi
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r15
  char *v17; // rdi
  char *v18; // rcx
  unsigned __int64 v19; // rdx
  char *v20; // rsi
  char *v21; // rdi
  size_t v22; // r8
  unsigned int v23; // r14d
  int *v25; // [rsp+60h] [rbp-178h]
  struct tagRECT v29; // [rsp+B8h] [rbp-120h] BYREF
  char v30; // [rsp+D0h] [rbp-108h] BYREF

  v10 = a5;
  v11 = a6;
  v12 = (char *)Src;
  v25 = Src;
  if ( a7 > 0xFFFF )
    return 0LL;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v10 = (struct tagRECT *)W32UserProbeAddress;
      v29 = *v10;
      v10 = &v29;
      v11 = a6;
    }
    else
    {
      v10 = 0LL;
    }
  }
  if ( !a7 )
  {
    if ( v10 && (a4 & 2) != 0 )
      return (unsigned int)GreExtTextOutRect(a1, v10);
    else
      return 1;
  }
  if ( (a4 & 6) != 0 && !v10 || !v11 )
    return 0;
  v13 = 0;
  v14 = (30 * a7 + 7) & 0xFFFFFFF8;
  if ( Src )
  {
    v13 = 4 * a7;
    if ( (a4 & 0x2000) != 0 )
      v13 = 8 * a7;
  }
  v15 = v14 + 2 * a7 + ((v13 + 7) & 0xFFFFFFF8);
  if ( (unsigned int)v15 <= 0xC0 )
  {
    v16 = 0LL;
    v17 = &v30;
LABEL_16:
    if ( v12 )
    {
      if ( v13 )
      {
        v18 = &v12[v13];
        if ( (unsigned __int64)v18 > W32UserProbeAddress || v18 < v12 )
          *W32UserProbeAddress = 0;
      }
      memmove(v17, v12, v13);
      v19 = a6;
      v25 = (int *)v17;
      v17 += (v13 + 7) & 0xFFFFFFF8;
    }
    else
    {
      v19 = a6;
    }
    v20 = v17;
    v21 = &v17[v14];
    v22 = 2LL * (int)a7;
    if ( v22 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v22 + v19 > W32UserProbeAddress || v22 + v19 < v19 )
        *W32UserProbeAddress = 0;
    }
    memmove(v21, (const void *)v19, v22);
    v23 = GreExtTextOutWInternal(a1, a2, a3, a4, v10, (unsigned __int16 *)v21, a7, v25, v20, a9);
    if ( v16 )
      FreeTmpBuffer(v16);
    return v23;
  }
  v16 = AllocFreeTmpBuffer(v15);
  v17 = (char *)v16;
  if ( v16 )
  {
    v12 = (char *)Src;
    goto LABEL_16;
  }
  return 0LL;
}
