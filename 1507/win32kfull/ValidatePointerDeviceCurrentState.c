/*
 * XREFs of ValidatePointerDeviceCurrentState @ 0x1C01CD2A4
 * Callers:
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CE218 (-GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 * Callees:
 *     ?IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C5820 (-IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     ?PrepareLastStateDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C5B28 (-PrepareLastStateDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     DecActiveContacts @ 0x1C01C83FC (DecActiveContacts.c)
 */

char __fastcall ValidatePointerDeviceCurrentState(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        int a5)
{
  struct _LIST_ENTRY *Blink; // rcx
  int v8; // ebp
  __int64 v9; // rbx
  unsigned int Flink_high; // esi
  int v11; // ecx
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  __int64 Blink_low; // rdx

  Blink = a1[42].Blink;
  v8 = a3;
  v9 = 150LL * a2;
  Flink_high = HIDWORD(Blink[v9 + 146].Flink);
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 || (_DWORD)a3 == 2 )
    {
      if ( Flink_high < 4 )
        goto LABEL_7;
    }
    else if ( (_DWORD)a3 == 3 && (Flink_high & 0xFFFFFFFC) == 0 && Flink_high != 2 )
    {
LABEL_7:
      v11 = (int)a1[1].Blink;
      if ( ((unsigned int)(v11 - 1) <= 4 || v11 == 8) && !IsDeviceAllowed(a1, Flink_high, (*a4 >> 14) & 1) )
        goto LABEL_10;
      v12 = a1[42].Blink;
      if ( (LODWORD(v12[v9 + 149].Blink) & 0x80u) == 0 )
        LODWORD(v12[v9 + 146].Blink) = v8;
      else
        PrepareLastStateDelivery((struct tagHID_POINTER_DEVICE_INFO *)a1, a2);
      goto LABEL_22;
    }
  }
  else if ( Flink_high - 1 <= 2 )
  {
    goto LABEL_7;
  }
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != 1 && (unsigned int)(a3 - 2) <= 1 )
    {
      LODWORD(Blink[v9 + 149].Blink) |= 0x40u;
LABEL_10:
      LODWORD(a1[42].Blink[v9 + 149].Blink) |= 0x20u;
    }
  }
  else
  {
    LODWORD(Blink[v9 + 149].Blink) |= 0x20u;
    *a4 = 0;
  }
LABEL_22:
  if ( a5 )
    PrepareLastStateDelivery((struct tagHID_POINTER_DEVICE_INFO *)a1, a2);
  v13 = a1[42].Blink;
  Blink_low = LODWORD(v13[v9 + 149].Blink);
  if ( (Blink_low & 0x20) != 0 )
  {
    LOBYTE(v13) = (v8 & 2) != 0;
    if ( (((Flink_high & 2) == 0) & (unsigned __int8)v13) != 0 )
    {
      if ( (Blink_low & 0x1000) != 0 )
        gIsPTPButtonDown = 0;
      LOBYTE(v13) = DecActiveContacts((__int64)&gActivePointerDeviceList, Blink_low, a3, (__int64)a4);
    }
  }
  return (char)v13;
}
