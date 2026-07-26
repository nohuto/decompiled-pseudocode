/*
 * XREFs of ndisMUpdateNameOnPMWakePacket @ 0x1C0044924
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C00449E4 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_SqZ @ 0x1C0043F9C (WPP_SF_SqZ.c)
 *     WPP_SF_dqZ @ 0x1C0044080 (WPP_SF_dqZ_ea_1C0044080.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  void *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_WORD *)(a2 + 12) = 0;
  v3 = *(__int64 **)(a1 + 968);
  if ( v3 )
  {
    while ( *((_DWORD *)v3 + 49) != *(_DWORD *)(a2 + 8) )
    {
      v3 = (__int64 *)*v3;
      if ( !v3 )
        goto LABEL_4;
    }
    v4 = (void *)(a2 + 14);
    *(_WORD *)(a2 + 12) = *((_WORD *)v3 + 32);
    memset((void *)(a2 + 14), 0, 0x80uLL);
    memcpy_s(v4, 0x7EuLL, (char *)v3 + 66, *((unsigned __int16 *)v3 + 32));
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_SqZ(v6, v5, (const wchar_t *)v4, a1, *(_QWORD *)(a1 + 3912));
  }
  else
  {
LABEL_4:
    if ( (unsigned __int8)byte_1C0085315 >= 3u )
      WPP_SF_dqZ(0LL, a2, *(_DWORD *)(a2 + 8), a1, *(_QWORD *)(a1 + 3912));
  }
}
