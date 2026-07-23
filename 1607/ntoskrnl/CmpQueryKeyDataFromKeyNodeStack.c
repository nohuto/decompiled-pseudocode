/*
 * XREFs of CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPopulateCachedInformation @ 0x1401B6BD0 (CmpPopulateCachedInformation.c)
 *     CmpPopulateBasicInformation @ 0x140437300 (CmpPopulateBasicInformation.c)
 *     CmpPopulateNodeInformation @ 0x1404B6134 (CmpPopulateNodeInformation.c)
 *     CmpPopulateFullInformation @ 0x1404C1AC0 (CmpPopulateFullInformation.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A114 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14060BD20 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rdi
  __int64 *EntryAtLayerHeight; // rax
  __int64 v16; // rbx
  __int64 v17; // r9
  char v18; // si
  unsigned int v19; // edi
  _QWORD *v20; // rax
  unsigned int v21; // r10d
  unsigned int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  int v27; // eax
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v29; // r8d
  unsigned int v30; // r11d
  unsigned int v31; // r9d
  unsigned int v32; // r10d
  bool v33; // zf
  int v34; // eax
  unsigned int v36; // [rsp+48h] [rbp-51h]
  unsigned int v37; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v38; // [rsp+50h] [rbp-49h]
  unsigned int v39; // [rsp+58h] [rbp-41h]
  __int64 v40; // [rsp+60h] [rbp-39h] BYREF
  __int64 v41; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v42[15]; // [rsp+70h] [rbp-29h] BYREF
  int v43; // [rsp+F8h] [rbp+5Fh] BYREF
  int v44; // [rsp+100h] [rbp+67h]
  __int64 v45; // [rsp+108h] [rbp+6Fh]
  unsigned int v46; // [rsp+110h] [rbp+77h]

  v46 = a4;
  v45 = a3;
  v44 = a2;
  v5 = a2;
  memset(v42, 0, 0x30uLL);
  v7 = *a1;
  v8 = 0LL;
  v40 = 0LL;
  v9 = -1;
  v41 = 0xFFFFFFFFLL;
  v10 = 0;
  LOBYTE(v43) = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( (v7 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7, v7, v8);
      if ( EntryAtLayerHeight[2] != v8 )
        break;
      LOWORD(v7) = v7 - 1;
      if ( (v7 & 0x8000u) != 0LL )
      {
        v11 = 0LL;
        v10 = 0;
        goto LABEL_6;
      }
    }
    v14 = EntryAtLayerHeight[2];
    v10 = v8;
    v11 = *EntryAtLayerHeight;
    v40 = v14;
  }
LABEL_6:
  v16 = *(_QWORD *)(v14 + 4);
  v17 = (unsigned __int16)*(_DWORD *)(v14 + 52);
  v36 = *(_DWORD *)(v14 + 56);
  v37 = (unsigned __int16)*(_DWORD *)(v14 + 52);
  v38 = *(_DWORD *)(v14 + 60);
  v39 = *(_DWORD *)(v14 + 64);
  if ( *(char *)(v14 + 13) >= 0 )
  {
    v9 = *(_DWORD *)(v14 + 48);
    v10 = 1;
    v13 = *(unsigned __int16 *)(v14 + 74);
    v12 = v11;
    LOBYTE(v43) = 1;
  }
  LOWORD(v7) = v7 - 1;
  if ( (v7 & 0x8000u) == 0LL )
  {
    v18 = v43;
    v19 = v36;
    do
    {
      v20 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7, v7, v17);
      if ( v20[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v20) == 1 )
          break;
        if ( v16 < *(_QWORD *)(v23 + 4) )
          v16 = *(_QWORD *)(v23 + 4);
        if ( v19 < *(_DWORD *)(v23 + 56) )
          v19 = *(_DWORD *)(v23 + 56);
        if ( !v18 && *(char *)(v23 + 13) >= 0 )
        {
          v9 = *(_DWORD *)(v23 + 48);
          v18 = 1;
          v13 = *(unsigned __int16 *)(v23 + 74);
          v12 = v24;
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v24) )
          break;
      }
      LOWORD(v7) = v7 - 1;
    }
    while ( (v7 & 0x8000u) == 0LL );
    LOBYTE(v43) = v18;
    v5 = v44;
    v10 = v43;
    v36 = v19;
    v14 = v40;
    v39 = v22;
    v38 = v21;
    v37 = v17;
  }
  v25 = 0LL;
  if ( v10 && v13 )
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v12 + 8))(v12, v9, &v41);
  else
    v13 = 0;
  v26 = v25;
  if ( !v5 )
  {
    v42[0] = v16;
    v27 = CmpPopulateBasicInformation((unsigned int)v42, v14, v45, v46, (__int64)a5);
LABEL_28:
    SubKeyCountForKeyNodeStack = v27;
    goto LABEL_47;
  }
  if ( v5 == 1 )
  {
    v42[0] = v16;
    v27 = CmpPopulateNodeInformation(v42, v14, v25, v13, v45, v46, a5);
    goto LABEL_28;
  }
  SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v43);
  if ( SubKeyCountForKeyNodeStack >= 0 )
  {
    SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v40);
    if ( SubKeyCountForKeyNodeStack >= 0 )
    {
      if ( v43 )
      {
        v29 = v37;
        v30 = v36;
      }
      else
      {
        v29 = 0;
        v30 = 0;
      }
      if ( (_DWORD)v40 )
      {
        v31 = v38;
        v32 = v39;
      }
      else
      {
        v31 = 0;
        v32 = 0;
      }
      if ( v44 == 4 )
      {
        v33 = (*(_BYTE *)(v14 + 2) & 0x20) == 0;
        v42[0] = v16;
        HIDWORD(v42[1]) = v43;
        v42[2] = __PAIR64__(v40, v29);
        v42[3] = __PAIR64__(v32, v31);
        if ( v33 )
          v34 = *(unsigned __int16 *)(v14 + 72);
        else
          v34 = (unsigned __int16)(2 * *(_WORD *)(v14 + 72));
        LODWORD(v42[4]) = v34;
        v27 = CmpPopulateCachedInformation((__int64)v42, v45, v46, a5);
        goto LABEL_28;
      }
      if ( v44 == 2 )
      {
        v42[4] = __PAIR64__(v31, v40);
        HIDWORD(v42[2]) = v43;
        v42[3] = __PAIR64__(v30, v29);
        v42[0] = v16;
        LODWORD(v42[5]) = v32;
        v27 = CmpPopulateFullInformation(v42, v26, v13, v45, v46, a5);
        goto LABEL_28;
      }
      SubKeyCountForKeyNodeStack = -1073741811;
    }
  }
LABEL_47:
  if ( v26 )
    (*(void (__fastcall **)(__int64, __int64 *))(v12 + 16))(v12, &v41);
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
