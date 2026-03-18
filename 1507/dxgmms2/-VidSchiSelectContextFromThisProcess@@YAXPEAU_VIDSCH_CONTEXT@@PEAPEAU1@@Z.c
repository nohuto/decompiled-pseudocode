/*
 * XREFs of ?VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z @ 0x1C00131D4
 * Callers:
 *     VidSchiIsQuantumLeft @ 0x1C0017760 (VidSchiIsQuantumLeft.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSelectContextFromThisProcess(struct _VIDSCH_CONTEXT *a1, struct _VIDSCH_CONTEXT **a2)
{
  _QWORD **v4; // rdi
  int v5; // ebp
  _QWORD *i; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  char v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 24LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL) + 4LL))
                 + 648LL);
  v5 = 0;
  while ( 2 )
  {
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      v7 = i - 51;
      if ( *(i - 39) == *((_QWORD *)a1 + 12) )
      {
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)v7 + 112,
               ((unsigned __int8)*((_DWORD *)v7 + 44) >> 1) & 1,
               3) != 2 )
        {
          *a2 = (struct _VIDSCH_CONTEXT *)v7;
          return;
        }
        v8 = v7[12];
        v9 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          VidSchiResetContextQuantumAtISR,
          i - 51,
          *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL),
          &v9);
      }
    }
    if ( (unsigned int)++v5 < 2 )
      continue;
    break;
  }
  *a2 = a1;
}
