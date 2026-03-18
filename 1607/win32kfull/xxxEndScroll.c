/*
 * XREFs of xxxEndScroll @ 0x1C022C684
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C012B8C0 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C022E1C0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C022E320 (xxxTrackThumb.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzShowCaret @ 0x1C00AB9A4 (zzzShowCaret.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01CBCEC (safe_cast_fnid_to_PSBWND.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C022AB00 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022AF3C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022AFE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022B5BC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

__int64 __fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(struct tagWND *); // rax
  struct tagSBCALC *v8; // rdx
  struct tagSBWND *v9; // rax
  int v10; // eax
  struct tagWND *v11; // rdx
  __int64 *v12; // rdx
  unsigned int v13; // r8d
  struct tagWND *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // [rsp+50h] [rbp+8h]

  result = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(result + 632);
  if ( !v5 )
    return result;
  result = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(struct tagWND **)(result + 72) != a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = *((_QWORD *)a1 + 2);
  if ( v5 != *(_QWORD *)(result + 632) )
    return result;
  v7 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v7 != (char *)xxxTrackThumb )
  {
    if ( v7 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      v10 = *(__int16 *)(gptiCurrent + 676LL);
      if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
        LODWORD(v17) = *((_DWORD *)a1 + 30) - v10;
      else
        LODWORD(v17) = v10 - *((_DWORD *)a1 + 28);
      HIDWORD(v17) = *(__int16 *)(gptiCurrent + 680LL) - *((_DWORD *)a1 + 29);
      if ( PtInRect((_DWORD *)(v5 + 32), v17) )
        zzzDrawInvertScrollArea(a1, (struct tagRECT *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v8 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v8
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v8, 4u, *(_DWORD *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = *((_QWORD *)a1 + 2),
        v5 == *(_QWORD *)(result + 632)) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, v8, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = *((_QWORD *)a1 + 2);
    if ( v5 == *(_QWORD *)(result + 632) )
    {
      v11 = *(struct tagWND **)(v5 + 24);
      if ( !v11
        || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v11, 8u, 0, (*(_DWORD *)v5 >> 1) & 1),
            result = *((_QWORD *)a1 + 2),
            v5 == *(_QWORD *)(result + 632)) )
      {
        SetOrClrWF(0, a1, 0x610u, 1);
        SetOrClrWF(0, a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v12 = *(__int64 **)(gpqForeground + 80LL);
          if ( v12 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
              xxxWindowEvent(0x80000005, v12, 0, 3, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v13 = -4;
        else
          v13 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, (__int64 *)a1, v13, 0, 0);
        result = *((_QWORD *)a1 + 2);
        if ( v5 == *(_QWORD *)(result + 632) )
        {
          v14 = *(struct tagWND **)(v5 + 16);
          if ( !v14 || (zzzShowCaret(v14), result = *((_QWORD *)a1 + 2), v5 == *(_QWORD *)(result + 632)) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return Win32FreePool(v5, v15, v16);
          }
        }
      }
    }
  }
  return result;
}
