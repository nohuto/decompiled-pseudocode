/*
 * XREFs of MagControl @ 0x1401EAF80
 * Callers:
 *     NtUserMagControl @ 0x1401EAEC0 (NtUserMagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1401EBE3C (MagpFindThreadContext.c)
 *     MagContextThreadCallout @ 0x1402984B0 (MagContextThreadCallout.c)
 */

__int64 __fastcall MagControl(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // r8d
  __int64 ThreadContext; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 *v16; // rax

  v4 = 0;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( (unsigned int)(v8 - 1) >= 2 )
        return (unsigned int)-1073741811;
    }
    else
    {
      ThreadContext = MagpFindThreadContext();
      if ( ThreadContext )
      {
        if ( (*(_DWORD *)(ThreadContext + 32))-- == 1 )
          MagContextThreadCallout(v10, *(_QWORD *)(ThreadContext + 16), ThreadContext, 1LL);
      }
      else
      {
        return (unsigned int)-1073741772;
      }
    }
  }
  else
  {
    v12 = MagpFindThreadContext();
    if ( v12 )
    {
      ++*(_DWORD *)(v12 + 32);
    }
    else
    {
      v13 = Win32AllocPoolZInit(56LL, 1735226197LL);
      v14 = v13;
      if ( v13 )
      {
        v15 = (_QWORD *)(v13 + 40);
        v15[1] = v15;
        *v15 = v15;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(a2 + 1360) |= 8uLL;
        *(_DWORD *)(v14 + 32) = 1;
        *(_QWORD *)(v14 + 24) = a4;
        v16 = *(__int64 **)(a1 + 8);
        if ( *v16 != a1 )
          __fastfail(3u);
        *(_QWORD *)v14 = a1;
        *(_QWORD *)(v14 + 8) = v16;
        *v16 = v14;
        *(_QWORD *)(a1 + 8) = v14;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
