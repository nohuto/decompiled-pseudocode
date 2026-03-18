/*
 * XREFs of ?GetBuffer@FxRequestSystemBuffer@@UEAAPEAXXZ @ 0x1C007B680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall FxRequestSystemBuffer::GetBuffer(FxRequestSystemBuffer *this)
{
  unsigned __int8 *v2; // rcx
  unsigned __int8 v3; // al
  int v5; // ecx
  int v6; // ecx
  _MDL *m_Mdl; // rcx

  v2 = (unsigned __int8 *)*((_QWORD *)this[-7].m_Buffer + 23);
  v3 = *v2;
  if ( *v2 < 3u )
    return 0LL;
  if ( v3 > 4u )
  {
    if ( (unsigned __int8)(v3 - 14) <= 1u )
      return this->m_Buffer;
    return 0LL;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 5) + 64LL) - 48LL) + 212LL) - 1;
  if ( !v5 )
    return this->m_Buffer;
  v6 = v5 - 1;
  if ( !v6 )
    return this->m_Buffer;
  if ( v6 != 1 )
    return 0LL;
  m_Mdl = this->m_Mdl;
  if ( (m_Mdl->MdlFlags & 5) != 0 )
    return m_Mdl->MappedSystemVa;
  else
    return MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
}
