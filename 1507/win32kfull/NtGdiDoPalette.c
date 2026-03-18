/*
 * XREFs of NtGdiDoPalette @ 0x1C00EC3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiDoPalette(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5)
{
  unsigned __int16 v6; // bx
  unsigned int v7; // r15d
  BOOL v8; // r12d
  void *v9; // rsi
  __int64 (__fastcall **v10)(HPALETTE, unsigned int, unsigned int, struct tagPALETTEENTRY *); // r9
  int v11; // eax
  size_t v13; // r8
  char *v14; // rcx
  unsigned __int16 v15; // [rsp+88h] [rbp+10h]

  v15 = a2;
  v6 = a3;
  v7 = 0;
  v8 = 1;
  v9 = 0LL;
  if ( a5 <= 5 )
  {
    v10 = &off_1C02E2F60;
    if ( *((_DWORD *)&off_1C02E2F60 + 4 * a5 + 2) )
    {
      if ( (_WORD)a3 )
      {
        v9 = (void *)AllocFreeTmpBuffer(4 * (unsigned int)(unsigned __int16)a3);
        if ( !v9 )
          return v7;
        v14 = &a4[4 * v6];
        if ( v14 < a4 || (unsigned __int64)v14 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v9, a4, 4LL * v6);
      }
      v7 = _guard_dispatch_icall_fptr();
    }
    else
    {
      if ( a4 )
      {
        if ( (_WORD)a3 )
        {
          v9 = (void *)AllocFreeTmpBuffer(4 * (unsigned int)(unsigned __int16)a3);
          a2 = v15;
          v10 = &off_1C02E2F60;
          v8 = v9 != 0LL;
        }
        else
        {
          v8 = 0;
        }
      }
      if ( v8 )
      {
        v11 = _guard_dispatch_icall_fptr();
        v7 = v11;
        if ( v6 < v11 )
          v11 = v6;
        if ( v11 > 0 && a4 )
        {
          v13 = 4LL * v11;
          if ( (unsigned __int64)&a4[v13] > W32UserProbeAddress || &a4[v13] <= a4 )
            *W32UserProbeAddress = 0;
          memmove(a4, v9, v13);
        }
      }
    }
    if ( v9 )
      FreeTmpBuffer(v9, a2, a3, v10);
  }
  return v7;
}
