/*
 * XREFs of InitializeGdiCrossSessionGlobals @ 0x1C0134D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitializeGdiCrossSessionGlobals()
{
  struct _RTL_AVL_TABLE *v1; // rcx
  struct _RTL_AVL_TABLE *v2; // rcx

  if ( gSessionId != (unsigned int)RtlGetCurrentServiceSessionId() )
    return 1LL;
  *(_QWORD *)gpxsGlobals = GreCreateSemaphore();
  if ( *(_QWORD *)gpxsGlobals )
  {
    *((_QWORD *)gpxsGlobals + 1) = Win32AllocPoolNonPaged(104LL, 1717988935LL);
    v1 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 1);
    if ( v1 )
    {
      RtlInitializeGenericTableAvl(
        v1,
        GDINetworkedFontFileNodeCompare,
        GDINetworkedFontFileNodeAlloc,
        GDINetworkedFontFileNodeFree,
        0LL);
      *((_QWORD *)gpxsGlobals + 2) = GreCreateSemaphore();
      if ( *((_QWORD *)gpxsGlobals + 2) )
      {
        *((_QWORD *)gpxsGlobals + 3) = Win32AllocPoolNonPaged(104LL, 1717990471LL);
        v2 = (struct _RTL_AVL_TABLE *)*((_QWORD *)gpxsGlobals + 3);
        if ( v2 )
        {
          RtlInitializeGenericTableAvl(
            v2,
            GDITrustedFontFileCompare,
            GDITrustedFontFileAlloc,
            GDITrustedFontFileFree,
            0LL);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
