/*
 * XREFs of ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18009EC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRenderData::AddOcclusionInformation(
        CRenderData *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  struct IDrawingContext *v4; // rdx

  v4 = 0LL;
  if ( a2 )
    v4 = (struct COcclusionContext *)((char *)a2 + 8);
  return CRenderData::Draw(this, v4);
}
