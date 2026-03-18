/*
 * XREFs of RemoveThreadSwitchWindowInfo @ 0x1C0114100
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F75E8 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *RemoveThreadSwitchWindowInfo()
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo *v1; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = gpswiFirst;
    if ( !gpswiFirst )
      break;
    v1 = gpswiFirst;
    gpswiFirst = *(struct tagSwitchWndInfo **)gpswiFirst;
    SwitchWndCleanup(&v1);
  }
  return result;
}
