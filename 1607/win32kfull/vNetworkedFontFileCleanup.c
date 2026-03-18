/*
 * XREFs of vNetworkedFontFileCleanup @ 0x1C0135C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID vNetworkedFontFileCleanup()
{
  PVOID result; // rax
  struct _RTL_AVL_TABLE *v1; // rbx
  BOOLEAN i; // dl
  HANDLE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  HANDLE *v6; // rdi

  result = (PVOID)RtlGetCurrentServiceSessionId();
  if ( gSessionId == (_DWORD)result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *(_QWORD *)gpxsGlobals = 0LL;
      result = gpxsGlobals;
      v1 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 1);
      if ( v1 )
      {
        for ( i = 1; ; i = 0 )
        {
          v3 = (HANDLE *)RtlEnumerateGenericTableAvl(v1, i);
          v6 = v3;
          if ( !v3 )
            break;
          ZwClose(*v3);
          RtlDeleteElementGenericTableAvl(v1, v6);
        }
        Win32FreePool(*((_QWORD *)gpxsGlobals + 1), v4, v5);
        result = gpxsGlobals;
        *((_QWORD *)gpxsGlobals + 1) = 0LL;
      }
    }
  }
  return result;
}
