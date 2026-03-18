/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002ED98
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     HmgModifyHandleType @ 0x1C005C300 (HmgModifyHandleType.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C005C908 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  HPALETTE *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // rax
  _QWORD *v19; // rax

  *((_QWORD *)this + 1) = 0LL;
  v4 = a2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( (unsigned int)a2 <= 2 )
  {
    LOBYTE(a2) = 1;
    v6 = HmgAlloc(2552LL, a2, 17LL);
    *(_QWORD *)this = v6;
    v7 = v6;
    if ( v6 )
    {
      ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(*(_QWORD *)this + 2544LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
      if ( a3 )
        HmgModifyHandleType(*(_QWORD *)v7 | 0x210000LL);
      v9 = 3LL;
      v10 = (_OWORD *)(v7 + 536);
      v11 = &DcAttrDefault;
      v12 = 3LL;
      do
      {
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
        v10[4] = v11[4];
        v10[5] = v11[5];
        v10[6] = v11[6];
        v10 += 8;
        v13 = v11[7];
        v11 += 8;
        *(v10 - 1) = v13;
        --v12;
      }
      while ( v12 );
      *v10 = *v11;
      v14 = v11[1];
      *(_QWORD *)(v7 + 80) = v7 + 536;
      v15 = &dclevelDefault;
      v10[1] = v14;
      v16 = (_OWORD *)(v7 + 88);
      do
      {
        *v16 = *(_OWORD *)v15;
        v16[1] = *((_OWORD *)v15 + 1);
        v16[2] = *((_OWORD *)v15 + 2);
        v16[3] = *((_OWORD *)v15 + 3);
        v16[4] = *((_OWORD *)v15 + 4);
        v16[5] = *((_OWORD *)v15 + 5);
        v16[6] = *((_OWORD *)v15 + 6);
        v16 += 8;
        v17 = *((_OWORD *)v15 + 7);
        v15 += 16;
        *(v16 - 1) = v17;
        --v9;
      }
      while ( v9 );
      *v16 = *(_OWORD *)v15;
      v16[1] = *((_OWORD *)v15 + 1);
      v16[2] = *((_OWORD *)v15 + 2);
      v16[3] = *((_OWORD *)v15 + 3);
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 152LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 104LL));
      *(_DWORD *)(v7 + 32) = v4;
      *(_QWORD *)(v7 + 36) = 0LL;
      *(_DWORD *)(v7 + 44) = 0;
      *(_QWORD *)(v7 + 1576) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) = 1179679;
      v18 = *(_QWORD *)this + 240LL;
      *(_QWORD *)(v7 + 2176) = 0LL;
      *(_QWORD *)(v7 + 1640) = v18;
      *(_QWORD *)(v7 + 1784) = v18;
      *(_QWORD *)(v7 + 1928) = v18;
      *(_QWORD *)(v7 + 2072) = v18;
      *(_QWORD *)(v7 + 2160) = 0LL;
      *(_DWORD *)(v7 + 2168) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2508LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2504LL) = -1;
      v19 = (_QWORD *)(*(_QWORD *)this + 1504LL);
      if ( *(_QWORD *)this != -1504LL )
      {
        *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
        *v19 = &CPushLock::`vftable';
        v19[2] = 0LL;
      }
      *(_QWORD *)(v7 + 1536) = 0LL;
      *(_QWORD *)(v7 + 2488) = 0LL;
      *(_QWORD *)(v7 + 2496) = 0LL;
    }
  }
  return this;
}
