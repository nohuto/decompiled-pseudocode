/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A9D18
 * Callers:
 *     GreAngleArc @ 0x1C02918E4 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02AA770 (NtGdiArcInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02A9FB4 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 */

__int64 __fastcall bPartialArc(
        unsigned int a1,
        EPATHOBJ *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  int v12; // edi
  int v13; // esi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r13
  struct _POINTL v18; // rax
  int v19; // eax
  struct _POINTL v20; // rax
  struct _POINTL v21; // rax
  int v22; // eax
  struct _POINTL v23; // rax
  struct _POINTL v26; // [rsp+68h] [rbp-21h] BYREF
  int v27; // [rsp+70h] [rbp-19h]
  int v28; // [rsp+74h] [rbp-15h]
  struct _POINTL v29; // [rsp+78h] [rbp-11h]

  if ( a10 )
  {
    v12 = (a5 + 1) & 3;
    v13 = bPartialQuadrantArc(a1, a2, a3);
    if ( v12 == a8 )
      return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    v14 = (1922922357LL * *(int *)(a3 + 48)) >> 32;
    v15 = (1922922357LL * *(int *)(a3 + 52)) >> 32;
    v16 = (1922922357LL * *(int *)(a3 + 56)) >> 32;
    v17 = (1922922357LL * *(int *)(a3 + 60)) >> 32;
    while ( 1 )
    {
      if ( !v12 )
      {
        v26 = *(struct _POINTL *)(a3 + 8);
        v23 = v26;
        v26.x -= v16;
        v26.y -= v17;
        v27 = v23.x - v14;
        v28 = v23.y - v15;
        v29 = v23;
        v29.x = v23.x - *(_DWORD *)(a3 + 48);
        v22 = *(_DWORD *)(a3 + 52);
        goto LABEL_14;
      }
      if ( v12 == 1 )
      {
        v26 = *(struct _POINTL *)(a3 + 16);
        v21 = v26;
        v26.x += v14;
        v26.y += v15;
        v27 = v21.x - v16;
        v28 = v21.y - v17;
        v29 = v21;
        v29.x = v21.x - *(_DWORD *)(a3 + 56);
        v22 = *(_DWORD *)(a3 + 60);
LABEL_14:
        v29.y -= v22;
        goto LABEL_15;
      }
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        v26 = *(struct _POINTL *)(a3 + 32);
        v18 = v26;
        v26.x -= v14;
        v26.y -= v15;
        v27 = v16 + v18.x;
        v28 = v17 + v18.y;
        v29 = v18;
        v29.x = *(_DWORD *)(a3 + 56) + v18.x;
        v19 = *(_DWORD *)(a3 + 60);
LABEL_11:
        v29.y += v19;
      }
LABEL_15:
      v13 &= EPATHOBJ::bPolyBezierTo(a2, 0LL, &v26, 3u);
      v12 = ((_BYTE)v12 + 1) & 3;
      if ( v12 == a8 )
        return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    }
    v26 = *(struct _POINTL *)(a3 + 24);
    v20 = v26;
    v26.x += v16;
    v26.y += v17;
    v27 = v14 + v20.x;
    v28 = v15 + v20.y;
    v29 = v20;
    v29.x = *(_DWORD *)(a3 + 48) + v20.x;
    v19 = *(_DWORD *)(a3 + 52);
    goto LABEL_11;
  }
  return (unsigned int)bPartialQuadrantArc(a1, a2, a3);
}
