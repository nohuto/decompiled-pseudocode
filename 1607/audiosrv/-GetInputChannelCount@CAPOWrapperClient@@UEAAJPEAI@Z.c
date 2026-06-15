/*
 * XREFs of ?GetInputChannelCount@CAPOWrapperClient@@UEAAJPEAI@Z @ 0x18008BBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::GetInputChannelCount(CAPOWrapperClient *this, unsigned int *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 72LL))(v2, a2);
  else
    return 2147500033LL;
}
