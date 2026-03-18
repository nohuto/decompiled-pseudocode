/*
 * XREFs of vLinkEudcPFEsWorker @ 0x140324FF4
 * Callers:
 *     vLinkEudcPFEs @ 0x140324F0C (vLinkEudcPFEs.c)
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x140103DF4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x140173F20 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?pwszFamilyNameAlias@PFEOBJ@@QEAAPEAGPEAH@Z @ 0x1401D39C0 (-pwszFamilyNameAlias@PFEOBJ@@QEAAPEAGPEAH@Z.c)
 */

__int64 __fastcall vLinkEudcPFEsWorker(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  wchar_t *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a2;
  result = *(unsigned int *)(*a2 + 52);
  if ( (result & 8) == 0 )
  {
    v6 = 0;
    if ( *(_DWORD *)(v2 + 216) )
    {
      do
      {
        v7 = *(_QWORD *)(v2 + 8LL * v6 + 224);
        v16 = v7;
        if ( v7 )
        {
          if ( a1 )
          {
            result = PFEOBJ::bCheckFamilyName((PFEOBJ *)&v16, (const unsigned __int16 *)(a1 + 32), 0, 0LL);
            v8 = a1;
            if ( !(_DWORD)result )
              goto LABEL_14;
          }
          else
          {
            v15 = 0;
            v9 = PFEOBJ::pwszFamilyNameAlias((PFEOBJ *)&v16, &v15);
            result = (__int64)FindBaseFontEntry(v9, v10, v11);
            v8 = result;
            if ( !result )
            {
              if ( !v15 )
                goto LABEL_14;
              v14 = -1LL;
              do
                ++v14;
              while ( v9[v14] );
              result = (__int64)FindBaseFontEntry(&v9[v14 + 1], v12, v13);
              v8 = result;
              if ( !result )
              {
LABEL_14:
                *(_QWORD *)(v7 + 120) = 0LL;
                goto LABEL_7;
              }
            }
          }
          *(_QWORD *)(v7 + 120) = v8;
        }
LABEL_7:
        v2 = *a2;
        ++v6;
      }
      while ( v6 < *(_DWORD *)(*a2 + 216) );
    }
  }
  return result;
}
