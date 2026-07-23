/*
 * XREFs of BcpDisplayCriticalString @ 0x1402399E4
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140239D28 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14023A008 (BcpDisplayProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14023941C (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x140239740 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x14023A3A0 (BcpPrintSpaces.c)
 *     BcpSetCursorPosition @ 0x14023A4FC (BcpSetCursorPosition.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x14023A970 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(__int16 *a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  int v6; // r12d
  unsigned int v7; // ebx
  int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // r10d
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // edx
  int v15; // edi
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r9d
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+50h] [rbp-28h]
  bool v29; // [rsp+54h] [rbp-24h]
  __int64 v30; // [rsp+58h] [rbp-20h]
  int v31; // [rsp+58h] [rbp-20h]
  __int64 v32; // [rsp+58h] [rbp-20h]
  int *v33; // [rsp+68h] [rbp-10h]
  unsigned int v34; // [rsp+C0h] [rbp+48h]
  int v35; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v36; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+60h]

  v36 = a3;
  v5 = 9LL * a4;
  if ( BcpTextBoxLeftEdgeOverride )
    v6 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
  else
    v6 = dword_1402F6930[18 * a4 + 4] + dword_1402F6930[18 * a4 + 8];
  if ( BcpTextBoxRightEdgeOverride )
    v7 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v7 = dword_1402F6930[18 * a4 + 4] + dword_1402F6930[18 * a4 + 6] + dword_1402F6930[18 * a4 + 8];
  v8 = dword_140358298;
  v30 = BcpCursor;
  v9 = *(_QWORD *)(qword_1403293F0 + 24);
  v29 = 0;
  *(_DWORD *)(v9 + 56) = a2;
  *(_DWORD *)(qword_1403293F0 + 8) = a2;
  v33 = (int *)(v9 + 40);
  v10 = v30;
  if ( (int)BgpFoGetStringAdvanceWidth((int)v9 + 40, a1, &v36) >= 0 )
    v29 = (unsigned int)v30 + v36 > v7;
  v11 = (int)v33;
  v12 = 0;
  v13 = HIDWORD(v30);
  v14 = 0;
  v15 = v8 - HIDWORD(v30);
  v34 = 0;
  v37 = 0;
  v28 = *v33;
  if ( v15 <= 0 )
    v15 = 0;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int64)&BcpWorkspace;
      if ( v29 && v12 <= v14 )
      {
        v17 = *((_QWORD *)a1 + 1);
        v18 = v14;
        v34 = v14;
        v31 = 0;
        if ( *(_WORD *)(v17 + 2LL * v14) != 32 )
        {
          while ( 1 )
          {
            v19 = *(unsigned __int16 *)(v17 + 2 * v18);
            if ( (unsigned __int16)v19 <= 0xDu )
            {
              v20 = 9217;
              if ( _bittest(&v20, v19) )
                break;
            }
            if ( (int)BgpRasGetGlyphAdvanceWidth(
                        v11,
                        v19,
                        (unsigned int)&v35,
                        (unsigned int)&BcpWorkspace,
                        (__int64)&BcpWorkspace) < 0 )
              goto LABEL_39;
            v16 = v34 + 1;
            v31 += v35;
            ++v34;
            if ( v7 < v31 + v10 && v15 )
            {
              if ( v10 < v7 )
              {
                LODWORD(v16) = BcpPrintSpaces(qword_1403293F0, v10, v7, v13, v28, (__int64)&v36);
                if ( (v16 & 0x80000000) != 0LL )
                  goto LABEL_39;
                v15 = v36;
              }
              v10 = v6;
              v21 = v15 + dword_1402F6930[2 * v5 + 10];
              v15 = 0;
              v13 += v21;
              break;
            }
            v17 = *((_QWORD *)a1 + 1);
            v18 = (unsigned int)v16;
            if ( *(_WORD *)(v17 + 2 * v16) == 32 )
              break;
            v11 = (int)v33;
            v16 = (unsigned __int64)&BcpWorkspace;
          }
          v14 = v37;
        }
      }
      v32 = v14;
      if ( (int)BgpRasGetGlyphAdvanceWidth(
                  (_DWORD)v33,
                  *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v14),
                  (unsigned int)&v35,
                  v16,
                  (__int64)&BcpWorkspace) < 0 )
        goto LABEL_39;
      if ( v7 >= v10 + v35 )
        break;
      if ( v10 < v7 )
      {
        if ( (int)BcpPrintSpaces(qword_1403293F0, v10, v7, v13, v28, (__int64)&v36) < 0 )
          goto LABEL_39;
        v15 = v36;
      }
      v22 = v32;
      v10 = v6;
      v23 = v15 + dword_1402F6930[2 * v5 + 10];
      v15 = 0;
      v13 += v23;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v32) != 32 )
        goto LABEL_35;
LABEL_38:
      v14 = v37 + 1;
      v12 = v34;
      v11 = (int)v33;
      v24 = (unsigned __int16)*a1 >> 1;
      v37 = v14;
      if ( v14 >= v24 )
        goto LABEL_39;
    }
    v22 = v32;
LABEL_35:
    if ( (int)BgpDisplayCharacterEx(
                *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v22),
                (__int64 *)qword_1403293F0,
                v10,
                v13,
                v28,
                -1,
                &v35,
                &v36,
                v27) < 0 )
      goto LABEL_39;
    v10 += v35;
    if ( v36 > v15 )
      v15 = v36;
    goto LABEL_38;
  }
LABEL_39:
  v36 = v15 + v13;
  BcpSetCursorPosition(v10, v13, &v36);
  return v25;
}
