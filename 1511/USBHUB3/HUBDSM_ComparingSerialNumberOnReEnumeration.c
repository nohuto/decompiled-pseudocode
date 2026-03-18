/*
 * XREFs of HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001A7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     Template_psqzq @ 0x1C0023338 (Template_psqzq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDSM_ComparingSerialNumberOnReEnumeration(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned int v3; // r15d
  int v4; // edi
  char *v5; // rbp
  int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0LL;
  v3 = 4089;
  v4 = *(_DWORD *)(v1 + 2132);
  v5 = *(char **)(v1 + 2136);
  if ( (*(_DWORD *)(v1 + 1620) & 0x800) != 0 )
  {
    v6 = v4 - 14;
    v5 += 12;
  }
  else
  {
    v6 = v4 - 2;
  }
  v7 = *(_DWORD *)(v1 + 240) - 2;
  if ( v6 == v7 )
  {
    v2 = v1 + 1716;
    v10 = RtlCompareMemory((const void *)(v1 + 1718), v5, v7);
    if ( v10 == v7 )
      return v3;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x68u,
      (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids,
      v10,
      v7);
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x67u,
      (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids);
  }
  v3 = 4061;
  if ( (*(_DWORD *)(v1 + 2420) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", v1 + 488);
  if ( v2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x40000) != 0 )
      Template_psqzq(v9, v8, v1 + 1500, *(_QWORD *)(*(_QWORD *)v1 + 224LL), v5, v6, v2 + 2, v7);
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x40000) != 0 )
  {
    Template_psqzq(v9, v8, v1 + 1500, *(_QWORD *)(*(_QWORD *)v1 + 224LL), v5, v6, 0LL, 0);
  }
  return v3;
}
