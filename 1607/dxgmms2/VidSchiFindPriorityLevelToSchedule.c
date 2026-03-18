/*
 * XREFs of VidSchiFindPriorityLevelToSchedule @ 0x1C0024274
 * Callers:
 *     VidSchiSelectContext @ 0x1C00255D4 (VidSchiSelectContext.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0010F04 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0011BA8 (VidSchiStartNodeYield.c)
 *     Template_pqxxxx @ 0x1C00239A4 (Template_pqxxxx.c)
 */

__int64 __fastcall VidSchiFindPriorityLevelToSchedule(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rdi
  unsigned int MostSignificantBit; // ebp
  int v4; // esi
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER v6; // rdx
  LARGE_INTEGER v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  union _LARGE_INTEGER v12; // [rsp+70h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( !*((_BYTE *)a1 + 1936)
    || (*((_DWORD *)a1 + 422) & 0xC0000000) != 0
    || (*((_DWORD *)a1 + 422) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v1 + 168)))) == 0 )
  {
    return (unsigned int)RtlFindMostSignificantBit(*((unsigned int *)a1 + 422));
  }
  MostSignificantBit = RtlFindMostSignificantBit(*((_DWORD *)a1 + 422) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v1 + 168))));
  v4 = ~((1 << (*(_DWORD *)(v1 + 168) + 1)) - 1);
  v5 = KeQueryPerformanceCounter(&v12);
  if ( (v4 & *((_DWORD *)a1 + 423)) != 0 )
  {
    v8 = *((_QWORD *)a1 + 240);
    if ( v8 )
    {
      v9 = v5.QuadPart - v8;
      v10 = *((_QWORD *)a1 + 241);
      if ( v9 < v10 )
      {
        *((_QWORD *)a1 + 240) = 0LL;
        *((_QWORD *)a1 + 241) = v10 - v9;
      }
      else
      {
        VidSchiStopNodeYield((unsigned __int64)a1, v6.QuadPart, v7.QuadPart);
      }
    }
    if ( *((_BYTE *)a1 + 1936) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqxxxx(
          (unsigned int)v4 & *((_DWORD *)a1 + 423),
          v6.QuadPart,
          v7.QuadPart,
          *(_QWORD *)(v1 + 16),
          0,
          *((unsigned __int16 *)a1 + 2),
          (unsigned int)v4 & *((_DWORD *)a1 + 423),
          0LL,
          0LL);
    }
  }
  else if ( !*((_QWORD *)a1 + 240) )
  {
    VidSchiStartNodeYield((__int64)a1, v5.QuadPart, v12.QuadPart);
  }
  return MostSignificantBit;
}
