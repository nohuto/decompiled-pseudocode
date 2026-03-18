/*
 * XREFs of BmfdOpenFontContext @ 0x1C0116624
 * Callers:
 *     BmfdQueryFontData @ 0x1C0116898 (BmfdQueryFontData.c)
 *     BmfdQueryAdvanceWidths @ 0x1C014721C (BmfdQueryAdvanceWidths.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 *     cjGlyphDataSimulated @ 0x1C0116CC8 (cjGlyphDataSimulated.c)
 *     ulGetRotate @ 0x1C0116EA8 (ulGetRotate.c)
 */

void *__fastcall BmfdOpenFontContext(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebp
  ULONG v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // r13
  int Rotate; // eax
  int v9; // r12d
  __int64 v10; // rbx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // r10d
  int v15; // r11d
  int v16; // r15d
  char *v17; // rax
  void *v18; // rsi
  HSEMAPHORE v19; // rcx
  __int64 v20; // rcx
  int v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v4 = 56;
  if ( v1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v5 )
    {
      if ( v5 <= *(_DWORD *)(v1 + 28) )
      {
        v6 = *(_DWORD *)(a1 + 12);
        v7 = 88LL * (v5 - 1) + v1 + 40;
        if ( ((v6 & 0x2000) == 0 || (*(_BYTE *)(*(_QWORD *)(v7 + 80) + 52LL) & 0x20) == 0)
          && ((v6 & 0x4000) == 0 || (*(_BYTE *)(*(_QWORD *)(v7 + 80) + 52LL) & 1) == 0) )
        {
          Rotate = ulGetRotate(&v25, a1 + 216);
          v9 = HIDWORD(v25) * *(unsigned __int16 *)(v7 + 44);
          v10 = v25;
          v11 = v25 * *(unsigned __int16 *)(v7 + 46);
          v24 = Rotate;
          v12 = cjGlyphDataSimulated(a1, v11, v9, (unsigned int)&v23, 0);
          v15 = v23;
          v22 = v12;
          if ( !v14 || v14 == 1800 )
            v9 = v23;
          else
            v22 = cjGlyphDataSimulated(a1, v13, v9, 0, v14);
          v16 = 0;
          if ( (_DWORD)v10 != 1 || HIDWORD(v25) != 1 )
          {
            v16 = 1;
            if ( ((unsigned int)(v15 + 7) >> 3) + 5 > 0x100 )
            {
              v4 = ((unsigned int)(v15 + 7) >> 3) + 61;
              v16 = 3;
            }
          }
          v17 = (char *)EngAllocMem(0, v4, 0x64666D42u);
          v18 = v17;
          if ( v17 )
          {
            v19 = ghsemBMFD;
            *(_DWORD *)v17 = 252;
            *((_QWORD *)v17 + 1) = *(_QWORD *)(a1 + 24);
            *((_QWORD *)v17 + 3) = v7;
            *((_DWORD *)v17 + 8) = *(_DWORD *)(a1 + 12);
            *((_DWORD *)v17 + 12) = v22;
            *((_DWORD *)v17 + 4) = v24;
            *(_QWORD *)(v17 + 36) = v10;
            *((_DWORD *)v17 + 13) = v16;
            *((_DWORD *)v17 + 11) = v9;
            EngAcquireSemaphore(v19);
            if ( *(_DWORD *)(v1 + 24) )
            {
LABEL_16:
              ++*(_DWORD *)(v1 + 24);
              EngReleaseSemaphore(ghsemBMFD);
              return v18;
            }
            if ( (unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(v1 + 16), &v23, &v22, 1) )
            {
              if ( *(int *)(v1 + 28) > 0 )
              {
                v20 = v1 + 40;
                do
                {
                  ++v2;
                  *(_QWORD *)v20 = v23 + *(int *)(v20 + 8);
                  v20 += 88LL;
                }
                while ( v2 < *(_DWORD *)(v1 + 28) );
              }
              goto LABEL_16;
            }
            EngReleaseSemaphore(ghsemBMFD);
            EngFreeMem(v18);
          }
          else
          {
            EngSetLastError(8u);
          }
        }
      }
    }
  }
  return 0LL;
}
