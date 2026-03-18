/*
 * XREFs of ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N2@Z @ 0x1C001E180
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C001DE58 (-CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@.c)
 */

void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        char a3,
        bool *a4,
        bool *a5)
{
  if ( a2->FenceValue )
    *((_QWORD *)this + 41) = a2->FenceValue;
  if ( a3 )
    ++*((_DWORD *)this + 78);
  *a4 = CFlipExBuffer::CheckIndependentFlipAttributes(this, a2, a5);
}
