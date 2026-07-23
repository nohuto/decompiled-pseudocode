/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x1404F54C0
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpMarkCurrentValueDirty @ 0x14054E314 (CmpMarkCurrentValueDirty.c)
 *     CmpFindSubKeyByName @ 0x1405603A4 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x1405603BC (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x140560738 (CmpWalkPath.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpFindPathByNameEx @ 0x1406010C8 (CmpFindPathByNameEx.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140609D10 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmpDoCompareKeyName @ 0x1404F5740 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1404F5850 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404F5E50 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(__int64 a1, __int64 a2, __m128i *a3, unsigned int *a4)
{
  int v4; // esi
  __m128i *v6; // rbp
  unsigned int SubKeyInLeafWithStatus; // ebx
  unsigned int v10; // r15d
  _WORD *v11; // rdi
  __int16 v12; // ax
  WCHAR *v13; // rbx
  __int64 v14; // rbp
  WCHAR v15; // ax
  unsigned __int16 v16; // bx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  _DWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v22; // [rsp+38h] [rbp-50h]
  unsigned int v23; // [rsp+90h] [rbp+8h] BYREF
  __m128i *v24; // [rsp+A0h] [rbp+18h]
  char v25; // [rsp+A8h] [rbp+20h] BYREF

  v24 = a3;
  v4 = 0;
  v21[0] = -1;
  v6 = a3;
  SubKeyInLeafWithStatus = -1073741772;
  v21[1] = 0;
  v10 = 0;
  *a4 = -1;
  if ( *(_DWORD *)(a1 + 192) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a2 + 4LL * v10 + 20) )
      {
        v11 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                         a1,
                         *(unsigned int *)(a2 + 4LL * v10 + 28),
                         v21);
        if ( !v11 )
          return 3221225626LL;
        if ( *v11 != 26994 )
          goto LABEL_5;
        if ( (int)CmpFindSubKeyInRoot(a1, (_DWORD)v11, (_DWORD)v6, 0, (__int64)&v23) < 0 )
        {
LABEL_35:
          SubKeyInLeafWithStatus = -1073741670;
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v21);
          return SubKeyInLeafWithStatus;
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v21);
        if ( v23 != -1 )
          break;
      }
LABEL_16:
      if ( ++v10 >= *(_DWORD *)(a1 + 192) )
        return SubKeyInLeafWithStatus;
    }
    v11 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v23, v21);
    if ( !v11 )
      return 3221225626LL;
LABEL_5:
    if ( *v11 == 26732 )
    {
      v12 = _mm_cvtsi128_si32(*v6);
      v22 = *v6;
      if ( v12 )
      {
        v13 = (WCHAR *)v22.m128i_i64[1];
        v14 = (unsigned __int16)(((unsigned __int16)(v12 - 1) >> 1) + 1);
        do
        {
          v15 = *v13;
          if ( *v13 >= 0x61u )
          {
            if ( v15 > 0x7Au )
              v15 = RtlUpcaseUnicodeChar(v15);
            else
              v15 -= 32;
          }
          ++v13;
          v4 = v15 + 37 * v4;
          --v14;
        }
        while ( v14 );
        v6 = v24;
      }
      v23 = -1;
      v16 = 0;
      if ( !v11[1] )
      {
LABEL_14:
        SubKeyInLeafWithStatus = -1073741772;
LABEL_15:
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v21);
        v4 = 0;
        goto LABEL_16;
      }
      while ( 1 )
      {
        if ( v4 == *(_DWORD *)&v11[4 * v16 + 4] )
        {
          v18 = CmpDoCompareKeyName(a1, v6, 0LL, *(unsigned int *)&v11[4 * v16 + 2]);
          if ( v18 == 2 )
            goto LABEL_35;
          if ( !v18 )
            break;
        }
        if ( ++v16 >= v11[1] )
          goto LABEL_14;
      }
      v19 = v16;
      SubKeyInLeafWithStatus = 0;
      v20 = *(_DWORD *)&v11[4 * v19 + 2];
      v23 = v20;
    }
    else
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                                 a1,
                                 (_DWORD)v11,
                                 (_DWORD)v6,
                                 0,
                                 (__int64)&v23,
                                 (__int64)&v25);
      if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_25;
      v20 = v23;
    }
    if ( v20 != -1 )
    {
      *a4 = v20;
      SubKeyInLeafWithStatus = 0;
LABEL_25:
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v21);
      return SubKeyInLeafWithStatus;
    }
    goto LABEL_15;
  }
  return 3221225524LL;
}
