/*
 * XREFs of CiTaskAllocate @ 0x1C000D910
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000D640 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00045BC (WPP_SF_d.c)
 *     CiTaskLocate @ 0x1C000A810 (CiTaskLocate.c)
 */

__int64 __fastcall CiTaskAllocate(wchar_t *P, _OWORD *a2, _QWORD *a3)
{
  char *PoolWithTag; // rax
  char *v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  if ( (int)CiTaskLocate(P, &v14) >= 0 )
  {
    v13 = -1073741771;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727641u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = a2[1];
      *(_OWORD *)PoolWithTag = *a2;
      v9 = a2[2];
      *((_OWORD *)PoolWithTag + 1) = v8;
      *((_OWORD *)PoolWithTag + 2) = v9;
      *((_QWORD *)PoolWithTag + 3) = P;
      v10 = (struct _LIST_ENTRY *)(PoolWithTag + 8);
      Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink->Flink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
        __fastfail(3u);
      v10->Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
      v10->Blink = Blink;
      Blink->Flink = v10;
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v10;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    v13 = -1073741801;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids,
      v13);
  ExFreePoolWithTag(P, 0);
  return v13;
}
