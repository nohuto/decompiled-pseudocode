/*
 * XREFs of ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0088818
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, unsigned int a2, int a3)
{
  struct _BASEOBJECT *v6; // rax
  struct _BASEOBJECT *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD **SystemArgument2; // rcx
  __int64 v11; // rdx
  char *v12; // r8
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // r9
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  HPALETTE *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a2 <= 2 )
  {
    v6 = HmgAlloc(0x9D8uLL, 1u, 0x11u);
    *(_QWORD *)this = v6;
    v7 = v6;
    if ( v6 )
    {
      if ( a3 )
      {
        v8 = *(_QWORD *)v6 | 0x210000LL;
        v9 = 3LL * *(unsigned __int16 *)v6;
        SystemArgument2 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
        *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v9 + 6) = WORD1(v8);
        *SystemArgument2[v9] = v8;
      }
      v11 = 3LL;
      v12 = (char *)v6 + 536;
      v13 = (_OWORD *)((char *)v6 + 536);
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
      *((_QWORD *)v7 + 10) = v12;
      v18 = &dclevelDefault;
      v13[1] = v17;
      v19 = (_OWORD *)((char *)v7 + 88);
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
        --v11;
      }
      while ( v11 );
      *v19 = *(_OWORD *)v18;
      v19[1] = *((_OWORD *)v18 + 1);
      v19[2] = *((_OWORD *)v18 + 2);
      v19[3] = *((_OWORD *)v18 + 3);
      HmgIncrementShareReferenceCount(*(_DWORD **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(_DWORD **)(*(_QWORD *)this + 152LL));
      HmgIncrementShareReferenceCount(*(_DWORD **)(*(_QWORD *)this + 104LL));
      *((_DWORD *)v7 + 8) = a2;
      *(_QWORD *)((char *)v7 + 36) = 0LL;
      *((_DWORD *)v7 + 11) = 0;
      *((_QWORD *)v7 + 194) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) = 1179679;
      v21 = *(_QWORD *)this + 240LL;
      *((_QWORD *)v7 + 269) = 0LL;
      *((_QWORD *)v7 + 202) = v21;
      *((_QWORD *)v7 + 220) = v21;
      *((_QWORD *)v7 + 238) = v21;
      *((_QWORD *)v7 + 256) = v21;
      *((_QWORD *)v7 + 267) = 0LL;
      *((_DWORD *)v7 + 536) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2484LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2480LL) = -1;
      *((_QWORD *)v7 + 189) = 0LL;
      *((_QWORD *)v7 + 308) = 0LL;
      *((_QWORD *)v7 + 309) = 0LL;
    }
  }
  return this;
}
