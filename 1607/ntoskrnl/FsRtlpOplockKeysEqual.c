/*
 * XREFs of FsRtlpOplockKeysEqual @ 0x14007B258
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockBreakToII @ 0x14007B80C (FsRtlpOplockBreakToII.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B3464 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockKeysEqual @ 0x140135CC0 (FsRtlOplockKeysEqual.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x14007B518 (IoGetOplockKeyContextEx.c)
 */

char __fastcall FsRtlpOplockKeysEqual(__int64 a1, __int64 a2, char a3)
{
  char v6; // di
  __int64 OplockKeyContext; // rbx
  __int64 v8; // rax
  int v9; // ebp
  bool v10; // zf
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8

  v6 = 1;
  if ( (a3 & 0x40) == 0
    || a1
    && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)) != 0
    && *(_QWORD *)(v12 + 136)
    && (v13 = IoGetOplockKeyContextEx(a1)) != 0
    && (*(_BYTE *)(v13 + 2) & 1) != 0
    && (v14 = *(_QWORD *)(v12 + 136), *(_DWORD *)(v13 + 4) == *(_DWORD *)v14)
    && *(_WORD *)(v13 + 8) == *(_WORD *)(v14 + 4)
    && *(_WORD *)(v13 + 10) == *(_WORD *)(v14 + 6)
    && *(_BYTE *)(v13 + 12) == *(_BYTE *)(v14 + 8)
    && *(_BYTE *)(v13 + 13) == *(_BYTE *)(v14 + 9)
    && *(_BYTE *)(v13 + 14) == *(_BYTE *)(v14 + 10)
    && *(_BYTE *)(v13 + 15) == *(_BYTE *)(v14 + 11)
    && *(_BYTE *)(v13 + 16) == *(_BYTE *)(v14 + 12)
    && *(_BYTE *)(v13 + 17) == *(_BYTE *)(v14 + 13)
    && *(_BYTE *)(v13 + 18) == *(_BYTE *)(v14 + 14)
    && *(_BYTE *)(v13 + 19) == *(_BYTE *)(v14 + 15) )
  {
    if ( a1 && a2 )
    {
      if ( a1 == a2 )
        return v6;
      OplockKeyContext = IoGetOplockKeyContextEx(a1);
      v8 = IoGetOplockKeyContextEx(a2);
      if ( OplockKeyContext )
      {
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
          {
            v9 = a3 & 0x10;
            if ( v9 || (*(_BYTE *)(OplockKeyContext + 2) & 2) != 0 )
            {
              if ( !v9 )
              {
                if ( *(_DWORD *)(OplockKeyContext + 20) != *(_DWORD *)(v8 + 20)
                  || *(_WORD *)(OplockKeyContext + 24) != *(_WORD *)(v8 + 24)
                  || *(_WORD *)(OplockKeyContext + 26) != *(_WORD *)(v8 + 26)
                  || *(_BYTE *)(OplockKeyContext + 28) != *(_BYTE *)(v8 + 28)
                  || *(_BYTE *)(OplockKeyContext + 29) != *(_BYTE *)(v8 + 29)
                  || *(_BYTE *)(OplockKeyContext + 30) != *(_BYTE *)(v8 + 30)
                  || *(_BYTE *)(OplockKeyContext + 31) != *(_BYTE *)(v8 + 31)
                  || *(_BYTE *)(OplockKeyContext + 32) != *(_BYTE *)(v8 + 32)
                  || *(_BYTE *)(OplockKeyContext + 33) != *(_BYTE *)(v8 + 33)
                  || *(_BYTE *)(OplockKeyContext + 34) != *(_BYTE *)(v8 + 34) )
                {
                  return 0;
                }
                v10 = *(_BYTE *)(OplockKeyContext + 35) == *(_BYTE *)(v8 + 35);
LABEL_22:
                if ( v10 )
                  return v6;
                return 0;
              }
              if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
              {
                if ( *(_DWORD *)(OplockKeyContext + 4) != *(_DWORD *)(v8 + 20)
                  || *(_WORD *)(OplockKeyContext + 8) != *(_WORD *)(v8 + 24)
                  || *(_WORD *)(OplockKeyContext + 10) != *(_WORD *)(v8 + 26)
                  || *(_BYTE *)(OplockKeyContext + 12) != *(_BYTE *)(v8 + 28)
                  || *(_BYTE *)(OplockKeyContext + 13) != *(_BYTE *)(v8 + 29)
                  || *(_BYTE *)(OplockKeyContext + 14) != *(_BYTE *)(v8 + 30)
                  || *(_BYTE *)(OplockKeyContext + 15) != *(_BYTE *)(v8 + 31)
                  || *(_BYTE *)(OplockKeyContext + 16) != *(_BYTE *)(v8 + 32)
                  || *(_BYTE *)(OplockKeyContext + 17) != *(_BYTE *)(v8 + 33)
                  || *(_BYTE *)(OplockKeyContext + 18) != *(_BYTE *)(v8 + 34) )
                {
                  return 0;
                }
                v10 = *(_BYTE *)(OplockKeyContext + 19) == *(_BYTE *)(v8 + 35);
                goto LABEL_22;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
