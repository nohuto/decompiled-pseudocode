/*
 * XREFs of ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C014C2D0
 * Callers:
 *     InitializeScripts @ 0x1C0378000 (InitializeScripts.c)
 * Callees:
 *     pvFindResource @ 0x1C014EC7C (pvFindResource.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall LOADSTRING(void *a1, unsigned int a2, unsigned __int16 *a3, int a4)
{
  char v6; // di
  __int64 Resource; // rax
  unsigned __int16 *v8; // rdx
  int v9; // edi
  unsigned __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  int v13; // ebx
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  v6 = a2;
  Resource = pvFindResource((_DWORD)a1, -1, (a2 >> 4) + 1, 6, (__int64)&v14);
  v8 = (unsigned __int16 *)Resource;
  if ( !Resource )
    goto LABEL_15;
  v9 = v6 & 0xF;
  v10 = Resource + 2 * ((unsigned __int64)v14 >> 1);
  for ( result = 0LL; (unsigned __int64)v8 < v10; v8 += result )
  {
    result = *v8;
    v12 = v9;
    ++v8;
    --v9;
    if ( !v12 )
      break;
  }
  if ( a3 )
  {
    if ( (unsigned __int64)v8 < v10 )
    {
      v13 = a4 - 1;
      if ( v13 > (int)result )
        v13 = result;
      memmove(a3, v8, 2LL * v13);
      goto LABEL_11;
    }
LABEL_15:
    v13 = 0;
LABEL_11:
    if ( a3 )
      a3[v13] = 0;
    return (unsigned int)v13;
  }
  return result;
}
