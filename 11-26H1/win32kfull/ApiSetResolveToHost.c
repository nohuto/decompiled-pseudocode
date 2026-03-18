/*
 * XREFs of ApiSetResolveToHost @ 0x14034EAF0
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x14026C56C (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x140255A38 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x14034EC1C (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v6; // rbx
  char v8; // di
  __int64 v9; // rcx
  const WCHAR *v10; // rdx
  unsigned __int64 v11; // rax
  _WORD *v12; // rax
  unsigned int v13; // r8d
  unsigned __int16 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx

  v6 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4);
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 && (*(_BYTE *)(v6 + 30) & 4) == 0 )
      return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4);
  }
  v8 = 0;
  *(_OWORD *)a5 = 0LL;
  v9 = *a2;
  if ( (unsigned __int16)v9 >= 8u )
  {
    v10 = (const WCHAR *)*((_QWORD *)a2 + 1);
    v11 = *(_QWORD *)v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v12 = (_WORD *)((char *)v10 + v9);
      v13 = v9;
      do
      {
        if ( v13 <= 1 )
          break;
        --v12;
        v13 -= 2;
      }
      while ( *v12 != 45 );
      v14 = (unsigned __int16)v13 >> 1;
      if ( v14 )
      {
        v15 = ApiSetpSearchForApiSet((_DWORD *)v6, v10, v14);
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 20) )
          {
            v16 = *(unsigned int *)(v15 + 16);
            v8 = 1;
            *(_QWORD *)(a5 + 8) = v6 + *(unsigned int *)(v16 + v6 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + v6 + 16);
            *(_WORD *)a5 = *(_WORD *)(v16 + v6 + 16);
          }
        }
      }
    }
  }
  *a4 = v8;
  return 0LL;
}
