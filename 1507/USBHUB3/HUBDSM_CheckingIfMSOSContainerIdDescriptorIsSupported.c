/*
 * XREFs of HUBDSM_CheckingIfMSOSContainerIdDescriptorIsSupported @ 0x1C00182E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfMSOSContainerIdDescriptorIsSupported(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_BYTE *)(v1 + 2448) & 1) != 0 )
    return 4061LL;
  if ( (unsigned __int16)(*(_WORD *)(v1 + 1974) - 256) <= 0xFFu
    || (*(_DWORD *)(v1 + 1616) & 0x80u) != 0
    || (*(_DWORD *)(v1 + 1628) & 0x20) != 0 )
  {
    return (*(_BYTE *)(v1 + 1628) & 2) != 0 ? 4089 : 4061;
  }
  return 4089LL;
}
