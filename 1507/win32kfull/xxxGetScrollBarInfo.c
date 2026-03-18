/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C00876E8
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C00874E0 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     CalcSBStuff @ 0x1C0087930 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0087AC4 (CalcSBStuff2.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(__int64 a1, int a2, __int64 a3)
{
  int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // r13d
  bool v9; // zf
  int *v10; // rax
  int v11; // r8d
  int v12; // ecx
  int v13; // r9d
  int v14; // edx
  char v15; // al
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // ecx
  _BYTE v22[16]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v23[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v23, 0, sizeof(v23));
  if ( *(_DWORD *)a3 == 60 )
  {
    LOBYTE(v6) = 0;
    if ( a1 )
    {
      if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29A )
      {
        v7 = a1;
      }
      else
      {
        v7 = 0LL;
        if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == *(_WORD *)(gpsi + 860LL) )
          v7 = a1;
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( a2 == -4 && !v7 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(
               (struct tagWND *)a1,
               0xEBu,
               0LL,
               (struct _LARGE_STRING *)a3,
               0,
               0,
               0LL,
               1,
               1);
    }
    *(_QWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v6 = *(_DWORD *)(v7 + 380);
        v8 = *(_DWORD *)(v7 + 376);
        GetRect(a1, v22, 17LL);
        CalcSBStuff2(v23, v22, v7 + 384, *(unsigned int *)(v7 + 376));
        goto LABEL_22;
      case -5:
        v8 = 1;
        if ( (*(_BYTE *)(a1 + 54) & 0x20) != 0 )
        {
          v9 = (*(_BYTE *)(a1 + 40) & 2) == 0;
          goto LABEL_11;
        }
        goto LABEL_15;
      case -6:
        v8 = 0;
        if ( (*(_BYTE *)(a1 + 54) & 0x10) != 0 )
        {
          v9 = (*(_BYTE *)(a1 + 40) & 4) == 0;
LABEL_11:
          if ( v9 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_16:
          if ( (*(_DWORD *)(a3 + 36) & 0x8000) != 0 )
            return 1LL;
          v10 = *(int **)(a1 + 176);
          if ( v10 )
          {
            v6 = *v10;
            if ( v8 )
              v6 >>= 2;
            LOBYTE(v6) = v6 & 3;
          }
          else
          {
            UserSetLastError(1447);
          }
          if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
          {
            CalcSBStuff(a1, v23, v8);
            if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
            {
              v21 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112);
              if ( !v8 )
              {
                v11 = v23[6];
                v14 = v21 - v23[5];
                v13 = v21 - v23[4];
                v12 = v23[7];
                goto LABEL_24;
              }
              v11 = v21 - v23[7];
              v12 = v21 - v23[6];
LABEL_23:
              v13 = v23[5];
              v14 = v23[4];
LABEL_24:
              if ( (v6 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v6 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v6 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v15 = *(_BYTE *)(a1 + 46);
              if ( (v15 & 0x10) != 0 && (a2 != -5 || (v15 & 0x20) != 0) )
              {
                if ( (v15 & 1) != 0 )
                  *(_DWORD *)(a3 + 40) |= 8u;
                if ( (*(_BYTE *)(a1 + 46) & 2) != 0 )
                  *(_DWORD *)(a3 + 44) |= 8u;
                if ( (*(_BYTE *)(a1 + 46) & 4) != 0 )
                  *(_DWORD *)(a3 + 52) |= 8u;
                if ( (*(_BYTE *)(a1 + 46) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
              {
                if ( v8 )
                {
                  *(_DWORD *)(a3 + 4) = v11;
                  *(_DWORD *)(a3 + 8) = v14;
                  *(_DWORD *)(a3 + 12) = v12;
                  *(_DWORD *)(a3 + 16) = v13;
                }
                else
                {
                  *(_DWORD *)(a3 + 4) = v14;
                  *(_DWORD *)(a3 + 8) = v11;
                  *(_DWORD *)(a3 + 12) = v13;
                  *(_DWORD *)(a3 + 16) = v12;
                }
                if ( a2 == -4 )
                {
                  v17 = *(_DWORD *)(a1 + 132);
                  v18 = *(_DWORD *)(a1 + 128);
                }
                else
                {
                  v17 = *(_DWORD *)(a1 + 116);
                  v18 = *(_DWORD *)(a1 + 112);
                }
                *(_DWORD *)(a3 + 4) += v18;
                *(_DWORD *)(a3 + 12) += v18;
                *(_DWORD *)(a3 + 16) += v17;
                *(_DWORD *)(a3 + 8) += v17;
                v19 = v23[9];
                v20 = v23[12];
                *(_DWORD *)(a3 + 20) = v23[9] - v14;
                *(_DWORD *)(a3 + 24) = v23[13] - v14;
                *(_DWORD *)(a3 + 28) = v20 - v14;
                if ( v23[13] == v19 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v20 == v23[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_22:
          v11 = v23[6];
          v12 = v23[7];
          goto LABEL_23;
        }
LABEL_15:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_16;
    }
  }
  UserSetLastError(87);
  return 0LL;
}
