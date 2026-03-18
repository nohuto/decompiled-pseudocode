/*
 * XREFs of ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C0121260
 * Callers:
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C0121224 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01CF1DC (xxxNotifyShellWindowBorderEnter.c)
 * Callees:
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall ShellWindowManagementProperty::GetShellWndManagementProperty(
        ShellWindowManagementProperty *this,
        struct tagWND *a2)
{
  __int64 Prop; // rbx
  int v4; // r10d
  PVOID v6; // rax

  Prop = GetProp((__int64)this, (unsigned __int16)gatomShellWindowManagement, 1LL);
  if ( Prop || !v4 )
    return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
  v6 = DesktopAlloc(*((_QWORD *)this + 3), 4u, 1869443925);
  Prop = (__int64)v6;
  if ( v6 )
  {
    if ( (unsigned int)InternalSetProp((__int64)this, (unsigned __int16)gatomShellWindowManagement, (__int64)v6, 9) )
      return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
    DesktopFree(*((_QWORD *)this + 3));
  }
  return 0LL;
}
