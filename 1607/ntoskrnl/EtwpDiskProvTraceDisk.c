/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x140226150
 * Callers:
 *     EtwpTraceIo @ 0x14009F1A8 (EtwpTraceIo.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 */

char __fastcall EtwpDiskProvTraceDisk(unsigned __int16 a1, __int64 a2, __int64 a3, GUID *a4)
{
  _UNKNOWN **v4; // rax
  ULONGLONG v5; // rbx
  int v9; // ecx
  void *v10; // rdi
  unsigned __int16 *v11; // rbp
  int v12; // edx
  GUID *v13; // r9
  char v14; // r10
  _QWORD *v15; // r11
  int v16; // edx
  __int64 v17; // r9
  char v18; // r10
  unsigned __int64 v20; // [rsp+90h] [rbp-28h] BYREF
  __int64 v21; // [rsp+98h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = EtwpDiskProvRegHandle;
  v21 = 0LL;
  v20 = 0LL;
  if ( EtwpDiskProvRegHandle )
  {
    v9 = a1 - 266;
    if ( v9 )
    {
      if ( v9 == 4 )
        v10 = &KDskEvt_Flush;
      else
        v10 = &KDskEvt_Write;
    }
    else
    {
      v10 = &KDskEvt_Read;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v4 = *(_UNKNOWN ***)(v5 + 104);
    v11 = (unsigned __int16 *)v4 + 14;
    if ( !v4 )
      v11 = 0LL;
    if ( *(_BYTE *)(v5 + 100) )
    {
      LOBYTE(v4) = EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 32) + 80LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
      if ( (_BYTE)v4 )
      {
        LOBYTE(v12) = v14;
        LOBYTE(v4) = EtwpEventWriteFull(
                       v15,
                       v12,
                       0,
                       0,
                       (unsigned __int16 *)v10,
                       0,
                       0,
                       v13,
                       0LL,
                       1u,
                       a2,
                       a3,
                       &v21,
                       0LL,
                       *(_BYTE *)(v5 + 102),
                       v11,
                       &v20);
      }
    }
    if ( *(_BYTE *)(v5 + 101) )
    {
      LOBYTE(v4) = EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 80LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
      if ( (_BYTE)v4 )
      {
        LOBYTE(v16) = v18;
        LOBYTE(v4) = EtwpEventWriteFull(
                       *(_QWORD **)(v5 + 32),
                       v16,
                       0,
                       0,
                       (unsigned __int16 *)v10,
                       0,
                       0,
                       a4,
                       0LL,
                       1u,
                       a2,
                       a3,
                       &v21,
                       v17,
                       *(_BYTE *)(v5 + 102),
                       v11,
                       &v20);
      }
    }
  }
  return (char)v4;
}
