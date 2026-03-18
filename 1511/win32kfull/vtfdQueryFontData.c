/*
 * XREFs of vtfdQueryFontData @ 0x1C012C298
 * Callers:
 *     vtfdQueryFontDataTE @ 0x1C012C1E0 (vtfdQueryFontDataTE.c)
 * Callees:
 *     vFill_GlyphData @ 0x1C012C3C8 (vFill_GlyphData.c)
 *     cjVtfdDeviceMetrics @ 0x1C012C494 (cjVtfdDeviceMetrics.c)
 *     vtfdOpenFontContext @ 0x1C012C5C8 (vtfdOpenFontContext.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     bCreatePath @ 0x1C0248D84 (bCreatePath.c)
 *     bReconnectVtfdFont @ 0x1C02491D4 (bReconnectVtfdFont.c)
 */

__int64 __fastcall vtfdQueryFontData(__int64 a1, int a2, unsigned int a3, char *a4, __int64 a5)
{
  __int64 v9; // rbx
  unsigned __int8 **v10; // rax
  unsigned __int8 *v11; // rsi
  unsigned __int8 *v12; // r12
  int v13; // edi
  unsigned int v15; // edi
  char *v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  char v22; // [rsp+30h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 28LL) & 1) != 0 && !(unsigned int)bReconnectVtfdFont() )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = vtfdOpenFontContext(a1);
  v9 = *(_QWORD *)(a1 + 56);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = *(unsigned __int8 ***)(v9 + 112);
  v11 = *v10;
  v12 = &(*v10)[*(unsigned int *)(v9 + 124)];
  v13 = a2 - 2;
  if ( !v13 )
  {
    if ( a3 > v11[96] - (unsigned int)v11[95] )
      v15 = v11[97];
    else
      v15 = a3;
    v16 = &v22;
    if ( a4 )
      v16 = a4;
    vFill_GlyphData(v9, v16, v15);
    *((_DWORD *)v16 + 2) = a3;
    if ( !a5 )
      return 0LL;
    v17 = v15 + 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 48LL) & 0x1000) != 0 )
    {
      v18 = 2 * v15;
      v19 = 2 * v17;
    }
    else
    {
      v18 = 4 * v15;
      v19 = 4 * v17;
    }
    v20 = *(unsigned __int16 *)&v11[v18 + 117];
    v21 = v11[(unsigned int)v19 + 117] | (v11[v19 + 118] << 8);
    if ( v21 >= v20
      && v21 + *(_DWORD *)(v9 + 124) <= *(_DWORD *)(*(_QWORD *)(v9 + 112) + 12LL)
      && (unsigned int)bCreatePath((unsigned int)v12 + v20, (unsigned int)v12 + v21, v9, a5, *((_DWORD *)v16 + 5)) )
    {
      return 0LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( v13 != 1 )
    return 0xFFFFFFFFLL;
  if ( a5 )
    return cjVtfdDeviceMetrics(v9, a5);
  else
    return 124LL;
}
