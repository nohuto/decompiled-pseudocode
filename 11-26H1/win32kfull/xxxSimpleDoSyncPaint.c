/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x140050370
 * Callers:
 *     xxxGetUpdateRect @ 0x14002BE14 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x14002C328 (xxxGetUpdateRgn.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     CalcWindowRgn @ 0x14002C744 (CalcWindowRgn.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     xxxSendEraseBkgnd @ 0x14012BCEC (xxxSendEraseBkgnd.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14012C19C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

LONG_PTR __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  LONG_PTR result; // rax
  __int64 v3; // rax
  int v4; // ebx
  int v5; // esi
  int v6; // ebp
  _DWORD *v7; // rax
  int v8; // r15d
  int v9; // edx
  int v10; // r14d
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // esi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v17; // rbp
  int v18; // ebx
  int v19; // r15d
  int v20; // r13d
  _DWORD *v21; // rax
  int v22; // r14d
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ecx
  int v27; // ebx
  int v28; // r13d
  _DWORD *v29; // rax
  int v30; // r14d
  int v31; // r15d
  unsigned __int64 v32; // rbx
  int v33; // esi
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 UserSessionState; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  __int64 EmptyRgnPublic; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // rax
  int v57; // [rsp+20h] [rbp-78h] BYREF
  __int16 v58; // [rsp+24h] [rbp-74h]
  __int128 v59; // [rsp+26h] [rbp-72h]
  __int128 v60; // [rsp+36h] [rbp-62h]
  __int16 v61; // [rsp+46h] [rbp-52h]
  int v62; // [rsp+48h] [rbp-50h]
  __int64 v63; // [rsp+4Ch] [rbp-4Ch]
  int v64; // [rsp+54h] [rbp-44h]
  int v65; // [rsp+58h] [rbp-40h]
  unsigned int v66; // [rsp+A0h] [rbp+8h]
  int v67; // [rsp+A8h] [rbp+10h]
  int v68; // [rsp+A8h] [rbp+10h]

  result = (LONG_PTR)a1;
  if ( !a1 )
  {
LABEL_4:
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 28);
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 232);
    *(_BYTE *)(v3 + 18) &= ~0x40u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_8;
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = v7[7];
    v9 = v7[6];
    v10 = v4 ^ v8;
    v11 = v7[58];
    v12 = v5 ^ v9;
    v13 = v6 ^ v11;
    if ( !v10 )
    {
      if ( v12 )
        goto LABEL_36;
      if ( !v13 )
        goto LABEL_8;
    }
    if ( (v10 & 0xB9CF0000) != 0 )
    {
      v33 = -16;
      goto LABEL_32;
    }
LABEL_36:
    if ( (v12 & 0x4E27A9) != 0 )
    {
      v33 = -20;
      v8 = v9;
    }
    else
    {
      if ( (v13 & 0x372C0) == 0 )
      {
LABEL_34:
        if ( (v10 & 0x1C40000) != 0 || (v12 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(a1, 1LL);
LABEL_8:
        v14 = *((_QWORD *)a1 + 5);
        result = *(unsigned __int8 *)(v14 + 17);
        v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2 | 1;
        if ( (result & 2) == 0 )
          v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2;
        if ( !v15 )
          return result;
        if ( (*(_BYTE *)(v14 + 31) & 0x10) == 0 )
        {
          SetOrClrWF(0, a1, 0x108u, 1);
          SetOrClrWF(0, a1, 0x102u, 1);
          return SetOrClrWF(0, a1, 0x104u, 1);
        }
        CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread((*(unsigned __int8 *)(v14 + 17) >> 2) & 2);
        if ( CurrentThreadWin32Thread )
          v17 = *CurrentThreadWin32Thread;
        else
          v17 = 0LL;
        result = *((_QWORD *)a1 + 5);
        if ( *(_QWORD *)(result + 136) )
        {
LABEL_25:
          if ( *((_QWORD *)a1 + 2) != v17 )
            return result;
          v32 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v32 <= 1 )
          {
LABEL_27:
            if ( (v15 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
              xxxSendNCPaint(a1, (HRGN)v32);
            if ( (v15 & 1) == 0 )
              return DeleteMaybeSpecialRgn(v32);
            v49 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v49 + 17) & 8) == 0
              || (DeleteMaybeSpecialRgn(v32), v49 = *((_QWORD *)a1 + 5), v32 = *(_QWORD *)(v49 + 136), v32 <= 1) )
            {
LABEL_47:
              if ( (*(_BYTE *)(v49 + 17) & 2) != 0 )
              {
                SetOrClrWF(0, a1, 0x102u, 1);
                SetOrClrWF(0, a1, 0x104u, 1);
                xxxSendEraseBkgnd(a1);
              }
              return DeleteMaybeSpecialRgn(v32);
            }
            EmptyRgnPublic = CreateEmptyRgnPublic();
            v32 = EmptyRgnPublic;
            if ( EmptyRgnPublic )
            {
              if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
              {
LABEL_54:
                v49 = *((_QWORD *)a1 + 5);
                goto LABEL_47;
              }
              GreDeleteObject(v32);
            }
            v32 = 1LL;
            goto LABEL_54;
          }
          v41 = CreateEmptyRgnPublic();
          v32 = v41;
          if ( v41 )
          {
            if ( (unsigned int)GreCombineRgn(v41, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
              goto LABEL_41;
            GreDeleteObject(v32);
          }
          v32 = 1LL;
LABEL_41:
          UserSessionState = W32GetUserSessionState(v43, v42);
          CalcWindowRgn((__int64)a1, *(_QWORD *)(UserSessionState + 63360), 1);
          v47 = W32GetUserSessionState(v46, v45);
          v48 = GreCombineRgn(
                  *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
                  *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
                  *(_QWORD *)(v47 + 63360),
                  1LL);
          if ( v48 )
          {
            if ( v48 == 1 )
            {
              GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
              SetOrClrWF(0, a1, 0x120u, 1);
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
                DecPaintCount(a1);
            }
          }
          else
          {
            GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
          }
          goto LABEL_27;
        }
        v18 = *(_DWORD *)(result + 28);
        v19 = *(_DWORD *)(result + 24);
        v20 = *(_DWORD *)(result + 232);
        *(_BYTE *)(result + 17) &= ~2u;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        {
LABEL_20:
          v25 = *((_QWORD *)a1 + 5);
          v26 = *(_DWORD *)(v25 + 232);
          v27 = *(_DWORD *)(v25 + 28);
          v28 = *(_DWORD *)(v25 + 24);
          *(_BYTE *)(v25 + 17) &= ~4u;
          v66 = v26;
          result = IsWindowDesktopComposed(a1);
          if ( !(_DWORD)result )
          {
LABEL_24:
            LOBYTE(v15) = v15 & 0xFE;
            goto LABEL_25;
          }
          v29 = (_DWORD *)*((_QWORD *)a1 + 5);
          v68 = v29[7];
          v30 = v28 ^ v29[6];
          result = v66 ^ v29[58];
          v31 = v27 ^ v68;
          if ( v27 == v68 )
          {
            if ( v30 )
            {
LABEL_66:
              if ( (v30 & 0x4E27A9) == 0 && (result & 0x372C0) == 0 )
              {
LABEL_64:
                if ( (v31 & 0x1C40000) != 0 || (v30 & 0x200A0381) != 0 )
                  result = (LONG_PTR)WindowMargins::CheckForChanges(a1, 1LL);
                goto LABEL_24;
              }
LABEL_63:
              DirtyVisRgnTrackers(a1);
              v56 = (void *)ReferenceDwmApiPort(v55, v54);
              result = DwmAsyncChildStyleChange(v56);
              goto LABEL_64;
            }
            if ( !(_DWORD)result )
              goto LABEL_24;
          }
          if ( (v31 & 0xB9CF0000) != 0 )
            goto LABEL_63;
          goto LABEL_66;
        }
        v21 = (_DWORD *)*((_QWORD *)a1 + 5);
        v22 = v19 ^ v21[6];
        v23 = v18 ^ v21[7];
        v24 = v20 ^ v21[58];
        v67 = v23;
        if ( !v23 )
        {
          if ( v22 )
          {
LABEL_59:
            if ( (v22 & 0x4E27A9) == 0 && (v24 & 0x372C0) == 0 )
            {
LABEL_57:
              if ( (v23 & 0x1C40000) != 0 || (v22 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(a1, 1LL);
              goto LABEL_20;
            }
LABEL_56:
            DirtyVisRgnTrackers(a1);
            v53 = (void *)ReferenceDwmApiPort(v52, v51);
            DwmAsyncChildStyleChange(v53);
            v23 = v67;
            goto LABEL_57;
          }
          if ( !v24 )
            goto LABEL_20;
        }
        if ( (v23 & 0xB9CF0000) != 0 )
          goto LABEL_56;
        goto LABEL_59;
      }
      v33 = -268435456;
      v8 = v11;
    }
LABEL_32:
    DirtyVisRgnTrackers(a1);
    v34 = *(_QWORD *)a1;
    v37 = (void *)ReferenceDwmApiPort(v36, v35);
    IncrementDWMWindowUniqueness(v39, v38, v40);
    if ( v37 )
    {
      v57 = 3932180;
      v61 = 0;
      v62 = 1073741846;
      v63 = v34;
      v64 = v33;
      v58 = 0x8000;
      v59 = 0LL;
      v65 = v8;
      v60 = 0LL;
      LpcRequestPort(v37, &v57);
      ObfDereferenceObject(v37);
    }
    goto LABEL_34;
  }
  while ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 2) == 0 )
  {
    result = *(_QWORD *)(result + 104);
    if ( !result )
      goto LABEL_4;
  }
  return result;
}
