/*
 * XREFs of ?QueryInterface@EdgeGestureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023CB0
 * Callers:
 *     ?QueryInterface@EdgeGestureTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024AF0 (-QueryInterface@EdgeGestureTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgeGestureTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024B00 (-QueryInterface@EdgeGestureTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgeGestureTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024B10 (-QueryInterface@EdgeGestureTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::QueryInterface(EdgeGestureTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9541eccb_d3b7_47cd_bb5b_51b74da1c6bd.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9541eccb_d3b7_47cd_bb5b_51b74da1c6bd.Data4 )
    {
      (*(void (__fastcall **)(EdgeGestureTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(EdgeGestureTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 24;
    }
    else
    {
      v6 = 2;
      v3 = -2147467262;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 181;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 163;
LABEL_12:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
    }
  }
  return v3;
}
