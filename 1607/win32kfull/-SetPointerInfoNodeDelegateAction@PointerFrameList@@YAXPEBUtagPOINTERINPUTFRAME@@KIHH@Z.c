/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C01C1740
 * Callers:
 *     DelegateCoalescePointerMessage @ 0x1C01F2FF8 (DelegateCoalescePointerMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerFrameList::SetPointerInfoNodeDelegateAction(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  int v9; // r11d
  int v10; // r8d
  int v11; // edx
  _DWORD *v12; // rcx

  v5 = (unsigned int)a2;
  if ( a3 == 585 )
  {
    v8 = 1;
    v9 = 0;
LABEL_3:
    v10 = 0;
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  v8 = 0;
  if ( a3 == 586 )
  {
    v9 = 1;
    goto LABEL_3;
  }
  v9 = 0;
  if ( a3 == 593 )
  {
    v10 = 1;
    goto LABEL_4;
  }
  v10 = 0;
  if ( a3 != 594 )
    goto LABEL_4;
  v11 = 1;
LABEL_5:
  v12 = (_DWORD *)(*((_QWORD *)this + 11) + 216 * v5);
  if ( a4 )
  {
    if ( v8 )
    {
      *v12 |= 0x2000000u;
    }
    else if ( v9 )
    {
      *v12 |= 0x20000000u;
    }
    else if ( v10 )
    {
      v12[1] |= 2u;
    }
    else if ( v11 )
    {
      v12[1] |= 0x20u;
    }
    else
    {
      *v12 |= 0x200000u;
    }
  }
  else if ( a5 )
  {
    if ( v8 )
    {
      *v12 |= 0x1000000u;
    }
    else if ( v9 )
    {
      *v12 |= 0x10000000u;
    }
    else if ( v10 )
    {
      v12[1] |= 1u;
    }
    else if ( v11 )
    {
      v12[1] |= 0x10u;
    }
    else
    {
      *v12 |= 0x100000u;
    }
  }
  else if ( v8 )
  {
    *v12 |= 0x4000000u;
  }
  else if ( v9 )
  {
    *v12 |= 0x40000000u;
  }
  else if ( v10 )
  {
    v12[1] |= 4u;
  }
  else if ( v11 )
  {
    v12[1] |= 0x40u;
  }
  else
  {
    *v12 |= 0x400000u;
  }
  ReevaluateQFrameHasDelegation(this, v12[2]);
}
