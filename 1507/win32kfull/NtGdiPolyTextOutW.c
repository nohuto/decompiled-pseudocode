/*
 * XREFs of NtGdiPolyTextOutW @ 0x1C00C67A0
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyTextOutW @ 0x1C015CE5C (GrePolyTextOutW.c)
 *     memmove @ 0x1C015D180 (memmove.c)
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
  char *v15; // rdx
  size_t v16; // r8
  char *v17; // r12
  char *v18; // r9
  unsigned int j; // edi
  char *v20; // rsi
  unsigned int v21; // ecx
  unsigned int k; // edi
  __int64 v23; // r13
  unsigned int v24; // ecx
  size_t v25; // rax
  char *v26; // rsi
  char *v27; // rax
  char *v28; // rax
  unsigned __int64 *v30; // [rsp+28h] [rbp-80h]
  char *v31; // [rsp+40h] [rbp-68h]
  char *v32; // [rsp+58h] [rbp-50h]

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
    v30 = (unsigned __int64 *)W32UserProbeAddress;
    if ( (unsigned __int64)&a2[v8] > W32UserProbeAddress || &a2[v8] < a2 )
      *W32UserProbeAddress = 0;
  }
  else
  {
    v30 = (unsigned __int64 *)W32UserProbeAddress;
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
      v30 = (unsigned __int64 *)W32UserProbeAddress;
    }
    if ( v7 )
    {
      memmove(v7, a2, 56LL * a3);
      v17 = &v7[56 * a3];
      v18 = &v7[v6];
      v31 = v18;
      for ( j = 0; j < a3; ++j )
      {
        v20 = &v7[56 * j];
        v21 = *((_DWORD *)v20 + 2);
        if ( v21 )
        {
          v15 = (char *)*((_QWORD *)v20 + 6);
          if ( v15 )
          {
            LODWORD(v16) = 4 * v21;
            if ( (*((_DWORD *)v20 + 6) & 0x2000) != 0 )
            {
              if ( v21 > 0x4E2000 )
                v5 = 0;
              LODWORD(v16) = 8 * v21;
            }
            else if ( v21 > 0x9C4000 )
            {
              v5 = 0;
            }
            v16 = (unsigned int)v16;
            v28 = &v17[(unsigned int)v16];
            v32 = v28;
            if ( !v5 || v28 < v17 || v28 > v18 )
            {
              v5 = 0;
              goto LABEL_63;
            }
            if ( &v15[(unsigned int)v16] < v15 || (unsigned __int64)&v15[(unsigned int)v16] > *v30 )
              *(_BYTE *)*v30 = 0;
            memmove(v17, v15, (unsigned int)v16);
            *((_QWORD *)v20 + 6) = v17;
            v17 = v32;
            v30 = (unsigned __int64 *)W32UserProbeAddress;
            v18 = v31;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v23 = 56LL * k;
        v24 = *(_DWORD *)&v7[v23 + 8];
        if ( v24 )
        {
          v15 = *(char **)&v7[v23 + 16];
          if ( !v15 || (v25 = 2 * v24, v16 = v25, v26 = &v17[v25], v24 > 0x1388000) || v26 < v17 || v26 > v18 )
          {
            v5 = 0;
            break;
          }
          v27 = &v15[v25];
          if ( v27 < v15 || (unsigned __int64)v27 > *v30 )
            *(_BYTE *)*v30 = 0;
          memmove(v17, v15, v16);
          *(_QWORD *)&v7[v23 + 16] = v17;
          v17 = v26;
          v30 = (unsigned __int64 *)W32UserProbeAddress;
          v18 = v31;
        }
      }
LABEL_63:
      if ( v5 )
        v5 = GrePolyTextOutW(a1);
      FreeTmpBuffer(v7, v15, v16, v18);
      return v5;
    }
    return 0;
  }
  return v5;
}
