/*
 * XREFs of ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00ECC2C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

void __fastcall AsyncWindowPos(struct tagSMWP *a1)
{
  _QWORD *v1; // rdi
  int v2; // r14d
  __int64 v3; // rsi
  int v4; // ebx
  int v5; // edx
  _QWORD *i; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbp
  _QWORD *v9; // rdx
  _OWORD *v10; // r8
  _OWORD *v11; // rcx

  v1 = (_QWORD *)*((_QWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  while ( v2 )
  {
    while ( 1 )
    {
      if ( *v1 )
      {
        v3 = v1[13];
        if ( *(_QWORD *)(v3 + 392) != *(_QWORD *)(gptiCurrent + 392LL) )
          break;
      }
      v1 += 21;
      if ( !--v2 )
        return;
    }
    v4 = 0;
    v5 = v2 - 1;
    for ( i = v1; v5 >= 0; --v5 )
    {
      if ( *i && *(_QWORD *)(i[13] + 392LL) == *(_QWORD *)(v3 + 392) )
        ++v4;
      i += 21;
    }
    v7.QuadPart = Win32AllocPool(168LL * v4 + 48, 2004054869LL);
    v8 = v7;
    v9 = v1;
    if ( v7.QuadPart )
    {
      v10 = (_OWORD *)(v7.QuadPart + 48);
      *(_DWORD *)(v7.QuadPart + 28) = v4;
      *(_QWORD *)(v7.QuadPart + 40) = v7.QuadPart + 48;
      while ( v4 )
      {
        if ( *v9 )
        {
          if ( *(_QWORD *)(v9[13] + 392LL) == *(_QWORD *)(v3 + 392) )
          {
            --v4;
            *v10 = *(_OWORD *)v9;
            v11 = v10 + 8;
            v10[1] = *((_OWORD *)v9 + 1);
            v10[2] = *((_OWORD *)v9 + 2);
            v10[3] = *((_OWORD *)v9 + 3);
            v10[4] = *((_OWORD *)v9 + 4);
            v10[5] = *((_OWORD *)v9 + 5);
            v10[6] = *((_OWORD *)v9 + 6);
            v10 = (_OWORD *)((char *)v10 + 168);
            *(v11 - 1) = *((_OWORD *)v9 + 7);
            *v11 = *((_OWORD *)v9 + 8);
            v11[1] = *((_OWORD *)v9 + 9);
            *((_QWORD *)v11 + 4) = v9[20];
            *v9 = 0LL;
          }
        }
        v9 += 21;
      }
      if ( !(unsigned int)PostEventMessageEx(v3, *(_QWORD *)(v3 + 392), 3u, 0LL, 0, v7, (LARGE_INTEGER)v3, 0LL) )
        ((void (__fastcall *)(_QWORD))Win32FreePool)((LARGE_INTEGER)v8.QuadPart);
    }
    else
    {
      while ( v4 )
      {
        if ( *(_QWORD *)(v9[13] + 392LL) == *(_QWORD *)(v3 + 392) )
        {
          *v9 = 0LL;
          --v4;
        }
        v9 += 21;
      }
    }
  }
}
