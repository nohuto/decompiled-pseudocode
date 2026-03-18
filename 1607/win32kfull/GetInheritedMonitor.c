/*
 * XREFs of GetInheritedMonitor @ 0x1C0070E64
 * Callers:
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     DetectNewMonitor @ 0x1C01DB9AC (DetectNewMonitor.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010C4F4 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C010C644 (IsTitleWindow.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C014736C (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // rbp
  __int64 DesktopWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 Prop; // rax
  int v8; // r10d
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 i; // rdi
  int v12; // r13d
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r9d
  _QWORD *v20; // r14
  int v21; // eax
  int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // r14
  int v26; // eax
  int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rax
  BOOL v30; // [rsp+20h] [rbp-58h]
  BOOL v31; // [rsp+20h] [rbp-58h]
  _QWORD v32[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v33[2]; // [rsp+38h] [rbp-40h] BYREF

  v1 = 0LL;
  if ( !*((_QWORD *)a1 + 11) )
    return v1;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v4 != DesktopWindow )
  {
    if ( !v4 )
      return v1;
    v5 = *(_QWORD *)(v4 + 344);
    return ValidateHmonitorNoRip(v5);
  }
  Prop = GetProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v1;
    v29 = ValidateHwnd(Prop);
    if ( !v29 )
      return v1;
    v5 = *(_QWORD *)(v29 + 344);
    return ValidateHmonitorNoRip(v5);
  }
  if ( (*((_DWORD *)a1 + 88) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*((_BYTE *)a1 + 44) & 0x40) != 0
    || (*((_DWORD *)a1 + 72) & 0x8000) != 0 )
  {
    return v1;
  }
  v9 = *((_QWORD *)a1 + 13);
  if ( !v9 )
  {
LABEL_17:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 34LL) & 1) != 0 && (*((_WORD *)a1 + 33) & 0x3FFF) == 0x29C )
    {
      v24 = *((_QWORD *)a1 + 45);
      if ( v24 )
      {
        if ( !v9 )
        {
          v9 = *(_QWORD *)(v24 + 8);
          if ( !v9 )
          {
LABEL_19:
            v10 = *((_QWORD *)a1 + 10);
            for ( i = *((_QWORD *)a1 + 9); ; i = *(_QWORD *)(i + 72) )
            {
              do
              {
                if ( v10 )
                {
                  v12 = *((_BYTE *)a1 + 51) & 8;
                  v30 = ((*((_BYTE *)a1 + 50) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 51) >> 5) & 1) != 0;
                  if ( (*(_BYTE *)(v10 + 55) & 0x10) != 0
                    && ((*(_BYTE *)(v10 + 40) & 8) != 0 || (*(_BYTE *)(v10 + 54) & 3) != 0)
                    && !IsRectEmptyInl((const struct tagRECT *)(v10 + 128))
                    && ((*(_BYTE *)(v10 + 50) & 8) == 0 || (*(_BYTE *)(v10 + 51) & 0x20) != 0)
                    && (*(_QWORD *)(v14 + 384) == *(_QWORD *)(v15 + 384)
                     || *(_QWORD *)(v14 + 376) == *(_QWORD *)(v15 + 376))
                    && ((*((_BYTE *)a1 + 352) ^ *(_BYTE *)(v10 + 352)) & 0xF) == 0 )
                  {
                    if ( !v12 && !v16 )
                      goto LABEL_38;
                    v25 = (_QWORD *)((char *)a1 + 112);
                    v26 = IsAdjacentRect((const struct tagRECT *)a1 + 7, (const struct tagRECT *)(v10 + 112));
                    v27 = v26;
                    if ( !v12 || v26 || (unsigned int)IntersectRect(v33, (int *)a1 + 28, (int *)(v10 + 112)) )
                    {
                      if ( !v30 || v27 )
                        goto LABEL_38;
                      if ( (unsigned int)UnionRect(v33, (char *)a1 + 112, v10 + 112) )
                      {
                        v28 = v33[0] - *v25;
                        if ( v33[0] == *v25 )
                          v28 = v33[1] - *((_QWORD *)a1 + 15);
                        if ( !v28 )
                        {
LABEL_38:
                          v5 = *(_QWORD *)(v10 + 344);
                          return ValidateHmonitorNoRip(v5);
                        }
                      }
                    }
                  }
                  v10 = *(_QWORD *)(v10 + 80);
                }
                else if ( !i )
                {
                  return v1;
                }
              }
              while ( !i );
              v13 = *((_BYTE *)a1 + 51) & 8;
              v31 = ((*((_BYTE *)a1 + 50) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 51) >> 5) & 1) != 0;
              if ( (*(_BYTE *)(i + 55) & 0x10) != 0
                && ((*(_BYTE *)(i + 40) & 8) != 0 || (*(_BYTE *)(i + 54) & 3) != 0)
                && !IsRectEmptyInl((const struct tagRECT *)(i + 128))
                && ((*(_BYTE *)(i + 50) & 8) == 0 || (*(_BYTE *)(i + 51) & 0x20) != 0)
                && (*(_QWORD *)(v17 + 384) == *(_QWORD *)(v18 + 384) || *(_QWORD *)(v17 + 376) == *(_QWORD *)(v18 + 376))
                && ((*((_BYTE *)a1 + 352) ^ *(_BYTE *)(i + 352)) & 0xF) == 0 )
              {
                if ( !v13 && !v19 )
                  break;
                v20 = (_QWORD *)((char *)a1 + 112);
                v21 = IsAdjacentRect((const struct tagRECT *)a1 + 7, (const struct tagRECT *)(i + 112));
                v22 = v21;
                if ( !v13 || v21 || (unsigned int)IntersectRect(v32, (int *)a1 + 28, (int *)(i + 112)) )
                {
                  if ( !v31 || v22 )
                    break;
                  if ( (unsigned int)UnionRect(v32, (char *)a1 + 112, i + 112) )
                  {
                    v23 = v32[0] - *v20;
                    if ( v32[0] == *v20 )
                      v23 = v32[1] - *((_QWORD *)a1 + 15);
                    if ( !v23 )
                      break;
                  }
                }
              }
            }
            v5 = *(_QWORD *)(i + 344);
            return ValidateHmonitorNoRip(v5);
          }
        }
        v9 &= -(__int64)((unsigned int)IntersectRect(v32, (int *)a1 + 28, (int *)(v9 + 112)) != 0);
      }
    }
    if ( v9 )
    {
      v1 = ValidateHmonitorNoRip(*(_QWORD *)(v9 + 344));
      if ( v1 )
        return v1;
    }
    goto LABEL_19;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 376LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL)
    || (*(_DWORD *)(v9 + 352) & 0xF) == v8 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v9, a1) )
        break;
      v9 = *(_QWORD *)(v9 + 104);
    }
    while ( v9 );
    goto LABEL_17;
  }
  return 0LL;
}
