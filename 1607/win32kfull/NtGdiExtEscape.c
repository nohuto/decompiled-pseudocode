/*
 * XREFs of NtGdiExtEscape @ 0x1C02A7520
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GreExtEscape @ 0x1C0267554 (GreExtEscape.c)
 *     bUMPD @ 0x1C02916AC (bUMPD.c)
 *     GreNamedEscape @ 0x1C0299864 (GreNamedEscape.c)
 *     UmfdDispatchEscape @ 0x1C02A519C (UmfdDispatchEscape.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02BC00C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02BC0CC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall NtGdiExtEscape(
        HDC a1,
        char *a2,
        int a3,
        unsigned int a4,
        int a5,
        struct _PATHOBJ *a6,
        int a7,
        char *a8)
{
  __int64 v8; // r13
  char *v9; // r14
  char *v10; // rdi
  struct _PATHOBJ *v11; // rsi
  size_t v13; // r13
  char *v14; // r13
  unsigned int v15; // eax
  int v16; // [rsp+30h] [rbp-178h]
  int v17; // [rsp+34h] [rbp-174h]
  int v18; // [rsp+38h] [rbp-170h]
  unsigned int v19; // [rsp+3Ch] [rbp-16Ch]
  char *Src; // [rsp+78h] [rbp-130h]
  _BYTE v23[32]; // [rsp+80h] [rbp-128h] BYREF
  _BYTE v24[32]; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v25[32]; // [rsp+C0h] [rbp-E8h] BYREF
  char v26; // [rsp+E0h] [rbp-C8h] BYREF
  char v27; // [rsp+100h] [rbp-A8h] BYREF
  char v28; // [rsp+120h] [rbp-88h] BYREF

  v8 = a3;
  Src = a2;
  v9 = 0LL;
  v19 = -1;
  memset(v23, 0, sizeof(v23));
  memset(v24, 0, sizeof(v24));
  memset(v25, 0, sizeof(v25));
  v18 = 0;
  v17 = 0;
  v16 = 0;
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
    a2 = Src;
    if ( Src )
    {
      if ( (int)v8 > 31 )
      {
        if ( (int)v8 + 1 > (int)v8 && (unsigned __int64)((int)v8 + 1) <= 0x1388000 )
        {
          v9 = (char *)PALLOCMEM2((unsigned int)(2 * v8 + 2), 1886221383LL, 0);
          a2 = Src;
        }
        if ( !v9 )
          goto LABEL_84;
        v18 = 1;
      }
      else
      {
        v9 = &v28;
      }
      v13 = 2 * v8;
      if ( &a2[v13] < a2 || (unsigned __int64)&a2[v13] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v9, a2, v13);
      *(_WORD *)&v9[v13] = 0;
    }
    if ( !a5 )
    {
LABEL_46:
      if ( a7 )
      {
        if ( (unsigned int)bUMPD(a1) )
        {
          v14 = a8;
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
          v16 = 1;
        }
        else
        {
          v10 = &v27;
        }
        memset(v10, 0, a7);
      }
      v14 = a8;
LABEL_57:
      if ( v18 && v9 )
        PushThreadGuardedObject(v23, v9, Win32FreePool);
      if ( v17 && v11 )
        PushThreadGuardedObject(v24, v11, Win32FreePool);
      if ( v16 && v10 )
        PushThreadGuardedObject(v25, v10, Win32FreePool);
      if ( v9 )
        v15 = GreNamedEscape((wchar_t *)v9, a4, a5, v11, a7, v10);
      else
        v15 = GreExtEscape(a1, a4, a5, (char *)v11, a7, v10);
      v19 = v15;
      if ( v18 && v9 )
        PopThreadGuardedObject(v23);
      if ( v17 && v11 )
        PopThreadGuardedObject(v24);
      if ( v16 && v10 )
        PopThreadGuardedObject(v25);
      if ( a7 && v10 != v14 )
      {
        if ( (unsigned __int64)&v14[a7] > W32UserProbeAddress || &v14[a7] <= v14 )
          *W32UserProbeAddress = 0;
        memmove(v14, v10, a7);
      }
      goto LABEL_84;
    }
    if ( (unsigned int)bUMPD(a1) )
    {
      if ( a5 > 32 )
      {
        if ( (unsigned __int64)a6 + a5 > W32UserProbeAddress || (struct _PATHOBJ *)((char *)a6 + a5) < a6 )
          *W32UserProbeAddress = 0;
        v11 = a6;
        goto LABEL_46;
      }
    }
    else if ( a5 > 32 )
    {
      if ( a5 <= 40960000 )
        v11 = (struct _PATHOBJ *)PALLOCMEM2((unsigned int)a5, 1886221383LL, 0);
      if ( !v11 )
        goto LABEL_84;
      v17 = 1;
      goto LABEL_42;
    }
    v11 = (struct _PATHOBJ *)&v26;
LABEL_42:
    if ( (struct _PATHOBJ *)((char *)a6 + a5) < a6 || (unsigned __int64)a6 + a5 > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(v11, a6, a5);
    goto LABEL_46;
  }
  if ( (unsigned __int64)a5 >= 8 )
  {
    if ( ((unsigned __int8)a6 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a6 + a5 > W32UserProbeAddress || (struct _PATHOBJ *)((char *)a6 + a5) < a6 )
      *W32UserProbeAddress = 0;
    return UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(*(HANDLE *)a6);
  }
LABEL_84:
  if ( v16 && v10 )
    Win32FreePool(v10, a2);
  if ( v17 && v11 )
    Win32FreePool(v11, a2);
  if ( v18 && v9 )
    Win32FreePool(v9, a2);
  return v19;
}
