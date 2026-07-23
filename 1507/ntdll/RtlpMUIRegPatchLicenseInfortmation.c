/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x18001CE50
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18001D3C0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpIsALicensedRegularLanguage @ 0x18001CF98 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     GetNameFromLangListNode @ 0x18001E8A0 (GetNameFromLangListNode.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18006DDE4 (RtlpIsALicensedLIPLanguage.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  bool v2; // cc
  PVOID Heap; // r15
  int v4; // edi
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r8
  int InstalledLanguageIndexByName; // eax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  PVOID v13; // [rsp+28h] [rbp-30h]
  __int16 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v4 = *(unsigned __int16 *)(a1 + 4) - 1;
  if ( v4 >= 0 )
  {
    v5 = *(_WORD *)(a1 + 4) - 1;
    v6 = 6LL * v4;
    v7 = v6;
    do
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( !*(_WORD *)(v6 + v8) )
        goto LABEL_13;
      v13 = Heap;
      v12 = 11141120;
      if ( (int)GetNameFromLangListNode(g_RegInfo, v7 + v8, &v12) < 0 )
        goto LABEL_13;
      if ( *((_DWORD *)g_RegInfo + 30) < 0x3E8u )
      {
        LOBYTE(v9) = 1;
        InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(g_RegInfo, v13, v9, &v14);
      }
      else
      {
        if ( (int)RtlpIsALicensedRegularLanguage(g_RegInfo, v13) >= 0 )
          goto LABEL_12;
        InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage(g_RegInfo, v13);
      }
      if ( InstalledLanguageIndexByName >= 0 )
LABEL_12:
        *(_QWORD *)(a1 + 32) |= 1LL << v5;
LABEL_13:
      --v5;
      v7 -= 6LL;
      v6 -= 6LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
