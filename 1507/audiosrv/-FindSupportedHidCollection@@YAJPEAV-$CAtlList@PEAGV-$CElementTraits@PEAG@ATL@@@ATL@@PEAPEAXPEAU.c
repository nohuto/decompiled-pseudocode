/*
 * XREFs of ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18006BE30
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x18006C180 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     ?IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18006C09C (-IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 */

__int64 __fastcall FindSupportedHidCollection(_QWORD *a1, _QWORD *a2, _OWORD *a3, struct _HIDP_PREPARSED_DATA **a4)
{
  _QWORD *v4; // r14
  unsigned int v8; // ebx
  const WCHAR *v9; // rcx
  struct _HIDP_PREPARSED_DATA *v10; // rsi
  HANDLE FileW; // rax
  void *v12; // rdi
  __int128 v13; // xmm1
  struct _HIDP_PREPARSED_DATA *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct _HIDP_CAPS v18; // [rsp+40h] [rbp-68h] BYREF
  struct _HIDP_PREPARSED_DATA *v19; // [rsp+B0h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  v8 = -2147023728;
  while ( v4 && v8 == -2147023728 )
  {
    v9 = (const WCHAR *)v4[2];
    v10 = 0LL;
    v4 = (_QWORD *)*v4;
    v19 = 0LL;
    FileW = CreateFileW(v9, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
    v12 = FileW;
    if ( FileW == (HANDLE)-1LL )
      goto LABEL_7;
    if ( IsSupportedHidCollection(FileW, &v18, &v19) )
    {
      v8 = 0;
      v13 = *(_OWORD *)&v18.Reserved[3];
      v14 = v19;
      *a3 = *(_OWORD *)&v18.Usage;
      v15 = *(_OWORD *)&v18.Reserved[11];
      a3[1] = v13;
      v16 = *(_OWORD *)&v18.NumberInputValueCaps;
      a3[2] = v15;
      a3[3] = v16;
      *a2 = v12;
      *a4 = v14;
    }
    else
    {
      v10 = v19;
LABEL_7:
      v8 = -2147023728;
      if ( v12 != (void *)-1LL )
        CloseHandle(v12);
      if ( v10 )
        HidD_FreePreparsedData(v10);
    }
  }
  return v8;
}
