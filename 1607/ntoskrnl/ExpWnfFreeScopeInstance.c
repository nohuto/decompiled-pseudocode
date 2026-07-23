/*
 * XREFs of ExpWnfFreeScopeInstance @ 0x1404ADED0
 * Callers:
 *     ExpWnfDeleteScopeById @ 0x14045FF9C (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeleteScopeInstances @ 0x1406BA3A4 (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1404ADF70 (ExpWnfDeleteNameInstanceCallback.c)
 */

void __fastcall ExpWnfFreeScopeInstance(struct _EX_RUNDOWN_REF *a1, char a2)
{
  _QWORD *Count; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  void *Ptr; // rcx
  void *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  if ( a2 )
  {
    ExWaitForRundownProtectionRelease(a1 + 1);
    Count = (_QWORD *)a1[7].Count;
    if ( Count )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *Count )
          {
            v8 = Count;
            Count = (_QWORD *)*Count;
            *v8 = 0LL;
          }
          if ( !Count[1] )
            break;
          v9 = Count;
          Count = (_QWORD *)Count[1];
          v9[1] = 0LL;
        }
        v4 = Count[2];
        ExpWnfDeleteNameInstanceCallback(Count, a1);
        v5 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 )
          break;
        Count = (_QWORD *)v5;
      }
    }
    a1[7].Count = 0LL;
  }
  Ptr = a1[8].Ptr;
  if ( Ptr )
    ZwClose(Ptr);
  v7 = a1[9].Ptr;
  if ( v7 )
    ZwClose(v7);
  ExFreePoolWithTag(a1, 0x20666E57u);
}
