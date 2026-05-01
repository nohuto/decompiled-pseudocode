/*
 * XREFs of RmpActivityHostCompleteInitialization @ 0x1800086F0
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180008598 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18003B994 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x18003BA18 (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

void __fastcall RmpActivityHostCompleteInitialization(struct _RM_ACTIVITY_HOST *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( a2 )
  {
    v3 = *a2;
  }
  else
  {
    v4 = 1LL;
    if ( ((*(_QWORD *)RmSvcGlobals + 1LL) & 0xF000000000000000uLL) == 0 )
      v4 = *(_QWORD *)RmSvcGlobals + 1LL;
    v3 = *(_QWORD *)RmSvcGlobals | 0x1000000000000000LL;
    *(_QWORD *)RmSvcGlobals = v4;
  }
  memset_0(a1, 0, 0x28uLL);
  *((_QWORD *)a1 + 3) = v3;
  *((_DWORD *)a1 + 4) = 1;
  *((_DWORD *)a1 + 8) = 1;
  *((_QWORD *)a1 + 1) = HIBYTE(v3)
                      + 37
                      * (BYTE6(v3)
                       + 37
                       * (BYTE5(v3)
                        + 37
                        * (BYTE4(v3)
                         + 37
                         * (BYTE3(v3) + 37 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883LL)))))));
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 112);
  _InterlockedIncrement((volatile signed __int32 *)a1 + 4);
  RmpActivityHostAddToTables(a1);
}
