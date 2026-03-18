/*
 * XREFs of NtGdiExtEscape @ 0x1C0125230
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     bUMPD @ 0x1C01257BC (bUMPD.c)
 *     GreExtEscape @ 0x1C01257FC (GreExtEscape.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0127510 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GreNamedEscape @ 0x1C029A5B4 (GreNamedEscape.c)
 *     UmfdDispatchEscape @ 0x1C02A47DC (UmfdDispatchEscape.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02B9748 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z.c)
 */

__int64 __fastcall NtGdiExtEscape(HDC a1, char *a2, int a3, unsigned int a4, int a5, HANDLE *a6, int a7, char *a8)
{
  __int64 v8; // r13
  char *v9; // r14
  char *v10; // rdi
  HANDLE *v11; // rsi
  char *v13; // rdx
  size_t v14; // r13
  char *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+20h] [rbp-198h]
  unsigned int v21; // [rsp+30h] [rbp-188h]
  int v22; // [rsp+34h] [rbp-184h]
  int v23; // [rsp+38h] [rbp-180h]
  int v24; // [rsp+3Ch] [rbp-17Ch]
  _BYTE v28[32]; // [rsp+88h] [rbp-130h] BYREF
  _BYTE v29[32]; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v30[32]; // [rsp+C8h] [rbp-F0h] BYREF
  char v31; // [rsp+E8h] [rbp-D0h] BYREF
  char v32; // [rsp+108h] [rbp-B0h] BYREF
  char v33; // [rsp+130h] [rbp-88h] BYREF

  v8 = a3;
  v9 = 0LL;
  v21 = -1;
  memset(v28, 0, sizeof(v28));
  memset(v29, 0, sizeof(v29));
  memset(v30, 0, sizeof(v30));
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 < 0 || a7 < 0 || a3 < 0 || a1 && a2 )
    goto LABEL_84;
  if ( !gpidLogon || PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      UmfdDispatchEscape(a6);
      return 0LL;
    }
    v13 = a2;
    if ( a2 )
    {
      if ( (int)v8 > 31 )
      {
        if ( (int)v8 + 1 > (int)v8 && (unsigned __int64)((int)v8 + 1) <= 0x1388000 )
        {
          v9 = (char *)PALLOCMEM2((unsigned int)(2 * v8 + 2), 1886221383LL, 0);
          v13 = a2;
        }
        if ( !v9 )
          goto LABEL_84;
        v24 = 1;
      }
      else
      {
        v9 = &v33;
      }
      v14 = 2 * v8;
      if ( &v13[v14] < v13 || (unsigned __int64)&v13[v14] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v9, v13, v14);
      *(_WORD *)&v9[v14] = 0;
    }
    if ( !a5 )
    {
LABEL_46:
      if ( a7 )
      {
        if ( (unsigned int)bUMPD(a1) )
        {
          v15 = a8;
          ProbeForWrite(a8, a7, 1u);
          v10 = a8;
          goto LABEL_57;
        }
        if ( a7 > 32 )
        {
          if ( a7 <= 40960000 )
            v10 = (char *)PALLOCMEM2((unsigned int)a7, 1886221383LL, 0);
          if ( !v10 )
            goto LABEL_84;
          v22 = 1;
        }
        else
        {
          v10 = &v32;
        }
        memset(v10, 0, a7);
      }
      v15 = a8;
LABEL_57:
      if ( v24 && v9 )
        PushThreadGuardedObject(v28, v9, Win32FreePool);
      if ( v23 && v11 )
        PushThreadGuardedObject(v29, v11, Win32FreePool);
      if ( v22 && v10 )
        PushThreadGuardedObject(v30, v10, Win32FreePool);
      if ( v9 )
        v16 = GreNamedEscape((wchar_t *)v9, a4, a5, v11, a7, v10);
      else
        v16 = GreExtEscape(a1, a7, (__int64)v10);
      v21 = v16;
      if ( v24 && v9 )
        PopThreadGuardedObject(v28, v17, v18, v19, v20);
      if ( v23 && v11 )
        PopThreadGuardedObject(v29, v17, v18, v19, v20);
      if ( v22 && v10 )
        PopThreadGuardedObject(v30, v17, v18, v19, v20);
      if ( a7 && v10 != v15 )
      {
        if ( (unsigned __int64)&v15[a7] > W32UserProbeAddress || &v15[a7] <= v15 )
          *W32UserProbeAddress = 0;
        memmove(v15, v10, a7);
      }
      goto LABEL_84;
    }
    if ( (unsigned int)bUMPD(a1) )
    {
      if ( a5 > 32 )
      {
        if ( (unsigned __int64)a6 + a5 > W32UserProbeAddress || (HANDLE *)((char *)a6 + a5) < a6 )
          *W32UserProbeAddress = 0;
        v11 = a6;
        goto LABEL_46;
      }
    }
    else if ( a5 > 32 )
    {
      if ( a5 <= 40960000 )
        v11 = (HANDLE *)PALLOCMEM2((unsigned int)a5, 1886221383LL, 0);
      if ( !v11 )
        goto LABEL_84;
      v23 = 1;
      goto LABEL_42;
    }
    v11 = (HANDLE *)&v31;
LABEL_42:
    if ( (HANDLE *)((char *)a6 + a5) < a6 || (unsigned __int64)a6 + a5 > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(v11, a6, a5);
    goto LABEL_46;
  }
  if ( (unsigned __int64)a5 >= 8 )
  {
    if ( ((unsigned __int8)a6 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a6 + a5 > W32UserProbeAddress || (HANDLE *)((char *)a6 + a5) < a6 )
      *W32UserProbeAddress = 0;
    return UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(*a6);
  }
LABEL_84:
  if ( v22 && v10 )
    Win32FreePool(v10);
  if ( v23 && v11 )
    Win32FreePool(v11);
  if ( v24 && v9 )
    Win32FreePool(v9);
  return v21;
}
