/*
 * XREFs of EtwpApplyEventNameFilter @ 0x140229810
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     EtwpEventNameFilterSearch @ 0x140229B6C (EtwpEventNameFilterSearch.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x140229DC0 (EtwpGetEventNameFromEventMetadata.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  void **v9; // r14
  unsigned __int8 CurrentIrql; // r12
  char v11; // bl
  __int64 v12; // rax
  unsigned int i; // ecx
  __int64 v14; // rax
  PVOID *v15; // rdx
  unsigned int v16; // ecx
  char *v17; // r8
  __int64 v18; // r14
  _BYTE *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 v22; // al
  __int64 EventNameFromEventMetadata; // rax
  bool v24; // zf
  unsigned __int16 v26; // [rsp+24h] [rbp-74h] BYREF
  PVOID P; // [rsp+28h] [rbp-70h]
  unsigned int v28; // [rsp+30h] [rbp-68h]
  void **v29; // [rsp+38h] [rbp-60h]
  void *Src[2]; // [rsp+40h] [rbp-58h] BYREF

  v28 = a2;
  P = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  CurrentIrql = 0;
  v11 = 1;
  if ( a5 )
  {
    v12 = 16LL * a3;
    if ( v12 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v12 + a4 > 0x7FFFFFFF0000LL || v12 + a4 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= a3 )
      goto LABEL_23;
    v14 = 16LL * i;
    v15 = (PVOID *)(v14 + a4);
    if ( *(_BYTE *)(v14 + a4 + 12) == 1 )
      break;
  }
  if ( a6 >= 2u )
  {
    v9 = (void **)(v14 + a4);
    v29 = (void **)(v14 + a4);
    P = *v15;
    goto LABEL_23;
  }
  *(_OWORD *)Src = *(_OWORD *)v15;
  v9 = Src;
  v29 = Src;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
  if ( v16 >= 0xFFFF )
  {
    v11 = 0;
    goto LABEL_44;
  }
  if ( a5 )
  {
    if ( v16 )
    {
      v17 = (char *)Src[0] + v16;
      if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src[0] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v16 = (unsigned int)Src[1];
      }
    }
  }
  P = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x74777445u);
  if ( P )
  {
    memmove(P, Src[0], LODWORD(Src[1]));
LABEL_23:
    if ( v9 && P )
    {
      if ( a6 < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v18 = *(_QWORD *)(a1 + 368);
      if ( v18 )
      {
        v19 = *(_BYTE **)(v18 + 80LL * v28 + 72);
        if ( v19
          && (v20 = *(_QWORD *)(a1 + 368)) != 0
          && (*(_DWORD *)(v20 + 80LL * v28) & 0x80000400) == 0x80000400
          && ((v21 = *(_QWORD *)(v20 + 80LL * v28 + 72), v22 = *(_BYTE *)(v21 + 1), a7 <= v22) || !v22)
          && (!a8 || (*(_QWORD *)(v21 + 8) & a8) != 0 && (a8 & *(_QWORD *)(v21 + 16)) == *(_QWORD *)(v21 + 16)) )
        {
          EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(P, *((unsigned int *)v29 + 2), &v26);
          if ( EventNameFromEventMetadata )
          {
            if ( v26 )
              v24 = *v19 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v26, v19);
            else
              v24 = *v19 == 0;
            v11 = v24;
          }
        }
        else
        {
          v11 = 1;
        }
      }
      if ( a6 < 2u )
        __writecr8(CurrentIrql);
    }
  }
LABEL_44:
  if ( a5 && P )
    ExFreePoolWithTag(P, 0);
  return v11;
}
