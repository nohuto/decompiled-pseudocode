/*
 * XREFs of xxxCompositedPaint @ 0x1C0224568
 * Callers:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0056220 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     UpdateSprite @ 0x1C006BC94 (UpdateSprite.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C022446C (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  __int64 v2; // rdx
  int v3; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v5; // rbx
  struct tagRECT *v6; // r14
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rax
  HRGN v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbx
  HDEV v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rsi
  HDC DCEx; // rdi
  struct tagPOINT v20; // [rsp+98h] [rbp+10h] BYREF
  struct tagSIZE v21; // [rsp+A0h] [rbp+18h] BYREF
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, a1, 0xB10u, 1);
  v3 = xxxCompositedTraverse(a1, v2);
  SetOrClrWF(0, a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v5 = Prop;
  if ( Prop )
  {
    v6 = (struct tagRECT *)&Prop[1];
    v7 = IsRectEmptyInl(Prop + 1);
    v10 = v7;
    if ( !v3 && !v7 )
    {
      if ( !*(_QWORD *)&v5[2].right )
        *(_QWORD *)&v5[2].right = CreateEmptyRgnPublic(v9, v8);
      v11 = *(_QWORD *)&v5[2].right;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v6);
          GreCombineRgn(*(_QWORD *)&v5[2].right, *(_QWORD *)&v5[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v5[2].right = 1LL;
      }
      v10 = 1;
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
    v12 = *(HRGN *)&v5[2].right;
    if ( v12 )
    {
      xxxInternalInvalidate(a1, v12, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v5[2].right);
      *(_QWORD *)&v5[2].right = 0LL;
    }
    if ( !v10 )
    {
      v13 = *(_QWORD *)&v5->left;
      if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
      {
        v20.x = 0;
        v20.y = 0;
        v14 = GreSelectBitmap(ghdcMem, v13);
        v21.cx = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
        v15 = (HDEV)*gpDispInfo;
        v21.cy = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
        UpdateSprite(v15, (__int64)a1, v16, 0LL, 0LL, &v21, ghdcMem, &v20, 0, 0LL, 0x40000000u, v6);
        v17 = v14;
      }
      else
      {
        v18 = GreSelectBitmap(ghdcMem, v13);
        SetOrClrWF(0, a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v6->left,
          v6->top,
          v6->right - v6->left,
          v6->bottom - v6->top,
          ghdcMem,
          v6->left,
          v6->top,
          0xCC0020u,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, a1, 0xB20u, 1);
        v17 = v18;
      }
      GreSelectBitmap(ghdcMem, v17);
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
}
