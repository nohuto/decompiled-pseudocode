/*
 * XREFs of HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C0018D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBDTX_LogAlternateMode @ 0x1C0021DB4 (HUBDTX_LogAlternateMode.c)
 *     HUBWNF_PublishBillboardDeviceState @ 0x1C00306D0 (HUBWNF_PublishBillboardDeviceState.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rbx
  __int64 v4; // rsi
  int v5; // eax
  int v6; // [rsp+28h] [rbp-30h]
  __int16 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  __int16 v9; // [rsp+48h] [rbp-10h]
  char v10; // [rsp+4Ah] [rbp-Eh]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(__int64 **)(v1 + 2616);
  if ( !v2 )
    return 4061LL;
  v4 = *v2;
  if ( *((_BYTE *)v2 + 8) == 0xFF )
    *((_BYTE *)v2 + 8) = 0;
  for ( ; *((_BYTE *)v2 + 8) < *(_BYTE *)(v4 + 4); ++*((_BYTE *)v2 + 8) )
  {
    if ( *(_BYTE *)(v4 + 4LL * *((unsigned __int8 *)v2 + 8) + 47) )
      break;
    HUBDTX_LogAlternateMode(v1, 0LL);
  }
  if ( *((_BYTE *)v2 + 8) == *(_BYTE *)(v4 + 4) )
  {
    HIBYTE(v7) = *((_BYTE *)v2 + 10);
    v10 = *((_BYTE *)v2 + 11);
    LOBYTE(v7) = 1;
    v9 = v7;
    v8 = v1;
    v5 = HUBWNF_PublishBillboardDeviceState(&v8);
    if ( v5 >= 0 )
    {
      *(_BYTE *)(*(_QWORD *)(v1 + 2616) + 9LL) = 1;
    }
    else
    {
      v6 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        2u,
        0x58u,
        (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
        v6,
        v1);
    }
    *((_BYTE *)v2 + 8) = -1;
    return 4061LL;
  }
  return 4089LL;
}
