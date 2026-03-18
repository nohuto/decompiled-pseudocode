/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C0042050
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, ERECTL *a2)
{
  unsigned int v2; // ebx
  __int64 RectRgnIndirect; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // r11d
  int v15; // edi
  int v16; // r9d
  int v17; // r10d
  bool v18; // zf
  int *v19; // rdx
  int v20; // eax
  _DWORD *v21; // rdx
  char *v22; // rdx
  _DWORD *v23; // rdx
  __int128 v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v26[40]; // [rsp+38h] [rbp-40h] BYREF
  int v27; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( *a1 )
  {
    v8 = *((_DWORD *)a2 + 2);
    v9 = *((_DWORD *)a2 + 1);
    v10 = *((_DWORD *)a2 + 3);
    v11 = *(_DWORD *)a2;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v25, *a1, 0, 0);
    v12 = v25;
    if ( !v25 )
      goto LABEL_17;
    *(_QWORD *)&v24 = __PAIR64__(v9, v11);
    *((_QWORD *)&v24 + 1) = __PAIR64__(v10, v8);
    if ( (((v11 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v10 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v8 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v9 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      goto LABEL_17;
    }
    ERECTL::vOrder((ERECTL *)&v24);
    v14 = v24;
    v15 = DWORD2(v24);
    if ( (_DWORD)v24 == DWORD2(v24) || (v16 = DWORD1(v24), v17 = HIDWORD(v24), DWORD1(v24) == HIDWORD(v24)) )
    {
      v22 = (char *)(v13 + 104);
      *(_DWORD *)(v13 + 80) = 120;
      *(_QWORD *)(v13 + 84) = 1LL;
      *(_QWORD *)(v13 + 92) = 0LL;
      *(_DWORD *)(v13 + 100) = 0;
      *(_DWORD *)(v13 + 108) = 0x80000000;
    }
    else
    {
      v18 = *(_DWORD *)(v13 + 80) == 160;
      v19 = (int *)(v13 + 104);
      *(_OWORD *)(v13 + 88) = v24;
      if ( v18 )
      {
        v20 = *v19;
        *(_DWORD *)(v13 + 112) = v16;
        v21 = (int *)((char *)v19 + (unsigned int)(4 * v20 + 16));
        v21[1] = v16;
        v21[2] = v17;
        v21[3] = v14;
        v21[4] = v15;
        v22 = (char *)v21 + (unsigned int)(4 * *v21 + 16);
        *((_DWORD *)v22 + 1) = v17;
LABEL_16:
        v2 = 1;
        *(_QWORD *)(v13 + 40) = &v22[4 * *(_DWORD *)v22 + 16];
        v12 = v25;
LABEL_17:
        if ( !v27 )
        {
          RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
          v12 = v25;
        }
        if ( v12 )
          _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
        UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v26);
        return v2;
      }
      *(_DWORD *)(v13 + 80) = 160;
      *(_DWORD *)(v13 + 84) = 3;
      *v19 = 0;
      *(_DWORD *)(v13 + 108) = 0x80000000;
      *(_DWORD *)(v13 + 112) = v16;
      *(_DWORD *)(v13 + 116) = 0;
      v23 = (int *)((char *)v19 + (unsigned int)(4 * *v19 + 16));
      *v23 = 2;
      v23[1] = v16;
      v23[2] = v17;
      v23[3] = v14;
      v23[4] = v15;
      v23[5] = 2;
      v22 = (char *)v23 + (unsigned int)(4 * *v23 + 16);
      *((_DWORD *)v22 + 1) = v17;
    }
    *((_QWORD *)v22 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)v22 = 0;
    goto LABEL_16;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v5 = RectRgnIndirect;
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v6) = 4;
    HmgSetOwner(v5, 0LL, v6);
    return 1LL;
  }
  return v2;
}
