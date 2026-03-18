/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006A0DC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(char a1)
{
  unsigned int v1; // r10d
  unsigned int i; // r9d
  __int64 v3; // r8
  __int64 v4; // rax
  char v5; // al

  v1 = gcMaxHmgr;
  for ( i = 1; i < v1; ++i )
  {
    v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    if ( a1 )
    {
      if ( a1 == *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i + 14) )
        goto LABEL_7;
    }
    else if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i + 14) - 1) <= 0x1Du )
    {
LABEL_7:
      v4 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i);
      *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i + 8) &= ~1u;
      *(_DWORD *)(v4 + 8) = 0;
      *(_WORD *)(*(_QWORD *)(v3 + 24LL * i) + 12LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v3 + 24LL * i) + 16LL) = 0LL;
      *(_BYTE *)(v3 + 24LL * i + 15) &= ~1u;
      v5 = *(_BYTE *)(v3 + 24LL * i + 15);
      if ( (v5 & 0x20) != 0 )
        *(_QWORD *)(v3 + 24LL * i + 16) = 0LL;
      *(_BYTE *)(v3 + 24LL * i + 15) = v5 & 0xDF;
      v1 = gcMaxHmgr;
    }
  }
}
