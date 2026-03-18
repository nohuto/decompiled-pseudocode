/*
 * XREFs of KiOpPreprocessAccessViolation @ 0x14012692C
 * Callers:
 *     KiPreprocessFault @ 0x1400200B4 (KiPreprocessFault.c)
 * Callees:
 *     <none>
 */

char __fastcall KiOpPreprocessAccessViolation(__int64 a1, __int64 a2)
{
  int v3; // edx
  void *v5; // rax
  void *v6; // rcx
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  void *v9; // r9
  unsigned __int16 SListFaultCount; // dx
  unsigned __int16 v11; // dx

  v3 = *(unsigned __int16 *)(a2 + 56);
  switch ( v3 )
  {
    case 16:
      v5 = &ExpInterlockedPopEntrySListFault;
      v6 = &ExpInterlockedPopEntrySListResume;
      break;
    case 51:
      v5 = (void *)KeUserPopEntrySListFault;
      v6 = (void *)KeUserPopEntrySListResume;
      break;
    case 35:
      v5 = (void *)KeUserPopEntrySListFaultWow64;
      v6 = (void *)KeUserPopEntrySListResumeWow64;
      break;
    default:
      return 0;
  }
  if ( *(void **)(a2 + 248) != v5 )
    return 0;
  if ( (_WORD)v3 != 16 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(void **)(a1 + 40);
    if ( v9 == CurrentThread->SListFaultAddress )
    {
      SListFaultCount = CurrentThread->SListFaultCount;
      if ( SListFaultCount > 0x400u )
      {
        CurrentThread->SListFaultCount = 0;
        return 0;
      }
      v11 = SListFaultCount + 1;
    }
    else
    {
      v11 = 0;
      CurrentThread->SListFaultAddress = v9;
    }
    CurrentThread->SListFaultCount = v11;
  }
  result = 1;
  *(_QWORD *)(a2 + 248) = v6;
  return result;
}
