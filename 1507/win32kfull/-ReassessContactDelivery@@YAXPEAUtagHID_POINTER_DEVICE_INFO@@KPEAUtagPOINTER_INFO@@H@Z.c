/*
 * XREFs of ?ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z @ 0x1C01C5CD0
 * Callers:
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 * Callees:
 *     ?IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C5820 (-IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     DecActiveContacts @ 0x1C01C83FC (DecActiveContacts.c)
 *     IncActiveContacts @ 0x1C01CBD8C (IncActiveContacts.c)
 *     ?IsPointerNodeInContact@PointerList@@YAHG@Z @ 0x1C01FC580 (-IsPointerNodeInContact@PointerList@@YAHG@Z.c)
 */

void __fastcall ReassessContactDelivery(struct _LIST_ENTRY *a1, unsigned int a2, struct tagPOINTER_INFO *a3, int a4)
{
  __int64 v5; // rbp
  int v8; // edi
  __int64 v9; // rbp
  unsigned int v10; // edi
  struct _LIST_ENTRY *Blink; // r14
  int v12; // ecx
  BOOL v13; // eax
  unsigned int v14; // ecx
  _DWORD *p_Blink; // roff

  v5 = a2;
  if ( (unsigned int)(LODWORD(a1[1].Blink) - 1) > 4
    || IsDeviceAllowed(a1, HIDWORD(a1[42].Blink[150 * a2 + 146].Flink), (*((_DWORD *)a3 + 3) >> 14) & 1) )
  {
    if ( a4 )
    {
      v12 = *((_DWORD *)a3 + 3);
      v13 = (v12 & 0x40004) != 0;
      v14 = v12 & 0xFFF8FFF9;
      *((_DWORD *)a3 + 3) = v14;
      if ( v13 )
      {
        *((_DWORD *)a3 + 3) = v14 | 0x40000;
        DecActiveContacts(&gActivePointerDeviceList);
      }
      else
      {
        *((_DWORD *)a3 + 3) = v14 | 0x20000;
      }
      p_Blink = &a1[42].Blink[150 * v5 + 149].Blink;
      *p_Blink &= ~0x200u;
      LODWORD(a1[42].Blink[150 * v5 + 149].Blink) |= 0x20u;
    }
    else
    {
      v8 = *((_DWORD *)a3 + 3);
      if ( (v8 & 4) != 0 )
      {
        v9 = 150 * v5;
        v10 = v8 & 0xFFF9FFFF;
        *((_DWORD *)a3 + 3) = v10;
        Blink = a1[42].Blink;
        if ( (unsigned int)PointerList::IsPointerNodeInContact((PointerList *)WORD2(Blink[v9 + 145].Blink), a2) )
        {
          *((_DWORD *)a3 + 3) = v10 | 0x20000;
        }
        else
        {
          LODWORD(Blink[v9 + 149].Blink) |= 0x200u;
          IncActiveContacts(&gActivePointerDeviceList);
          *((_DWORD *)a3 + 3) |= 0x10000u;
        }
        *((_DWORD *)a3 + 3) |= 6u;
        LODWORD(a1[42].Blink[v9 + 149].Blink) &= ~0x20u;
      }
      else if ( (v8 & 2) != 0 )
      {
        if ( (v8 & 0x40000) != 0 )
          *((_DWORD *)a3 + 3) = v8 & 0xFFFBFFFF;
        *((_DWORD *)a3 + 3) |= 0x20000u;
        LODWORD(a1[42].Blink[150 * v5 + 149].Blink) &= ~0x20u;
      }
    }
  }
  else
  {
    *((_DWORD *)a3 + 3) = 0;
  }
}
