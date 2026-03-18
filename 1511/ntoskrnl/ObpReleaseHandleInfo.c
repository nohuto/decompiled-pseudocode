/*
 * XREFs of ObpReleaseHandleInfo @ 0x14062E160
 * Callers:
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x1400D79B4 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 */

__int64 __fastcall ObpReleaseHandleInfo(__int64 a1)
{
  __int64 result; // rax
  int *v2; // r8
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // edx
  int v7; // ecx

  result = OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v5 = result;
  if ( (*(_BYTE *)(v4 + 27) & 0x40) != 0 )
  {
    v6 = *(_DWORD *)(result + 8);
    *v2 = v6 & 0xFFFFFF;
    *(_DWORD *)(result + 8) = v6 ^ (v6 ^ (v6 - 1)) & 0xFFFFFF;
  }
  else
  {
    result = *(_QWORD *)result;
    v7 = *(_DWORD *)result;
    v5 = result + 8;
    if ( *(_DWORD *)result )
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v5 + 8);
        if ( (result & 0xFFFFFF) != 0 && *(_QWORD *)v5 == v3 )
          break;
        v5 += 16LL;
        if ( !--v7 )
          goto LABEL_9;
      }
      *v2 = result & 0xFFFFFF;
      result = (unsigned int)result ^ ((unsigned int)result ^ ((_DWORD)result - 1)) & 0xFFFFFF;
      *(_DWORD *)(v5 + 8) = result;
    }
  }
LABEL_9:
  if ( !*(_BYTE *)(v5 + 11) && (*(_DWORD *)(v5 + 8) & 0xFFFFFF) == 0 )
    *(_QWORD *)v5 = 0LL;
  return result;
}
