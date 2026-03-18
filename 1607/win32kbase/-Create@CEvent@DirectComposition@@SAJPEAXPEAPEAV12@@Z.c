/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C007A2B4
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0018FA0 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003DC80 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C007A3E0 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
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
