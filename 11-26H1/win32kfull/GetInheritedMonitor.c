/*
 * XREFs of GetInheritedMonitor @ 0x14011EDF0
 * Callers:
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x14011F35C (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x14011F4D8 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     UnionRect @ 0x14011F574 (UnionRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v2; // r12
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v10; // rsi
  unsigned int v11; // r8d
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r10
  int v16; // r15d
  BOOL v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r13d
  BOOL v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rbx
  int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rsi
  int v37; // ebx
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  __int128 v40; // [rsp+20h] [rbp-20h] BYREF
  __int128 v41; // [rsp+30h] [rbp-10h] BYREF
  __int64 v42; // [rsp+80h] [rbp+40h]
  __int64 v43; // [rsp+88h] [rbp+48h]

  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 13);
  if ( !v3 )
    return v2;
  v4 = *((_QWORD *)a1 + 3);
  if ( !v4 )
    goto LABEL_5;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 || v3 != *(_QWORD *)(v5 + 24) )
    goto LABEL_5;
  UserSessionState = W32GetUserSessionState(v3, v5);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41402), 1u);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v2;
    v23 = ValidateHwnd(Prop);
    if ( !v23 )
      return v2;
    v6 = *(_QWORD *)(v23 + 40);
    return ValidateHmonitorNoRip(*(_QWORD *)(v6 + 256));
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_DWORD *)(v10 + 288);
  if ( (v11 & 0xF) == 2
    || ((*(_BYTE *)(v10 + 16) & 8) != 0 || (*(_BYTE *)(v10 + 30) & 3) != 0)
    && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v10 + 104))
    && ((*(_BYTE *)(v10 + 26) & 8) == 0 || (*(_BYTE *)(v10 + 27) & 0x20) != 0)
    || (*(_BYTE *)(v10 + 20) & 0x40) != 0
    || (*((_DWORD *)a1 + 95) & 0x400) != 0 )
  {
    return v2;
  }
  v12 = *((_QWORD *)a1 + 15);
  if ( !v12 )
  {
LABEL_16:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(v10 + 42) & 0x2FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v40, *(_QWORD *)(*((_QWORD *)a1 + 35) + 8LL));
      if ( *(_QWORD *)v40 )
      {
        v41 = 0LL;
        if ( v12 || (v12 = *(_QWORD *)(*(_QWORD *)v40 + 8LL)) != 0 )
          v12 &= -(__int64)((unsigned int)IntersectRect(&v41, *((_QWORD *)a1 + 5) + 88LL, *(_QWORD *)(v12 + 40) + 88LL) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v40);
    }
    if ( v12 )
    {
      v2 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL));
      if ( v2 )
        return v2;
    }
    v13 = *((_QWORD *)a1 + 12);
    v14 = *((_QWORD *)a1 + 11);
    v43 = v13;
    while ( 2 )
    {
      v42 = v14;
      while ( v13 )
      {
        v15 = *((_QWORD *)a1 + 5);
        v40 = 0LL;
        v16 = *(_BYTE *)(v15 + 27) & 8;
        v17 = (*(_BYTE *)(v15 + 26) & 8) != 0 && (*(_BYTE *)(v15 + 27) & 0x20) == 0;
        v18 = *(_QWORD *)(v13 + 40);
        if ( (*(_BYTE *)(v18 + 31) & 0x10) != 0
          && ((*(_BYTE *)(v18 + 16) & 8) != 0 || (*(_BYTE *)(v18 + 30) & 3) != 0)
          && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v18 + 104))
          && ((*(_BYTE *)(v32 + 26) & 8) == 0 || (*(_BYTE *)(v32 + 27) & 0x20) != 0)
          && (*(_QWORD *)(v33 + 464) == *(_QWORD *)(v34 + 464) || *(_QWORD *)(v33 + 456) == *(_QWORD *)(v34 + 456))
          && (((unsigned __int16)(*(_DWORD *)(v32 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v35 + 288) >> 8)) & 0x1FF) == 0 )
        {
          if ( !v16 && !v17 )
            goto LABEL_70;
          v36 = v32 + 88;
          v37 = IsAdjacentRect((const struct tagRECT *)(v35 + 88), (const struct tagRECT *)(v32 + 88));
          if ( !v16 || v37 || (unsigned int)IntersectRect(&v40, *((_QWORD *)a1 + 5) + 88LL, v36) )
          {
            if ( !v17 || v37 )
              goto LABEL_70;
            if ( (unsigned int)UnionRect(&v40, *((_QWORD *)a1 + 5) + 88LL, v36) )
            {
              v39 = v40 - *v38;
              if ( (_QWORD)v40 == *v38 )
                v39 = *((_QWORD *)&v40 + 1) - v38[1];
              if ( !v39 )
              {
LABEL_70:
                v6 = *(_QWORD *)(v13 + 40);
                return ValidateHmonitorNoRip(*(_QWORD *)(v6 + 256));
              }
            }
          }
        }
        v14 = v42;
        v13 = *(_QWORD *)(v13 + 96);
        v43 = v13;
        if ( v42 )
          goto LABEL_26;
      }
      if ( !v14 )
        return v2;
LABEL_26:
      v19 = *((_QWORD *)a1 + 5);
      v40 = 0LL;
      v20 = *(_BYTE *)(v19 + 27) & 8;
      v21 = (*(_BYTE *)(v19 + 26) & 8) != 0 && (*(_BYTE *)(v19 + 27) & 0x20) == 0;
      v22 = *(_QWORD *)(v14 + 40);
      if ( (*(_BYTE *)(v22 + 31) & 0x10) == 0 || (*(_BYTE *)(v22 + 16) & 8) == 0 && (*(_BYTE *)(v22 + 30) & 3) == 0 )
        goto LABEL_29;
      if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v22 + 104))
        || (*(_BYTE *)(v24 + 26) & 8) != 0 && (*(_BYTE *)(v24 + 27) & 0x20) == 0 )
      {
        goto LABEL_29;
      }
      if ( *(_QWORD *)(v25 + 464) != *(_QWORD *)(v26 + 464) && *(_QWORD *)(v25 + 456) != *(_QWORD *)(v26 + 456) )
        goto LABEL_29;
      v27 = *((_QWORD *)a1 + 5);
      if ( (((unsigned __int16)(*(_DWORD *)(v27 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v24 + 288) >> 8)) & 0x1FF) != 0 )
        goto LABEL_29;
      if ( v20 || v21 )
      {
        v28 = v24 + 88;
        v29 = v27 + 88;
        v30 = IsAdjacentRect((const struct tagRECT *)v29, (const struct tagRECT *)(v24 + 88));
        if ( v20 )
        {
          if ( !v30 && !(unsigned int)IntersectRect(&v40, v29, v28) )
            goto LABEL_29;
        }
        if ( v21 && !v30 )
        {
          if ( !(unsigned int)UnionRect(&v40, v29, v28) )
            goto LABEL_29;
          v31 = v40 - *(_QWORD *)v29;
          if ( (_QWORD)v40 == *(_QWORD *)v29 )
            v31 = *((_QWORD *)&v40 + 1) - *(_QWORD *)(v29 + 8);
          if ( v31 )
          {
LABEL_29:
            v13 = v43;
            v14 = *(_QWORD *)(v42 + 88);
            continue;
          }
        }
      }
      break;
    }
    v3 = v42;
LABEL_5:
    v6 = *(_QWORD *)(v3 + 40);
    return ValidateHmonitorNoRip(*(_QWORD *)(v6 + 256));
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 456LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)
    || (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v12, a1) )
        break;
      v12 = *(_QWORD *)(v12 + 120);
    }
    while ( v12 );
    goto LABEL_16;
  }
  return 0LL;
}
