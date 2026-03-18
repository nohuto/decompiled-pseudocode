/*
 * XREFs of ExpCheckForWorker @ 0x140264D7C
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // r8
  unsigned __int16 i; // si
  __int64 v6; // rcx
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v8; // rbp
  volatile signed __int32 **v9; // r14
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v12; // edi
  int v13; // ecx
  volatile signed __int32 **v14; // rdx
  volatile signed __int32 *j; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h]

  result = (__int64)&retaddr;
  v17 = a2;
  v3 = KeNumberNodes;
  for ( i = 0; i < v3; ++i )
  {
    v6 = KeNodeBlock[i];
    result = (__int64)&KiNodeInit + 256 * (unsigned __int64)i;
    if ( v6 != result && v6 )
    {
      result = *(unsigned int *)(v6 + 1308);
      if ( (result & 2) != 0 )
      {
        BugCheckParameter4 = BugCheckParameter3 + a2;
        v8 = 0LL;
        v9 = (volatile signed __int32 **)(v6 + 256);
        do
        {
          v10 = *v9;
          if ( ((unsigned __int8)*v9 & 1) == 0 && v10 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v12 = 0;
            if ( _interlockedbittestandset(v10, 7u) )
            {
              do
              {
                if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v12);
              }
              while ( (*v10 & 0x80u) != 0 || _interlockedbittestandset(v10, 7u) );
            }
            v13 = 0;
            v14 = (volatile signed __int32 **)(v10 + 6);
            do
            {
              for ( j = *v14; j != &v10[4 * v13 + 6]; j = *(volatile signed __int32 **)j )
              {
                if ( (unsigned __int64)j >= BugCheckParameter3 && (unsigned __int64)j < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)j, BugCheckParameter3, BugCheckParameter4);
              }
              ++v13;
              v14 += 2;
            }
            while ( v13 < 32 );
            _InterlockedAnd(v10, 0xFFFFFF7F);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
          ++v8;
          ++v9;
        }
        while ( v8 < 8 );
        a2 = v17;
      }
      v3 = KeNumberNodes;
    }
  }
  return result;
}
