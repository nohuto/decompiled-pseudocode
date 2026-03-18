/*
 * XREFs of RemoveThreadSwitchWindowInfo @ 0x1C00EE760
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01FF9DC (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
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
