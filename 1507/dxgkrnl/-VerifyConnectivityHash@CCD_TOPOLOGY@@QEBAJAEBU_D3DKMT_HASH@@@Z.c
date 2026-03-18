/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBU_D3DKMT_HASH@@@Z @ 0x1C0065198
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00623BC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0062510 (-CommitTo@CDS_JOURNAL@CCD_BTL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0065230 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 */

__int64 __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(
        CCD_TOPOLOGY *this,
        const struct _D3DKMT_HASH *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rdx
  unsigned __int16 v7; // bx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *(_DWORD *)a2 != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 8);
  v7 = 0;
  if ( v6 && *v6 == 1 )
    return RtlCompareMemory(a2, v6, 0x14uLL) != 20 ? 0xC000022E : 0;
  v9 = WdLogNewEntry5_WdWarning(this, v6, a3, a4);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = *((_QWORD *)this + 8);
  WdLogEvent5_WdWarning(v9);
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    v7 = *(_WORD *)(v10 + 20);
  DxgkLogCodePointPacket(0x40u, v7, 0, 0);
  return 0LL;
}
