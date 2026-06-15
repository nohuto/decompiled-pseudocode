/*
 * XREFs of ?QueryInterface@CAudioSessionStore@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionStore::QueryInterface(CAudioSessionStore *this, const struct _GUID *a2, void **a3)
{
  if ( *(_QWORD *)&IID_IUnknown.Data1 == *(_QWORD *)&a2->Data1 && *(_QWORD *)IID_IUnknown.Data4 == *(_QWORD *)a2->Data4
    || *(_QWORD *)&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data1 == *(_QWORD *)&a2->Data1
    && *(_QWORD *)GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data4 == *(_QWORD *)a2->Data4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *a3 = this;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
