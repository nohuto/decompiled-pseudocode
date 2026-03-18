/*
 * XREFs of ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@PEAU2@@Z @ 0x18018C15C
 * Callers:
 *     ?GetGlobalOutput@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x180170090 (-GetGlobalOutput@CInteractionContextWrapper@@UEAA-AUInteractionMotion@@XZ.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     TransformTranslateDelta @ 0x1800C2640 (TransformTranslateDelta.c)
 */

void __fastcall CInteractionContextTransformHelper::UnTransformOutput(
        CInteractionContextTransformHelper *this,
        const struct InteractionOutput *a2,
        struct InteractionOutput *a3)
{
  __int64 v3; // rdx
  __m128 *v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rdx
  __m128 v7; // xmm4
  __m128 v8; // xmm2
  __m128 *v9; // r8
  __int64 v10; // r10
  __int64 v11; // [rsp+40h] [rbp+8h]

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_QWORD *)a3 + 6) = *((_QWORD *)a2 + 6);
  *((_DWORD *)a3 + 14) = *((_DWORD *)a2 + 14);
  if ( !D2D1::Matrix3x2F::IsIdentity(this) )
  {
    TransformTranslateDelta(*(float *)(v3 + 8), *(float *)(v3 + 12), v4 + 3, (float *)(v5 + 8), (float *)(v5 + 12));
    v11 = *(_QWORD *)(v6 + 40);
    v7 = (__m128)HIDWORD(v11);
    v8 = (__m128)HIDWORD(v11);
    v8.m128_f32[0] = (float)((float)(*((float *)&v11 + 1) * v9->m128_f32[2]) + (float)(*(float *)&v11 * v9->m128_f32[0]))
                   + v9[1].m128_f32[0];
    v7.m128_f32[0] = (float)((float)(*((float *)&v11 + 1) * v9->m128_f32[3]) + (float)(*(float *)&v11 * v9->m128_f32[1]))
                   + v9[1].m128_f32[1];
    *(_QWORD *)(v10 + 40) = _mm_unpacklo_ps(v8, v7).m128_u64[0];
    TransformTranslateDelta(*(float *)(v6 + 24), *(float *)(v6 + 28), v9, (float *)(v10 + 28), (float *)(v10 + 28));
  }
}
