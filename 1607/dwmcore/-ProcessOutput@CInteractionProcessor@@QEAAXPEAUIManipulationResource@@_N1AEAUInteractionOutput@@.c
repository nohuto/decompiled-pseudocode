/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1AEAUInteractionOutput@@@Z @ 0x18016ECE4
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z @ 0x18016E9F8 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        __int64 (__fastcall ***a2)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *),
        unsigned __int8 a3,
        __int64 a4,
        struct InteractionOutput *a5)
{
  char v5; // r14
  char v7; // bl
  char v9; // r14
  char v10; // bl
  __m128 v12; // xmm1
  unsigned __int64 v13; // xmm0_8
  __m128 v14; // xmm1
  unsigned __int64 v15; // xmm0_8
  __m128 v16; // xmm1
  unsigned __int64 v17; // xmm0_8
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  bool v20; // zf
  __int64 (__fastcall **v21)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *); // rax
  int v22; // eax
  const GUID *v23; // r8
  const GUID *v24; // r9
  __int64 (__fastcall **v25)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *); // rax
  int v26; // [rsp+30h] [rbp-91h] BYREF
  __int64 v27; // [rsp+38h] [rbp-89h] BYREF
  struct IManipulationResource *v28; // [rsp+40h] [rbp-81h] BYREF
  float v29; // [rsp+48h] [rbp-79h]
  int v30; // [rsp+50h] [rbp-71h] BYREF
  CInteractionProcessor *v31; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  int v33; // [rsp+70h] [rbp-51h]
  unsigned __int64 v34; // [rsp+74h] [rbp-4Dh]
  float v35; // [rsp+7Ch] [rbp-45h]
  __int128 v36; // [rsp+80h] [rbp-41h]
  struct IManipulationResource **v37; // [rsp+90h] [rbp-31h]
  __int64 v38; // [rsp+98h] [rbp-29h]
  int *v39; // [rsp+A0h] [rbp-21h]
  __int64 v40; // [rsp+A8h] [rbp-19h]
  __int64 *v41; // [rsp+B0h] [rbp-11h]
  __int64 v42; // [rsp+B8h] [rbp-9h]
  int *v43; // [rsp+C0h] [rbp-1h]
  __int64 v44; // [rsp+C8h] [rbp+7h]

  v5 = *((_BYTE *)this + 144) >> 3;
  v7 = *((_BYTE *)this + 144) >> 4;
  v26 = 0;
  v9 = v5 & 1;
  v10 = v7 & 1;
  if ( a3 )
  {
    if ( (*((_BYTE *)this + 408) & 1) == 0 )
      *((_DWORD *)a5 + 2) = 0;
    if ( (*((_BYTE *)this + 408) & 2) == 0 )
      *((_DWORD *)a5 + 3) = 0;
    if ( (*((_BYTE *)this + 408) & 4) == 0 )
      *((_DWORD *)a5 + 4) = 1065353216;
    memset_0(&pData, 0, 0x54uLL);
    v29 = 0.0;
    v12 = (__m128)*((unsigned int *)a5 + 4);
    *(_QWORD *)&pData.Size = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 2), (__m128)*((unsigned int *)a5 + 3)).m128_u64[0];
    v29 = FLOAT_1_0;
    v13 = _mm_unpacklo_ps(v12, v12).m128_u64[0];
    v14 = (__m128)*((unsigned int *)a5 + 7);
    v34 = v13;
    v15 = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 6), v14).m128_u64[0];
    v16 = (__m128)*((unsigned int *)a5 + 9);
    *(_QWORD *)((char *)&v36 + 4) = v15;
    v17 = _mm_unpacklo_ps(v16, v16).m128_u64[0];
    v18 = (__m128)*((unsigned int *)a5 + 11);
    v33 = 0;
    v29 = 0.0;
    v37 = (struct IManipulationResource **)v17;
    v19 = (__m128)*((unsigned int *)a5 + 10);
    v35 = FLOAT_1_0;
    v29 = 0.0;
    v19.m128_u64[0] = _mm_unpacklo_ps(v19, v18).m128_u64[0];
    v18.m128_i32[0] = *((_DWORD *)a5 + 8);
    HIDWORD(v36) = 0;
    v29 = 0.0;
    v39 = (int *)v19.m128_u64[0];
    v19.m128_i32[0] = *((_DWORD *)a5 + 13);
    LODWORD(v38) = 0;
    LODWORD(v36) = v19.m128_i32[0];
    HIDWORD(v38) = v18.m128_i32[0];
    LODWORD(v40) = 0;
    if ( !*((_DWORD *)this + 98) || (v20 = (*((_BYTE *)a5 + 4) & 2) == 0, LODWORD(pData.Ptr) = 2, !v20) )
      LODWORD(pData.Ptr) = 0;
    HIDWORD(v40) = *((_DWORD *)a5 + 5);
    LODWORD(v41) = *((_DWORD *)this + 97);
    v21 = *a2;
    BYTE4(pData.Ptr) = (*((_BYTE *)this + 408) >> 6) | BYTE4(pData.Ptr) & 0xE0 | (4
                                                                                * (*((_BYTE *)this + 409) & 1 | (2 * (v9 & 1 | (2 * (v10 & 1 | 2))))));
    v22 = (*v21)((struct IManipulationResource *)a2, &pData);
  }
  else
  {
    v27 = 0LL;
    if ( !*((_DWORD *)this + 98) || (*((_BYTE *)a5 + 4) & 2) != 0 || (LODWORD(v27) = 3, !*(_DWORD *)a5) )
      LODWORD(v27) = 0;
    v25 = *a2;
    BYTE4(v27) = BYTE4(v27) & 0xE0 | (*((_BYTE *)this + 408) >> 6) | (4
                                                                    * (*((_BYTE *)this + 409) & 1 | (2 * (v9 & 1 | (2 * (v10 & 1 | 2))))));
    v22 = v25[1]((struct IManipulationResource *)a2, (EVENT_DATA_DESCRIPTOR *)&v27);
  }
  v26 = v22;
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v31 = this;
    *(_QWORD *)&v36 = &v31;
    v37 = &v28;
    v30 = a3;
    v39 = &v30;
    v41 = &v27;
    v43 = &v26;
    *((_QWORD *)&v36 + 1) = 8LL;
    v28 = (struct IManipulationResource *)a2;
    v38 = 8LL;
    v40 = 4LL;
    LODWORD(v27) = 1;
    v42 = 4LL;
    v44 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C57DC, v23, v24, 7u, &pData);
  }
}
