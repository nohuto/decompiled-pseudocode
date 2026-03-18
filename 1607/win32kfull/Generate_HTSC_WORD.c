/*
 * XREFs of Generate_HTSC_WORD @ 0x1C00F7C78
 * Callers:
 *     CachedHalftonePattern @ 0x1C00F3DE4 (CachedHalftonePattern.c)
 * Callees:
 *     GenerateWORDPat @ 0x1C00F7E08 (GenerateWORDPat.c)
 *     ExpandHTPatX @ 0x1C00F800C (ExpandHTPatX.c)
 *     RotateHTPat45 @ 0x1C024AE84 (RotateHTPat45.c)
 *     RotateHTPatXY @ 0x1C024AF74 (RotateHTPatXY.c)
 */

__int64 __fastcall Generate_HTSC_WORD(__int128 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v5; // r8d
  unsigned __int8 *v6; // r13
  ULONG v7; // r8d
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  PVOID v11; // rax
  void *v12; // rdi
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  __int128 v18; // [rsp+40h] [rbp-48h]

  if ( *((_BYTE *)a1 + 1) <= 0x11u )
  {
    EngAcquireSemaphore(hsem);
    v2 = 0;
    v3 = ppwHTPat[*((unsigned __int8 *)a1 + 1)];
    *((_QWORD *)a1 + 2) = v3;
    if ( v3 )
    {
LABEL_3:
      EngReleaseSemaphore(hsem);
      LOBYTE(v2) = *((_QWORD *)a1 + 2) != 0LL;
      return v2;
    }
    v18 = *a1;
    v5 = (unsigned __int8)BYTE1(*a1);
    if ( v5 > 9 )
      v5 += 7;
    v6 = &DefStdHTPat[16 * ((unsigned __int64)(unsigned __int8)BYTE1(*(_QWORD *)a1) >> 1)];
    v7 = (v5 << 24) + 808539208;
    v8 = *((_QWORD *)v6 + 1);
    v9 = WORD4(v18) * (unsigned __int64)WORD5(v18);
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = 6LL * (unsigned int)v9;
      if ( v10 <= 0xFFFFFFFF && HIDWORD(v18) >= (unsigned int)v10 )
      {
        v11 = EngAllocMem(1u, HIDWORD(v18), v7);
        v12 = v11;
        if ( v11 )
        {
          if ( BYTE1(v18) <= 0xFu )
          {
            RotateHTPat45(v8, (_DWORD)v11 + 2, WORD2(v18), WORD5(v18), *((unsigned __int16 *)v6 + 1), WORD4(v18));
            if ( (BYTE1(v18) & 1) != 0 )
              v15 = WORD2(v18) >> 1;
            else
              v15 = 0;
            RotateHTPatXY((_DWORD)v12 + 2, (_DWORD)v12 + 4, WORD2(v18), WORD5(v18), WORD4(v18), v15, 0);
            if ( (BYTE1(v18) & 1) != 0 )
            {
              v16 = WORD2(v18) >> 2;
              v17 = WORD5(v18) >> 2;
            }
            else
            {
              v17 = 0;
              v16 = 0;
            }
            RotateHTPatXY((_DWORD)v12 + 2, (_DWORD)v12, WORD2(v18), WORD5(v18), WORD4(v18), v16, v17);
            ExpandHTPatX(v12);
          }
          else
          {
            v13 = v8;
            if ( BYTE1(v18) == 16 )
            {
              v14 = v8;
            }
            else
            {
              v14 = v8 + 512;
              LODWORD(v8) = v8 + 256;
            }
            if ( !(unsigned int)GenerateWORDPat(v8, v13, v14, (_DWORD)v11, WORD2(v18), WORD4(v18), WORD5(v18)) )
            {
              EngFreeMem(v12);
              v12 = 0LL;
            }
          }
        }
        *((_QWORD *)a1 + 2) = v12;
        ppwHTPat[BYTE1(v18)] = v12;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
