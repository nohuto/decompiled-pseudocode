/*
 * XREFs of BcpDisplayCriticalString @ 0x14026EF50
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14026F254 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14026F484 (BcpDisplayProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14026FAA0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14026E350 (BgpDisplayCharacterEx.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14026E3F8 (BgpRasGetGlyphAdvanceWidth.c)
 *     BgpFoGetStringAdvanceWidth @ 0x14026ED18 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x14026F770 (BcpPrintSpaces.c)
 *     BcpSetCursorPosition @ 0x14026F8CC (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayCriticalString(__int16 *a1, int a2, unsigned int a3, int a4)
{
  int v5; // ebx
  bool v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  int *v10; // r14
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // ecx
  int GlyphAdvanceWidth; // eax
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // r9d
  unsigned __int64 v31; // [rsp+40h] [rbp-29h]
  int v32; // [rsp+50h] [rbp-19h]
  int v33; // [rsp+54h] [rbp-15h]
  __int64 v34; // [rsp+58h] [rbp-11h]
  _DWORD *v35; // [rsp+60h] [rbp-9h]
  __int64 v36; // [rsp+68h] [rbp-1h]
  unsigned int v37; // [rsp+D0h] [rbp+67h]
  bool v38; // [rsp+D8h] [rbp+6Fh]
  unsigned int v39; // [rsp+E0h] [rbp+77h] BYREF
  int v40; // [rsp+E8h] [rbp+7Fh] BYREF

  v39 = a3;
  v5 = dword_140386298;
  v36 = BcpCursor;
  v7 = 0;
  v38 = 0;
  v35 = (_DWORD *)((char *)&unk_14031E760 + 56 * a4);
  v8 = v35[3] + v35[7] + v35[5];
  v33 = v35[3] + v35[7];
  v9 = *(_QWORD *)(qword_140356660 + 24);
  *(_DWORD *)(v9 + 56) = a2;
  v10 = (int *)(v9 + 40);
  v34 = v9 + 40;
  *(_DWORD *)(qword_140356660 + 8) = a2;
  v11 = v36;
  if ( (int)BgpFoGetStringAdvanceWidth(v9 + 40, a1, &v39) >= 0 )
  {
    v7 = (unsigned int)v36 + v39 > v8;
    v38 = v7;
  }
  v12 = *v10;
  v13 = 0;
  v14 = HIDWORD(v36);
  v15 = 0;
  v16 = v5 - HIDWORD(v36);
  v32 = v12;
  v37 = 0;
  if ( v16 <= 0 )
    v16 = 0;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      v17 = (__int64)&BcpWorkspace;
      if ( v7 && v13 <= v15 )
      {
        v18 = *((_QWORD *)a1 + 1);
        v19 = 0;
        v20 = v15;
        v37 = v15;
        if ( *(_WORD *)(v18 + 2LL * v15) != 32 )
        {
          while ( 1 )
          {
            v21 = *(unsigned __int16 *)(v18 + 2 * v20);
            if ( (unsigned __int16)v21 <= 0xDu )
            {
              v22 = 9217;
              if ( _bittest(&v22, v21) )
                break;
            }
            GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(v34, v21, &v40, (__int64)&BcpWorkspace, &BcpWorkspace);
            v17 = (unsigned int)GlyphAdvanceWidth;
            if ( GlyphAdvanceWidth < 0 )
              goto LABEL_33;
            v19 += v40;
            v24 = ++v37;
            if ( v8 < v19 + v11 && v16 )
            {
              if ( v11 < v8 )
              {
                v25 = BcpPrintSpaces(qword_140356660, v11, v8, v14, v32, (__int64)&v39);
                v17 = (unsigned int)v25;
                if ( v25 < 0 )
                  goto LABEL_33;
                v16 = v39;
              }
              v11 = v33;
              v26 = v16 + v35[9];
              v16 = 0;
              v14 += v26;
              break;
            }
            v18 = *((_QWORD *)a1 + 1);
            v20 = (unsigned int)v24;
            if ( *(_WORD *)(v18 + 2 * v24) == 32 )
              break;
            v17 = (__int64)&BcpWorkspace;
          }
        }
        v7 = v38;
      }
      if ( (int)BgpRasGetGlyphAdvanceWidth(v34, *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v15), &v40, v17, &BcpWorkspace) < 0 )
        goto LABEL_33;
      if ( v8 >= v11 + v40 )
        break;
      if ( v11 < v8 )
      {
        if ( (int)BcpPrintSpaces(qword_140356660, v11, v8, v14, v32, (__int64)&v39) < 0 )
          goto LABEL_33;
        v16 = v39;
      }
      v11 = v33;
      v27 = v15;
      v28 = v16 + v35[9];
      v16 = 0;
      v14 += v28;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v15) != 32 )
        goto LABEL_29;
LABEL_32:
      ++v15;
      v13 = v37;
      if ( v15 >= (unsigned __int16)*a1 >> 1 )
        goto LABEL_33;
    }
    v27 = v15;
LABEL_29:
    if ( (int)BgpDisplayCharacterEx(
                *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v27),
                (__int64 *)qword_140356660,
                v11,
                v14,
                v32,
                -1,
                &v40,
                &v39,
                v31) < 0 )
      goto LABEL_33;
    v11 += v40;
    if ( v39 > v16 )
      v16 = v39;
    goto LABEL_32;
  }
LABEL_33:
  v39 = v16 + v14;
  BcpSetCursorPosition(v11, v14, &v39);
  return v29;
}
