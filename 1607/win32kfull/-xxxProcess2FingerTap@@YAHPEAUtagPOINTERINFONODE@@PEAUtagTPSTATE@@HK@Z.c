/*
 * XREFs of ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01ED1FC
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01ED688 (-xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z.c)
 */

__int64 __fastcall xxxProcess2FingerTap(struct tagPOINTERINFONODE *a1, struct tagTPSTATE *a2, int a3, int a4)
{
  unsigned int v5; // ecx
  int v7; // r9d
  int v8; // ebp
  char *v9; // r11
  int v10; // eax
  unsigned int v11; // r9d
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8

  v5 = *((_DWORD *)a2 + 411);
  v7 = *((_DWORD *)a2 + 480);
  v8 = *((_DWORD *)a1 + 17);
  v9 = (char *)a2 + 272 * (*((unsigned __int16 *)a1 + 24) % v5);
  if ( (v7 & 0x800) != 0 )
  {
    if ( a4 == 1 )
    {
      if ( (v8 & 0x40000) != 0 && (v7 & 1) == a3 )
      {
        v10 = *((_DWORD *)v9 + 66);
        if ( (v10 & 4) == 0
          && ((v10 & 0x80u) == 0
           || *((_QWORD *)v9 + 8) - *((_QWORD *)v9 + 7) < (unsigned __int64)(gliQpcFreq.QuadPart
                                                                           * (unsigned int)gTPThresholds
                                                                           / 1000)) )
        {
          v11 = v7 & 0xFFFFF7FF;
          *((_DWORD *)a2 + 480) = v11;
          if ( (v11 & 0x20) == 0 )
            xxxSend2FingerTap(a2, *((_QWORD *)v9 + 13));
          return 1LL;
        }
      }
      if ( (v8 & 0x20000) != 0 && (v7 & 1) == a3 && (*((_DWORD *)v9 + 66) & 4) == 0 )
        return 1LL;
    }
    *((_DWORD *)a2 + 480) = v7 & 0xFFFFF7FF;
    return 0LL;
  }
  v13 = *((_QWORD *)v9 + 7);
  v14 = 272LL * (*((unsigned __int16 *)a1 + 132) % v5);
  v15 = *(_QWORD *)((char *)a2 + v14 + 56);
  if ( v13 < v15 )
    v16 = v15 - v13;
  else
    v16 = v13 - v15;
  if ( v16 > gliQpcFreq.QuadPart * (unsigned int)dword_1C03280B0 / 1000
    || (*((_DWORD *)v9 + 66) & 4) != 0
    || (*(_DWORD *)((_BYTE *)a2 + v14 + 264) & 4) != 0 )
  {
    return 0LL;
  }
  if ( (v8 & *((_DWORD *)a1 + 71) & 0x40000) != 0 )
  {
    if ( (v7 & 0x20) == 0 )
      xxxSend2FingerTap(a2, *((_QWORD *)v9 + 13));
  }
  else if ( (v7 & 0x200000) == 0 )
  {
    *((_DWORD *)a2 + 480) = v7 | 0x800;
  }
  return 1LL;
}
