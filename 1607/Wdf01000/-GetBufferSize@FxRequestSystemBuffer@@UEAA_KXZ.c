/*
 * XREFs of ?GetBufferSize@FxRequestSystemBuffer@@UEAA_KXZ @ 0x1C007B5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxRequestSystemBuffer::GetBufferSize(FxRequestSystemBuffer *this)
{
  char *v1; // rcx
  char v2; // al

  v1 = (char *)*((_QWORD *)this[-7].m_Buffer + 23);
  v2 = *v1;
  if ( *v1 == 3 || v2 == 4 )
    return *((unsigned int *)v1 + 2);
  if ( (unsigned __int8)(v2 - 14) > 1u )
    return 0LL;
  return *((unsigned int *)v1 + 4);
}
