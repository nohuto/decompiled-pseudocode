/*
 * XREFs of ObpUnlockHandleDatabaseEntry @ 0x14049CE60
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x1400D79B4 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 */

__int64 __fastcall ObpUnlockHandleDatabaseEntry(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  __int64 v3; // r8
  _DWORD *v4; // r9
  int *v5; // rax
  int v6; // ecx

  result = OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v4 = (_DWORD *)result;
  if ( (*(_BYTE *)(v3 + 27) & 0x40) != 0 )
    goto LABEL_15;
  v5 = *(int **)result;
  v6 = *v5;
  v4 = v5 + 2;
  result = 0LL;
  if ( !v6 )
    goto LABEL_9;
  while ( *(_QWORD *)v4 != v2 )
  {
LABEL_4:
    v4 += 4;
    if ( !--v6 )
      goto LABEL_8;
  }
  if ( *((_BYTE *)v4 + 11) == 0xFF )
  {
    result = (__int64)v4;
    goto LABEL_4;
  }
  --*((_BYTE *)v4 + 11);
  result = 0LL;
LABEL_8:
  if ( result )
  {
    v4 = (_DWORD *)result;
LABEL_15:
    --*(_BYTE *)(result + 11);
  }
LABEL_9:
  if ( !*((_BYTE *)v4 + 11) && (v4[2] & 0xFFFFFF) == 0 )
    *(_QWORD *)v4 = 0LL;
  return result;
}
