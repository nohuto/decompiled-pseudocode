/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01EDCD0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  char v5; // si
  char v6; // al
  char v7; // si
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx

  v3 = *((unsigned __int8 *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  v5 = *((_BYTE *)a1 + 2);
  switch ( v3 )
  {
    case 20:
      goto LABEL_16;
    case 144:
      goto LABEL_8;
    case 145:
LABEL_16:
      if ( (dword_1C0323924 & 1) != 0 && !v4 )
      {
        v7 = v5 & 3;
        v8 = gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v3 >> 2];
        if ( !_bittest(&v8, (unsigned __int8)(2 * v7)) )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
          v10 = *(_QWORD *)(v9 + 392);
          if ( _bittest(&v8, (unsigned __int8)(2 * v7 + 1)) )
            PostEventMessageEx(v9, v10, 0xEu, 0LL, 2u, 0LL, 0LL, 0LL);
          else
            PostEventMessageEx(v9, v10, 0xEu, 0LL, 3u, 0LL, 0LL, 0LL);
        }
      }
      return 1LL;
  }
  if ( (unsigned __int8)v3 != gNumLockVk )
  {
    if ( (unsigned __int8)v3 != gOemScrollVk )
    {
      if ( gtmridToggleKeys )
        FindTimer(0LL, gtmridToggleKeys, 4u, 1, 0LL);
      return 1LL;
    }
    goto LABEL_16;
  }
LABEL_8:
  if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) != 17
    || (xmmword_1C0323904 & 4) == 0 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      FindTimer(0LL, gtmridToggleKeys, 4u, 1, 0LL);
      gtmridToggleKeys = 0LL;
      gTKExtraInformation = 0;
      gTKScanCode = 0;
    }
    else if ( !gtmridToggleKeys && (dword_1C0323924 & 4) != 0 )
    {
      v6 = *(_BYTE *)a1;
      gTKExtraInformation = a2;
      gTKNextProcIndex = a3;
      gTKScanCode = v6;
      gtmridToggleKeys = SetRITTimer(0, 5000, (int)xxxToggleKeysTimer, 1);
    }
    if ( (xmmword_1C0323904 & 1) == 0 )
      goto LABEL_16;
  }
  return 1LL;
}
