/*
 * XREFs of Generate_HTSC_WORD @ 0x1401E7DF4
 * Callers:
 *     CachedHalftonePattern @ 0x1401E7BD4 (CachedHalftonePattern.c)
 * Callees:
 *     GenerateWORDPat @ 0x1401E808C (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x14028FDE4 (ExpandHTPatX.c)
 *     RotateHTPat45 @ 0x140304170 (RotateHTPat45.c)
 *     RotateHTPatXY @ 0x140304280 (RotateHTPatXY.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__int128 *a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // r8d
  ULONG v9; // r8d
  __int64 v10; // rdi
  int v11; // ebx
  unsigned __int64 v12; // rax
  PVOID v13; // r15
  int v15; // r8d
  unsigned int v16; // ebp
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v19; // [rsp+B0h] [rbp+18h]

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 112);
  if ( *((_BYTE *)a1 + 1) <= 0x11u )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 8));
    v4 = 0;
    v5 = *(_QWORD *)(v3 + 8LL * *((unsigned __int8 *)a1 + 1) + 1112);
    *((_QWORD *)a1 + 2) = v5;
    if ( v5 )
    {
LABEL_9:
      EngReleaseSemaphore(*(HSEMAPHORE *)(v3 + 8));
      LOBYTE(v4) = *((_QWORD *)a1 + 2) != 0LL;
      return v4;
    }
    v6 = *((_QWORD *)a1 + 1);
    v7 = (unsigned __int8)BYTE1(*a1);
    v19 = v7;
    v17 = *a1;
    v8 = v7 + 7;
    if ( (unsigned int)v7 <= 9 )
      v8 = v7;
    v18 = 16 * (v7 >> 1);
    v9 = (v8 << 24) + 808539208;
    v10 = *(_QWORD *)((char *)&DefStdHTPat + v18 + 8);
    v11 = v10;
    v12 = 6 * (unsigned __int16)v6 * (unsigned __int64)WORD1(v6);
    if ( v12 <= 0xFFFFFFFF && HIDWORD(v6) >= (unsigned int)v12 )
    {
      v13 = EngAllocMem(1u, HIDWORD(v6), v9);
      if ( v13 )
      {
        if ( BYTE1(v17) <= 0xFu )
        {
          v16 = WORD2(v17);
          RotateHTPat45(
            v10,
            (_DWORD)v13 + 2,
            WORD2(v17),
            WORD5(v17),
            *(unsigned __int16 *)((char *)&DefStdHTPat + v18 + 2),
            (unsigned __int16)v6);
          RotateHTPatXY(
            (_DWORD)v13 + 2,
            (_DWORD)v13 + 4,
            v16,
            WORD5(v17),
            (unsigned __int16)v6,
            (BYTE1(v17) & 1) != 0 ? v16 >> 1 : 0,
            0);
          RotateHTPatXY(
            (_DWORD)v13 + 2,
            (_DWORD)v13,
            v16,
            WORD5(v17),
            (unsigned __int16)v6,
            (BYTE1(v17) & 1) != 0 ? v16 >> 2 : 0,
            (BYTE1(v17) & 1) != 0 ? WORD5(v17) >> 2 : 0);
          ExpandHTPatX(v13);
        }
        else
        {
          if ( BYTE1(v17) == 16 )
          {
            v15 = v10;
          }
          else
          {
            v15 = v10 + 512;
            v11 = v10 + 256;
          }
          if ( !(unsigned int)GenerateWORDPat(v11, v10, v15, (_DWORD)v13, WORD2(v17), (unsigned __int16)v6, WORD5(v17)) )
          {
            EngFreeMem(v13);
            v13 = 0LL;
          }
        }
      }
      *(_QWORD *)(v3 + 8 * v19 + 1112) = v13;
      *((_QWORD *)a1 + 2) = v13;
      goto LABEL_9;
    }
  }
  return 0LL;
}
