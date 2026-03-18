/*
 * XREFs of xxxEndScroll @ 0x1C0233B14
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0235880 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C02359E0 (xxxTrackThumb.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D3A34 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C02268C8 (zzzShowCaret.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0231D44 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C023217C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0232228 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02327FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
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
  unsigned __int64 v15; // [rsp+50h] [rbp+8h]

  result = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(result + 632);
  if ( !v5 )
    return result;
  result = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(struct tagWND **)(result + 64) != a1 )
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
        LODWORD(v15) = *((_DWORD *)a1 + 30) - v10;
      else
        LODWORD(v15) = v10 - *((_DWORD *)a1 + 28);
      HIDWORD(v15) = *(__int16 *)(gptiCurrent + 680LL) - *((_DWORD *)a1 + 29);
      if ( PtInRect((_DWORD *)(v5 + 32), v15) )
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
          v12 = *(__int64 **)(gpqForeground + 72LL);
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
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            Win32FreePool(v5);
            result = *((_QWORD *)a1 + 2);
            *(_QWORD *)(result + 632) = 0LL;
          }
        }
      }
    }
  }
  return result;
}
