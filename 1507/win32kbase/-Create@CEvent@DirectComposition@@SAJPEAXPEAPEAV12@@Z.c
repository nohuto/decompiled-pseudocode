/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C001523C
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C003098C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00808C8 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00167E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(HANDLE Handle, struct DirectComposition::CEvent **a2)
{
  DirectComposition::CEvent *v4; // rbx
  unsigned int v5; // edx
  NTSTATUS v6; // edi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(8uLL);
  if ( v4 )
  {
    v6 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    *(_QWORD *)v4 = Object;
    if ( v6 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4, v5);
    else
      *a2 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
