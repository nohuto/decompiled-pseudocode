/*
 * XREFs of ?xxxProcess3and4FingerTap@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01F64C8
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1AF4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01F66E8 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01F6828 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 */

__int64 __fastcall xxxProcess3and4FingerTap(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v6; // edx
  int v7; // r11d
  int v8; // r8d
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rsi
  unsigned __int16 *v12; // r9
  _DWORD *v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v6 = *((_DWORD *)a2 + 328);
  if ( (v6 - 3 > 1 || a3 >= v6) && (*((_DWORD *)a2 + 386) & 0x2000000) == 0 )
    return 0LL;
  v7 = 0;
  if ( (*((_DWORD *)a2 + 386) & 0x2000000) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( a5 - a4 > gliQpcFreq.QuadPart * (unsigned int)dword_1C0321F3C / 1000 )
      goto LABEL_23;
  }
  v9 = *((_QWORD *)a1 + 9);
  v10 = 0;
  if ( *((_DWORD *)a1 + 6) )
  {
    v11 = v8;
    v12 = (unsigned __int16 *)(v9 + 48);
    v13 = (_DWORD *)(v9 + 68);
    do
    {
      v14 = 216LL * ((unsigned int)*v12 % *((_DWORD *)a2 + 327));
      if ( *v13 )
      {
        v15 = *(_DWORD *)((char *)a2 + v14 + 212);
        if ( (v15 & 4) != 0 || (v15 & 8) != 0 )
        {
LABEL_22:
          *((_DWORD *)a2 + 386) &= ~0x2000000u;
          break;
        }
        if ( v11 )
        {
          if ( (v15 & 0x20000) == 0 )
            goto LABEL_22;
        }
        else
        {
          *(_DWORD *)((char *)a2 + v14 + 212) = v15 | 0x20000;
        }
        if ( (*v13 & 0x40000) != 0 )
          ++v7;
        v16 = *((_DWORD *)a2 + 386);
        if ( (v16 & 0x2000000) == 0 && v7 )
        {
          *((_DWORD *)a2 + 386) = v16 | 0x2000000;
          *((_DWORD *)a2 + 329) = *((_DWORD *)a2 + 328);
        }
      }
      v12 += 108;
      v13 += 54;
    }
    while ( (unsigned int)++v10 < *((_DWORD *)a1 + 6) );
  }
LABEL_23:
  v17 = *((_DWORD *)a2 + 386);
  if ( (v17 & 0x2000000) == 0 )
    return 0LL;
  if ( (v17 & 0x10) != 0 || (v17 & 0x20) != 0 )
  {
    *((_DWORD *)a2 + 386) = v17 & 0xFDFFFFFF;
    return 0LL;
  }
  if ( v7 == *((_DWORD *)a1 + 6) )
  {
    if ( *((_DWORD *)a2 + 329) == 3 )
    {
      xxxSend3FingerTapHotkey();
      if ( IsFirstActionAfterKey() )
        dword_1C0321C20 = 3;
      else
        dword_1C0321C24 = 3;
      ++dword_1C0321C6C;
    }
    else
    {
      xxxSend4FingerTapHotkey();
      if ( IsFirstActionAfterKey() )
        dword_1C0321C20 = 4;
      else
        dword_1C0321C24 = 4;
      ++dword_1C0321C70;
    }
    ++dword_1C0321C78;
    *((_DWORD *)a2 + 386) &= ~0x2000000u;
  }
  return 1LL;
}
