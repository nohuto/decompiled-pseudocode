/*
 * XREFs of NtGdiExtEscape @ 0x1C0140160
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     GreExtEscape @ 0x1C01403F0 (GreExtEscape.c)
 *     bUMPD @ 0x1C0141304 (bUMPD.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C014D6C8 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GreNamedEscape @ 0x1C029A084 (GreNamedEscape.c)
 *     UmfdDispatchEscape @ 0x1C02A403C (UmfdDispatchEscape.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02B8B24 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z.c)
 */

__int64 __fastcall NtGdiExtEscape(HDC a1, char *a2, int a3, unsigned int a4, int a5, HANDLE *Src, int a7, char *a8)
{
  __int64 v8; // r13
  char *v9; // r14
  char *v10; // rdi
  HANDLE *v11; // rsi
  char *v12; // rdx
  char *v13; // r13
  unsigned int v14; // eax
  size_t v16; // r13
  unsigned int v17; // [rsp+30h] [rbp-188h]
  int v18; // [rsp+34h] [rbp-184h]
  int v19; // [rsp+38h] [rbp-180h]
  int v20; // [rsp+3Ch] [rbp-17Ch]
  _BYTE v24[32]; // [rsp+88h] [rbp-130h] BYREF
  _BYTE v25[32]; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v26[32]; // [rsp+C8h] [rbp-F0h] BYREF
  char v27; // [rsp+E8h] [rbp-D0h] BYREF
  char v28; // [rsp+108h] [rbp-B0h] BYREF
  char v29; // [rsp+130h] [rbp-88h] BYREF

  v8 = a3;
  v9 = 0LL;
  v17 = -1;
  memset(v24, 0, sizeof(v24));
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 < 0 || a7 < 0 || a3 < 0 || a1 && a2 )
    goto LABEL_29;
  if ( !gpidLogon || PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      UmfdDispatchEscape(Src);
      return 0LL;
    }
    v12 = a2;
    if ( a2 )
    {
      if ( (int)v8 > 31 )
      {
        if ( (int)v8 + 1 > (int)v8 && (unsigned __int64)((int)v8 + 1) <= 0x1388000 )
        {
          v9 = (char *)PALLOCMEM2((unsigned int)(2 * v8 + 2), 1886221383LL, 0);
          v12 = a2;
        }
        if ( !v9 )
          goto LABEL_29;
        v20 = 1;
      }
      else
      {
        v9 = &v29;
      }
      v16 = 2 * v8;
      if ( &v12[v16] < v12 || (unsigned __int64)&v12[v16] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v9, v12, v16);
      *(_WORD *)&v9[v16] = 0;
    }
    if ( a5 )
    {
      if ( !(unsigned int)bUMPD(a1) )
      {
        if ( a5 > 32 )
        {
          if ( a5 <= 40960000 )
            v11 = (HANDLE *)PALLOCMEM2((unsigned int)a5, 1886221383LL, 0);
          if ( !v11 )
            goto LABEL_29;
          v19 = 1;
          goto LABEL_14;
        }
LABEL_13:
        v11 = (HANDLE *)&v27;
LABEL_14:
        if ( (HANDLE *)((char *)Src + a5) < Src || (unsigned __int64)Src + a5 > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v11, Src, a5);
        goto LABEL_18;
      }
      if ( a5 <= 32 )
        goto LABEL_13;
      if ( (unsigned __int64)Src + a5 > W32UserProbeAddress || (HANDLE *)((char *)Src + a5) < Src )
        *W32UserProbeAddress = 0;
      v11 = Src;
    }
LABEL_18:
    if ( a7 )
    {
      if ( (unsigned int)bUMPD(a1) )
      {
        v13 = a8;
        ProbeForWrite(a8, a7, 1u);
        v10 = a8;
LABEL_20:
        if ( v20 && v9 )
          PushThreadGuardedObject(v24, v9, Win32FreePool);
        if ( v19 && v11 )
          PushThreadGuardedObject(v25, v11, Win32FreePool);
        if ( v18 && v10 )
          PushThreadGuardedObject(v26, v10, Win32FreePool);
        if ( v9 )
          v14 = GreNamedEscape((wchar_t *)v9, a4, a5, v11, a7, v10);
        else
          v14 = GreExtEscape(a1, a7, (__int64)v10);
        v17 = v14;
        if ( v20 && v9 )
          PopThreadGuardedObject(v24);
        if ( v19 && v11 )
          PopThreadGuardedObject(v25);
        if ( v18 && v10 )
          PopThreadGuardedObject(v26);
        if ( a7 && v10 != v13 )
        {
          if ( (unsigned __int64)&v13[a7] > W32UserProbeAddress || &v13[a7] <= v13 )
            *W32UserProbeAddress = 0;
          memmove(v13, v10, a7);
        }
        goto LABEL_29;
      }
      if ( a7 > 32 )
      {
        if ( a7 <= 40960000 )
          v10 = (char *)PALLOCMEM2((unsigned int)a7, 1886221383LL, 0);
        if ( !v10 )
          goto LABEL_29;
        v18 = 1;
      }
      else
      {
        v10 = &v28;
      }
      memset(v10, 0, a7);
    }
    v13 = a8;
    goto LABEL_20;
  }
  if ( (unsigned __int64)a5 < 8 )
  {
LABEL_29:
    if ( v18 && v10 )
      Win32FreePool(v10);
    if ( v19 && v11 )
      Win32FreePool(v11);
    if ( v20 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
    return v17;
  }
  if ( ((unsigned __int8)Src & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)Src + a5 > W32UserProbeAddress || (HANDLE *)((char *)Src + a5) < Src )
    *W32UserProbeAddress = 0;
  return UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(*Src);
}
