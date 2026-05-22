/*
 * XREFs of ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BA68 (-ProcesssDragStart@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BB94 (-ProcessDragContinue@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BD74 (-ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessDelayedTap@PTPProcessor@@AEAAJXZ @ 0x18005BED8 (-ProcessDelayedTap@PTPProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::DeliverMouseMessage(PTPProcessor *this, struct InputInfo *a2, __int16 a3, char a4)
{
  __int64 v4; // r10
  int v7; // ebx
  int v8; // eax

  v4 = 0LL;
  *(_DWORD *)a2 = 2;
  *((_WORD *)a2 + 353) = 0;
  *((_WORD *)a2 + 354) = a3;
  if ( !a4 && !a3 )
  {
    v7 = *((_DWORD *)a2 + 17) - *((_DWORD *)this + 158);
    *((_DWORD *)a2 + 179) = MulDiv(*((_DWORD *)a2 + 16) - *((_DWORD *)this + 157), 450, 2540);
    *((_DWORD *)a2 + 180) = MulDiv(v7, 450, 2540);
    *((_DWORD *)this + 157) = *((_DWORD *)a2 + 16);
    v8 = *((_DWORD *)a2 + 17);
LABEL_9:
    *((_DWORD *)this + 158) = v8;
    return MouseProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
  }
  *(_QWORD *)((char *)a2 + 716) = 0LL;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( (*((_BYTE *)a2 + 48 * v4 + 56) & 1) == 0 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)a2 + 12) )
        return MouseProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
    }
    *((_DWORD *)this + 157) = *((_DWORD *)a2 + 12 * v4 + 16);
    v8 = *((_DWORD *)a2 + 12 * v4 + 17);
    goto LABEL_9;
  }
  return MouseProcessor::OnInputReport((PTPProcessor *)((char *)this + 8), a2);
}
