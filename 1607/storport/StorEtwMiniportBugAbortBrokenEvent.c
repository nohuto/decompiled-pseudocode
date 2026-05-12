/*
 * XREFs of StorEtwMiniportBugAbortBrokenEvent @ 0x1C003A96C
 * Callers:
 *     RaidUnitAbortSrbCompletion @ 0x1C0036FB0 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     Template_zqcccjqqb @ 0x1C003BB6C (Template_zqcccjqqb.c)
 */

__int64 __fastcall StorEtwMiniportBugAbortBrokenEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r14
  int v5; // r12d
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  int v8; // r15d
  __int64 v9; // r13
  __int64 result; // rax
  char v11; // di
  unsigned int v12; // esi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  int v17; // edx
  int v18; // edx
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // r10
  char v21; // si
  unsigned int v22; // r14d
  unsigned int v23; // edi
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // r11
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  unsigned __int64 v30; // rdx

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = *(_BYTE *)(v2 + 2);
  if ( v7 == 40 )
    v8 = *(_DWORD *)(v2 + 20);
  else
    v8 = v7;
  v9 = *(_QWORD *)(a1 + 224);
  result = *(unsigned int *)(v9 + 88);
  if ( !v8 )
  {
    if ( *(_BYTE *)(v2 + 2) != 40 )
    {
      v6 = v2 + 72;
      goto LABEL_25;
    }
    v11 = 0;
    if ( !*(_DWORD *)(v2 + 20) )
    {
      v12 = *(_DWORD *)(v2 + 56);
      v13 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          v14 = *(unsigned int *)(v2 + 4LL * v13 + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v15 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v14 < (unsigned int)v15 )
              break;
          }
LABEL_22:
          if ( ++v13 >= v12 )
            goto LABEL_25;
        }
        v16 = (unsigned int)v14;
        v17 = *(_DWORD *)(v14 + v2) - 64;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 && v16 + 40 <= v15 )
            {
              if ( *(_DWORD *)(v16 + v2 + 12) )
                v6 = v16 + v2 + 32;
              goto LABEL_25;
            }
            goto LABEL_21;
          }
          v19 = v16 + 56;
        }
        else
        {
          v19 = v16 + 40;
        }
        if ( v19 <= v15 )
        {
          v11 = 1;
          if ( !*(_BYTE *)(v16 + v2 + 10) )
            goto LABEL_25;
          v6 = v16 + v2 + 24;
        }
LABEL_21:
        if ( v11 )
          goto LABEL_25;
        goto LABEL_22;
      }
    }
LABEL_25:
    if ( v6 )
    {
      v20 = 0;
      if ( *(_BYTE *)(v2 + 2) == 40 )
      {
        v21 = 0;
        if ( *(_DWORD *)(v2 + 20) )
        {
          v20 = 0;
        }
        else
        {
          v22 = *(_DWORD *)(v2 + 56);
          v23 = 0;
          if ( v22 )
          {
            while ( 1 )
            {
              v24 = *(unsigned int *)(v2 + 4LL * v23 + 120);
              if ( (unsigned int)v24 >= 0x80 )
              {
                v25 = *(unsigned int *)(v2 + 16);
                if ( (unsigned int)v24 < (unsigned int)v25 )
                  break;
              }
LABEL_45:
              if ( ++v23 >= v22 )
                goto LABEL_35;
            }
            v26 = (unsigned int)v24;
            v27 = *(_DWORD *)(v24 + v2) - 64;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 == 1 && v26 + 40 <= v25 )
                  goto LABEL_35;
                goto LABEL_44;
              }
              v30 = v26 + 56;
            }
            else
            {
              v30 = v26 + 40;
            }
            if ( v30 <= v25 )
            {
              v20 = *(_BYTE *)(v26 + v2 + 10);
              v21 = 1;
            }
LABEL_44:
            if ( v21 )
              goto LABEL_35;
            goto LABEL_45;
          }
LABEL_35:
          v4 = a2;
        }
      }
      else
      {
        v20 = *(_BYTE *)(v2 + 10);
      }
      v3 = v20;
    }
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x400000000LL) != 0 )
  {
    v29 = v9 + 1688;
    LOBYTE(v29) = BYTE1(*(_DWORD *)(v9 + 88));
    return Template_zqcccjqqb(
             v29,
             *(_QWORD *)(v9 + 24),
             v5 + 728,
             *(_QWORD *)(v4 + 8),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             result,
             v29,
             BYTE2(*(_DWORD *)(v9 + 88)),
             v9 + 1688,
             v8,
             v3,
             v6);
  }
  return result;
}
