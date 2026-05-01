/*
 * XREFs of RmpObjectTableFindObjectByHandleWithLock @ 0x180016640
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800162B0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800167D0 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     RmpObjectTableFindObjectByHandle @ 0x180017FB4 (RmpObjectTableFindObjectByHandle.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpObjectTableFindObjectByHandleWithLock(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // r10
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-D8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0LL;
  v6 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v7 = v6 & (a2[7]
           + 37
           * (a2[6] + 37 * (a2[5] + 37 * (a2[4] + 37 * (a2[3] + 37 * (a2[2] + 37 * (a2[1] + 37 * (*a2 + 11623883LL))))))));
LABEL_2:
  if ( v4 )
    goto LABEL_5;
  if ( v3 >> 5 )
  {
    v4 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v7)) & ((v3 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v7 == (v6 & *(_QWORD *)(v4 + 8)) )
      {
        if ( *(_QWORD *)a2 != *(_QWORD *)(v4 + 24) )
          goto LABEL_2;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 16)) < 1 )
        {
          memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
          pExceptionRecord.ExceptionCode = -1073741675;
          pExceptionRecord.ExceptionFlags = 1;
          RaiseFailFastException(&pExceptionRecord, 0LL, 0);
        }
        *a3 = v4;
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
