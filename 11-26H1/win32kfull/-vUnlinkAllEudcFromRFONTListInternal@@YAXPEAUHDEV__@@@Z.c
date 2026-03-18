/*
 * XREFs of ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x140288444
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1400F4808 (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1403250D4 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTListInternal(_QWORD *a1)
{
  int v2; // ebx
  _QWORD *v3; // rdi
  __int64 *i; // rdi
  _QWORD *v5; // rax
  unsigned int j; // ebp
  __int64 *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 *k; // rdi
  _QWORD *v11; // rax
  unsigned int m; // ebp
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  LODWORD(v15) = 0;
  if ( (a1[5] & 0x800000) != 0 )
  {
    v3 = (_QWORD *)a1[439];
    v2 = 1;
  }
  else
  {
    v3 = a1;
  }
  if ( (v2 & 1) != 0 )
    v2 &= ~1u;
  for ( i = (__int64 *)v3[190]; ; i = (__int64 *)*i )
  {
    if ( (a1[5] & 0x800000) != 0 )
    {
      v5 = (_QWORD *)a1[439];
      v2 |= 2u;
    }
    else
    {
      v5 = a1;
    }
    if ( (v2 & 2) != 0 )
      v2 &= ~2u;
    if ( i == v5 + 190 )
      break;
    if ( i[7] )
      vMakeInactiveHelper();
    if ( i[8] )
      vMakeInactiveHelper();
    if ( i[9] )
      vMakeInactiveHelper();
    if ( i[10] )
    {
      for ( j = 0; j < *((_DWORD *)i + 44); ++j )
      {
        if ( *(_QWORD *)(i[10] + 8LL * j) )
          vMakeInactiveHelper();
      }
      v7 = (__int64 *)i[10];
      if ( v7 != i + 11 )
        Win32FreePool(v7);
      *(__int64 *)((char *)i + 172) = 0LL;
      i[10] = 0LL;
      *((_DWORD *)i + 42) = 0;
    }
    v8 = *(i - 69);
    v15 = 0LL;
    *(_QWORD *)(v8 + 120) = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  }
  if ( (a1[5] & 0x800000) != 0 )
  {
    v9 = (_QWORD *)a1[439];
    v2 |= 4u;
  }
  else
  {
    v9 = a1;
  }
  if ( (v2 & 4) != 0 )
    v2 &= ~4u;
  for ( k = (__int64 *)v9[192]; ; k = (__int64 *)*k )
  {
    if ( (a1[5] & 0x800000) != 0 )
    {
      v11 = (_QWORD *)a1[439];
      v2 |= 8u;
    }
    else
    {
      v11 = a1;
    }
    if ( (v2 & 8) != 0 )
      v2 &= ~8u;
    if ( k == v11 + 192 )
      break;
    if ( k[7] )
      vMakeInactiveHelper();
    if ( k[8] )
      vMakeInactiveHelper();
    if ( k[9] )
      vMakeInactiveHelper();
    if ( k[10] )
    {
      for ( m = 0; m < *((_DWORD *)k + 44); ++m )
      {
        if ( *(_QWORD *)(k[10] + 8LL * m) )
          vMakeInactiveHelper();
      }
      v13 = (__int64 *)k[10];
      if ( v13 != k + 11 )
        Win32FreePool(v13);
      *(__int64 *)((char *)k + 172) = 0LL;
      k[10] = 0LL;
      *((_DWORD *)k + 42) = 0;
    }
    v14 = *(k - 69);
    v15 = 0LL;
    *(_QWORD *)(v14 + 120) = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  }
}
