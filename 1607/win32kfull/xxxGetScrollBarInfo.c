/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C00AF75C
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C00AF510 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00AFB0C (CalcSBStuff2.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(struct tagWND *a1, int a2, __int64 a3)
{
  int v6; // r14d
  struct tagWND *v7; // r15
  unsigned int v8; // r13d
  int *v9; // rax
  int v10; // r8d
  int v11; // ecx
  int v12; // r9d
  int v13; // edx
  char v14; // al
  bool v16; // zf
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
      if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x29A )
      {
        v7 = a1;
      }
      else
      {
        v7 = 0LL;
        if ( *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) == *(_WORD *)(gpsi + 860LL) )
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
      return xxxSendTransformableMessageTimeout(a1, 235LL, 0LL, a3, 0, 0, 0LL, 1, 1);
    }
    *(_QWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v6 = *((_DWORD *)v7 + 91);
        v8 = *((_DWORD *)v7 + 90);
        GetRect(a1, v22, 17LL);
        CalcSBStuff2(v23, v22, (char *)v7 + 368, *((unsigned int *)v7 + 90));
        goto LABEL_18;
      case -5:
        v8 = 1;
        if ( (*((_BYTE *)a1 + 54) & 0x20) == 0 )
          goto LABEL_11;
        v16 = (*((_BYTE *)a1 + 40) & 2) == 0;
        goto LABEL_31;
      case -6:
        v8 = 0;
        if ( (*((_BYTE *)a1 + 54) & 0x10) == 0 )
        {
LABEL_11:
          *(_DWORD *)(a3 + 36) |= 0x8000u;
          goto LABEL_12;
        }
        v16 = (*((_BYTE *)a1 + 40) & 4) == 0;
LABEL_31:
        if ( v16 )
          *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_12:
        if ( (*(_DWORD *)(a3 + 36) & 0x8000) != 0 )
          return 1LL;
        v9 = (int *)*((_QWORD *)a1 + 22);
        if ( v9 )
        {
          v6 = *v9;
          if ( v8 )
            v6 >>= 2;
          LOBYTE(v6) = v6 & 3;
        }
        else
        {
          UserSetLastError(1447LL);
        }
        if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
        {
          CalcSBStuff(a1, v23, v8);
          if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
          {
            v21 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
            if ( !v8 )
            {
              v10 = v23[6];
              v13 = v21 - v23[5];
              v12 = v21 - v23[4];
              v11 = v23[7];
              goto LABEL_20;
            }
            v10 = v21 - v23[7];
            v11 = v21 - v23[6];
LABEL_19:
            v12 = v23[5];
            v13 = v23[4];
LABEL_20:
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
            v14 = *((_BYTE *)a1 + 46);
            if ( (v14 & 0x10) != 0 && (a2 != -5 || (v14 & 0x20) != 0) )
            {
              if ( (v14 & 1) != 0 )
                *(_DWORD *)(a3 + 40) |= 8u;
              if ( (*((_BYTE *)a1 + 46) & 2) != 0 )
                *(_DWORD *)(a3 + 44) |= 8u;
              if ( (*((_BYTE *)a1 + 46) & 4) != 0 )
                *(_DWORD *)(a3 + 52) |= 8u;
              if ( (*((_BYTE *)a1 + 46) & 8) != 0 )
                *(_DWORD *)(a3 + 56) |= 8u;
            }
            if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
            {
              if ( v8 )
              {
                *(_DWORD *)(a3 + 4) = v10;
                *(_DWORD *)(a3 + 8) = v13;
                *(_DWORD *)(a3 + 12) = v11;
                *(_DWORD *)(a3 + 16) = v12;
              }
              else
              {
                *(_DWORD *)(a3 + 4) = v13;
                *(_DWORD *)(a3 + 8) = v10;
                *(_DWORD *)(a3 + 12) = v12;
                *(_DWORD *)(a3 + 16) = v11;
              }
              if ( a2 == -4 )
              {
                v17 = *((_DWORD *)a1 + 33);
                v18 = *((_DWORD *)a1 + 32);
              }
              else
              {
                v17 = *((_DWORD *)a1 + 29);
                v18 = *((_DWORD *)a1 + 28);
              }
              *(_DWORD *)(a3 + 4) += v18;
              *(_DWORD *)(a3 + 12) += v18;
              *(_DWORD *)(a3 + 16) += v17;
              *(_DWORD *)(a3 + 8) += v17;
              v19 = v23[9];
              v20 = v23[12];
              *(_DWORD *)(a3 + 20) = v23[9] - v13;
              *(_DWORD *)(a3 + 24) = v23[13] - v13;
              *(_DWORD *)(a3 + 28) = v20 - v13;
              if ( v23[13] == v19 )
                *(_DWORD *)(a3 + 44) |= 0x8000u;
              if ( v20 == v23[10] )
                *(_DWORD *)(a3 + 52) |= 0x8000u;
            }
            return 1LL;
          }
        }
LABEL_18:
        v10 = v23[6];
        v11 = v23[7];
        goto LABEL_19;
    }
  }
  UserSetLastError(87LL);
  return 0LL;
}
