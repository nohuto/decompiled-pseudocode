/*
 * XREFs of RtlLoadString @ 0x1800700A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrpAccessResourceData @ 0x18007031C (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLoadString(
        unsigned __int64 a1,
        unsigned __int16 a2,
        const WCHAR *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  bool v11; // di
  int v13; // edx
  unsigned __int16 v14; // cx
  int v15; // ebx
  __int16 v16; // r8
  unsigned __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-60h]
  _QWORD v21[4]; // [rsp+60h] [rbp-58h] BYREF

  v8 = (unsigned int)a3;
  v20 = a5;
  v18 = 0LL;
  v11 = (a4 & 1) == 0;
  if ( a1 && a5 && (a4 & 0xFFFFFFFE) == 0 )
  {
    if ( (a4 & 1) != 0 && (a7 || a8) )
      return 3221225659LL;
    if ( (unsigned int)a3 > 0xFFFF )
    {
      if ( *a3 )
      {
        if ( (int)RtlLocaleNameToLcid(a3, (int *)&v17, 3) < 0 )
          return 3221225485LL;
        v8 = (unsigned __int16)v17;
        LODWORD(v17) = (unsigned __int16)v17;
      }
      else
      {
        v8 = 0;
        LODWORD(v17) = 0;
      }
    }
    v21[0] = 6LL;
    v21[1] = (a2 >> 4) + 1;
    v21[2] = v8;
    v21[3] = a2;
    v17 = 0LL;
    if ( v11 )
    {
      v13 = LdrResSearchResource(a1, v21, 4u, 1u, (__int64)&v18, (__int64 *)&v17, a7, a8);
      if ( v13 >= 0 && v17 > 0xFFFF )
        v13 = -1073741701;
    }
    else
    {
      v13 = LdrpSearchResourceSection_U(a1, (__int64)v21, 4LL, 1u, &v19);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v13 = LdrpAccessResourceData(a1, v19, &v18, 0LL);
    }
    if ( v13 >= 0 && v18 )
    {
      v14 = 0;
      v15 = a2 & 0xF;
      v17 >>= 1;
      do
      {
        v16 = *(_WORD *)(v18 + 2LL * v14);
        v14 += v16 + 1;
        if ( v11 && v14 > v17 )
          return (unsigned int)-1073741701;
        --v15;
      }
      while ( v15 >= 0 );
      if ( v14 && v16 )
        v14 -= v16;
      *v20 = v18 + 2LL * v14;
      if ( a6 )
        *a6 = v16;
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
