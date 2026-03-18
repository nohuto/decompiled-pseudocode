/*
 * XREFs of ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C0229554
 * Callers:
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 * Callees:
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C00FDE80 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 */

void __fastcall Edgy::OnDeviceRemoval(Edgy *this, void *a2, struct tagEDGY_LISTENER *a3)
{
  __int64 i; // rbx
  __int64 j; // rdi
  Edgy *v6; // rsi
  int v7; // ebp
  struct tagEDGY_DATA *v8; // rdx

  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 16) )
    {
      v6 = *(Edgy **)(j + 232);
      if ( v6 )
      {
        v7 = *(_DWORD *)v6;
        while ( v7 )
        {
          v8 = (struct tagEDGY_DATA *)(*((_QWORD *)v6 + 1) + 32LL * (unsigned int)--v7);
          if ( *(Edgy **)v8 == this )
            Edgy::_RemoveListenerCore(v6, v8, a3);
        }
      }
    }
  }
}
