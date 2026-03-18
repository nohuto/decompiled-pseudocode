/*
 * XREFs of ?IsThisAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01F1A3C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThisAGesture(const struct tagPOINTERINPUTFRAME *a1, struct tagTPSTATE *a2)
{
  unsigned int v2; // eax
  char *v3; // rdi
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r10
  __int64 v9; // r14
  _DWORD *v10; // r11
  unsigned __int16 *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r14d
  int v15; // ebx
  int v16; // edi
  int v17; // r15d
  int v18; // r10d
  int v19; // ebp
  int v20; // r11d
  BOOL v21; // esi
  signed int v22; // r12d
  signed int v23; // r13d
  __int64 result; // rax
  double v25; // xmm2_8
  __int64 v26; // [rsp+50h] [rbp+8h]
  int v27; // [rsp+60h] [rbp+18h]

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  v4 = *((_QWORD *)a1 + 9);
  v5 = 0LL;
  v6 = v26;
  v7 = v26;
  if ( v2 )
  {
    v8 = (__int64 *)(v4 + 96);
    v9 = v2;
    v10 = (_DWORD *)(v4 + 68);
    v11 = (unsigned __int16 *)(v4 + 48);
    do
    {
      if ( *v10 )
      {
        v12 = (unsigned int)*v11 % *((_DWORD *)a2 + 267);
        if ( (*v10 & 0x40000) == 0 )
        {
          if ( v3 )
          {
            v6 = *v8;
            v5 = (char *)a2 + 176 * v12;
          }
          else
          {
            v7 = *v8;
            v3 = (char *)a2 + 176 * v12;
          }
        }
      }
      v11 += 108;
      v10 += 54;
      v8 += 27;
      --v9;
    }
    while ( v9 );
  }
  if ( (int)((HIDWORD(*((_QWORD *)v3 + 4)) - HIDWORD(*((_QWORD *)v5 + 4)))
           * (HIDWORD(*((_QWORD *)v3 + 4)) - HIDWORD(*((_QWORD *)v5 + 4)))
           + (*((_QWORD *)v3 + 4) - *((_QWORD *)v5 + 4)) * (*((_QWORD *)v3 + 4) - *((_QWORD *)v5 + 4))) > (unsigned __int64)(unsigned int)dword_1C03236E8 )
    return 0LL;
  v13 = *((_DWORD *)v3 + 8);
  v14 = *((_DWORD *)v3 + 9);
  v15 = v7 - v13;
  v16 = *((_DWORD *)v5 + 8);
  v17 = *((_DWORD *)v5 + 9);
  v18 = v6 - v16;
  v27 = v13;
  v19 = HIDWORD(v7) - v14;
  v20 = HIDWORD(v6) - v17;
  if ( (_DWORD)v7 == v13 && !v19 )
    return 0LL;
  if ( !v18 && !v20 )
    return 0LL;
  v21 = 0;
  v22 = abs32(v19);
  v23 = abs32(v15);
  if ( v22 <= v23 )
  {
    if ( (int)abs32(v18) >= (int)abs32(v20) )
      v21 = v15 * v18 > 0;
    if ( v22 < v23 )
      goto LABEL_24;
  }
  if ( (int)abs32(v20) < (int)abs32(v18) || v19 * v20 <= 0 )
  {
LABEL_24:
    LODWORD(result) = 0;
LABEL_25:
    if ( v21 || (_DWORD)result )
    {
      if ( v15 )
      {
        if ( v18 )
        {
          v25 = (double)v18;
          if ( (double)v15 != 0.0
            && v25 != 0.0
            && COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(v14 - HIDWORD(v7)) / (double)v15 - (double)(v17 - HIDWORD(v6))
                                                                                             / v25) & _xmm) < 0.25 )
          {
            return 1LL;
          }
        }
      }
    }
    return 0LL;
  }
  LODWORD(result) = 1;
  if ( v15 > 100 )
    goto LABEL_25;
  if ( v18 > 100 )
    goto LABEL_25;
  result = 1LL;
  if ( (int)abs32(v7 + v16 - v27 - v6) >= 100 )
    goto LABEL_25;
  return result;
}
