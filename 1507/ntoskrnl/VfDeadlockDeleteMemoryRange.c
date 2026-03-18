/*
 * XREFs of VfDeadlockDeleteMemoryRange @ 0x14074F604
 * Callers:
 *     VfFreeMemoryNotification @ 0x140737404 (VfFreeMemoryNotification.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14025B3F8 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x14025B4A0 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14025B4B0 (ViRaiseIrqlToDpcLevel.c)
 *     VfUtilAddressRangeFit @ 0x1407376F8 (VfUtilAddressRangeFit.c)
 *     ViDeadlockCanProceed @ 0x1407507C0 (ViDeadlockCanProceed.c)
 *     ViDeadlockDatabaseHashIndex @ 0x140750BC4 (ViDeadlockDatabaseHashIndex.c)
 *     ViDeadlockDetectionLock @ 0x140750C40 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140750D24 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14075101C (ViDeadlockFree.c)
 *     ViDeadlockRemoveResource @ 0x1407514D0 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14075166C (ViDeadlockRemoveThread.c)
 */

__int64 __fastcall VfDeadlockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rdi
  unsigned int v10; // ebp
  _QWORD **v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  _QWORD *v18; // rbx
  unsigned __int64 *v19; // rdi
  unsigned int v20; // ebp
  _QWORD **v21; // r15
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 *v26; // rsi
  unsigned __int64 *v27; // rbx
  bool v28; // zf
  unsigned __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned __int8 v32; // [rsp+90h] [rbp+18h]
  unsigned __int8 v33; // [rsp+90h] [rbp+18h]
  unsigned __int64 v34; // [rsp+98h] [rbp+20h]

  result = ViDeadlockCanProceed(0LL, 0LL);
  if ( (_DWORD)result )
  {
    result = a1 & 0xFFF;
    v5 = a1 + a2;
    v34 = a1 + a2;
    v6 = (unsigned __int64)(result + a2 + 4095) >> 12;
    v7 = a1;
    if ( (_DWORD)v6 )
    {
      v31 = (unsigned int)v6;
      do
      {
        v8 = v7 + 4096;
        if ( v7 + 4096 > v5 )
          v8 = v5;
        v29 = v8;
        v9 = 0LL;
        v30 = ViDeadlockDatabaseHashIndex(v7);
        v10 = 0;
        v32 = ViRaiseIrqlToDpcLevel();
LABEL_7:
        ViDeadlockDetectionLock(v10);
        v11 = (_QWORD **)(16 * v30 + *((_QWORD *)ViDeadlockGlobals + 2));
        v12 = *v11;
        if ( *v11 != v11
          && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v30 + 4, v7, v8) )
        {
          while ( v12 != v11 )
          {
            v16 = v12 - 5;
            v12 = (_QWORD *)*v12;
            v17 = v16[1];
            if ( v17 >= a1 && v17 < v34 )
            {
              if ( !v10 )
              {
                v10 = 1;
                if ( !(unsigned int)ViDeadlockDetectionTryConvertSharedToExclusive(v34, v13, v14, v15) )
                {
                  ViDeadlockDetectionUnlock(0LL);
                  v8 = v29;
                  goto LABEL_7;
                }
              }
              ViDeadlockRemoveResource((ULONG_PTR)v16);
              *v16 = v9;
              v9 = v16;
            }
          }
          v8 = v29;
        }
        ViDeadlockDetectionUnlock(v10);
        ViLowerIrql(v32);
        if ( v9 )
        {
          do
          {
            v18 = (_QWORD *)*v9;
            ViDeadlockFree(v9);
            v9 = v18;
          }
          while ( v18 );
        }
        v19 = 0LL;
        v20 = 0;
        v33 = ViRaiseIrqlToDpcLevel();
LABEL_20:
        ViDeadlockDetectionLock(v20);
        v21 = (_QWORD **)(16 * v30 + *((_QWORD *)ViDeadlockGlobals + 2050));
        v22 = *v21;
        if ( *v21 != v21
          && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v30 + 2052, v7, v8) )
        {
          while ( v22 != v21 )
          {
            v26 = v22 - 3;
            v22 = (_QWORD *)*v22;
            if ( *v26 >= a1 && *v26 < v34 )
            {
              if ( !v20 )
              {
                v20 = 1;
                if ( !(unsigned int)ViDeadlockDetectionTryConvertSharedToExclusive(v34, v23, v24, v25) )
                {
                  ViDeadlockDetectionUnlock(0LL);
                  v8 = v29;
                  goto LABEL_20;
                }
              }
              ViDeadlockRemoveThread((ULONG_PTR)v26);
              *v26 = (unsigned __int64)v19;
              v19 = v26;
            }
          }
        }
        ViDeadlockDetectionUnlock(v20);
        result = ViLowerIrql(v33);
        if ( v19 )
        {
          do
          {
            v27 = (unsigned __int64 *)*v19;
            result = ViDeadlockFree(v19);
            v19 = v27;
          }
          while ( v27 );
        }
        v28 = v31-- == 1;
        v7 = v29;
        v5 = v34;
      }
      while ( !v28 );
    }
  }
  return result;
}
