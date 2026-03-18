/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0072760
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(char a1)
{
  unsigned int v1; // r10d
  unsigned int i; // r9d
  _QWORD *SystemArgument2; // r8
  __int64 v4; // rax
  char v5; // al

  v1 = gcMaxHmgr;
  for ( i = 1; i < v1; ++i )
  {
    SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
    if ( a1 )
    {
      if ( a1 == *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * i + 14) )
        goto LABEL_7;
    }
    else if ( (unsigned __int8)(*((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * i + 14) - 1) <= 0x1Du )
    {
LABEL_7:
      v4 = *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * i);
      *((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * i + 2) &= ~1u;
      *(_DWORD *)(v4 + 8) = 0;
      *(_WORD *)(SystemArgument2[3 * i] + 12LL) = 0;
      *(_QWORD *)(SystemArgument2[3 * i] + 16LL) = 0LL;
      HIBYTE(SystemArgument2[3 * i + 1]) &= ~1u;
      v5 = HIBYTE(SystemArgument2[3 * i + 1]);
      if ( (v5 & 0x20) != 0 )
        SystemArgument2[3 * i + 2] = 0LL;
      HIBYTE(SystemArgument2[3 * i + 1]) = v5 & 0xDF;
      v1 = gcMaxHmgr;
    }
  }
}
