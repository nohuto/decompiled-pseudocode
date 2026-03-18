/*
 * XREFs of ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000F444
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetPriorityContext @ 0x1C0010018 (VidSchiSetPriorityContext.c)
 * Callees:
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     Template_pqxq @ 0x1C0020638 (Template_pqxq.c)
 */

void __fastcall VidSchiStopExecutionTimeAtThisPriority(
        struct _VIDSCH_NODE *a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdi
  ULONGLONG *v8; // rbx
  ULONGLONG v9; // r9
  ULONGLONG v10; // r9
  unsigned __int64 v11; // r9
  ULONGLONG v12; // rdx
  ULONGLONG v13; // r8
  ULONGLONG pullResult[3]; // [rsp+40h] [rbp-18h] BYREF

  v7 = gulPriorityToYieldPriorityBand[a2];
  if ( (_DWORD)v7 )
  {
    v8 = (ULONGLONG *)((char *)a1 + 8 * v7 + 1848);
    do
    {
      if ( *(v8 - 8) )
      {
        v9 = *v8 - *(v8 - 4);
        *(v8 - 4) = 0LL;
        v10 = a3 + v9;
        *v8 = v10;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          if ( RtlULongLongMult(v10, 0x989680uLL, pullResult) >= 0 )
          {
            v12 = pullResult[0] % a4;
            v13 = pullResult[0] / a4;
          }
          else
          {
            v12 = 10000000 * (v11 % a4) % a4;
            v13 = 10000000 * (v11 / a4) + 10000000 * (v11 % a4) / a4;
          }
          Template_pqxq(
            *((unsigned __int16 *)a1 + 2),
            v12,
            v13,
            *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL),
            v7,
            v13,
            *((_WORD *)a1 + 2));
        }
      }
      --v8;
      LODWORD(v7) = v7 - 1;
    }
    while ( (_DWORD)v7 );
  }
}
