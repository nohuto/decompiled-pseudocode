/*
 * XREFs of RmpActivityHostComputeCommitEstimate @ 0x180040CBC
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostGetCommitThresholdsAndLevel @ 0x180019138 (RmpActivityHostGetCommitThresholdsAndLevel.c)
 *     ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370 (-OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitEstimate(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 i; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax

  if ( a2 && a1 )
  {
    v5 = a2 >> 3;
    for ( i = 0LL; i <= a2; i += v5 )
    {
      if ( i > a1 )
        break;
    }
    if ( i >= a2 )
      i = a2;
    v7 = 2 * v5;
    v8 = i;
    if ( v7 < i )
      v8 = v7;
    result = i - v8;
  }
  else
  {
    i = 0LL;
    result = 0LL;
  }
  if ( a4 )
    *a4 = i;
  if ( a3 )
    *a3 = result;
  return result;
}
