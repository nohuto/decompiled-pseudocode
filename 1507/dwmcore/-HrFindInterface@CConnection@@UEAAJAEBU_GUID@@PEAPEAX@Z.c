/*
 * XREFs of ?HrFindInterface@CConnection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E11A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnection::HrFindInterface(CConnection *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IMilNotificationTransport.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IMilNotificationTransport.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IMilNotificationTransport.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      *a3 = (char *)this - 8;
      return 0LL;
    }
  }
  return result;
}
