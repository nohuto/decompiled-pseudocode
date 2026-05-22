/*
 * XREFs of ?QueryInterface@OrientationWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005AB80
 * Callers:
 *     ?QueryInterface@OrientationWatcher@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005AD20 (-QueryInterface@OrientationWatcher@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OrientationWatcher::QueryInterface(OrientationWatcher *this, const struct _GUID *a2, void **a3)
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
      (*(void (__fastcall **)(OrientationWatcher *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4 )
    {
      (*(void (__fastcall **)(OrientationWatcher *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 16;
    }
    else
    {
      v6 = 2;
      v3 = -2147467262;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 132;
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
      v7 = 115;
LABEL_12:
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
    }
  }
  return v3;
}
