/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x14029CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // r8
  char v6; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  v3 = IsCurrentProcessDwm(v0);
  if ( !v6 )
    UserSessionSwitchLeaveCritWithNonPaged(v2, v1, v4);
  return v3;
}
