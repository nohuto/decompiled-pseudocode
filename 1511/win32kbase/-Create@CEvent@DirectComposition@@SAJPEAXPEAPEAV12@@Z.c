/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C0079AF0
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001DB5C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007B5CC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00D6AC4 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, struct DirectComposition::CEvent **a2)
{
  DirectComposition::CEvent *v4; // rax
  DirectComposition::CEvent *v5; // rdi
  unsigned int v6; // edx
  int v7; // ebx

  v4 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(8uLL);
  v5 = v4;
  if ( v4 )
  {
    v7 = DirectComposition::CEvent::Initialize(v4, a1, 0);
    if ( v7 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v5, v6);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
