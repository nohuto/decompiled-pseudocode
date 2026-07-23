/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x180068DE0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001B8EC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     GetNameFromLangListNode @ 0x18001C9AC (GetNameFromLangListNode.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlpIsALicensedLIPLanguage @ 0x180068D84 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180068F28 (RtlpIsALicensedRegularLanguage.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  bool v2; // cc
  unsigned __int16 *Heap; // r15
  int v4; // edi
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  int InstalledLanguageIndexByName; // eax
  _UNICODE_STRING v11; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
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
      v11.Buffer = Heap;
      *(_DWORD *)&v11.Length = 11141120;
      if ( (int)GetNameFromLangListNode((__int64)g_RegInfo, (_WORD *)(v7 + v8), &v11) < 0 )
        goto LABEL_13;
      if ( *((_DWORD *)g_RegInfo + 30) < 0x3E8u )
      {
        InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(
                                         (__int64)g_RegInfo,
                                         v11.Buffer,
                                         1,
                                         &v12);
      }
      else
      {
        if ( (int)RtlpIsALicensedRegularLanguage(g_RegInfo, v11.Buffer) >= 0 )
          goto LABEL_12;
        InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage((__int64)g_RegInfo, v11.Buffer);
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
