/*
 * XREFs of ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C005F240
 * Callers:
 *     ?GetValuesFromInf@@YAHPEAU_DEVICE_OBJECT@@KPEAUtagModeCap@@@Z @ 0x1C005DE90 (-GetValuesFromInf@@YAHPEAU_DEVICE_OBJECT@@KPEAUtagModeCap@@@Z.c)
 *     ?GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C005EFA0 (-GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?xwtol@@YAKPEBG@Z @ 0x1C005F310 (-xwtol@@YAKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall ParseModeCap(unsigned __int16 *a1, struct tagModeCap *a2, int a3)
{
  int v3; // ebx
  int v4; // r15d
  unsigned int v6; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  wchar_t *v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // eax
  wchar_t *v16; // rax
  wchar_t *v17; // r15
  wchar_t *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r10
  unsigned int v21; // esi
  bool v22; // cf
  int v23; // ecx
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-20h]
  int v26; // [rsp+24h] [rbp-1Ch]
  unsigned int v27; // [rsp+28h] [rbp-18h]
  int v28; // [rsp+2Ch] [rbp-14h]

  v3 = 0;
  v4 = -1;
  v25 = 0;
  v26 = -1;
  v6 = -1;
  v28 = -1;
  v27 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( a1 )
    {
      do
      {
        if ( v9 >= 4 )
          break;
        v16 = wcschr(a1, 0x2Cu);
        v17 = v16;
        if ( v16 )
          *v16 = 0;
        v18 = wcschr(a1, 0x2Du);
        if ( v18 )
        {
          *v18 = 0;
          v19 = xwtol(a1);
          a1 = (unsigned __int16 *)(v20 + 2);
          *(&v25 + v9) = v19;
        }
        else
        {
          *(&v25 + v9) = 0;
        }
        v21 = v9 + 1;
        *(&v25 + v21) = xwtol(a1);
        a1 = v17 + 1;
        v9 = v21 + 1;
      }
      while ( v17 );
      v6 = v28;
      v8 = v27;
      v4 = v26;
      v3 = v25;
    }
    if ( *((_DWORD *)a2 + 3) > v8 )
      v8 = *((_DWORD *)a2 + 3);
    v22 = *((_DWORD *)a2 + 2) < v6;
    *((_DWORD *)a2 + 3) = v8;
    if ( v22 )
      v6 = *((_DWORD *)a2 + 2);
    v23 = 1000 * v3;
    *((_DWORD *)a2 + 2) = v6;
    if ( *((_DWORD *)a2 + 4) > (unsigned int)(1000 * v3) )
      v23 = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v23;
    v24 = 1000 * v4;
    if ( *((_DWORD *)a2 + 5) < (unsigned int)(1000 * v4) )
      v24 = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v24;
    return 1LL;
  }
  if ( a1 )
  {
    do
    {
      if ( v9 >= 4 )
        break;
      v10 = wcschr(a1, 0x2Cu);
      if ( v10 )
        *v10 = 0;
      v11 = xwtol(a1);
      a1 = (unsigned __int16 *)(v12 + 2);
      v13 = v9++;
      *(&v25 + v13) = v11;
    }
    while ( v12 );
    if ( v25 )
    {
      v14 = v26;
      if ( v26 != -1 )
      {
        *(_DWORD *)a2 = v25;
        *((_DWORD *)a2 + 2) = v27;
        *((_DWORD *)a2 + 1) = v14;
        return 1LL;
      }
    }
  }
  return 0LL;
}
