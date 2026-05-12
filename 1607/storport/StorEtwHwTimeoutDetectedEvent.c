/*
 * XREFs of StorEtwHwTimeoutDetectedEvent @ 0x1C0039E7C
 * Callers:
 *     StorTickEventQueue @ 0x1C0009530 (StorTickEventQueue.c)
 * Callees:
 *     Template_qcccjqqbqt @ 0x1C003B840 (Template_qcccjqqbqt.c)
 */

__int64 __fastcall StorEtwHwTimeoutDetectedEvent(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // r10d
  char v4; // bp
  int v5; // r13d
  __int64 v6; // r14
  unsigned __int8 v7; // al
  int v8; // r15d
  __int64 v9; // r12
  __int64 result; // rax
  int v11; // ecx
  char v12; // di
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  __int64 v17; // r9
  int v18; // edx
  int v19; // edx
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // r9
  char v22; // si
  unsigned int v23; // ebp
  unsigned int v24; // edi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r11
  int v28; // edx
  int v29; // edx
  unsigned __int64 v30; // rdx
  char v31; // [rsp+B0h] [rbp+8h]

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
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v11 = *(_DWORD *)(v2 + 40);
  else
    v11 = *(_DWORD *)(v2 + 20);
  v31 = v11;
  if ( !v8 )
  {
    if ( *(_BYTE *)(v2 + 2) != 40 )
    {
      v6 = v2 + 72;
      goto LABEL_28;
    }
    v12 = 0;
    if ( !*(_DWORD *)(v2 + 20) )
    {
      v13 = *(_DWORD *)(v2 + 56);
      v14 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v2 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_25:
          if ( ++v14 >= v13 )
            goto LABEL_28;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + v2) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
            {
              if ( *(_DWORD *)(v17 + v2 + 12) )
                v6 = v17 + v2 + 32;
              goto LABEL_28;
            }
            goto LABEL_24;
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
          if ( !*(_BYTE *)(v17 + v2 + 10) )
            goto LABEL_28;
          v6 = v17 + v2 + 24;
        }
LABEL_24:
        if ( v12 )
          goto LABEL_28;
        goto LABEL_25;
      }
    }
LABEL_28:
    if ( v6 )
    {
      v21 = 0;
      if ( *(_BYTE *)(v2 + 2) == 40 )
      {
        v22 = 0;
        if ( *(_DWORD *)(v2 + 20) )
        {
          v21 = 0;
        }
        else
        {
          v23 = *(_DWORD *)(v2 + 56);
          v24 = 0;
          if ( v23 )
          {
            while ( 1 )
            {
              v25 = *(unsigned int *)(v2 + 4LL * v24 + 120);
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(v2 + 16);
                if ( (unsigned int)v25 < (unsigned int)v26 )
                  break;
              }
LABEL_48:
              if ( ++v24 >= v23 )
                goto LABEL_38;
            }
            v27 = (unsigned int)v25;
            v28 = *(_DWORD *)(v25 + v2) - 64;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 == 1 && v27 + 40 <= v26 )
                  goto LABEL_38;
                goto LABEL_47;
              }
              v30 = v27 + 56;
            }
            else
            {
              v30 = v27 + 40;
            }
            if ( v30 <= v26 )
            {
              v21 = *(_BYTE *)(v27 + v2 + 10);
              v22 = 1;
            }
LABEL_47:
            if ( v22 )
              goto LABEL_38;
            goto LABEL_48;
          }
LABEL_38:
          v4 = a2;
        }
      }
      else
      {
        v21 = *(_BYTE *)(v2 + 10);
      }
      v3 = v21;
    }
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x20000000) != 0 )
  {
    LOBYTE(v11) = BYTE1(*(_DWORD *)(v9 + 88));
    return Template_qcccjqqbqt(
             v11,
             (int)v9 + 1688,
             v5 + 728,
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             result,
             v11,
             BYTE2(*(_DWORD *)(v9 + 88)),
             v9 + 1688,
             v8,
             v3,
             v6,
             v31,
             v4);
  }
  return result;
}
