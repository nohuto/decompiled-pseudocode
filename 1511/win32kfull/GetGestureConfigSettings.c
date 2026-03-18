/*
 * XREFs of GetGestureConfigSettings @ 0x1C0203ECC
 * Callers:
 *     NtUserGetGestureConfig @ 0x1C021A200 (NtUserGetGestureConfig.c)
 * Callees:
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C000C9AC (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00946DC (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C010B79C (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C010B7FC (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, char a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v8; // edx
  BOOL v9; // r15d
  _DWORD *v10; // rcx
  struct tagVWPLGESTUREDATA *GCData; // r14
  void **WindowGCList; // rax
  __int64 v13; // r11
  unsigned __int8 *v14; // r12
  _DWORD *v15; // rbx
  __int64 v16; // rbp
  struct tagGESTURECONFIGLIST **v17; // r13
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // r11d
  struct tagGESTURECONFIGLIST *v21; // rcx
  int v22; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct tagVWPLGESTUREDATA *v26; // r14
  unsigned int v27; // r11d
  struct tagGESTURECONFIGLIST **v28; // r15
  unsigned __int8 *v29; // r12
  unsigned int v30; // ebp
  int *v31; // rbx
  __int64 v32; // r9
  int v33; // r11d
  struct tagGESTURECONFIGLIST *v34; // r8
  int v35; // r9d
  struct tagGESTURECONFIGLIST *v36; // [rsp+68h] [rbp+20h] BYREF

  v5 = *a4;
  v6 = (__int64)a5;
  v8 = 0;
  v9 = (a3 & 1) != 0;
  if ( (_DWORD)v5 )
  {
    v10 = a5;
    while ( (unsigned int)(*v10 - 1) <= 6 )
    {
      ++v8;
      v10 += 3;
      if ( v8 >= (unsigned int)v5 )
        goto LABEL_5;
    }
    UserSetLastError(87);
    return 0LL;
  }
LABEL_5:
  GCData = GetGCData(a1);
  WindowGCList = GetWindowGCList(a1);
  if ( GCData )
  {
    v14 = *(unsigned __int8 **)GCData;
    if ( !(_DWORD)v5 )
      goto LABEL_23;
    v15 = (_DWORD *)(v6 + 8);
    v16 = v5;
    v17 = (struct tagGESTURECONFIGLIST **)WindowGCList;
    while ( (unsigned int)IsBitSet(v14, *(v15 - 2)) )
    {
      if ( (unsigned int)FindGID(v17, v18, &v36) )
      {
        v21 = v36;
        *(v15 - 1) = *((_DWORD *)v36 + 3);
        v22 = *((_DWORD *)v21 + 4);
LABEL_16:
        *v15 = v22;
      }
LABEL_18:
      v15 += 3;
      if ( !--v16 )
      {
        v6 = (__int64)a5;
        goto LABEL_23;
      }
    }
    if ( *((_DWORD *)GCData + 2) == v20 )
    {
      if ( *((_DWORD *)GCData + 3) == v20 )
      {
        *(_QWORD *)(v15 - 1) = 0LL;
        goto LABEL_18;
      }
      v22 = *(_DWORD *)(v19 + 4 * v18);
      *(v15 - 1) = v20;
    }
    else
    {
      *(v15 - 1) = *(_DWORD *)(v19 + 4 * v18);
      v22 = *((_DWORD *)GCData + 3);
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v5 )
  {
    v24 = v6 + 8;
    v25 = v5;
    do
    {
      *(_QWORD *)(v24 - 4) = v13;
      v24 += 12LL;
      --v25;
    }
    while ( v25 );
  }
LABEL_23:
  if ( v9 )
  {
    if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      return 1LL;
    if ( a1 )
    {
      do
      {
        a1 = (struct tagWND *)*((_QWORD *)a1 + 11);
        if ( !a1 )
          break;
        v26 = GetGCData(a1);
        v28 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
        if ( v26 )
        {
          v29 = *(unsigned __int8 **)v26;
          v30 = v27;
          if ( (_DWORD)v5 )
          {
            v31 = (int *)(v6 + 8);
            do
            {
              if ( (unsigned int)IsBitSet(v29, *(v31 - 2)) )
              {
                if ( (unsigned int)FindGID(v28, v32, &v36) )
                {
                  v34 = v36;
                  v35 = (*v31 | *(v31 - 1)) ^ (*((_DWORD *)v36 + 4) | *((_DWORD *)v36 + 3));
                  *(v31 - 1) |= v35 & *((_DWORD *)v36 + 3);
                  *v31 |= *((_DWORD *)v34 + 4) & v35;
                }
              }
              else if ( *((_DWORD *)v26 + 2) == v33 )
              {
                if ( *((_DWORD *)v26 + 3) == v33 )
                {
                  if ( !v28 )
                    break;
                }
                else
                {
                  *v31 = ~*(v31 - 1) & dword_1C02E2628[v32];
                }
              }
              else
              {
                *(v31 - 1) = ~*v31 & dword_1C02E2628[v32];
              }
              ++v30;
              v31 += 3;
            }
            while ( v30 < (unsigned int)v5 );
            v6 = (__int64)a5;
          }
        }
      }
      while ( !(unsigned int)IsTopLevelWindow((__int64)a1) );
    }
  }
  return 1LL;
}
