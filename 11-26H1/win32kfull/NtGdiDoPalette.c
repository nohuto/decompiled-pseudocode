/*
 * XREFs of NtGdiDoPalette @ 0x1401E31E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiDoPalette(HPALETTE a1, unsigned __int16 a2, unsigned __int16 a3, void *a4, unsigned int a5)
{
  __int64 v6; // rbx
  unsigned __int16 v7; // ax
  unsigned int v8; // r14d
  BOOL v9; // r15d
  struct tagPALETTEENTRY *v10; // rsi
  __int64 v11; // r12
  int v12; // eax
  struct tagPALETTEENTRY *v14; // rax
  HPALETTE v15; // [rsp+90h] [rbp+8h]

  v15 = a1;
  v6 = a3;
  v7 = a2;
  v8 = 0;
  v9 = 1;
  v10 = 0LL;
  if ( a5 > 5 )
    return v8;
  v11 = 16LL * a5;
  if ( !*(_DWORD *)((char *)&off_1403592A0 + v11 + 8) )
  {
    if ( a4 )
    {
      if ( a3 )
      {
        v10 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
        v9 = v10 != 0LL;
        v7 = a2;
        a1 = v15;
      }
      else
      {
        v9 = 0;
      }
    }
    if ( v9 )
    {
      v12 = (*(__int64 (__fastcall **)(HPALETTE, unsigned int, unsigned int, struct tagPALETTEENTRY *))((char *)&off_1403592A0 + v11))(
              a1,
              v7,
              v6,
              v10);
      v8 = v12;
      if ( (int)v6 < v12 )
        v12 = v6;
      if ( v12 > 0 && a4 )
        GreProbeAndWriteToUntrustedVa(a4, 4LL * v12, v10, 4LL * v12, 1uLL);
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    v14 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
    v10 = v14;
    if ( !v14 )
      goto LABEL_10;
    GreProbeAndReadFromUntrustedVa(v14, 4 * v6, a4, 4 * v6, 1uLL);
    v7 = a2;
    a1 = v15;
  }
  v8 = (*(__int64 (__fastcall **)(HPALETTE, unsigned int, unsigned int, struct tagPALETTEENTRY *))((char *)&off_1403592A0
                                                                                                 + v11))(
         a1,
         v7,
         (unsigned __int16)v6,
         v10);
LABEL_10:
  if ( v10 )
    FreeTmpBuffer(v10);
  return v8;
}
