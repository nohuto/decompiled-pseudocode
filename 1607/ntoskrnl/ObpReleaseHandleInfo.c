/*
 * XREFs of ObpReleaseHandleInfo @ 0x1404A5780
 * Callers:
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ObpReleaseHandleInfo(__int64 a1, __int64 a2, int *a3)
{
  _DWORD *result; // rax
  int v4; // edx
  int v5; // ecx
  int *v6; // rax
  int v7; // r9d

  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    result = (_DWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7]);
  else
    result = 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    v4 = result[2];
    v5 = v4;
LABEL_5:
    *a3 = v5 & 0xFFFFFF;
    result[2] = v4 ^ (v4 ^ (v4 - 1)) & 0xFFFFFF;
    goto LABEL_6;
  }
  v6 = *(int **)result;
  v7 = *v6;
  result = v6 + 2;
  if ( v7 )
  {
    while ( 1 )
    {
      v5 = result[2];
      if ( (v5 & 0xFFFFFF) != 0 && *(_QWORD *)result == a2 )
        break;
      result += 4;
      if ( !--v7 )
        goto LABEL_6;
    }
    v4 = result[2];
    goto LABEL_5;
  }
LABEL_6:
  if ( !*((_BYTE *)result + 11) && (result[2] & 0xFFFFFF) == 0 )
    *(_QWORD *)result = 0LL;
  return result;
}
