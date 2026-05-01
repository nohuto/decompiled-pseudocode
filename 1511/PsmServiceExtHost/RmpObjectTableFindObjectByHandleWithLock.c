/*
 * XREFs of RmpObjectTableFindObjectByHandleWithLock @ 0x180045FC8
 * Callers:
 *     RmpActivityHostFindByHandle @ 0x180040E20 (RmpActivityHostFindByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableFindObjectByHandleWithLock(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  __int64 v3; // r11
  unsigned int v4; // r10d
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // r9d

  v3 = 0LL;
  v4 = -1073741275;
  v5 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v6 = v5 & (a2[7]
           + 37
           * (a2[6] + 37 * (a2[5] + 37 * (a2[4] + 37 * (a2[3] + 37 * (a2[2] + 37 * (a2[1] + 37 * (*a2 + 11623883LL))))))));
  while ( 1 )
  {
    if ( v3 )
      goto LABEL_5;
    v7 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v7 )
      return v4;
    v3 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & (unsigned int)(v7 - 1));
LABEL_5:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_9;
    }
    v3 = 0LL;
LABEL_9:
    if ( !v3 )
      return v4;
    if ( *(_QWORD *)a2 == *(_QWORD *)(v3 + 24) )
    {
      v4 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
      *a3 = v3;
      return v4;
    }
  }
}
