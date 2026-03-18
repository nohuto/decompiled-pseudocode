/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C0026470
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG right; // esi
  LONG top; // ebp
  LONG bottom; // r14d
  LONG left; // r15d
  __int64 v8; // rdi
  LONG v9; // r8d
  LONG v10; // r9d
  HRGN RectRgnIndirect; // rax
  int v13; // esi
  __int64 v14; // rdx
  bool v15; // zf
  int *v16; // rdx
  _DWORD *v17; // rdx
  int v18; // eax
  _DWORD *v19; // rdx
  __int128 v20; // [rsp+20h] [rbp-48h]
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( *a1 )
  {
    right = a2->right;
    top = a2->top;
    bottom = a2->bottom;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, *a1, 0);
    v8 = v21[0];
    if ( !v21[0] )
      goto LABEL_4;
    *(_QWORD *)&v20 = __PAIR64__(top, left);
    v9 = left;
    *((_QWORD *)&v20 + 1) = __PAIR64__(bottom, right);
    v10 = top;
    if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
      || (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      goto LABEL_4;
    }
    if ( left > right )
    {
      v9 = right;
      LODWORD(v20) = right;
      right = left;
      DWORD2(v20) = left;
    }
    if ( top > bottom )
    {
      v10 = bottom;
      DWORD1(v20) = bottom;
      bottom = top;
      HIDWORD(v20) = top;
    }
    if ( v9 == right || v10 == bottom )
    {
      v14 = v21[0] + 104LL;
      *(_DWORD *)(v21[0] + 80LL) = 120;
      *(_QWORD *)(v8 + 84) = 1LL;
      *(_QWORD *)(v8 + 92) = 0LL;
      *(_DWORD *)(v8 + 100) = 0;
      *(_DWORD *)(v8 + 108) = 0x80000000;
    }
    else
    {
      v15 = *(_DWORD *)(v21[0] + 80LL) == 160;
      v16 = (int *)(v21[0] + 104LL);
      *(_OWORD *)(v21[0] + 88LL) = v20;
      if ( v15 )
      {
        v18 = *v16;
        *(_DWORD *)(v8 + 112) = v10;
        v19 = (int *)((char *)v16 + (unsigned int)(4 * v18 + 16));
        v19[1] = v10;
        v19[2] = bottom;
        v19[3] = v9;
        v19[4] = right;
        v14 = (__int64)v19 + (unsigned int)(4 * *v19 + 16);
        *(_DWORD *)(v14 + 4) = bottom;
        goto LABEL_21;
      }
      *(_DWORD *)(v8 + 80) = 160;
      *(_DWORD *)(v8 + 84) = 3;
      *v16 = 0;
      *(_DWORD *)(v8 + 108) = 0x80000000;
      *(_DWORD *)(v8 + 112) = v10;
      *(_DWORD *)(v8 + 116) = 0;
      v17 = (int *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
      *v17 = 2;
      v17[1] = v10;
      v17[2] = bottom;
      v17[3] = v9;
      v17[4] = right;
      v17[5] = 2;
      v14 = (__int64)v17 + (unsigned int)(4 * *v17 + 16);
      *(_DWORD *)(v14 + 4) = bottom;
    }
    *(_QWORD *)(v14 + 8) = 0x7FFFFFFFLL;
    *(_DWORD *)v14 = 0;
LABEL_21:
    v2 = 1;
    *(_QWORD *)(v8 + 40) = v14 + (unsigned int)(4 * *(_DWORD *)v14 + 16);
LABEL_4:
    if ( !v22 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v21);
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = RectRgnIndirect;
  v13 = (int)RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  HmgSetOwner(v13, 0, 4);
  return 1LL;
}
