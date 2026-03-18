/*
 * XREFs of ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01ED3DC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z @ 0x1C01E8698 (-SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z.c)
 *     ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01ED688 (-xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01ED778 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01ED8B8 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 */

__int64 __fastcall xxxProcessTapsFor3orMoreContacts(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  struct tagTPSTATE *v7; // rcx
  int v8; // r10d
  struct tagTPSTATE *i; // rdx
  unsigned int v10; // eax
  int v11; // r11d
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rbp
  unsigned __int16 *v16; // r9
  _DWORD *v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax

  v7 = a2;
  v8 = 0;
  for ( i = (struct tagTPSTATE *)((char *)a2 + 1632); v7 != i; v7 = (struct tagTPSTATE *)((char *)v7 + 272) )
  {
    if ( (*((_DWORD *)v7 + 66) & 1) != 0 && SuppressContactForMultiFingerTap(v7) )
      ++v8;
  }
  v10 = *((_DWORD *)a2 + 412);
  if ( v10 > 2 && a3 < v10 || (*((_DWORD *)a2 + 480) & 0x800000) != 0 )
  {
    v11 = 0;
    if ( (*((_DWORD *)a2 + 480) & 0x800000) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( a5 - a4 >= gliQpcFreq.QuadPart * (unsigned int)dword_1C03280FC / 1000 )
        goto LABEL_29;
    }
    v13 = *((_QWORD *)a1 + 11);
    v14 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v15 = v12;
      v16 = (unsigned __int16 *)(v13 + 48);
      v17 = (_DWORD *)(v13 + 68);
      do
      {
        if ( *v17
          && !SuppressContactForMultiFingerTap((struct tagTPSTATE *)((char *)a2
                                                                   + 272 * ((unsigned int)*v16 % *((_DWORD *)a2 + 411)))) )
        {
          v19 = *(_DWORD *)(v18 + 264);
          if ( (v19 & 4) != 0 || (v19 & 8) != 0 )
          {
LABEL_28:
            *((_DWORD *)a2 + 480) &= ~0x800000u;
            break;
          }
          if ( v15 )
          {
            if ( (v19 & 0x20000) == 0 )
              goto LABEL_28;
          }
          else
          {
            *(_DWORD *)(v18 + 264) = v19 | 0x20000;
          }
          if ( (*v17 & 0x40000) != 0 )
            ++v11;
          v20 = *((_DWORD *)a2 + 480);
          if ( (v20 & 0x800000) == 0 && v11 )
          {
            *((_DWORD *)a2 + 480) = v20 | 0x800000;
            *((_DWORD *)a2 + 413) = *((_DWORD *)a2 + 412) - v8;
          }
        }
        ++v14;
        v16 += 108;
        v17 += 54;
      }
      while ( v14 < *((_DWORD *)a1 + 10) );
    }
LABEL_29:
    v21 = *((_DWORD *)a2 + 480);
    if ( (v21 & 0x800000) != 0 )
    {
      if ( (v21 & 0x10) == 0 && (v21 & 0x20) == 0 )
      {
        if ( v11 != *((_DWORD *)a1 + 10) - v8 )
          return 1LL;
        v22 = *((_DWORD *)a2 + 413);
        if ( v22 == 3 )
        {
          xxxSend3FingerTapHotkey();
          if ( IsFirstActionAfterKey() )
            dword_1C0326D08 = 3;
          else
            dword_1C0326D0C = 3;
          ++dword_1C0326D5C;
        }
        else
        {
          if ( v22 != 4 )
          {
            if ( v22 == 2 && (WORD6(gTouchPadParameters) & 0x400) != 0 )
              xxxSend2FingerTap(
                a2,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
            goto LABEL_47;
          }
          xxxSend4FingerTapHotkey();
          if ( IsFirstActionAfterKey() )
            dword_1C0326D08 = 4;
          else
            dword_1C0326D0C = 4;
          ++dword_1C0326D60;
        }
        ++dword_1C0326D74;
LABEL_47:
        *((_DWORD *)a2 + 480) &= ~0x800000u;
        return 1LL;
      }
      *((_DWORD *)a2 + 480) = v21 & 0xFF7FFFFF;
    }
  }
  return 0LL;
}
