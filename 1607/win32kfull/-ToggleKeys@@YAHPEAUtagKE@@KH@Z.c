/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8BA0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  char v5; // si
  char v7; // al
  char v8; // si
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx

  v3 = *((unsigned __int8 *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  v5 = *((_BYTE *)a1 + 2);
  switch ( v3 )
  {
    case 20:
      goto LABEL_13;
    case 144:
      goto LABEL_9;
    case 145:
LABEL_13:
      if ( (dword_1C0326F24 & 1) != 0 && !v4 )
      {
        v8 = v5 & 3;
        v9 = gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v3 >> 2];
        if ( !_bittest(&v9, (unsigned __int8)(2 * v8)) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
          v11 = *(_QWORD *)(v10 + 384);
          if ( _bittest(&v9, (unsigned __int8)(2 * v8 + 1)) )
            PostEventMessageEx(v10, v11, 0xEu, 0LL, 2u, 0LL, 0LL, 0LL);
          else
            PostEventMessageEx(v10, v11, 0xEu, 0LL, 3u, 0LL, 0LL, 0LL);
        }
      }
      return 1LL;
  }
  if ( (unsigned __int8)v3 != gNumLockVk )
  {
    if ( (unsigned __int8)v3 != gOemScrollVk )
    {
      if ( gtmridToggleKeys )
        FindTimer(0, gtmridToggleKeys, 4, 1, 0LL);
      return 1LL;
    }
    goto LABEL_13;
  }
LABEL_9:
  if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) != 17
    || (xmmword_1C0326F04 & 4) == 0 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      FindTimer(0, gtmridToggleKeys, 4, 1, 0LL);
      gtmridToggleKeys = 0LL;
      gTKExtraInformation = 0;
      gTKScanCode = 0;
    }
    else if ( !gtmridToggleKeys && (dword_1C0326F24 & 4) != 0 )
    {
      v7 = *(_BYTE *)a1;
      gTKExtraInformation = a2;
      gTKNextProcIndex = a3;
      gTKScanCode = v7;
      gtmridToggleKeys = SetRITTimer(0LL, 0x1388u, (__int64)xxxToggleKeysTimer, 1);
    }
    if ( (xmmword_1C0326F04 & 1) == 0 )
      goto LABEL_13;
  }
  return 1LL;
}
