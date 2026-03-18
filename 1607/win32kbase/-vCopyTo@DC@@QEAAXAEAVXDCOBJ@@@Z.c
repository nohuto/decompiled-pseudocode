/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002D064
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002F030 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00BD724 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BD79C (--1XEPATHOBJ@@QEAA@XZ.c)
 */

void __fastcall DC::vCopyTo(DC *this, struct XDCOBJ *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  _OWORD *v6; // rcx
  _OWORD *v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rbp
  struct HPATH__ *v11; // rsi
  struct HPATH__ *v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  DC *v16; // rcx
  void *v17; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-98h] BYREF
  struct _BASEOBJECT *v19; // [rsp+28h] [rbp-90h]

  v4 = *(_QWORD *)(*(_QWORD *)a2 + 312LL);
  if ( v4 && v4 != *(_QWORD *)a2 + 276LL )
    Win32FreePool(v4);
  v5 = 3LL;
  v6 = (_OWORD *)*((_QWORD *)this + 10);
  v7 = *(_OWORD **)(*(_QWORD *)a2 + 80LL);
  v8 = 3LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    v9 = v6[7];
    v6 += 8;
    *(v7 - 1) = v9;
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
      if ( v19 && (*((_DWORD *)v19 + 22) & 1) == 0 )
        HmgDecrementShareReferenceCount((unsigned int *)v19);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v18);
    }
    *(_QWORD *)(v10 + 168) = v11;
    if ( v11 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v18, v11);
      if ( v19 && (*((_DWORD *)v19 + 22) & 1) == 0 )
        HmgIncrementShareReferenceCount(v19);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v18);
    }
  }
  v13 = (_OWORD *)((char *)this + 88);
  v14 = (_OWORD *)(*(_QWORD *)a2 + 88LL);
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    v15 = v13[7];
    v13 += 8;
    *(v14 - 1) = v15;
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
    *(_QWORD *)(*(_QWORD *)a2 + 312LL) = PALLOCMEM2((unsigned int)(8 * *((_DWORD *)this + 80)));
    v17 = *(void **)(*(_QWORD *)a2 + 312LL);
    if ( v17 )
      memmove(v17, *((const void **)this + 39), 8LL * *((unsigned int *)this + 80));
    else
      *(_DWORD *)(*(_QWORD *)a2 + 320LL) = 0;
  }
}
