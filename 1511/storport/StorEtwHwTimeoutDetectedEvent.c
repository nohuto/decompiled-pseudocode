/*
 * XREFs of StorEtwHwTimeoutDetectedEvent @ 0x1C0036C14
 * Callers:
 *     StorTickEventQueue @ 0x1C0006690 (StorTickEventQueue.c)
 * Callees:
 *     Template_qcccjqqbq @ 0x1C0037EF8 (Template_qcccjqqbq.c)
 */

__int64 __fastcall StorEtwHwTimeoutDetectedEvent(__int64 a1)
{
  __int64 v1; // r8
  int v2; // r9d
  int v3; // r13d
  __int64 v4; // r14
  unsigned __int8 v5; // al
  int v6; // r15d
  __int64 v7; // r12
  __int64 result; // rax
  int v9; // ecx
  char v10; // di
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // r11
  __int64 v15; // r10
  int v16; // edx
  int v17; // edx
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // r10
  char v20; // si
  unsigned int v21; // ebp
  unsigned int v22; // edi
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // r11
  int v26; // edx
  int v27; // edx
  unsigned __int64 v28; // rdx
  int v29; // ecx
  char v30; // [rsp+A0h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  v5 = *(_BYTE *)(v1 + 2);
  if ( v5 == 40 )
    v6 = *(_DWORD *)(v1 + 20);
  else
    v6 = v5;
  v7 = *(_QWORD *)(a1 + 224);
  result = *(unsigned int *)(v7 + 88);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v9 = *(_DWORD *)(v1 + 40);
  else
    v9 = *(_DWORD *)(v1 + 20);
  v30 = v9;
  if ( !v6 )
  {
    if ( *(_BYTE *)(v1 + 2) != 40 )
    {
      v4 = v1 + 72;
      goto LABEL_28;
    }
    v10 = 0;
    if ( !*(_DWORD *)(v1 + 20) )
    {
      v11 = *(_DWORD *)(v1 + 56);
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = *(unsigned int *)(v1 + 4LL * v12 + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(v1 + 16);
            if ( (unsigned int)v13 < (unsigned int)v14 )
              break;
          }
LABEL_25:
          if ( ++v12 >= v11 )
            goto LABEL_28;
        }
        v15 = (unsigned int)v13;
        v16 = *(_DWORD *)(v13 + v1) - 64;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 && v15 + 40 <= v14 )
            {
              if ( *(_DWORD *)(v15 + v1 + 12) )
                v4 = v15 + v1 + 32;
              goto LABEL_28;
            }
            goto LABEL_24;
          }
          v18 = v15 + 56;
        }
        else
        {
          v18 = v15 + 40;
        }
        if ( v18 <= v14 )
        {
          v10 = 1;
          if ( !*(_BYTE *)(v15 + v1 + 10) )
            goto LABEL_28;
          v4 = v15 + v1 + 24;
        }
LABEL_24:
        if ( v10 )
          goto LABEL_28;
        goto LABEL_25;
      }
    }
LABEL_28:
    if ( v4 )
    {
      v19 = 0;
      if ( *(_BYTE *)(v1 + 2) == 40 )
      {
        v20 = 0;
        if ( *(_DWORD *)(v1 + 20) )
        {
          v19 = 0;
        }
        else
        {
          v21 = *(_DWORD *)(v1 + 56);
          v22 = 0;
          if ( v21 )
          {
            while ( 1 )
            {
              v23 = *(unsigned int *)(v1 + 4LL * v22 + 120);
              if ( (unsigned int)v23 >= 0x80 )
              {
                v24 = *(unsigned int *)(v1 + 16);
                if ( (unsigned int)v23 < (unsigned int)v24 )
                  break;
              }
LABEL_44:
              if ( ++v22 >= v21 )
                goto LABEL_48;
            }
            v25 = (unsigned int)v23;
            v26 = *(_DWORD *)(v23 + v1) - 64;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 == 1 && v25 + 40 <= v24 )
                  goto LABEL_48;
                goto LABEL_43;
              }
              v28 = v25 + 56;
            }
            else
            {
              v28 = v25 + 40;
            }
            if ( v28 <= v24 )
            {
              v19 = *(_BYTE *)(v25 + v1 + 10);
              v20 = 1;
            }
LABEL_43:
            if ( v20 )
              goto LABEL_48;
            goto LABEL_44;
          }
        }
      }
      else
      {
        v19 = *(_BYTE *)(v1 + 10);
      }
LABEL_48:
      v2 = v19;
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000000) != 0 )
  {
    v29 = v7 + 1688;
    LOBYTE(v29) = BYTE1(*(_DWORD *)(v7 + 88));
    return Template_qcccjqqbq(
             v29,
             *(_QWORD *)(v7 + 24),
             v3 + 728,
             *(_DWORD *)(*(_QWORD *)(v7 + 24) + 56LL),
             result,
             v29,
             BYTE2(*(_DWORD *)(v7 + 88)),
             v7 + 1688,
             v6,
             v2,
             v4,
             v30);
  }
  return result;
}
