/*
 * XREFs of StorEtwMiniportBugAbortTimeoutEvent @ 0x1C003ABA0
 * Callers:
 *     StorTickEventQueue @ 0x1C0009530 (StorTickEventQueue.c)
 * Callees:
 *     Template_qcccjqqqb @ 0x1C003B944 (Template_qcccjqqqb.c)
 */

__int64 __fastcall StorEtwMiniportBugAbortTimeoutEvent(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r9d
  __int64 v4; // r14
  int v5; // ecx
  __int64 *v6; // r8
  __int64 v7; // r8
  unsigned __int8 v8; // r11
  int v9; // r15d
  __int64 v10; // r13
  __int64 result; // rax
  char v12; // si
  unsigned int v13; // ebp
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r10
  int v18; // edx
  int v19; // edx
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // r10
  char v22; // si
  unsigned int v23; // ebp
  unsigned int v24; // edi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r11
  int v28; // edx
  int v29; // edx
  unsigned __int64 v30; // rdx
  int v31; // ecx
  char v32; // [rsp+A0h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v4 = 0LL;
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v5 = *(_DWORD *)(v1 + 40);
  else
    v5 = *(_DWORD *)(v1 + 20);
  v32 = v5;
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v6 = *(__int64 **)(v1 + 64);
  else
    v6 = *(__int64 **)(v1 + 24);
  v7 = *v6;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v7 + 20);
  else
    v9 = v8;
  v10 = *(_QWORD *)(a1 + 224);
  result = *(unsigned int *)(v10 + 88);
  if ( !v9 )
  {
    if ( v8 != 40 )
    {
      v4 = v7 + 72;
      goto LABEL_31;
    }
    v12 = 0;
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v13 = *(_DWORD *)(v7 + 56);
      v14 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v7 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_28:
          if ( ++v14 >= v13 )
            goto LABEL_31;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + v7) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
            {
              if ( *(_DWORD *)(v17 + v7 + 12) )
                v4 = v17 + v7 + 32;
              goto LABEL_31;
            }
            goto LABEL_27;
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
          if ( !*(_BYTE *)(v17 + v7 + 10) )
            goto LABEL_31;
          v4 = v17 + v7 + 24;
        }
LABEL_27:
        if ( v12 )
          goto LABEL_31;
        goto LABEL_28;
      }
    }
LABEL_31:
    if ( v4 )
    {
      v21 = 0;
      if ( v8 == 40 )
      {
        v22 = 0;
        if ( *(_DWORD *)(v7 + 20) )
        {
          v21 = 0;
        }
        else
        {
          v23 = *(_DWORD *)(v7 + 56);
          v24 = 0;
          if ( v23 )
          {
            while ( 1 )
            {
              v25 = *(unsigned int *)(v7 + 4LL * v24 + 120);
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v25 < (unsigned int)v26 )
                  break;
              }
LABEL_47:
              if ( ++v24 >= v23 )
                goto LABEL_51;
            }
            v27 = (unsigned int)v25;
            v28 = *(_DWORD *)(v25 + v7) - 64;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 == 1 && v27 + 40 <= v26 )
                  goto LABEL_51;
                goto LABEL_46;
              }
              v30 = v27 + 56;
            }
            else
            {
              v30 = v27 + 40;
            }
            if ( v30 <= v26 )
            {
              v21 = *(_BYTE *)(v27 + v7 + 10);
              v22 = 1;
            }
LABEL_46:
            if ( v22 )
              goto LABEL_51;
            goto LABEL_47;
          }
        }
      }
      else
      {
        v21 = *(_BYTE *)(v7 + 10);
      }
LABEL_51:
      v2 = v21;
    }
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x20000000) != 0 )
  {
    v31 = v10 + 1688;
    LOBYTE(v31) = BYTE1(*(_DWORD *)(v10 + 88));
    return Template_qcccjqqqb(
             v31,
             *(_QWORD *)(v10 + 24),
             (int)a1 + 728,
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             result,
             v31,
             BYTE2(*(_DWORD *)(v10 + 88)),
             v10 + 1688,
             v32,
             v9,
             v2,
             v4);
  }
  return result;
}
