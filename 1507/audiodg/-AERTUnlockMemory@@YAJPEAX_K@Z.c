/*
 * XREFs of ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400165B0
 * Callers:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400156D4 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039EC0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

__int64 __fastcall AERTUnlockMemory(void *lpAddress, SIZE_T dwSize)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed int LastError; // eax

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      42LL,
      &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
      lpAddress);
  }
  if ( VirtualUnlock(lpAddress, dwSize) )
  {
    v4 = 0;
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (v4 & 0x80000000) == 0 )
    goto LABEL_8;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control )
    return v4;
  if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 43LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
LABEL_8:
    v5 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v5 != &WPP_GLOBAL_Control && (*(_DWORD *)(v5 + 28) & 0x40000) != 0 && *(_BYTE *)(v5 + 25) >= 4u )
    WPP_SF_(*(_QWORD *)(v5 + 16), 44LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
  return v4;
}
