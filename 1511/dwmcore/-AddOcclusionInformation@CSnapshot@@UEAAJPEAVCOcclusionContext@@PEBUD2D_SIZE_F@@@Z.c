/*
 * XREFs of ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180126AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180055E30 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSnapshot::AddOcclusionInformation(
        CSnapshot *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v3; // eax
  float v4; // xmm1_4
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 10);
  v6[0] = 0.0;
  v6[1] = 0.0;
  v4 = (float)*((int *)this + 11);
  v6[2] = (float)v3;
  v6[3] = v4;
  COcclusionContext::DrawOcclusionRectangle((__int64)a2 + 8, v6);
  return 0LL;
}
