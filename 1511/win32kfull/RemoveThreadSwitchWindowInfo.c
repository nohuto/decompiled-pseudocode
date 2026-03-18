/*
 * XREFs of RemoveThreadSwitchWindowInfo @ 0x1C00F3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C020008C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveThreadSwitchWindowInfo(__int64 a1)
{
  struct tagSwitchWndInfo **v1; // rbx
  struct tagSwitchWndInfo *v3; // rax
  struct tagSwitchWndInfo *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = &gpswiFirst;
  if ( gpswiFirst )
  {
    do
    {
      v3 = *v1;
      v4 = v3;
      if ( *((_QWORD *)v3 + 1) == a1 )
      {
        *v1 = *(struct tagSwitchWndInfo **)v3;
        SwitchWndCleanup(&v4);
      }
      v1 = (struct tagSwitchWndInfo **)*v1;
    }
    while ( v1 && *v1 );
  }
}
