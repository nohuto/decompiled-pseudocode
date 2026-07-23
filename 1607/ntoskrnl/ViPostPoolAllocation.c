/*
 * XREFs of ViPostPoolAllocation @ 0x1407026E4
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViPostPoolAllocation(unsigned __int64 a1, char a2)
{
  __int64 v2; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  _DWORD *v11; // rcx
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int32 v14; // ecx
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int32 v18; // ecx
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  VerifierIsTrackingPool = 1;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = v2 & 1;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v4 + 8);
  if ( v6 <= 0xFE0 )
  {
    v9 = v6 + 31;
  }
  else
  {
    if ( (v6 & 0xFFF) > 0xFC0 || v6 >= 0x10000 )
    {
      v10 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_8;
    }
    v9 = v6 + 15;
  }
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_8:
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~1uLL;
    v10 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v2;
  }
  else
  {
    if ( v6 > 0xFE0 )
    {
LABEL_17:
      v12 = (unsigned __int64 *)(v10 + v2 - 8);
      goto LABEL_18;
    }
    v10 -= 16LL;
  }
  if ( !v5 )
    goto LABEL_17;
  v10 = v6;
  if ( (v2 & 0xFFF) != 0 )
  {
    v11 = (_DWORD *)(v2 & 0xFFFFFFFFFFFFF000uLL);
    v12 = (unsigned __int64 *)((v2 & 0xFFFFFFFFFFFFF000uLL) + 16);
  }
  else
  {
    v11 = (_DWORD *)(v2 + 4080);
    v12 = (unsigned __int64 *)(v2 + 4072);
  }
  *v11 |= 0x4000u;
LABEL_18:
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = v10;
  if ( (a2 & 1) != 0 )
  {
    v13 = v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 96), v10);
    if ( v13 > *(_QWORD *)(v8 + 112) )
      *(_QWORD *)(v8 + 112) = v13;
    v14 = _InterlockedIncrement((volatile signed __int32 *)(v8 + 80));
    if ( v14 > *(_DWORD *)(v8 + 88) )
      *(_DWORD *)(v8 + 88) = v14;
    v15 = v10 + _InterlockedExchangeAdd64(&qword_140307290, v10);
    if ( v15 > qword_1403072A0 )
      qword_1403072A0 = v15;
    v16 = _InterlockedIncrement(&dword_140307280);
    if ( v16 > dword_140307288 )
      dword_140307288 = v16;
  }
  else
  {
    v17 = v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 104), v10);
    if ( v17 > *(_QWORD *)(v8 + 120) )
      *(_QWORD *)(v8 + 120) = v17;
    v18 = _InterlockedIncrement((volatile signed __int32 *)(v8 + 84));
    if ( v18 > *(_DWORD *)(v8 + 92) )
      *(_DWORD *)(v8 + 92) = v18;
    v19 = v10 + _InterlockedExchangeAdd64(&qword_140307298, v10);
    if ( v19 > qword_1403072A8 )
      qword_1403072A8 = v19;
    v20 = _InterlockedIncrement(&dword_140307284);
    if ( v20 > dword_14030728C )
      dword_14030728C = v20;
  }
  result = v2;
  *v12 = a1;
  return result;
}
