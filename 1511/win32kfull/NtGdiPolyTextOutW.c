/*
 * XREFs of NtGdiPolyTextOutW @ 0x1C0029E00
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyTextOutW @ 0x1C0152640 (GrePolyTextOutW.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, char *a2, unsigned int a3)
{
  unsigned int v5; // r15d
  unsigned int v6; // esi
  char *v7; // r14
  __int64 v8; // rcx
  unsigned int i; // edx
  char *v10; // r8
  unsigned __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // r11d
  unsigned int v14; // eax
  char *v15; // r12
  char *v16; // r9
  unsigned int j; // edi
  char *v18; // rsi
  unsigned int v19; // ecx
  char *v20; // rdx
  unsigned int k; // edi
  __int64 v22; // r13
  unsigned int v23; // ecx
  char *v24; // rdx
  __int64 v25; // rax
  char *v26; // rsi
  char *v27; // rax
  unsigned int v28; // r8d
  char *v29; // rax
  unsigned __int64 *v31; // [rsp+28h] [rbp-80h]
  char *v32; // [rsp+40h] [rbp-68h]
  char *v33; // [rsp+58h] [rbp-50h]

  v5 = 1;
  v6 = 56 * a3;
  v7 = 0LL;
  if ( a3 > 0xB2924 )
    return 0;
  v8 = 56LL * a3;
  if ( v8 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v31 = (unsigned __int64 *)W32UserProbeAddress;
    if ( (unsigned __int64)&a2[v8] > W32UserProbeAddress || &a2[v8] < a2 )
      *W32UserProbeAddress = 0;
  }
  else
  {
    v31 = (unsigned __int64 *)W32UserProbeAddress;
  }
  for ( i = 0; i < a3; ++i )
  {
    v10 = &a2[56 * i];
    v11 = *((int *)v10 + 2);
    v12 = v6;
    v6 += 2 * v11;
    if ( v11 > 0x1388000 || v6 < v12 )
      goto LABEL_25;
    if ( *((_QWORD *)v10 + 6) )
    {
      v13 = 4 * v11;
      if ( (*((_DWORD *)v10 + 6) & 0x2000) != 0 )
      {
        if ( (unsigned __int64)(2 * (int)v11) > 0x9C4000 )
          v5 = 0;
        v13 = 8 * v11;
      }
      else if ( v11 > 0x9C4000 )
      {
        v5 = 0;
      }
      v14 = v6;
      v6 += v13;
      if ( !v5 || v6 < v14 )
        goto LABEL_25;
    }
    if ( (_DWORD)v11 && !*((_QWORD *)v10 + 2) )
    {
LABEL_25:
      v5 = 0;
      break;
    }
  }
  if ( v5 && v6 )
  {
    if ( v6 <= 0x2710000 )
    {
      v7 = (char *)AllocFreeTmpBuffer(v6);
      v31 = (unsigned __int64 *)W32UserProbeAddress;
    }
    if ( v7 )
    {
      memmove(v7, a2, 56LL * a3);
      v15 = &v7[56 * a3];
      v16 = &v7[v6];
      v32 = v16;
      for ( j = 0; j < a3; ++j )
      {
        v18 = &v7[56 * j];
        v19 = *((_DWORD *)v18 + 2);
        if ( v19 )
        {
          v20 = (char *)*((_QWORD *)v18 + 6);
          if ( v20 )
          {
            v28 = 4 * v19;
            if ( (*((_DWORD *)v18 + 6) & 0x2000) != 0 )
            {
              if ( v19 > 0x4E2000 )
                v5 = 0;
              v28 = 8 * v19;
            }
            else if ( v19 > 0x9C4000 )
            {
              v5 = 0;
            }
            v29 = &v15[v28];
            v33 = v29;
            if ( !v5 || v29 < v15 || v29 > v16 )
            {
              v5 = 0;
              goto LABEL_63;
            }
            if ( &v20[v28] < v20 || (unsigned __int64)&v20[v28] > *v31 )
              *(_BYTE *)*v31 = 0;
            memmove(v15, v20, v28);
            *((_QWORD *)v18 + 6) = v15;
            v15 = v33;
            v31 = (unsigned __int64 *)W32UserProbeAddress;
            v16 = v32;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v22 = 56LL * k;
        v23 = *(_DWORD *)&v7[v22 + 8];
        if ( v23 )
        {
          v24 = *(char **)&v7[v22 + 16];
          if ( !v24 || (v25 = 2 * v23, v26 = &v15[v25], v23 > 0x1388000) || v26 < v15 || v26 > v16 )
          {
            v5 = 0;
            break;
          }
          v27 = &v24[v25];
          if ( v27 < v24 || (unsigned __int64)v27 > *v31 )
            *(_BYTE *)*v31 = 0;
          memmove(v15, v24, 2 * v23);
          *(_QWORD *)&v7[v22 + 16] = v15;
          v15 = v26;
          v31 = (unsigned __int64 *)W32UserProbeAddress;
          v16 = v32;
        }
      }
LABEL_63:
      if ( v5 )
        v5 = GrePolyTextOutW(a1);
      FreeTmpBuffer(v7);
      return v5;
    }
    return 0;
  }
  return v5;
}
