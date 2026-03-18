/*
 * XREFs of SymCryptParallelSha256AppendBlocks_xmm @ 0x14021B89C
 * Callers:
 *     SymCryptParallelSha256Append @ 0x14021B7D0 (SymCryptParallelSha256Append.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall SymCryptParallelSha256AppendBlocks_xmm(__m128i **a1, __int64 a2, unsigned __int64 a3, __m128i *a4)
{
  __m128i v4; // xmm6
  __m128i v5; // xmm0
  __m128i v6; // xmm3
  __m128i v7; // xmm6
  __m128i v8; // xmm4
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm4
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm0
  __m128i v15; // xmm3
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm4
  unsigned __int64 v21; // r10
  __m128i *v22; // r8
  __int64 v23; // r11
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __m128i v34; // xmm3
  __m128i si128; // xmm4
  __m128i *v36; // rax
  __m128i v37; // xmm5
  __int64 v38; // r8
  __m128i v39; // xmm6
  __m128i v40; // xmm3
  __m128i v41; // xmm5
  __m128i v42; // xmm5
  __m128i v43; // xmm9
  unsigned int *v44; // r8
  __m128i v45; // xmm10
  __m128i *v46; // rbp
  __m128i v47; // xmm11
  __int64 v48; // r11
  __m128i v49; // xmm12
  __m128i v50; // xmm7
  __m128i v51; // xmm5
  __m128i v52; // xmm3
  __m128i v53; // xmm2
  __m128i v54; // xmm6
  __m128i v55; // xmm2
  __m128i v56; // xmm4
  __m128i v57; // xmm2
  __m128i v58; // xmm3
  __m128i v59; // xmm2
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __m128i v62; // xmm1
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __m128i v65; // xmm1
  __m128i v66; // xmm1
  __m128i v67; // xmm1
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __m128i v70; // xmm4
  __m128i v71; // xmm1
  __m128i v72; // xmm3
  __m128i v73; // xmm4
  __m128i v74; // xmm0
  __m128i v75; // xmm2
  __m128i v76; // xmm1
  __m128i v77; // xmm5
  __m128i v78; // xmm3
  __m128i v79; // xmm2
  __m128i v80; // xmm1
  __m128i v81; // xmm5
  __m128i v82; // xmm3
  __m128i *result; // rax

  v4 = _mm_loadu_si128(*a1);
  v5 = _mm_loadu_si128(a1[1]);
  v6 = _mm_unpacklo_epi32(v4, v5);
  v7 = _mm_unpackhi_epi32(v4, v5);
  v8 = _mm_loadu_si128(a1[2]);
  v9 = _mm_loadu_si128(a1[3]);
  v10 = _mm_unpacklo_epi32(v8, v9);
  a4[11] = _mm_unpacklo_epi64(v6, v10);
  v11 = _mm_unpackhi_epi32(v8, v9);
  a4[9] = _mm_unpacklo_epi64(v7, v11);
  a4[10] = _mm_unpackhi_epi64(v6, v10);
  v12 = _mm_unpackhi_epi64(v7, v11);
  a4[8] = v12;
  v13 = _mm_loadu_si128(*a1 + 1);
  v14 = _mm_loadu_si128(a1[1] + 1);
  v15 = _mm_unpacklo_epi32(v13, v14);
  v16 = _mm_unpackhi_epi32(v13, v14);
  v17 = _mm_loadu_si128(a1[2] + 1);
  v18 = _mm_loadu_si128(a1[3] + 1);
  v19 = _mm_unpacklo_epi32(v17, v18);
  a4[7] = _mm_unpacklo_epi64(v15, v19);
  v20 = _mm_unpackhi_epi32(v17, v18);
  a4[5] = _mm_unpacklo_epi64(v16, v20);
  a4[6] = _mm_unpackhi_epi64(v15, v19);
  a4[4] = _mm_unpackhi_epi64(v16, v20);
  *a4 = v12;
  a4[1] = _mm_load_si128(a4 + 9);
  a4[2] = _mm_load_si128(a4 + 10);
  a4[3] = _mm_load_si128(a4 + 11);
  if ( a3 >= 0x40 )
  {
    v21 = a3 >> 6;
    do
    {
      v22 = a4 + 14;
      v23 = 4LL;
      do
      {
        v24 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a2);
        *(_QWORD *)a2 += 16LL;
        v25 = _mm_shuffle_epi8(v24, *(__m128i *)_ymm.m256_f32);
        v26 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 8));
        *(_QWORD *)(a2 + 8) += 16LL;
        v27 = _mm_shuffle_epi8(v26, *(__m128i *)_ymm.m256_f32);
        v28 = _mm_unpacklo_epi32(v25, v27);
        v29 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 16)), *(__m128i *)_ymm.m256_f32);
        *(_QWORD *)(a2 + 16) += 16LL;
        v30 = _mm_unpackhi_epi32(v25, v27);
        v31 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
        v32 = _mm_shuffle_epi8(v31, *(__m128i *)_ymm.m256_f32);
        v33 = _mm_unpacklo_epi32(v29, v32);
        v34 = _mm_unpackhi_epi32(v29, v32);
        v22[-2] = _mm_unpacklo_epi64(v28, v33);
        *v22 = _mm_unpacklo_epi64(v30, v34);
        v22[-1] = _mm_unpackhi_epi64(v28, v33);
        v22[1] = _mm_unpackhi_epi64(v30, v34);
        v22 += 4;
        --v23;
      }
      while ( v23 );
      si128 = _mm_load_si128(a4 + 27);
      v36 = a4 + 21;
      v37 = _mm_load_si128(a4 + 26);
      v38 = 24LL;
      v39 = _mm_load_si128(a4 + 12);
      do
      {
        v40 = _mm_load_si128(v36 - 8);
        v41 = _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_srli_epi32(v37, 0x11u), _mm_slli_epi32(v37, 0xFu)),
                      _mm_slli_epi32(v37, 0xDu)),
                    _mm_srli_epi32(v37, 0x13u)),
                  _mm_srli_epi32(v37, 0xAu)),
                v39);
        v39 = _mm_load_si128(v36 - 7);
        v42 = _mm_add_epi32(v41, *v36);
        v36 += 2;
        v37 = _mm_add_epi32(
                v42,
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v40, 0x19u), _mm_srli_epi32(v40, 7u)),
                      _mm_slli_epi32(v40, 0xEu)),
                    _mm_srli_epi32(v40, 0x12u)),
                  _mm_srli_epi32(v40, 3u)));
        v36[5] = v37;
        si128 = _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(_mm_srli_epi32(si128, 0x11u), _mm_slli_epi32(si128, 0xFu)),
                            _mm_slli_epi32(si128, 0xDu)),
                          _mm_srli_epi32(si128, 0x13u)),
                        _mm_srli_epi32(si128, 0xAu)),
                      v40),
                    v36[-1]),
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(_mm_slli_epi32(v39, 0x19u), _mm_srli_epi32(v39, 7u)),
                        _mm_slli_epi32(v39, 0xEu)),
                      _mm_srli_epi32(v39, 0x12u)),
                    _mm_srli_epi32(v39, 3u)));
        v36[6] = si128;
        --v38;
      }
      while ( v38 );
      v43 = _mm_load_si128(a4 + 11);
      v44 = (unsigned int *)&unk_140250008;
      v45 = _mm_load_si128(a4 + 10);
      v46 = a4 + 4;
      v47 = _mm_load_si128(a4 + 9);
      v48 = 16LL;
      v49 = _mm_load_si128(a4 + 8);
      do
      {
        v50 = _mm_load_si128(v46 + 3);
        v51 = _mm_load_si128(v46 + 2);
        v52 = _mm_load_si128(v46 + 1);
        v53 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v50, 0x1Au), _mm_srli_epi32(v50, 6u)),
                              _mm_slli_epi32(v50, 0x15u)),
                            _mm_srli_epi32(v50, 0xBu)),
                          _mm_slli_epi32(v50, 7u)),
                        _mm_srli_epi32(v50, 0x19u)),
                      v46[8]),
                    *v46),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v51, v52), v50), v52)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v44 - 2)), 0));
        v54 = _mm_add_epi32(v53, v49);
        v46[4] = v54;
        v49 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v43, 0x1Eu), _mm_srli_epi32(v43, 2u)),
                          _mm_slli_epi32(v43, 0x13u)),
                        _mm_srli_epi32(v43, 0xDu)),
                      _mm_slli_epi32(v43, 0xAu)),
                    _mm_srli_epi32(v43, 0x16u)),
                  v53),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v45, v43), v47), _mm_and_si128(v45, v43)));
        v55 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v54, 0x1Au), _mm_srli_epi32(v54, 6u)),
                              _mm_slli_epi32(v54, 0x15u)),
                            _mm_srli_epi32(v54, 0xBu)),
                          _mm_slli_epi32(v54, 7u)),
                        _mm_srli_epi32(v54, 0x19u)),
                      v46[9]),
                    v52),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v51, v50), v54), v51)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v44 - 1)), 0));
        v56 = _mm_add_epi32(v55, v47);
        v46[5] = v56;
        v47 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v49, 0x1Eu), _mm_srli_epi32(v49, 2u)),
                          _mm_slli_epi32(v49, 0x13u)),
                        _mm_srli_epi32(v49, 0xDu)),
                      _mm_slli_epi32(v49, 0xAu)),
                    _mm_srli_epi32(v49, 0x16u)),
                  v55),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v49, v43), v45), _mm_and_si128(v49, v43)));
        v57 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v56, 0x1Au), _mm_srli_epi32(v56, 6u)),
                              _mm_slli_epi32(v56, 0x15u)),
                            _mm_srli_epi32(v56, 0xBu)),
                          _mm_slli_epi32(v56, 7u)),
                        _mm_srli_epi32(v56, 0x19u)),
                      v46[10]),
                    v51),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v54, v50), v56), v50)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*v44), 0));
        v58 = _mm_add_epi32(v57, v45);
        v46[6] = v58;
        v46 += 4;
        v44 += 4;
        v45 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v47, 0x1Eu), _mm_srli_epi32(v47, 2u)),
                          _mm_slli_epi32(v47, 0x13u)),
                        _mm_srli_epi32(v47, 0xDu)),
                      _mm_slli_epi32(v47, 0xAu)),
                    _mm_srli_epi32(v47, 0x16u)),
                  v57),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v47, v49), v43), _mm_and_si128(v47, v49)));
        v59 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v58, 0x1Au), _mm_srli_epi32(v58, 6u)),
                              _mm_slli_epi32(v58, 0x15u)),
                            _mm_srli_epi32(v58, 0xBu)),
                          _mm_slli_epi32(v58, 7u)),
                        _mm_srli_epi32(v58, 0x19u)),
                      v46[7]),
                    v50),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v56, v54), v58), v54)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v44 - 3)), 0));
        v46[3] = _mm_add_epi32(v59, v43);
        v43 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v45, 0x1Eu), _mm_srli_epi32(v45, 2u)),
                          _mm_slli_epi32(v45, 0x13u)),
                        _mm_srli_epi32(v45, 0xDu)),
                      _mm_slli_epi32(v45, 0xAu)),
                    _mm_srli_epi32(v45, 0x16u)),
                  v59),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v47, v45), v49), _mm_and_si128(v47, v45)));
        --v48;
      }
      while ( v48 );
      v60 = _mm_add_epi32(_mm_load_si128(a4 + 3), v43);
      a4[11] = v60;
      v61 = _mm_load_si128(a4 + 2);
      a4[3] = v60;
      v62 = _mm_add_epi32(v61, v45);
      a4[10] = v62;
      v63 = _mm_load_si128(a4 + 1);
      a4[2] = v62;
      v64 = _mm_add_epi32(v63, v47);
      a4[9] = v64;
      v65 = _mm_load_si128(a4);
      a4[1] = v64;
      v66 = _mm_add_epi32(v65, v49);
      a4[8] = v66;
      *a4 = v66;
      v67 = _mm_load_si128(a4 + 6);
      a4[7] = _mm_add_epi32(_mm_load_si128(a4 + 7), a4[71]);
      a4[6] = _mm_add_epi32(v67, a4[70]);
      v68 = _mm_load_si128(a4 + 4);
      a4[5] = _mm_add_epi32(_mm_load_si128(a4 + 69), a4[5]);
      a4[4] = _mm_add_epi32(v68, a4[68]);
      --v21;
    }
    while ( v21 );
  }
  v69 = _mm_load_si128(a4 + 10);
  v70 = _mm_load_si128(a4 + 11);
  v71 = _mm_load_si128(a4 + 9);
  v72 = _mm_unpacklo_epi32(v70, v69);
  v73 = _mm_unpackhi_epi32(v70, v69);
  v74 = _mm_load_si128(a4 + 8);
  v75 = _mm_unpackhi_epi32(v71, v74);
  v76 = _mm_unpacklo_epi32(v71, v74);
  **a1 = _mm_unpacklo_epi64(v72, v76);
  *a1[1] = _mm_unpackhi_epi64(v72, v76);
  *a1[2] = _mm_unpacklo_epi64(v73, v75);
  *a1[3] = _mm_unpackhi_epi64(v73, v75);
  v77 = _mm_load_si128(a4 + 7);
  v78 = _mm_load_si128(a4 + 5);
  v79 = _mm_unpacklo_epi32(v77, a4[6]);
  v80 = _mm_unpacklo_epi32(v78, a4[4]);
  v81 = _mm_unpackhi_epi32(v77, a4[6]);
  v82 = _mm_unpackhi_epi32(v78, a4[4]);
  (*a1)[1] = _mm_unpacklo_epi64(v79, v80);
  a1[1][1] = _mm_unpackhi_epi64(v79, v80);
  a1[2][1] = _mm_unpacklo_epi64(v81, v82);
  result = a1[3];
  result[1] = _mm_unpackhi_epi64(v81, v82);
  return result;
}
