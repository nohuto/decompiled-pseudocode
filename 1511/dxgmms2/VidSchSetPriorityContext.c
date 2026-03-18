/*
 * XREFs of VidSchSetPriorityContext @ 0x1C003AD60
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C000F9D0 (VidSchiCreateContextInternal.c)
 *     VidSchSyncPriorityDevice @ 0x1C003AD20 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     VidSchiSetPriorityContext @ 0x1C0010018 (VidSchiSetPriorityContext.c)
 *     VidSchiComputePriority @ 0x1C003ADE4 (VidSchiComputePriority.c)
 */

__int64 __fastcall VidSchSetPriorityContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v6; // rdi
  int v7; // edi
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return v10;
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(v6 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 0) )
  {
    v11 = WdLogNewEntry5_WdWarning(a1);
    v10 = -1071775232;
    *(_QWORD *)(v11 + 24) = v6;
    *(_QWORD *)(v11 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v11);
    return v10;
  }
  v7 = VidSchiComputePriority(a1, a2, a3, a4, (__int64)&v12);
  if ( v7 >= 0 )
  {
    VidSchiSetPriorityContext(a1, v12);
    *(_DWORD *)(a1 + 388) = v4;
  }
  return (unsigned int)v7;
}
