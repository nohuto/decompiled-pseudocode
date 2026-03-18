/*
 * XREFs of GetGestureConfigSettings @ 0x1401E4A1C
 * Callers:
 *     NtUserGetGestureConfig @ 0x1401E45C0 (NtUserGetGestureConfig.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401E4C98 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401E5074 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1401E50D8 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1402516E4 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 */

__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, char a3, unsigned int *a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rdx
  struct tagWND *v9; // rbx
  unsigned __int8 **v10; // r10
  void **WindowGCList; // r15
  unsigned __int8 *v13; // r14
  _DWORD *v14; // r9
  __int64 v15; // rdi
  _DWORD *v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // eax
  int v20; // r8d
  struct tagGESTURECONFIGLIST *v21; // rdx
  struct tagGESTURECONFIGLIST *i; // rcx
  int v23; // eax
  struct tagVWPLGESTUREDATA *GCData; // r14
  struct tagGESTURECONFIGLIST **v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int8 *v28; // r13
  unsigned int v29; // ebp
  int *v30; // rdi
  __int64 v31; // r9
  struct tagGESTURECONFIGLIST *v32; // r9
  int v33; // r10d
  int v34; // ecx
  int v35; // eax
  struct tagGESTURECONFIGLIST *v36; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  v6 = *a4;
  v7 = a3 & 1;
  v8 = 0LL;
  v36 = 0LL;
  v9 = a1;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= (unsigned int)v6 )
    {
      GetGCData(a1);
      WindowGCList = GetWindowGCList(v9);
      if ( !v10 )
      {
        if ( (_DWORD)v6 )
        {
          v26 = v5 + 8;
          v27 = v6;
          do
          {
            *(_QWORD *)(v26 - 4) = 0LL;
            v26 += 12LL;
            --v27;
          }
          while ( v27 );
        }
        goto LABEL_7;
      }
      v13 = *v10;
      if ( !(_DWORD)v6 )
      {
LABEL_7:
        if ( !v7 )
          return 1LL;
LABEL_28:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( IsTopLevelWindow((__int64)v9) )
              return 1LL;
            if ( !v9 )
              return 1LL;
            v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
            if ( !v9 )
              return 1LL;
            GCData = GetGCData(v9);
            v25 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(v9);
            if ( !GCData )
              continue;
            break;
          }
          v28 = *(unsigned __int8 **)GCData;
          v29 = 0;
          if ( !(_DWORD)v6 )
            continue;
          break;
        }
        v30 = (int *)(v5 + 8);
        while ( 1 )
        {
          if ( (unsigned int)IsBitSet(v28, *(v30 - 2)) )
          {
            if ( (unsigned int)FindGID(v25, v31, &v36) )
            {
              v32 = v36;
              v33 = *v30;
              v34 = (*v30 | *(v30 - 1)) ^ (*((_DWORD *)v36 + 4) | *((_DWORD *)v36 + 3));
              *(v30 - 1) |= v34 & *((_DWORD *)v36 + 3);
              v35 = v33 | v34 & *((_DWORD *)v32 + 4);
LABEL_45:
              *v30 = v35;
            }
          }
          else
          {
            if ( !*((_DWORD *)GCData + 2) )
            {
              if ( !*((_DWORD *)GCData + 3) )
              {
                if ( !v25 )
                  goto LABEL_48;
                goto LABEL_47;
              }
              v35 = ~*(v30 - 1) & dword_140362C98[v31];
              goto LABEL_45;
            }
            *(v30 - 1) = ~*v30 & dword_140362C98[v31];
          }
LABEL_47:
          ++v29;
          v30 += 3;
          if ( v29 >= (unsigned int)v6 )
          {
LABEL_48:
            v5 = a5;
            goto LABEL_28;
          }
        }
      }
      v14 = (_DWORD *)(v5 + 8);
      v15 = v6;
      while ( 1 )
      {
        if ( (unsigned int)IsBitSet(v13, *(v14 - 2)) )
        {
          v20 = 0;
          v21 = 0LL;
          for ( i = (struct tagGESTURECONFIGLIST *)WindowGCList[v18 & 7]; i; i = *(struct tagGESTURECONFIGLIST **)i )
          {
            if ( *((_DWORD *)i + 2) == (_DWORD)v18 )
            {
              v21 = i;
              v20 = 1;
            }
          }
          v36 = v21;
          if ( !v20 )
            goto LABEL_15;
          *(v16 - 1) = *((_DWORD *)v21 + 3);
          v23 = *((_DWORD *)v21 + 4);
          goto LABEL_24;
        }
        if ( *(_DWORD *)(v17 + 8) )
          break;
        v19 = *(_DWORD *)(v17 + 12);
        *(v16 - 1) = 0;
        if ( v19 )
        {
          v23 = dword_140362C98[v18];
          goto LABEL_24;
        }
        *v16 = 0;
LABEL_15:
        v14 = v16 + 3;
        if ( !--v15 )
          goto LABEL_7;
      }
      *(v16 - 1) = dword_140362C98[v18];
      v23 = *(_DWORD *)(v17 + 12);
LABEL_24:
      *v16 = v23;
      goto LABEL_15;
    }
    if ( (unsigned int)(*(_DWORD *)(a5 + 12 * v8) - 1) > 6 )
      break;
    v8 = (unsigned int)(v8 + 1);
  }
  UserSetLastError(87);
  return 0LL;
}
