/*
 * XREFs of ObpUnlockHandleDatabaseEntry @ 0x1404080D0
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     <none>
 */

char __fastcall ObpUnlockHandleDatabaseEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // ecx

  LOBYTE(v2) = *(_BYTE *)(a1 + 26);
  if ( (v2 & 4) != 0 )
  {
    v2 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
    v3 = a1 - v2;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    --*(_BYTE *)(v3 + 11);
    goto LABEL_12;
  }
  v4 = **(_DWORD **)v3;
  v3 = *(_QWORD *)v3 + 8LL;
  v2 = 0LL;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v3 == a2 )
      {
        if ( *(_BYTE *)(v3 + 11) != 0xFF )
        {
          --*(_BYTE *)(v3 + 11);
          v2 = 0LL;
LABEL_10:
          if ( v2 )
          {
            --*(_BYTE *)(v2 + 11);
            v3 = v2;
          }
          break;
        }
        v2 = v3;
      }
      v3 += 16LL;
      if ( !--v4 )
        goto LABEL_10;
    }
  }
LABEL_12:
  if ( !*(_BYTE *)(v3 + 11) && (*(_DWORD *)(v3 + 8) & 0xFFFFFF) == 0 )
    *(_QWORD *)v3 = 0LL;
  return v2;
}
