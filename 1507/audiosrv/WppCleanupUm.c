/*
 * XREFs of WppCleanupUm @ 0x18009D4FC
 * Callers:
 *     DllMain @ 0x18006B014 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 WppCleanupUm()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = *(_QWORD **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
  {
    while ( v0 )
    {
      v1 = v0[1];
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        v0[1] = 0LL;
      }
      v0 = (_QWORD *)*v0;
    }
    *(_QWORD *)&WPP_GLOBAL_Control.Data1 = &WPP_GLOBAL_Control;
  }
  return result;
}
