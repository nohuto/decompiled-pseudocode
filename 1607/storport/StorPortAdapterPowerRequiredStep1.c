/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C00319F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0030890 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     Template_pqtx @ 0x1C0032BAC (Template_pqtx.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5368) )
  {
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)(Context + 5088) + 20LL);
    if ( (a2 & 8) != 0 || *(char *)(Context + 108) < 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5368);
      a2 = Context / 0x2710;
      v3[672] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1358);
      if ( !v3[670] )
        v3[670] = v3[667];
    }
    v3[671] = 0LL;
  }
  ++*((_DWORD *)v3 + 1356);
  if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
    Template_pqtx(Context, a2, a3, *(_QWORD *)v3[636], *((_DWORD *)v3 + 14));
  *(_DWORD *)(v3[636] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v3);
  return StorPortAdapterPowerRequiredStep2(v3);
}
