/*
 * XREFs of AslpFileQuery16BitModuleName @ 0x1406C8B88
 * Callers:
 *     AslpFileGet16BitModuleName @ 0x1406C6F3C (AslpFileGet16BitModuleName.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int8 *v8; // rdx
  __int64 v9; // rcx
  size_t v10; // rsi
  int v11; // r8d

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 576) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 544);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 536);
    if ( v6 < v5 + 64 || (v7 = *(unsigned __int16 *)(v5 + v4 + 38), v6 < v7 + 1) )
    {
      v11 = 3503;
    }
    else
    {
      v8 = (unsigned __int8 *)(v4 + v7 + v5);
      v9 = *v8;
      if ( (unsigned int)(v9 - 1) > 0xFE )
      {
        v11 = 3512;
      }
      else
      {
        v10 = *v8;
        if ( v6 >= (int)v5 + (int)v7 + 1LL + v9 )
        {
          memmove(a1, v8 + 1, v10);
          a1[v10] = 0;
          return v3;
        }
        v11 = 3519;
      }
    }
    v3 = -1073741701;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileQuery16BitModuleName", v11, (unsigned int)"File mapping invalid");
    return v3;
  }
  return (unsigned int)-1073741637;
}
