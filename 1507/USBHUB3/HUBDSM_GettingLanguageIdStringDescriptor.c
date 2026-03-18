/*
 * XREFs of HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C00181D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C001F76C (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingLanguageIdStringDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2008);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  *(_QWORD *)(v1 + 2008) = 0LL;
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 1716, 255, 3, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v5) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Bu,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v5);
    HUBSM_AddEvent(v1 + 488, 0xFA4u);
  }
  return 1000LL;
}
