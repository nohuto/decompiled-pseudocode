/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x1800522E4
 * Callers:
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18002AAD0 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x180042420 (RtlRunOnceBeginInitialize.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlStackDbStackRemove @ 0x180101E68 (RtlStackDbStackRemove.c)
 */

NTSTATUS __fastcall RtlpHpPerHeapStackTraceCleanup(PRTL_RUN_ONCE RunOnce)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  _QWORD *v4; // rsi
  _BYTE *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _BYTE *i; // rdx
  unsigned __int64 v9; // r14
  _QWORD *j; // rcx
  PVOID v11; // rbx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // [rsp+28h] [rbp-18h]
  _BYTE *v14; // [rsp+30h] [rbp-10h]
  PVOID Context; // [rsp+78h] [rbp+38h] BYREF

  result = RtlRunOnceBeginInitialize(RunOnce, 0, &Context);
  v3 = result;
  if ( result >= 0 )
  {
    result = RtlRunOnceComplete(RunOnce, 0, 0LL);
    if ( v3 != 259 )
    {
      v4 = Context;
      if ( Context )
      {
        v5 = (_BYTE *)*((_QWORD *)Context + 2);
        v6 = v5;
        v14 = v5;
        v13 = v5;
        while ( 1 )
        {
          if ( !v6 )
            goto LABEL_11;
          if ( (*v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v5 = v14;
            v6 = v13;
          }
          v7 = (_QWORD *)*v6;
          if ( (*v6 & 1) != 0 )
          {
LABEL_11:
            for ( i = v5 + 8; ; i += 8 )
            {
              if ( (unsigned __int64)i >= v4[2] + 8 * ((unsigned __int64)*((unsigned int *)v4 + 3) >> 5) )
              {
                v7 = 0LL;
                goto LABEL_17;
              }
              if ( (*i & 1) == 0 )
                break;
            }
            v6 = *(_QWORD **)i;
            v5 = i;
            v13 = *(_QWORD **)i;
            v7 = *(_QWORD **)i;
            v14 = i;
          }
          else
          {
            v6 = (_QWORD *)*v6;
            v13 = v7;
          }
LABEL_17:
          if ( !v7 )
            break;
          v9 = (unsigned __int64)v6;
          if ( (*v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v5 = v14;
            v6 = v13;
          }
          for ( j = v5; (*j & 1) == 0; j = (_QWORD *)*j )
          {
            if ( (_QWORD *)*j == v6 )
            {
              *j = *v6;
              --*((_DWORD *)v4 + 2);
              *v6 |= 0x8000000000000002uLL;
              v6 = j;
              v13 = j;
              goto LABEL_26;
            }
          }
          v9 = 0LL;
          v5 = v14;
          v6 = v13;
LABEL_26:
          RtlStackDbStackRemove(j, *(_QWORD *)(v9 + 16));
          RtlpHpMetadataFree(v9);
        }
        v11 = Context;
        v12 = *((_QWORD *)Context + 2);
        if ( v12 )
          RtlpHpMetadataFree(v12);
        return RtlpHpMetadataFree((unsigned __int64)v11);
      }
    }
  }
  return result;
}
