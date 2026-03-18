/*
 * XREFs of ?GetFlags@FxRequestSystemBuffer@@UEAAGXZ @ 0x1C006CDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxRequestSystemBuffer::GetFlags(FxRequestSystemBuffer *this)
{
  char *v1; // r8
  _BOOL8 result; // rax
  char v3; // cl

  v1 = (char *)*((_QWORD *)this[-7].m_Buffer + 23);
  result = 0LL;
  v3 = *v1;
  if ( *v1 != 3 )
  {
    if ( v3 == 4 )
    {
      return 1LL;
    }
    else if ( (unsigned __int8)(v3 - 14) <= 1u && (*((_DWORD *)v1 + 6) & 3) != 0 )
    {
      return (*((_DWORD *)v1 + 6) & 3) != 3;
    }
  }
  return result;
}
