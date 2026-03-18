/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D9A0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B3280 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B32E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

void __fastcall DC::vCopyTo(DC *this, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int128 *v6; // rcx
  __int128 *v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // r14
  struct HPATH__ *v11; // rbp
  struct HPATH__ *v12; // rdx
  __int128 *v13; // rax
  __int128 *v14; // rcx
  __int128 v15; // xmm0
  DC *v16; // rcx
  void *v17; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-80h]

  v4 = *(_QWORD *)(*(_QWORD *)a2 + 312LL);
  if ( v4 && v4 != *(_QWORD *)a2 + 276LL )
    Win32FreePool();
  v5 = 3LL;
  v6 = (__int128 *)*((_QWORD *)this + 10);
  v7 = *(__int128 **)(*(_QWORD *)a2 + 80LL);
  v8 = 3LL;
  do
  {
    v7 += 8;
    v9 = *v6;
    v6 += 8;
    *(v7 - 8) = v9;
    *(v7 - 7) = *(v6 - 7);
    *(v7 - 6) = *(v6 - 6);
    *(v7 - 5) = *(v6 - 5);
    *(v7 - 4) = *(v6 - 4);
    *(v7 - 3) = *(v6 - 3);
    *(v7 - 2) = *(v6 - 2);
    *(v7 - 1) = *(v6 - 1);
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  v7[1] = v6[1];
  v10 = *(_QWORD *)a2;
  v11 = (struct HPATH__ *)*((_QWORD *)this + 21);
  v12 = *(struct HPATH__ **)(*(_QWORD *)a2 + 168LL);
  if ( v11 != v12 )
  {
    if ( v12 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v18, v12);
      if ( v19 && (*(_DWORD *)(v19 + 88) & 1) == 0 )
        HmgDecrementShareReferenceCount(v19);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v18);
    }
    *(_QWORD *)(v10 + 168) = v11;
    if ( v11 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v18, v11);
      if ( v19 && (*(_DWORD *)(v19 + 88) & 1) == 0 )
        HmgIncrementShareReferenceCount();
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v18);
    }
  }
  v13 = (__int128 *)((char *)this + 88);
  v14 = (__int128 *)(*(_QWORD *)a2 + 88LL);
  do
  {
    v14 += 8;
    v15 = *v13;
    v13 += 8;
    *(v14 - 8) = v15;
    *(v14 - 7) = *(v13 - 7);
    *(v14 - 6) = *(v13 - 6);
    *(v14 - 5) = *(v13 - 5);
    *(v14 - 4) = *(v13 - 4);
    *(v14 - 3) = *(v13 - 3);
    *(v14 - 2) = *(v13 - 2);
    *(v14 - 1) = *(v13 - 1);
    --v5;
  }
  while ( v5 );
  *v14 = *v13;
  v14[1] = v13[1];
  v14[2] = v13[2];
  v14[3] = v13[3];
  v16 = (DC *)*((_QWORD *)this + 39);
  if ( v16 == (DC *)((char *)this + 276) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 312LL) = *(_QWORD *)a2 + 276LL;
  }
  else if ( v16 )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 312LL) = PALLOCMEM2((unsigned int)(8 * *((_DWORD *)this + 80)), 1684300103LL, 1);
    v17 = *(void **)(*(_QWORD *)a2 + 312LL);
    if ( v17 )
      memmove(v17, *((const void **)this + 39), 8LL * *((unsigned int *)this + 80));
    else
      *(_DWORD *)(*(_QWORD *)a2 + 320LL) = 0;
  }
}
