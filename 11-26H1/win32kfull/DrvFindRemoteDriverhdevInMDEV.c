/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x140346368
 * Callers:
 *     GetRemoteHDEV @ 0x140291FF4 (GetRemoteHDEV.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140295EA4 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  unsigned int i; // esi
  __int64 v11; // r14
  __int64 v12; // r15
  _DWORD *DisplayDriverNames; // rax
  unsigned int v14; // r10d
  unsigned int j; // edx
  unsigned __int16 *v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rdi
  __int64 result; // rax
  __int64 v22; // rbx
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 1003;
  if ( (unsigned int)UserIsDisconnectConnection(v7, v6) || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v22 = *(_QWORD *)(a1 + 40);
    WdLogSingleEntry1(5LL, v22);
    result = v22;
    WdLogGlobalForLineNumber = 1009;
  }
  else
  {
    v9 = Gre::Base::Globals(v8);
    SEMOBJ<1>::SEMOBJ<1>(&v23, v9);
    for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
    {
      v11 = 56LL * i;
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + a1 + 40) + 2568LL);
      DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v12);
      v5 = DisplayDriverNames;
      if ( DisplayDriverNames )
      {
        v14 = *DisplayDriverNames;
        for ( j = 0; ; ++j )
        {
          if ( j >= v14 )
          {
            Win32FreePool(v5);
            v5 = 0LL;
            goto LABEL_16;
          }
          v16 = (unsigned __int16 *)*((_QWORD *)v5 + 2 * j + 2);
          v17 = a3 - (_QWORD)v16;
          do
          {
            v18 = *(unsigned __int16 *)((char *)v16 + v17);
            v19 = *v16 - v18;
            if ( v19 )
              break;
            ++v16;
          }
          while ( v18 );
          if ( !v19 && (*(_DWORD *)(v12 + 160) & 0x4000004) == 0x4000004 )
            break;
        }
        v20 = *(_QWORD *)(v11 + a1 + 40);
        goto LABEL_19;
      }
LABEL_16:
      ;
    }
    v20 = 0LL;
    if ( !v5 )
      goto LABEL_20;
LABEL_19:
    Win32FreePool(v5);
LABEL_20:
    WdLogSingleEntry1(5LL, v20);
    WdLogGlobalForLineNumber = 1052;
    if ( v23 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v23);
    return v20;
  }
  return result;
}
