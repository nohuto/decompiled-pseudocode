/*
 * XREFs of NtGdiDoPalette @ 0x1C00F0290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiDoPalette(__int64 a1, __int64 a2, unsigned __int16 a3, char *a4, unsigned int a5)
{
  unsigned int v7; // r15d
  BOOL v8; // r12d
  void *v9; // rsi
  int v10; // eax
  size_t v12; // r8
  char *v13; // rcx

  v7 = 0;
  v8 = 1;
  v9 = 0LL;
  if ( a5 <= 5 )
  {
    if ( *((_DWORD *)&off_1C02E2E80 + 4 * a5 + 2) )
    {
      if ( a3 )
      {
        v9 = (void *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
        if ( !v9 )
          return v7;
        v13 = &a4[4 * a3];
        if ( v13 < a4 || (unsigned __int64)v13 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v9, a4, 4LL * a3);
      }
      v7 = _guard_dispatch_icall_fptr();
    }
    else
    {
      if ( a4 )
      {
        if ( a3 )
        {
          v9 = (void *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
          v8 = v9 != 0LL;
        }
        else
        {
          v8 = 0;
        }
      }
      if ( v8 )
      {
        v10 = _guard_dispatch_icall_fptr();
        v7 = v10;
        if ( a3 < v10 )
          v10 = a3;
        if ( v10 > 0 && a4 )
        {
          v12 = 4LL * v10;
          if ( (unsigned __int64)&a4[v12] > W32UserProbeAddress || &a4[v12] <= a4 )
            *W32UserProbeAddress = 0;
          memmove(a4, v9, v12);
        }
      }
    }
    if ( v9 )
      FreeTmpBuffer(v9);
  }
  return v7;
}
