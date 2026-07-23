/*
 * XREFs of ObpUnlockHandleDatabaseEntry @ 0x1404A6BB0
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x140096064 (OBJECT_HEADER_TO_HANDLE_INFO.c)
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
  {
LABEL_2:
    --*(_BYTE *)(result + 11);
    goto LABEL_3;
  }
  v5 = *(int **)result;
  v6 = *v5;
  v4 = v5 + 2;
  result = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v4 == v2 )
      {
        if ( *((_BYTE *)v4 + 11) != 0xFF )
        {
          --*((_BYTE *)v4 + 11);
          result = 0LL;
LABEL_13:
          if ( result )
          {
            v4 = (_DWORD *)result;
            goto LABEL_2;
          }
          break;
        }
        result = (__int64)v4;
      }
      v4 += 4;
      if ( !--v6 )
        goto LABEL_13;
    }
  }
LABEL_3:
  if ( !*((_BYTE *)v4 + 11) && (v4[2] & 0xFFFFFF) == 0 )
    *(_QWORD *)v4 = 0LL;
  return result;
}
