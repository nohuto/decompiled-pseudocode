/*
 * XREFs of AuthzBasepUpdateParentTypeList @ 0x140234350
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x140092320 (AuthzBasepAddAccessTypeList.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x140092400 (AuthzBasepSetAccessReasons.c)
 */

__int64 __fastcall AuthzBasepUpdateParentTypeList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // r11
  __int64 result; // rax
  int v10; // edi
  int v11; // r10d
  int v12; // ebx
  __int64 v13; // rcx
  __int64 i; // rdx
  __int64 v15; // r9
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  bool v21; // zf

  LODWORD(v6) = a3;
  v8 = a1;
  while ( 1 )
  {
    result = (unsigned int)v6;
    v10 = 0;
    v11 = -1;
    v12 = 0;
    v13 = 6LL * (unsigned int)v6;
    v6 = *(unsigned int *)(v8 + 48LL * (unsigned int)v6 + 20);
    if ( (_DWORD)v6 == -1 )
      return result;
    for ( i = (unsigned int)(v6 + 1); (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      result = *(unsigned __int16 *)(v8 + 48 * i);
      if ( (unsigned __int16)result <= *(_WORD *)(v8 + 48 * v6) )
        break;
      result = (unsigned __int16)result;
      if ( (unsigned __int16)result == *(unsigned __int16 *)(v8 + 8 * v13) )
      {
        v10 |= *(_DWORD *)(v8 + 48 * i + 24);
        v11 &= *(_DWORD *)(v8 + 48 * i + 28);
        v12 |= *(_DWORD *)(v8 + 48 * i + 32);
      }
    }
    v15 = 48 * v6;
    v16 = *(_DWORD *)(48 * v6 + v8 + 24);
    if ( v10 == v16 && v11 == *(_DWORD *)(v15 + v8 + 28) && v12 == *(_DWORD *)(v15 + v8 + 32) )
      return result;
    switch ( a5 )
    {
      case 0:
        *(_DWORD *)(v15 + v8 + 24) = v10;
        v21 = (v16 & ~v10) == 0;
        v18 = v16 & ~v10;
        goto LABEL_18;
      case 1:
        v20 = ~*(_DWORD *)(v15 + v8 + 28);
        *(_DWORD *)(v15 + v8 + 28) = v11;
        v18 = v11 & v20;
        v21 = v18 == 0;
LABEL_18:
        if ( !v21 )
        {
          v19 = 0x10000;
LABEL_20:
          AuthzBasepSetAccessReasons(v18, v19, a4, *(_QWORD *)(v15 + v8 + 40), 0);
        }
        break;
      case 2:
        v17 = ~*(_DWORD *)(v15 + v8 + 32);
        *(_DWORD *)(v15 + v8 + 32) = v12;
        v18 = v12 & v17;
        if ( v18 )
        {
          v19 = 0x20000;
          goto LABEL_20;
        }
        break;
      default:
        return result;
    }
  }
}
