/*
 * XREFs of StorEtwMiniportBugResetBrokenEvent @ 0x1C003ADC0
 * Callers:
 *     StorTickEventQueue @ 0x1C0009530 (StorTickEventQueue.c)
 * Callees:
 *     Template_zqcccjqqbx @ 0x1C003BC88 (Template_zqcccjqqbx.c)
 */

__int64 __fastcall StorEtwMiniportBugResetBrokenEvent(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rbp
  int v6; // r12d
  __int64 v7; // r14
  unsigned __int8 v8; // al
  int v9; // r15d
  __int64 v10; // r13
  __int64 result; // rax
  char v12; // di
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  __int64 v17; // r8
  int v18; // edx
  int v19; // edx
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // r8
  char v22; // si
  unsigned int v23; // ebp
  unsigned int v24; // edi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r11
  int v28; // edx
  int v29; // edx
  int v30; // ecx
  unsigned __int64 v31; // rdx

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = a3;
  v6 = a1;
  v7 = 0LL;
  v8 = *(_BYTE *)(v3 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v3 + 20);
  else
    v9 = v8;
  v10 = *(_QWORD *)(a1 + 224);
  result = *(unsigned int *)(v10 + 88);
  if ( !v9 )
  {
    if ( *(_BYTE *)(v3 + 2) != 40 )
    {
      v7 = v3 + 72;
      goto LABEL_25;
    }
    v12 = 0;
    if ( !*(_DWORD *)(v3 + 20) )
    {
      v13 = *(_DWORD *)(v3 + 56);
      v14 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v3 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v3 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_22:
          if ( ++v14 >= v13 )
            goto LABEL_25;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + v3) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
            {
              if ( *(_DWORD *)(v17 + v3 + 12) )
                v7 = v17 + v3 + 32;
              goto LABEL_25;
            }
            goto LABEL_21;
          }
          v20 = v17 + 56;
        }
        else
        {
          v20 = v17 + 40;
        }
        if ( v20 <= v16 )
        {
          v12 = 1;
          if ( !*(_BYTE *)(v17 + v3 + 10) )
            goto LABEL_25;
          v7 = v17 + v3 + 24;
        }
LABEL_21:
        if ( v12 )
          goto LABEL_25;
        goto LABEL_22;
      }
    }
LABEL_25:
    if ( v7 )
    {
      v21 = 0;
      if ( *(_BYTE *)(v3 + 2) == 40 )
      {
        v22 = 0;
        if ( *(_DWORD *)(v3 + 20) )
        {
          v21 = 0;
        }
        else
        {
          v23 = *(_DWORD *)(v3 + 56);
          v24 = 0;
          if ( v23 )
          {
            while ( 1 )
            {
              v25 = *(unsigned int *)(v3 + 4LL * v24 + 120);
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(v3 + 16);
                if ( (unsigned int)v25 < (unsigned int)v26 )
                  break;
              }
LABEL_45:
              if ( ++v24 >= v23 )
                goto LABEL_35;
            }
            v27 = (unsigned int)v25;
            v28 = *(_DWORD *)(v25 + v3) - 64;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 == 1 && v27 + 40 <= v26 )
                  goto LABEL_35;
                goto LABEL_44;
              }
              v31 = v27 + 56;
            }
            else
            {
              v31 = v27 + 40;
            }
            if ( v31 <= v26 )
            {
              v21 = *(_BYTE *)(v27 + v3 + 10);
              v22 = 1;
            }
LABEL_44:
            if ( v22 )
              goto LABEL_35;
            goto LABEL_45;
          }
LABEL_35:
          v5 = a3;
        }
      }
      else
      {
        v21 = *(_BYTE *)(v3 + 10);
      }
      v4 = v21;
    }
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x400000000LL) != 0 )
  {
    v30 = v10 + 1688;
    LOBYTE(v30) = BYTE1(*(_DWORD *)(v10 + 88));
    return Template_zqcccjqqbx(
             v30,
             *(_QWORD *)(v10 + 24),
             v6 + 728,
             *(_QWORD *)(v5 + 8),
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             result,
             v30,
             BYTE2(*(_DWORD *)(v10 + 88)),
             v10 + 1688,
             v9,
             v4,
             v7,
             a2);
  }
  return result;
}
