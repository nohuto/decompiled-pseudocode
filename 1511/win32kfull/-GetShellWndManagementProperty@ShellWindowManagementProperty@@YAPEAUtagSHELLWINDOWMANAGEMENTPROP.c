/*
 * XREFs of ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00C7350
 * Callers:
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01D8164 (xxxNotifyShellWindowBorderEnter.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall ShellWindowManagementProperty::GetShellWndManagementProperty(
        ShellWindowManagementProperty *this,
        struct tagWND *a2)
{
  void *Prop; // rbx
  int v4; // r10d
  PVOID v6; // rax

  Prop = (void *)GetProp((__int64)this, (unsigned __int16)gatomShellWindowManagement, 1LL);
  if ( Prop || !v4 )
    return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
  v6 = DesktopAlloc(*((_QWORD *)this + 3), 4u);
  Prop = v6;
  if ( v6 )
  {
    if ( (unsigned int)InternalSetProp((__int64)this, (unsigned __int16)gatomShellWindowManagement, (__int64)v6, 9) )
      return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 120LL), 0, Prop);
  }
  return 0LL;
}
