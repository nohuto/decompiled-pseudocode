/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x14025D740
 * Callers:
 *     EtwpTraceIo @ 0x14011AA10 (EtwpTraceIo.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 */

char __fastcall EtwpDiskProvTraceDisk(unsigned __int16 a1, __int64 a2, __int64 a3, GUID *a4)
{
  unsigned __int64 v4; // rax
  ULONGLONG v5; // rdi
  int v9; // ecx
  unsigned __int16 *v10; // rbx
  unsigned __int16 *v11; // rbp
  __int64 v12; // r10
  __int64 v13; // rdx
  unsigned __int8 v14; // r10
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v18; // [rsp+90h] [rbp-28h] BYREF
  __int64 v19; // [rsp+98h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v5 = EtwpDiskProvRegHandle;
  v19 = 0LL;
  v18 = 0LL;
  if ( EtwpDiskProvRegHandle )
  {
    v9 = a1 - 266;
    if ( v9 )
    {
      if ( v9 == 4 )
        v10 = (unsigned __int16 *)&KDskEvt_Flush;
      else
        v10 = (unsigned __int16 *)&KDskEvt_Write;
    }
    else
    {
      v10 = (unsigned __int16 *)&KDskEvt_Read;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v4 = *(_QWORD *)(v5 + 104);
    v11 = (unsigned __int16 *)(v4 + 28);
    if ( !v4 )
      v11 = 0LL;
    if ( *(_BYTE *)(v5 + 99) )
    {
      v12 = *(_QWORD *)(v5 + 32);
      v13 = *((_QWORD *)v10 + 1);
      if ( *(_DWORD *)(v12 + 80) )
      {
        LOBYTE(v4) = *(_BYTE *)(v12 + 84);
        if ( *((_BYTE *)v10 + 4) <= (unsigned __int8)v4 || !(_BYTE)v4 )
        {
          if ( (*(_DWORD *)(v12 + 88) & 0x40) != 0 && !v13
            || (v4 = *(_QWORD *)(v12 + 96), (v4 & v13) != 0)
            && (v4 = v13 & *(_QWORD *)(v12 + 104), v4 == *(_QWORD *)(v12 + 104)) )
          {
            LOBYTE(v4) = EtwpEventWriteFull(
                           v12,
                           *(_BYTE *)(v5 + 99),
                           0LL,
                           0,
                           v10,
                           0,
                           0,
                           a4,
                           0LL,
                           1u,
                           a2,
                           a3,
                           &v19,
                           0LL,
                           *(_BYTE *)(v5 + 101),
                           v11,
                           &v18);
          }
        }
      }
    }
    v14 = *(_BYTE *)(v5 + 100);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v5 + 40);
      v16 = *((_QWORD *)v10 + 1);
      if ( *(_DWORD *)(v15 + 80) )
      {
        LOBYTE(v4) = *(_BYTE *)(v15 + 84);
        if ( *((_BYTE *)v10 + 4) <= (unsigned __int8)v4 || !(_BYTE)v4 )
        {
          if ( (LODWORD(v4) = *(_DWORD *)(v15 + 88), (v4 & 0x40) != 0) && !v16
            || (v16 & *(_QWORD *)(v15 + 96)) != 0 && (v4 = v16 & *(_QWORD *)(v15 + 104), v4 == *(_QWORD *)(v15 + 104)) )
          {
            LOBYTE(v4) = EtwpEventWriteFull(
                           *(_QWORD *)(v5 + 32),
                           v14,
                           0LL,
                           0,
                           v10,
                           0,
                           0,
                           a4,
                           0LL,
                           1u,
                           a2,
                           a3,
                           &v19,
                           v15,
                           *(_BYTE *)(v5 + 101),
                           v11,
                           &v18);
          }
        }
      }
    }
  }
  return v4;
}
