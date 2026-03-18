/*
 * XREFs of NtGdiDoPalette @ 0x1C00F2F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiDoPalette(__int64 a1, __int64 a2, unsigned __int16 a3, char *a4, unsigned int a5, int a6)
{
  unsigned int v8; // r15d
  BOOL v9; // r12d
  void *v10; // rsi
  int v11; // eax
  size_t v13; // r8
  char *v14; // rcx

  v8 = 0;
  v9 = 1;
  v10 = 0LL;
  if ( a5 <= 5 )
  {
    if ( a6 )
    {
      if ( a3 )
      {
        v10 = (void *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
        if ( !v10 )
          return v8;
        v14 = &a4[4 * a3];
        if ( v14 < a4 || (unsigned __int64)v14 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v10, a4, 4LL * a3);
      }
      v8 = _guard_dispatch_icall_fptr();
    }
    else
    {
      if ( a4 )
      {
        if ( a3 )
        {
          v10 = (void *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
          v9 = v10 != 0LL;
        }
        else
        {
          v9 = 0;
        }
      }
      if ( v9 )
      {
        v11 = _guard_dispatch_icall_fptr();
        v8 = v11;
        if ( a3 < v11 )
          v11 = a3;
        if ( v11 > 0 && a4 )
        {
          v13 = 4LL * v11;
          if ( (unsigned __int64)&a4[v13] > W32UserProbeAddress || &a4[v13] <= a4 )
            *W32UserProbeAddress = 0;
          memmove(a4, v10, v13);
        }
      }
    }
    if ( v10 )
      FreeTmpBuffer(v10);
  }
  return v8;
}
