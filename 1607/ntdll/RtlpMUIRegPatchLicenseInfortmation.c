/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x1800114C8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013D90 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpIsALicensedLIPLanguage @ 0x18001146C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180011610 (RtlpIsALicensedRegularLanguage.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180040C20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     GetNameFromLangListNode @ 0x180043364 (GetNameFromLangListNode.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  bool v2; // cc
  wchar_t *Heap; // r15
  int v4; // edi
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r8
  int InstalledLanguageIndexByName; // eax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  wchar_t *v13; // [rsp+28h] [rbp-30h]
  __int16 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
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
        InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage((__int64)g_RegInfo, v13);
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
