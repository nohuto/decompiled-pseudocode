/*
 * XREFs of xxxCompositedPaint @ 0x14011E700
 * Callers:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x14004FC10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14011EC64 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

const struct tagRECT *__fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  const struct tagRECT *result; // rax
  const struct tagRECT *v7; // rbx
  struct tagRECT *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  HRGN v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 DCEx; // rax
  int top; // ebx
  Gre::Base *v18; // rsi
  int left; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rcx
  HDC v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _BYTE v43[8]; // [rsp+60h] [rbp-38h] BYREF
  const struct tagRECT *v44; // [rsp+68h] [rbp-30h]
  struct tagSIZE v45; // [rsp+A8h] [rbp+10h] BYREF
  struct tagPOINT v46; // [rsp+B0h] [rbp+18h] BYREF

  SetOrClrWF(1, a1, 0xB10u, 1);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0, a1, 0xB10u, 1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v43);
  UserSessionState = W32GetUserSessionState(v4, v3);
  result = (const struct tagRECT *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
  v7 = result;
  if ( result )
  {
    v8 = (struct tagRECT *)&result[1];
    result = (const struct tagRECT *)IsRectEmptyInl(result + 1);
    v11 = (int)result;
    if ( !v2 && !(_DWORD)result )
    {
      result = *(const struct tagRECT **)&v7[2].right;
      if ( result
        || (result = (const struct tagRECT *)CreateEmptyRgnPublic(), (*(_QWORD *)&v7[2].right = result) != 0LL) )
      {
        if ( result != (const struct tagRECT *)1 )
        {
          v39 = W32GetUserSessionState(v10, v9);
          SetRectRgnIndirect(*(_QWORD *)(v39 + 63360), v8);
          v42 = W32GetUserSessionState(v41, v40);
          result = (const struct tagRECT *)GreCombineRgn(
                                             *(_QWORD *)&v7[2].right,
                                             *(_QWORD *)&v7[2].right,
                                             *(_QWORD *)(v42 + 63360),
                                             2LL);
        }
      }
      else
      {
        *(_QWORD *)&v7[2].right = 1LL;
      }
      v11 = 1;
      *v8 = 0LL;
    }
    v12 = *(HRGN *)&v7[2].right;
    if ( v12 )
    {
      xxxInternalInvalidate(a1, v12, 0x485u);
      result = (const struct tagRECT *)DeleteMaybeSpecialRgn(*(_QWORD *)&v7[2].right);
      *(_QWORD *)&v7[2].right = 0LL;
    }
    if ( !v11 )
    {
      v13 = *(_QWORD *)&v7->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v46 = 0LL;
        v27 = W32GetUserSessionState(v10, v12);
        v28 = GreSelectBitmap(*(_QWORD *)(v27 + 43248), v13);
        v29 = (_DWORD *)*((_QWORD *)a1 + 5);
        v30 = v28;
        v45.cx = v29[24] - v29[22];
        v45.cy = v29[25] - v29[23];
        v32 = *(HDC *)(W32GetUserSessionState(v31, (unsigned int)v45.cy) + 43248);
        v35 = W32GetUserSessionState(v34, v33);
        UpdateSprite(
          *(HDEV *)(*(_QWORD *)(v35 + 56968) + 40LL),
          a1,
          v36,
          0LL,
          0LL,
          &v45,
          v32,
          &v46,
          0,
          0LL,
          0x40000000u,
          v8);
        v25 = W32GetUserSessionState(v38, v37);
        v26 = v30;
      }
      else
      {
        v14 = W32GetUserSessionState(v10, v12);
        v15 = GreSelectBitmap(*(_QWORD *)(v14 + 43248), v13);
        SetOrClrWF(0, a1, 0xB20u, 1);
        DCEx = _GetDCEx(a1, 0LL, 1073807363LL);
        top = v8->top;
        v18 = (Gre::Base *)DCEx;
        left = v8->left;
        v22 = W32GetUserSessionState(v21, v20);
        GreBitBltInternal(
          v18,
          v8->left,
          v8->top,
          v8->right - v8->left,
          v8->bottom - v8->top,
          *(_QWORD *)(v22 + 43248),
          left,
          top,
          0xCC0020u,
          0,
          0);
        _ReleaseDC(v18);
        SetOrClrWF(1, a1, 0xB20u, 1);
        v25 = W32GetUserSessionState(v24, v23);
        v26 = v15;
      }
      result = (const struct tagRECT *)GreSelectBitmap(*(_QWORD *)(v25 + 43248), v26);
      *v8 = 0LL;
    }
  }
  if ( v43[0] )
  {
    result = v44;
    --v44[1].bottom;
  }
  return result;
}
