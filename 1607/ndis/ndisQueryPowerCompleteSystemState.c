/*
 * XREFs of ndisQueryPowerCompleteSystemState @ 0x1C00128D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(int a1, unsigned int *a2, __int64 a3)
{
  char v5; // al
  __int64 v6; // r9
  NTSTATUS v7; // eax
  int v8; // ecx
  int v9; // esi

  v5 = byte_1C00895D5;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
  {
    WPP_SF_qD(34LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3, a2[12]);
    v5 = byte_1C00895D5;
  }
  v6 = a2[12];
  if ( (int)v6 < 0 )
  {
    if ( (unsigned __int8)v5 >= 4u )
      WPP_SF_qD(35LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3, v6);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        a1,
        (unsigned int)&QueryPowerCompleteSystemState,
        a3 + 4064,
        a3 + 4064,
        *(_DWORD *)(a3 + 4112),
        *(_QWORD *)(a3 + 4080),
        a2[12]);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4176), a2, 0x20u);
    return a2[12];
  }
  else
  {
    v7 = PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(a3 + 3888),
           3u,
           *(POWER_STATE *)(a3 + 3184),
           ndisQueryPowerComplete,
           (PVOID)a3,
           0LL);
    v9 = v7;
    if ( v7 < 0 )
    {
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_qD(36LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3, (unsigned int)v7);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          v8,
          (unsigned int)&QueryPowerCompleteSystemStatePoRequest,
          a3 + 4064,
          a3 + 4064,
          *(_DWORD *)(a3 + 4112),
          *(_QWORD *)(a3 + 4080),
          v9);
    }
    else
    {
      *(_QWORD *)(a3 + 776) = a2;
    }
    if ( v9 < 0 )
    {
      a2[12] = v9;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4176), a2, 0x20u);
    }
    else
    {
      v9 = -1073741802;
    }
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_q(37LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3);
    return (unsigned int)v9;
  }
}
