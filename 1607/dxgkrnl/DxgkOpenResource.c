/*
 * XREFs of DxgkOpenResource @ 0x1C008D9B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008ED3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  __m128i v5; // xmm2
  unsigned int v6; // ebx
  __int64 v7; // r8
  _DWORD v9[8]; // [rsp+60h] [rbp+0h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2005);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v5 = *(__m128i *)v4;
  *(_OWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)(v4 + 32);
  *(_OWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)(v4 + 48);
  *(_QWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_QWORD *)(v4 + 64);
  *(_DWORD *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL) = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  v6 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v7, 2005);
  return v6;
}
