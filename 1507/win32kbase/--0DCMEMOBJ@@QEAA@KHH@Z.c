/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C004A7B8
 * Callers:
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00AEF88 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v6; // rax
  unsigned __int16 *v7; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // r9
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  HPALETTE *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rax
  _QWORD *v22; // rax

  *((_QWORD *)this + 1) = 0LL;
  v4 = a2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( (unsigned int)a2 <= 2 )
  {
    LOBYTE(a2) = 1;
    v6 = HmgAlloc(2552LL, a2, 17LL);
    *(_QWORD *)this = v6;
    v7 = (unsigned __int16 *)v6;
    if ( v6 )
    {
      ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(*(_QWORD *)this + 2544LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
      if ( a3 )
      {
        v9 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
        v10 = *(_QWORD *)v7 | 0x210000LL;
        v11 = 3LL * *v7;
        *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8 * v11 + 12) = (*(_DWORD *)v7 | 0x210000u) >> 16;
        **(_QWORD **)(v9 + 8 * v11) = v10;
      }
      v12 = 3LL;
      v13 = v7 + 268;
      v14 = &DcAttrDefault;
      v15 = 3LL;
      do
      {
        *v13 = *v14;
        v13[1] = v14[1];
        v13[2] = v14[2];
        v13[3] = v14[3];
        v13[4] = v14[4];
        v13[5] = v14[5];
        v13[6] = v14[6];
        v13 += 8;
        v16 = v14[7];
        v14 += 8;
        *(v13 - 1) = v16;
        --v15;
      }
      while ( v15 );
      *v13 = *v14;
      v17 = v14[1];
      *((_QWORD *)v7 + 10) = v7 + 268;
      v18 = &dclevelDefault;
      v13[1] = v17;
      v19 = v7 + 44;
      do
      {
        *v19 = *(_OWORD *)v18;
        v19[1] = *((_OWORD *)v18 + 1);
        v19[2] = *((_OWORD *)v18 + 2);
        v19[3] = *((_OWORD *)v18 + 3);
        v19[4] = *((_OWORD *)v18 + 4);
        v19[5] = *((_OWORD *)v18 + 5);
        v19[6] = *((_OWORD *)v18 + 6);
        v19 += 8;
        v20 = *((_OWORD *)v18 + 7);
        v18 += 16;
        *(v19 - 1) = v20;
        --v12;
      }
      while ( v12 );
      *v19 = *(_OWORD *)v18;
      v19[1] = *((_OWORD *)v18 + 1);
      v19[2] = *((_OWORD *)v18 + 2);
      v19[3] = *((_OWORD *)v18 + 3);
      HmgIncrementShareReferenceCount(*(_QWORD *)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(_QWORD *)(*(_QWORD *)this + 152LL));
      HmgIncrementShareReferenceCount(*(_QWORD *)(*(_QWORD *)this + 104LL));
      *((_DWORD *)v7 + 8) = v4;
      *(_QWORD *)(v7 + 18) = 0LL;
      *((_DWORD *)v7 + 11) = 0;
      *((_QWORD *)v7 + 197) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) = 1179679;
      v21 = *(_QWORD *)this + 240LL;
      *((_QWORD *)v7 + 272) = 0LL;
      *((_QWORD *)v7 + 205) = v21;
      *((_QWORD *)v7 + 223) = v21;
      *((_QWORD *)v7 + 241) = v21;
      *((_QWORD *)v7 + 259) = v21;
      *((_QWORD *)v7 + 270) = 0LL;
      *((_DWORD *)v7 + 542) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2508LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2504LL) = -1;
      v22 = (_QWORD *)(*(_QWORD *)this + 1504LL);
      if ( *(_QWORD *)this != -1504LL )
      {
        *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
        *v22 = &CPushLock::`vftable';
        v22[2] = 0LL;
      }
      *((_QWORD *)v7 + 192) = 0LL;
      *((_QWORD *)v7 + 311) = 0LL;
      *((_QWORD *)v7 + 312) = 0LL;
    }
  }
  return this;
}
