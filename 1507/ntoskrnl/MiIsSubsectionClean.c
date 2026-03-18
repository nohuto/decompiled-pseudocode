/*
 * XREFs of MiIsSubsectionClean @ 0x140211890
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiIsSubsectionClean(__int64 a1)
{
  unsigned int v1; // edi
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 104) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v3 + 8LL * *(unsigned int *)(a1 + 44);
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 32LL) )
    return 0LL;
  v8 = 17;
  v5 = 0LL;
  if ( v3 >= v4 )
    return v1;
  while ( (v3 & 0xFFF) == 0 || v8 == 17 )
  {
    if ( v8 != 17 )
      MiUnlockProtoPoolPage(v5, v8);
    v5 = MiCheckProtoPtePageState(v3, (unsigned __int64)&v8);
    if ( v5 )
      break;
    v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_19:
    if ( v3 >= v4 )
      goto LABEL_25;
  }
  v6 = MiLockLeafPage((unsigned __int64 *)v3, 0LL);
  if ( !v6 )
  {
LABEL_18:
    v3 += 8LL;
    goto LABEL_19;
  }
  v7 = *(_QWORD *)v3;
  if ( v3 + 0x90482413000LL <= 0x7F8 )
    LOBYTE(v7) = MiReadPteShadow(v3, *(_QWORD *)v3);
  if ( (v7 & 1) == 0 )
  {
    if ( *(_WORD *)(v6 + 32) )
    {
      v1 = 2;
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(v6 + 34) & 0x18) != 0 )
    {
      v1 = 1;
      goto LABEL_24;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_18;
  }
  v1 = 2 - ((*(_BYTE *)(v6 + 34) & 0x18) != 0);
LABEL_24:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_25:
  if ( v8 != 17 )
    MiUnlockProtoPoolPage(v5, v8);
  return v1;
}
