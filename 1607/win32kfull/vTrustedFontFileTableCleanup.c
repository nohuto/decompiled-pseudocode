/*
 * XREFs of vTrustedFontFileTableCleanup @ 0x1C0135BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID vTrustedFontFileTableCleanup()
{
  PVOID result; // rax
  struct _RTL_AVL_TABLE *v1; // rbx
  BOOLEAN i; // dl
  struct _UNICODE_STRING *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _UNICODE_STRING *v6; // rdi

  result = (PVOID)RtlGetCurrentServiceSessionId();
  if ( gSessionId == (_DWORD)result )
  {
    result = gpxsGlobals;
    if ( gpxsGlobals )
    {
      *((_QWORD *)gpxsGlobals + 2) = 0LL;
      result = gpxsGlobals;
      v1 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 3);
      if ( v1 )
      {
        for ( i = 1; ; i = 0 )
        {
          v3 = (struct _UNICODE_STRING *)RtlEnumerateGenericTableAvl(v1, i);
          v6 = v3;
          if ( !v3 )
            break;
          RtlFreeUnicodeString(v3);
          RtlDeleteElementGenericTableAvl(v1, v6);
        }
        Win32FreePool(*((_QWORD *)gpxsGlobals + 3), v4, v5);
        result = gpxsGlobals;
        *((_QWORD *)gpxsGlobals + 3) = 0LL;
      }
    }
  }
  return result;
}
