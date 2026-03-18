/*
 * XREFs of ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z @ 0x1800F5F58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CColorMatrixEffect::ProcessUpdate(
        CColorMatrixEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_COLORMATRIXEFFECT *a3)
{
  _BYTE v5[96]; // [rsp+30h] [rbp-9h]

  *(_OWORD *)v5 = *(_OWORD *)a3;
  *(_OWORD *)&v5[16] = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v5[32] = *((_OWORD *)a3 + 2);
  *(_OWORD *)&v5[48] = *((_OWORD *)a3 + 3);
  *(_OWORD *)&v5[64] = *((_OWORD *)a3 + 4);
  *(_OWORD *)&v5[80] = *((_OWORD *)a3 + 5);
  (*(void (__fastcall **)(CColorMatrixEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_OWORD *)this + 12) = *(_OWORD *)&v5[8];
  *((_OWORD *)this + 13) = *(_OWORD *)&v5[24];
  *((_OWORD *)this + 14) = *(_OWORD *)&v5[40];
  *((_OWORD *)this + 15) = *(_OWORD *)&v5[56];
  *((_OWORD *)this + 16) = *(_OWORD *)&v5[72];
  *((_DWORD *)this + 68) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v5[80], 8));
  *((_DWORD *)this + 69) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v5[80], 12));
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
