/*
 * XREFs of NtGdiPolyTextOutW @ 0x1C0032A60
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyTextOutW @ 0x1C0159D40 (GrePolyTextOutW.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, char *a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r15d
  char *v7; // r14
  char *v8; // rdx
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned int v12; // eax
  int v13; // r8d
  unsigned int v14; // eax
  char *v15; // r12
  char *v16; // r10
  unsigned int j; // ebx
  __int64 v18; // rax
  unsigned int v19; // ecx
  char *v20; // r9
  unsigned int k; // ebx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char *v24; // rdx
  __int64 v25; // rax
  char *v26; // r15
  unsigned int v27; // edx
  char *v28; // r15
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  char *v32; // [rsp+50h] [rbp-48h]

  v5 = 1;
  v6 = 56 * a3;
  v7 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v5 = 0;
  }
  else
  {
    if ( 56LL * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = &a2[56 * a3];
      if ( (unsigned __int64)v8 > W32UserProbeAddress || v8 < a2 )
        *W32UserProbeAddress = 0;
    }
    for ( i = 0; i < a3; ++i )
    {
      v10 = 56LL * i;
      v11 = *(int *)&a2[v10 + 8];
      v12 = v6;
      v6 += 2 * v11;
      if ( v11 > 0x1388000 || v6 < v12 )
        goto LABEL_24;
      if ( *(_QWORD *)&a2[v10 + 48] )
      {
        v13 = 4 * v11;
        if ( (*(_DWORD *)&a2[v10 + 24] & 0x2000) != 0 )
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
          goto LABEL_24;
      }
      if ( (_DWORD)v11 && !*(_QWORD *)&a2[v10 + 16] )
      {
LABEL_24:
        v5 = 0;
        break;
      }
    }
  }
  if ( v5 && v6 )
  {
    if ( v6 <= 0x2710000 )
      v7 = (char *)AllocFreeTmpBuffer(v6);
    if ( v7 )
    {
      memmove(v7, a2, 56LL * a3);
      v15 = &v7[56 * a3];
      v16 = &v7[v6];
      v32 = v16;
      for ( j = 0; j < a3; ++j )
      {
        v18 = 56LL * j;
        v30 = v18;
        v19 = *(_DWORD *)&v7[v18 + 8];
        if ( v19 )
        {
          v20 = *(char **)&v7[v18 + 48];
          if ( v20 )
          {
            v27 = 4 * v19;
            if ( (*(_DWORD *)&v7[v18 + 24] & 0x2000) != 0 )
            {
              if ( v19 > 0x4E2000 )
                v5 = 0;
              v27 = 8 * v19;
            }
            else if ( v19 > 0x9C4000 )
            {
              v5 = 0;
            }
            v28 = &v15[v27];
            if ( !v5 || v28 < v15 || v28 > v16 )
            {
LABEL_60:
              v5 = 0;
              goto LABEL_61;
            }
            if ( &v20[v27] < v20 || (unsigned __int64)&v20[v27] > W32UserProbeAddress )
              *W32UserProbeAddress = 0;
            memmove(v15, v20, v27);
            *(_QWORD *)&v7[v30 + 48] = v15;
            v15 = v28;
            v16 = v32;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v22 = 56LL * k;
        v31 = v22;
        v23 = *(_DWORD *)&v7[v22 + 8];
        if ( v23 )
        {
          v24 = *(char **)&v7[v22 + 16];
          if ( !v24 )
            goto LABEL_60;
          v25 = 2 * v23;
          v26 = &v15[v25];
          if ( v23 > 0x1388000 || v26 < v15 || v26 > v16 )
            goto LABEL_60;
          if ( &v24[v25] < v24 || (unsigned __int64)&v24[v25] > W32UserProbeAddress )
            *W32UserProbeAddress = 0;
          memmove(v15, v24, 2 * v23);
          *(_QWORD *)&v7[v31 + 16] = v15;
          v15 = v26;
          v16 = v32;
        }
      }
LABEL_61:
      if ( v5 )
        v5 = GrePolyTextOutW(a1);
      FreeTmpBuffer(v7);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
