/*
 * XREFs of ?QueryInterface@TouchInfoAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005F980
 * Callers:
 *     ?QueryInterface@TouchInfoAdapter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005FA20 (-QueryInterface@TouchInfoAdapter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchInfoAdapter::QueryInterface(TouchInfoAdapter *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
    }
    else
    {
      v6 = 2;
      v3 = -2147467262;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 584;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 573;
LABEL_9:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
    }
  }
  return v3;
}
