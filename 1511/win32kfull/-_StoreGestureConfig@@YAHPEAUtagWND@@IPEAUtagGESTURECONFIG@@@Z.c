/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C010B61C
 * Callers:
 *     SetGestureConfigSettings @ 0x1C0094780 (SetGestureConfigSettings.c)
 * Callees:
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C000C9AC (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C00946DC (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C010B79C (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C010B7C4 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C010B7FC (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C0203D8C (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v8; // rax
  int v9; // ebp
  int *i; // rbx
  int v11; // esi
  int v12; // edx
  __int64 v13; // r9
  int v14; // ecx
  int v15; // r9d
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int8 v18; // cl
  unsigned int v19; // edx
  struct tagGESTURECONFIGLIST *v21; // rcx
  int v22; // ecx
  unsigned int v23; // r9d
  struct tagGESTURECONFIGLIST *v24; // [rsp+68h] [rbp+20h] BYREF

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(a1);
  if ( !WindowGCList )
  {
    v8 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuota(64LL, 1667724117LL);
    WindowGCList = v8;
    if ( !v8 )
    {
LABEL_22:
      v22 = 14;
      goto LABEL_24;
    }
    memset(v8, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  v9 = 0;
  if ( !a2 )
    return 1LL;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v11 = i[1];
    v12 = *i;
    if ( (v11 & *i) != 0 )
      break;
    v13 = (unsigned int)*(i - 1);
    if ( !(_DWORD)v13 )
      break;
    if ( (unsigned int)v13 > 7 )
      break;
    v14 = ~dword_1C02E2628[v13];
    if ( (v14 & v12) != 0 || (v14 & v11) != 0 )
      break;
    if ( v12 || v11 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v13) )
      {
        if ( (unsigned int)FindGID(WindowGCList, v15, &v24) )
        {
          v21 = v24;
          *((_DWORD *)v24 + 4) = v11;
          *((_DWORD *)v21 + 3) = *i;
        }
        goto LABEL_16;
      }
      v16 = Win32AllocPoolWithQuota(24LL, 1667724117LL);
      if ( !v16 )
        goto LABEL_22;
      v17 = 1;
      *(_DWORD *)(v16 + 8) = *(i - 1);
      *(_DWORD *)(v16 + 16) = i[1];
      *(_DWORD *)(v16 + 12) = *i;
      v18 = *(_BYTE *)(v16 + 8) & 7;
      *(_QWORD *)v16 = WindowGCList[v18];
      WindowGCList[v18] = (struct tagGESTURECONFIGLIST *)v16;
      v19 = *(_DWORD *)(v16 + 8);
    }
    else
    {
      if ( !(unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v13) )
        goto LABEL_16;
      GCRemoveHashElement(WindowGCList, v23);
      v19 = *(i - 1);
      v17 = 0;
    }
    SetBitMask(a1, v19, v17);
LABEL_16:
    if ( ++v9 >= a2 )
      return 1LL;
  }
  v22 = 87;
LABEL_24:
  UserSetLastError(v22);
  return 0LL;
}
