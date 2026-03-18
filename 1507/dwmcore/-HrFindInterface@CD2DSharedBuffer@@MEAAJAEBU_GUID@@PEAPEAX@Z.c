/*
 * XREFs of ?HrFindInterface@CD2DSharedBuffer@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180138A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DSharedBuffer::HrFindInterface(CD2DSharedBuffer *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  char *v5; // rcx

  result = 0LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1f3047e9_192e_4d40_b9c8_ccd90958ace5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1f3047e9_192e_4d40_b9c8_ccd90958ace5.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1f3047e9_192e_4d40_b9c8_ccd90958ace5.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      if ( this )
        v5 = (char *)this + 16;
      else
        v5 = 0LL;
      *a3 = v5;
    }
  }
  return result;
}
