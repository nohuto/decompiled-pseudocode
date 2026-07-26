/*
 * XREFs of ndisQueryWakeUpPatternList @ 0x1C004AAD0
 * Callers:
 *     ndisOidPrePMWOLPatternList @ 0x1C00C9090 (ndisOidPrePMWOLPatternList.c)
 *     ndisOidPreWakeUpPatternList @ 0x1C00C9590 (ndisOidPreWakeUpPatternList.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     ndisGetWakeUpPatternSize @ 0x1C0049140 (ndisGetWakeUpPatternSize.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // r15
  KIRQL v7; // al
  unsigned int *v8; // r14
  unsigned int *i; // r9
  int WakeUpPatternSize; // eax
  unsigned int **v11; // r9
  unsigned int v12; // r12d
  char *v13; // r13
  int v14; // r15d
  size_t v15; // rdi
  KIRQL NewIrql; // [rsp+78h] [rbp+10h]
  int v19; // [rsp+80h] [rbp+18h]

  v3 = 0;
  v19 = 0;
  v5 = a2;
  v6 = a1;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(0x2Eu, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, a2, a1, a3);
  if ( !v5 )
    v5 = *(_QWORD *)(v6 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  NewIrql = v7;
  *(_DWORD *)(v5 + 1856) = 2755341;
  if ( v6 )
    v8 = *(unsigned int **)(v6 + 496);
  else
    v8 = *(unsigned int **)(v5 + 960);
  for ( i = v8; i; v3 += WakeUpPatternSize )
  {
    WakeUpPatternSize = ndisGetWakeUpPatternSize(i + 12);
    i = *v11;
  }
  v12 = 0;
  if ( *(_DWORD *)(a3 + 48) >= v3 )
  {
    v13 = *(char **)(a3 + 40);
    if ( v8 )
    {
      v14 = 0;
      do
      {
        v15 = (unsigned int)ndisGetWakeUpPatternSize(v8 + 12);
        memmove(v13, v8 + 12, v15);
        v8 = *(unsigned int **)v8;
        v13 += v15;
        v14 += v15;
      }
      while ( v8 );
      v19 = v14;
      v6 = a1;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 56) = v3;
    v12 = -1073676268;
  }
  *(_DWORD *)(a3 + 52) = v19;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), NewIrql);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqqL(0x2Fu, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v5, v6, a3, v12);
  return v12;
}
